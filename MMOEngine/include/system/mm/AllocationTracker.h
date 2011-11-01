/*
Copyright (C) 2007 <SWGEmu>. All rights reserved.
Distribution of this file for usage outside of Core3 is prohibited.
*/

#ifndef ALLOCATIONTRACKER_H_
#define ALLOCATIONTRACKER_H_

#include "system/lang/Time.h"

#include "system/thread/Mutex.h"
#include "system/thread/Locker.h"

#include "system/util/VectorSet.h"

#include "Allocator.h"
#include "AllocationHook.h"

#include "Heap.h"

#define MM_ALLOCATOR_LIST_SIZE 4096

namespace sys {
  namespace mm {

	class AllocationTracker : public AllocationHook {
		static AllocationTracker* instance;

		Allocator* allocator;

		struct MM_Allocator
		{
			unsigned long caller;
			long          total;
		};

		unsigned int numOfAllocatorsM ;

		MM_Allocator allocatorsM[MM_ALLOCATOR_LIST_SIZE];

		Heap heap;

		uint64 protectedPages[5000];
		int protectedPagesCount;

		Time nextAllocatorPrint;

		AllocationTracker();

		~AllocationTracker();

	public:
		static AllocationTracker* getInstance() {
			if (instance == NULL) {
				instance = new AllocationTracker();
			}

			return instance;
		}

		bool isProtected(uintptr_t page) {
			for (int i = 0; i < protectedPagesCount; ++i) {
				if (protectedPages[i] == page)
					return true;
			}

			return false;
		}

		void* onAllocate(size_t size, const void* allocator);
		void onFree(void* ptr, const void*);
		void* onReallocate(void* ptr, size_t size, const void* alloc);

		void setAllocator(Allocator* alloc) {
			allocator = alloc;
		}

	protected:
		void updateAllocatorList(unsigned long allocator, long size);

		void print();

		void addOverWriteProtector(void* ptr, size_t size);
	};

  } // namespace mm
} // namespace sys

using namespace sys::mm;

#endif /* ALLOCATIONTRACKER_H_ */

/*
 *	engine/core/ManagedObject.h generated by engine3 IDL compiler 0.60
 */

#ifndef MANAGEDOBJECT_H_
#define MANAGEDOBJECT_H_

#include "engine/orb/DistributedObjectBroker.h"

#include "engine/core/ManagedReference.h"

#include "system/io/Serializable.h"

#include "system/io/ObjectInputStream.h"

#include "system/io/ObjectOutputStream.h"

namespace engine {
namespace core {

class ManagedObject : public DistributedObjectStub {
public:
	void lock(bool doLock);

	void lock(ManagedObject* obj);

	void wlock(bool doLock);

	void wlock(ManagedObject* obj);

	void unlock(bool doLock);

	void setLockName(const String& name);

	void serialize(String& data);

	void serialize(ObjectOutputStream* stream);

	void deSerialize(const String& data);

	void deSerialize(ObjectInputStream* stream);

protected:
	ManagedObject(DummyConstructorParameter* param);

	virtual ~ManagedObject();

	void _lock(bool doLock);

	void _lock(ManagedObject* obj);

	void _wlock(bool doLock);

	void _wlock(ManagedObject* obj);

	void _unlock(bool doLock);

	void _setLockName(const String& name);

	friend class ManagedObjectHelper;
};

class ManagedObjectImplementation : public DistributedObjectServant, public Serializable {

public:
	ManagedObjectImplementation();
	void lock(bool doLock);

	void lock(ManagedObject* obj);

	void wlock(bool doLock);

	void wlock(ManagedObject* obj);

	void unlock(bool doLock);

	void setLockName(const String& name);

	virtual void serialize(String& data);

	virtual void serialize(ObjectOutputStream* stream);

	virtual void deSerialize(const String& data);

	virtual void deSerialize(ObjectInputStream* stream);

	ManagedObject* _this;

	operator const ManagedObject*();

	DistributedObjectStub* _getStub();
protected:
	virtual ~ManagedObjectImplementation();

	void _setStub(DistributedObjectStub* stub);

	void _serializationHelperMethod();

	friend class ManagedObject;
};

class ManagedObjectAdapter : public DistributedObjectAdapter {
public:
	ManagedObjectAdapter(ManagedObjectImplementation* impl);

	Packet* invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void lock(bool doLock);

	void lock(ManagedObject* obj);

	void wlock(bool doLock);

	void wlock(ManagedObject* obj);

	void unlock(bool doLock);

	void setLockName(const String& name);

	void serialize(String& data);

	void deSerialize(const String& data);

protected:
	String _param0_setLockName__String_;
	String _param0_serialize__String_;
	String _param0_deSerialize__String_;
};

class ManagedObjectHelper : public DistributedObjectClassHelper, public Singleton<ManagedObjectHelper> {
	static ManagedObjectHelper* staticInitializer;

public:
	ManagedObjectHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<ManagedObjectHelper>;
};

} // namespace core
} // namespace engine

using namespace engine::core;

#endif /*MANAGEDOBJECT_H_*/

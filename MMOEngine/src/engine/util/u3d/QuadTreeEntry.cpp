/*
 *	engine/util/u3d/QuadTreeEntry.cpp generated by engine3 IDL compiler 0.60
 */

#include "QuadTreeEntry.h"

/*
 *	QuadTreeEntryStub
 */

enum {RPC_ADDINRANGEOBJECT__QUADTREEENTRY_BOOL_ = 6,RPC_REMOVEINRANGEOBJECT__QUADTREEENTRY_,RPC_REMOVEINRANGEOBJECT__INT_,RPC_REMOVEINRANGEOBJECTS__,RPC_ISINRANGE__QUADTREEENTRY_FLOAT_,RPC_ISINRANGE__FLOAT_FLOAT_FLOAT_,RPC_GETDISTANCETO__QUADTREEENTRY_,RPC_GETPARENT__,RPC_GETPARENTUNSAFE__,RPC_GETROOTPARENTUNSAFE__,RPC_CONTAINSPOINT__FLOAT_FLOAT_,RPC_GETROOTPARENT__,RPC_NOTIFYINSERT__QUADTREEENTRY_,RPC_NOTIFYPOSITIONUPDATE__QUADTREEENTRY_,RPC_NOTIFYDISSAPEAR__QUADTREEENTRY_,RPC_GETPOSITIONX__,RPC_GETPOSITIONZ__,RPC_GETPOSITIONY__,RPC_GETPREVIOUSPOSITIONX__,RPC_GETPREVIOUSPOSITIONZ__,RPC_GETPREVIOUSPOSITIONY__,RPC_SETPOSITION__FLOAT_FLOAT_FLOAT_,RPC_INITIALIZEPOSITION__FLOAT_FLOAT_FLOAT_,RPC_COMPARETO__QUADTREEENTRY_,RPC_ISINQUADTREE__,RPC_GETDIRTYOBJECTID__,RPC_GETOBJECTID__,RPC_GETRADIUS__,RPC_ISBOUNDING__,RPC_SETBOUNDING__,RPC_SETRADIUS__FLOAT_,RPC_CLEARBOUNDING__,RPC_SETPARENT__QUADTREEENTRY_};

QuadTreeEntry::QuadTreeEntry(QuadTreeNode* n) : Observable(DummyConstructorParameter::instance()) {
	QuadTreeEntryImplementation* _implementation = new QuadTreeEntryImplementation(n);
	_impl = _implementation;
	_impl->_setStub(this);
	_setClassName("QuadTreeEntry");
}

QuadTreeEntry::QuadTreeEntry(DummyConstructorParameter* param) : Observable(param) {
	_setClassName("QuadTreeEntry");
}

QuadTreeEntry::~QuadTreeEntry() {
}



void QuadTreeEntry::addInRangeObject(QuadTreeEntry* obj, bool doNotifyUpdate) {
	QuadTreeEntryImplementation* _implementation = static_cast<QuadTreeEntryImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ADDINRANGEOBJECT__QUADTREEENTRY_BOOL_);
		method.addObjectParameter(obj);
		method.addBooleanParameter(doNotifyUpdate);

		method.executeWithVoidReturn();
	} else
		_implementation->addInRangeObject(obj, doNotifyUpdate);
}

void QuadTreeEntry::removeInRangeObject(QuadTreeEntry* obj) {
	QuadTreeEntryImplementation* _implementation = static_cast<QuadTreeEntryImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_REMOVEINRANGEOBJECT__QUADTREEENTRY_);
		method.addObjectParameter(obj);

		method.executeWithVoidReturn();
	} else
		_implementation->removeInRangeObject(obj);
}

void QuadTreeEntry::removeInRangeObject(int index) {
	QuadTreeEntryImplementation* _implementation = static_cast<QuadTreeEntryImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_REMOVEINRANGEOBJECT__INT_);
		method.addSignedIntParameter(index);

		method.executeWithVoidReturn();
	} else
		_implementation->removeInRangeObject(index);
}

void QuadTreeEntry::removeInRangeObjects() {
	QuadTreeEntryImplementation* _implementation = static_cast<QuadTreeEntryImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_REMOVEINRANGEOBJECTS__);

		method.executeWithVoidReturn();
	} else
		_implementation->removeInRangeObjects();
}

bool QuadTreeEntry::isInRange(QuadTreeEntry* obj, float range) {
	QuadTreeEntryImplementation* _implementation = static_cast<QuadTreeEntryImplementation*>(_getImplementationForRead());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ISINRANGE__QUADTREEENTRY_FLOAT_);
		method.addObjectParameter(obj);
		method.addFloatParameter(range);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->isInRange(obj, range);
}

bool QuadTreeEntry::isInRange(float x, float y, float range) {
	QuadTreeEntryImplementation* _implementation = static_cast<QuadTreeEntryImplementation*>(_getImplementationForRead());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ISINRANGE__FLOAT_FLOAT_FLOAT_);
		method.addFloatParameter(x);
		method.addFloatParameter(y);
		method.addFloatParameter(range);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->isInRange(x, y, range);
}

float QuadTreeEntry::getDistanceTo(QuadTreeEntry* obj) {
	QuadTreeEntryImplementation* _implementation = static_cast<QuadTreeEntryImplementation*>(_getImplementationForRead());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETDISTANCETO__QUADTREEENTRY_);
		method.addObjectParameter(obj);

		return method.executeWithFloatReturn();
	} else
		return _implementation->getDistanceTo(obj);
}

SortedVector<ManagedReference<QuadTreeEntry* > >* QuadTreeEntry::getCloseObjects() {
	QuadTreeEntryImplementation* _implementation = static_cast<QuadTreeEntryImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		return _implementation->getCloseObjects();
}

ManagedWeakReference<QuadTreeEntry* > QuadTreeEntry::getParent() {
	QuadTreeEntryImplementation* _implementation = static_cast<QuadTreeEntryImplementation*>(_getImplementationForRead());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETPARENT__);

		return static_cast<QuadTreeEntry*>(method.executeWithObjectReturn());
	} else
		return _implementation->getParent();
}

QuadTreeEntry* QuadTreeEntry::getParentUnsafe() {
	QuadTreeEntryImplementation* _implementation = static_cast<QuadTreeEntryImplementation*>(_getImplementationForRead());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETPARENTUNSAFE__);

		return static_cast<QuadTreeEntry*>(method.executeWithObjectReturn());
	} else
		return _implementation->getParentUnsafe();
}

QuadTreeEntry* QuadTreeEntry::getRootParentUnsafe() {
	QuadTreeEntryImplementation* _implementation = static_cast<QuadTreeEntryImplementation*>(_getImplementationForRead());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETROOTPARENTUNSAFE__);

		return static_cast<QuadTreeEntry*>(method.executeWithObjectReturn());
	} else
		return _implementation->getRootParentUnsafe();
}

bool QuadTreeEntry::containsPoint(float x, float y) {
	QuadTreeEntryImplementation* _implementation = static_cast<QuadTreeEntryImplementation*>(_getImplementationForRead());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_CONTAINSPOINT__FLOAT_FLOAT_);
		method.addFloatParameter(x);
		method.addFloatParameter(y);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->containsPoint(x, y);
}

ManagedWeakReference<QuadTreeEntry* > QuadTreeEntry::getRootParent() {
	QuadTreeEntryImplementation* _implementation = static_cast<QuadTreeEntryImplementation*>(_getImplementationForRead());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETROOTPARENT__);

		return static_cast<QuadTreeEntry*>(method.executeWithObjectReturn());
	} else
		return _implementation->getRootParent();
}

bool QuadTreeEntry::isInSWArea(QuadTreeNode* node) const {
	QuadTreeEntryImplementation* _implementation = static_cast<QuadTreeEntryImplementation*>(_getImplementationForRead());
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		return _implementation->isInSWArea(node);
}

bool QuadTreeEntry::isInSEArea(QuadTreeNode* node) const {
	QuadTreeEntryImplementation* _implementation = static_cast<QuadTreeEntryImplementation*>(_getImplementationForRead());
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		return _implementation->isInSEArea(node);
}

bool QuadTreeEntry::isInNWArea(QuadTreeNode* node) const {
	QuadTreeEntryImplementation* _implementation = static_cast<QuadTreeEntryImplementation*>(_getImplementationForRead());
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		return _implementation->isInNWArea(node);
}

bool QuadTreeEntry::isInArea(QuadTreeNode* node) const {
	QuadTreeEntryImplementation* _implementation = static_cast<QuadTreeEntryImplementation*>(_getImplementationForRead());
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		return _implementation->isInArea(node);
}

void QuadTreeEntry::notifyInsert(QuadTreeEntry* obj) {
	QuadTreeEntryImplementation* _implementation = static_cast<QuadTreeEntryImplementation*>(_getImplementationForRead());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_NOTIFYINSERT__QUADTREEENTRY_);
		method.addObjectParameter(obj);

		method.executeWithVoidReturn();
	} else
		_implementation->notifyInsert(obj);
}

void QuadTreeEntry::notifyPositionUpdate(QuadTreeEntry* obj) {
	QuadTreeEntryImplementation* _implementation = static_cast<QuadTreeEntryImplementation*>(_getImplementationForRead());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_NOTIFYPOSITIONUPDATE__QUADTREEENTRY_);
		method.addObjectParameter(obj);

		method.executeWithVoidReturn();
	} else
		_implementation->notifyPositionUpdate(obj);
}

void QuadTreeEntry::notifyDissapear(QuadTreeEntry* obj) {
	QuadTreeEntryImplementation* _implementation = static_cast<QuadTreeEntryImplementation*>(_getImplementationForRead());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_NOTIFYDISSAPEAR__QUADTREEENTRY_);
		method.addObjectParameter(obj);

		method.executeWithVoidReturn();
	} else
		_implementation->notifyDissapear(obj);
}

float QuadTreeEntry::getPositionX() const {
	QuadTreeEntryImplementation* _implementation = static_cast<QuadTreeEntryImplementation*>(_getImplementationForRead());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETPOSITIONX__);

		return method.executeWithFloatReturn();
	} else
		return _implementation->getPositionX();
}

float QuadTreeEntry::getPositionZ() const {
	QuadTreeEntryImplementation* _implementation = static_cast<QuadTreeEntryImplementation*>(_getImplementationForRead());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETPOSITIONZ__);

		return method.executeWithFloatReturn();
	} else
		return _implementation->getPositionZ();
}

float QuadTreeEntry::getPositionY() const {
	QuadTreeEntryImplementation* _implementation = static_cast<QuadTreeEntryImplementation*>(_getImplementationForRead());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETPOSITIONY__);

		return method.executeWithFloatReturn();
	} else
		return _implementation->getPositionY();
}

float QuadTreeEntry::getPreviousPositionX() const {
	QuadTreeEntryImplementation* _implementation = static_cast<QuadTreeEntryImplementation*>(_getImplementationForRead());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETPREVIOUSPOSITIONX__);

		return method.executeWithFloatReturn();
	} else
		return _implementation->getPreviousPositionX();
}

float QuadTreeEntry::getPreviousPositionZ() const {
	QuadTreeEntryImplementation* _implementation = static_cast<QuadTreeEntryImplementation*>(_getImplementationForRead());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETPREVIOUSPOSITIONZ__);

		return method.executeWithFloatReturn();
	} else
		return _implementation->getPreviousPositionZ();
}

float QuadTreeEntry::getPreviousPositionY() const {
	QuadTreeEntryImplementation* _implementation = static_cast<QuadTreeEntryImplementation*>(_getImplementationForRead());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETPREVIOUSPOSITIONY__);

		return method.executeWithFloatReturn();
	} else
		return _implementation->getPreviousPositionY();
}

Vector3 QuadTreeEntry::getPosition() const {
	QuadTreeEntryImplementation* _implementation = static_cast<QuadTreeEntryImplementation*>(_getImplementationForRead());
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		return _implementation->getPosition();
}

void QuadTreeEntry::setPosition(float x, float z, float y) {
	QuadTreeEntryImplementation* _implementation = static_cast<QuadTreeEntryImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETPOSITION__FLOAT_FLOAT_FLOAT_);
		method.addFloatParameter(x);
		method.addFloatParameter(z);
		method.addFloatParameter(y);

		method.executeWithVoidReturn();
	} else
		_implementation->setPosition(x, z, y);
}

void QuadTreeEntry::initializePosition(float x, float z, float y) {
	QuadTreeEntryImplementation* _implementation = static_cast<QuadTreeEntryImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_INITIALIZEPOSITION__FLOAT_FLOAT_FLOAT_);
		method.addFloatParameter(x);
		method.addFloatParameter(z);
		method.addFloatParameter(y);

		method.executeWithVoidReturn();
	} else
		_implementation->initializePosition(x, z, y);
}

int QuadTreeEntry::_compareTo(QuadTreeEntry* obj) {
	QuadTreeEntryImplementation* _implementation = static_cast<QuadTreeEntryImplementation*>(_getImplementationForRead());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_COMPARETO__QUADTREEENTRY_);
		method.addObjectParameter(obj);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->compareTo(obj);
}

bool QuadTreeEntry::isInQuadTree() const {
	QuadTreeEntryImplementation* _implementation = static_cast<QuadTreeEntryImplementation*>(_getImplementationForRead());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ISINQUADTREE__);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->isInQuadTree();
}

TransactionalReference<QuadTreeNode*> QuadTreeEntry::getNode() const {
	QuadTreeEntryImplementation* _implementation = static_cast<QuadTreeEntryImplementation*>(_getImplementationForRead());
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		return _implementation->getNode();
}

void QuadTreeEntry::setCloseObjects(CloseObjectsVector* vec) {
	QuadTreeEntryImplementation* _implementation = static_cast<QuadTreeEntryImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		_implementation->setCloseObjects(vec);
}

unsigned long long QuadTreeEntry::_getDirtyObjectID() {
	QuadTreeEntryImplementation* _implementation = static_cast<QuadTreeEntryImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETDIRTYOBJECTID__);

		return method.executeWithUnsignedLongReturn();
	} else
		return _implementation->getDirtyObjectID();
}

unsigned long long QuadTreeEntry::getObjectID() {
	QuadTreeEntryImplementation* _implementation = static_cast<QuadTreeEntryImplementation*>(_getImplementationForRead());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETOBJECTID__);

		return method.executeWithUnsignedLongReturn();
	} else
		return _implementation->getObjectID();
}

float QuadTreeEntry::getRadius() const {
	QuadTreeEntryImplementation* _implementation = static_cast<QuadTreeEntryImplementation*>(_getImplementationForRead());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETRADIUS__);

		return method.executeWithFloatReturn();
	} else
		return _implementation->getRadius();
}

bool QuadTreeEntry::isBounding() const {
	QuadTreeEntryImplementation* _implementation = static_cast<QuadTreeEntryImplementation*>(_getImplementationForRead());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ISBOUNDING__);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->isBounding();
}

void QuadTreeEntry::setNode(QuadTreeNode* n) {
	QuadTreeEntryImplementation* _implementation = static_cast<QuadTreeEntryImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		_implementation->setNode(n);
}

void QuadTreeEntry::setBounding() {
	QuadTreeEntryImplementation* _implementation = static_cast<QuadTreeEntryImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETBOUNDING__);

		method.executeWithVoidReturn();
	} else
		_implementation->setBounding();
}

void QuadTreeEntry::setRadius(float rad) {
	QuadTreeEntryImplementation* _implementation = static_cast<QuadTreeEntryImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETRADIUS__FLOAT_);
		method.addFloatParameter(rad);

		method.executeWithVoidReturn();
	} else
		_implementation->setRadius(rad);
}

void QuadTreeEntry::clearBounding() {
	QuadTreeEntryImplementation* _implementation = static_cast<QuadTreeEntryImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_CLEARBOUNDING__);

		method.executeWithVoidReturn();
	} else
		_implementation->clearBounding();
}

void QuadTreeEntry::setParent(QuadTreeEntry* par) {
	QuadTreeEntryImplementation* _implementation = static_cast<QuadTreeEntryImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETPARENT__QUADTREEENTRY_);
		method.addObjectParameter(par);

		method.executeWithVoidReturn();
	} else
		_implementation->setParent(par);
}

DistributedObjectServant* QuadTreeEntry::_getImplementation() {

	 if (!_updated) _updated = true;
	return _impl;
}

DistributedObjectServant* QuadTreeEntry::_getImplementationForRead() const {
	return _impl;
}

void QuadTreeEntry::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	QuadTreeEntryImplementation
 */

QuadTreeEntryImplementation::QuadTreeEntryImplementation(DummyConstructorParameter* param) : ObservableImplementation(param) {
	_initializeImplementation();
}


QuadTreeEntryImplementation::~QuadTreeEntryImplementation() {
}


void QuadTreeEntryImplementation::finalize() {
}

void QuadTreeEntryImplementation::_initializeImplementation() {
	_setClassHelper(QuadTreeEntryHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void QuadTreeEntryImplementation::_setStub(DistributedObjectStub* stub) {
	_this = static_cast<QuadTreeEntry*>(stub);
	ObservableImplementation::_setStub(stub);
}

DistributedObjectStub* QuadTreeEntryImplementation::_getStub() {
	return _this.get();
}

QuadTreeEntryImplementation::operator const QuadTreeEntry*() {
	return _this.get();
}

void QuadTreeEntryImplementation::lock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->lock(doLock);
}

void QuadTreeEntryImplementation::lock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->lock(obj);
}

void QuadTreeEntryImplementation::rlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->rlock(doLock);
}

void QuadTreeEntryImplementation::wlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->wlock(doLock);
}

void QuadTreeEntryImplementation::wlock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->wlock(obj);
}

void QuadTreeEntryImplementation::unlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->unlock(doLock);
}

void QuadTreeEntryImplementation::runlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->runlock(doLock);
}

void QuadTreeEntryImplementation::_serializationHelperMethod() {
	ObservableImplementation::_serializationHelperMethod();

	_setClassName("QuadTreeEntry");

}

void QuadTreeEntryImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		uint32 _nameHashCode;
		TypeInfo<uint32>::parseFromBinaryStream(&_nameHashCode, stream);

		uint32 _varSize = stream->readInt();

		int _currentOffset = stream->getOffset();

		if(QuadTreeEntryImplementation::readObjectMember(stream, _nameHashCode)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool QuadTreeEntryImplementation::readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode) {
	if (ObservableImplementation::readObjectMember(stream, nameHashCode))
		return true;

	switch(nameHashCode) {
	case 0x2970c5d9: //QuadTreeEntry.coordinates
		TypeInfo<Coordinate >::parseFromBinaryStream(&coordinates, stream);
		return true;

	case 0x5a47d37d: //QuadTreeEntry.bounding
		TypeInfo<bool >::parseFromBinaryStream(&bounding, stream);
		return true;

	case 0x5284d7c8: //QuadTreeEntry.parent
		TypeInfo<ManagedWeakReference<QuadTreeEntry* > >::parseFromBinaryStream(&parent, stream);
		return true;

	case 0xac3d85f4: //QuadTreeEntry.radius
		TypeInfo<float >::parseFromBinaryStream(&radius, stream);
		return true;

	}

	return false;
}

void QuadTreeEntryImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = QuadTreeEntryImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int QuadTreeEntryImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = ObservableImplementation::writeObjectMembers(stream);

	uint32 _nameHashCode;
	int _offset;
	uint32 _totalSize;
	_nameHashCode = 0x2970c5d9; //QuadTreeEntry.coordinates
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<Coordinate >::toBinaryStream(&coordinates, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_nameHashCode = 0x5a47d37d; //QuadTreeEntry.bounding
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<bool >::toBinaryStream(&bounding, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_nameHashCode = 0x5284d7c8; //QuadTreeEntry.parent
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<ManagedWeakReference<QuadTreeEntry* > >::toBinaryStream(&parent, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_nameHashCode = 0xac3d85f4; //QuadTreeEntry.radius
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<float >::toBinaryStream(&radius, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);


	return _count + 4;
}

void QuadTreeEntryImplementation::addInRangeObject(QuadTreeEntry* obj, bool doNotifyUpdate) {
	// engine/util/u3d/QuadTreeEntry.idl():  	}
	if (closeobjects->put(obj) != -1){
	// engine/util/u3d/QuadTreeEntry.idl():  			notifyInsert(obj);
	notifyInsert(obj);
}

	else 	// engine/util/u3d/QuadTreeEntry.idl():  	}
	if (doNotifyUpdate){
	// engine/util/u3d/QuadTreeEntry.idl():  			notifyPositionUpdate(obj);
	notifyPositionUpdate(obj);
}
}

void QuadTreeEntryImplementation::removeInRangeObject(QuadTreeEntry* obj) {
	// engine/util/u3d/QuadTreeEntry.idl():  	}
	if (closeobjects->drop(obj)){
	// engine/util/u3d/QuadTreeEntry.idl():  			notifyDissapear(obj);
	notifyDissapear(obj);
}
}

void QuadTreeEntryImplementation::removeInRangeObject(int index) {
	// engine/util/u3d/QuadTreeEntry.idl():  		closeobjects.remove(index);
	closeobjects->remove(index);
}

void QuadTreeEntryImplementation::removeInRangeObjects() {
	// engine/util/u3d/QuadTreeEntry.idl():  		closeobjects.removeAll();
	closeobjects->removeAll();
}

bool QuadTreeEntryImplementation::isInRange(QuadTreeEntry* obj, float range) {
	// engine/util/u3d/QuadTreeEntry.idl():  		return isInRange(obj.getPositionX(), obj.getPositionY(), range);
	return isInRange(obj->getPositionX(), obj->getPositionY(), range);
}

bool QuadTreeEntryImplementation::isInRange(float x, float y, float range) {
	// engine/util/u3d/QuadTreeEntry.idl():  	 	float rangesq = range * range;
	float rangesq = range * range;
	// engine/util/u3d/QuadTreeEntry.idl():  		float deltaX = x - coordinates.getPositionX();
	float deltaX = x - (&coordinates)->getPositionX();
	// engine/util/u3d/QuadTreeEntry.idl():  		float deltaY = y - coordinates.getPositionY();
	float deltaY = y - (&coordinates)->getPositionY();
	// engine/util/u3d/QuadTreeEntry.idl():  			return false;
	if (deltaX * deltaX + deltaY * deltaY <= rangesq)	// engine/util/u3d/QuadTreeEntry.idl():  			return true;
	return true;

	else 	// engine/util/u3d/QuadTreeEntry.idl():  			return false;
	return false;
}

float QuadTreeEntryImplementation::getDistanceTo(QuadTreeEntry* obj) {
	// engine/util/u3d/QuadTreeEntry.idl():  		float x = obj.getPositionX();
	float x = obj->getPositionX();
	// engine/util/u3d/QuadTreeEntry.idl():  		float y = obj.getPositionY();
	float y = obj->getPositionY();
	// engine/util/u3d/QuadTreeEntry.idl():  		float deltaX = x - coordinates.getPositionX();
	float deltaX = x - (&coordinates)->getPositionX();
	// engine/util/u3d/QuadTreeEntry.idl():  		float deltaY = y - coordinates.getPositionY();
	float deltaY = y - (&coordinates)->getPositionY();
	// engine/util/u3d/QuadTreeEntry.idl():  		return Math.sqrt(deltaX * deltaX + deltaY * deltaY);
	return Math::sqrt(deltaX * deltaX + deltaY * deltaY);
}

SortedVector<ManagedReference<QuadTreeEntry* > >* QuadTreeEntryImplementation::getCloseObjects() {
	// engine/util/u3d/QuadTreeEntry.idl():  		return closeobjects;
	return closeobjects;
}

ManagedWeakReference<QuadTreeEntry* > QuadTreeEntryImplementation::getParent() {
	// engine/util/u3d/QuadTreeEntry.idl():  		return parent;
	return parent;
}

void QuadTreeEntryImplementation::notifyInsert(QuadTreeEntry* obj) {
}

void QuadTreeEntryImplementation::notifyPositionUpdate(QuadTreeEntry* obj) {
}

void QuadTreeEntryImplementation::notifyDissapear(QuadTreeEntry* obj) {
}

float QuadTreeEntryImplementation::getPositionX() const{
	// engine/util/u3d/QuadTreeEntry.idl():  		return coordinates.getPositionX();
	return (&coordinates)->getPositionX();
}

float QuadTreeEntryImplementation::getPositionZ() const{
	// engine/util/u3d/QuadTreeEntry.idl():  		return coordinates.getPositionZ();
	return (&coordinates)->getPositionZ();
}

float QuadTreeEntryImplementation::getPositionY() const{
	// engine/util/u3d/QuadTreeEntry.idl():  		return coordinates.getPositionY();
	return (&coordinates)->getPositionY();
}

float QuadTreeEntryImplementation::getPreviousPositionX() const{
	// engine/util/u3d/QuadTreeEntry.idl():  		return coordinates.getPreviousPositionX();
	return (&coordinates)->getPreviousPositionX();
}

float QuadTreeEntryImplementation::getPreviousPositionZ() const{
	// engine/util/u3d/QuadTreeEntry.idl():  		return coordinates.getPreviousPositionZ();
	return (&coordinates)->getPreviousPositionZ();
}

float QuadTreeEntryImplementation::getPreviousPositionY() const{
	// engine/util/u3d/QuadTreeEntry.idl():  		return coordinates.getPreviousPositionY();
	return (&coordinates)->getPreviousPositionY();
}

Vector3 QuadTreeEntryImplementation::getPosition() const{
	// engine/util/u3d/QuadTreeEntry.idl():  		return coordinates.getPosition();
	return (&coordinates)->getPosition();
}

void QuadTreeEntryImplementation::setPosition(float x, float z, float y) {
	// engine/util/u3d/QuadTreeEntry.idl():  		coordinates.setPosition(x, z, y);
	(&coordinates)->setPosition(x, z, y);
}

void QuadTreeEntryImplementation::initializePosition(float x, float z, float y) {
	// engine/util/u3d/QuadTreeEntry.idl():  		coordinates.initializePosition(x, z, y);
	(&coordinates)->initializePosition(x, z, y);
}

bool QuadTreeEntryImplementation::isInQuadTree() const{
	// engine/util/u3d/QuadTreeEntry.idl():  		return node != null;
	return node != NULL;
}

TransactionalReference<QuadTreeNode*> QuadTreeEntryImplementation::getNode() const{
	// engine/util/u3d/QuadTreeEntry.idl():  		return node;
	return node;
}

void QuadTreeEntryImplementation::setCloseObjects(CloseObjectsVector* vec) {
	// engine/util/u3d/QuadTreeEntry.idl():  		closeobjects = vec;
	closeobjects = vec;
}

float QuadTreeEntryImplementation::getRadius() const{
	// engine/util/u3d/QuadTreeEntry.idl():  		return radius;
	return radius;
}

bool QuadTreeEntryImplementation::isBounding() const{
	// engine/util/u3d/QuadTreeEntry.idl():  		return bounding;
	return bounding;
}

void QuadTreeEntryImplementation::setBounding() {
	// engine/util/u3d/QuadTreeEntry.idl():  		bounding = true;
	bounding = true;
}

void QuadTreeEntryImplementation::setRadius(float rad) {
	// engine/util/u3d/QuadTreeEntry.idl():  		radius = rad;
	radius = rad;
}

void QuadTreeEntryImplementation::clearBounding() {
	// engine/util/u3d/QuadTreeEntry.idl():  		bounding = false;
	bounding = false;
}

void QuadTreeEntryImplementation::setParent(QuadTreeEntry* par) {
	// engine/util/u3d/QuadTreeEntry.idl():  		parent = par;
	parent = par;
}

/*
 *	QuadTreeEntryAdapter
 */


#include "engine/orb/messages/InvokeMethodMessage.h"


QuadTreeEntryAdapter::QuadTreeEntryAdapter(QuadTreeEntry* obj) : ObservableAdapter(obj) {
}

void QuadTreeEntryAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	DOBMessage* resp = inv->getInvocationMessage();

	switch (methid) {
	case RPC_ADDINRANGEOBJECT__QUADTREEENTRY_BOOL_:
		{
			addInRangeObject(static_cast<QuadTreeEntry*>(inv->getObjectParameter()), inv->getBooleanParameter());
		}
		break;
	case RPC_REMOVEINRANGEOBJECT__QUADTREEENTRY_:
		{
			removeInRangeObject(static_cast<QuadTreeEntry*>(inv->getObjectParameter()));
		}
		break;
	case RPC_REMOVEINRANGEOBJECT__INT_:
		{
			removeInRangeObject(inv->getSignedIntParameter());
		}
		break;
	case RPC_REMOVEINRANGEOBJECTS__:
		{
			removeInRangeObjects();
		}
		break;
	case RPC_ISINRANGE__QUADTREEENTRY_FLOAT_:
		{
			resp->insertBoolean(isInRange(static_cast<QuadTreeEntry*>(inv->getObjectParameter()), inv->getFloatParameter()));
		}
		break;
	case RPC_ISINRANGE__FLOAT_FLOAT_FLOAT_:
		{
			resp->insertBoolean(isInRange(inv->getFloatParameter(), inv->getFloatParameter(), inv->getFloatParameter()));
		}
		break;
	case RPC_GETDISTANCETO__QUADTREEENTRY_:
		{
			resp->insertFloat(getDistanceTo(static_cast<QuadTreeEntry*>(inv->getObjectParameter())));
		}
		break;
	case RPC_GETPARENT__:
		{
			resp->insertLong(getParent().get()->_getObjectID());
		}
		break;
	case RPC_GETPARENTUNSAFE__:
		{
			resp->insertLong(getParentUnsafe()->_getObjectID());
		}
		break;
	case RPC_GETROOTPARENTUNSAFE__:
		{
			resp->insertLong(getRootParentUnsafe()->_getObjectID());
		}
		break;
	case RPC_CONTAINSPOINT__FLOAT_FLOAT_:
		{
			resp->insertBoolean(containsPoint(inv->getFloatParameter(), inv->getFloatParameter()));
		}
		break;
	case RPC_GETROOTPARENT__:
		{
			resp->insertLong(getRootParent().get()->_getObjectID());
		}
		break;
	case RPC_NOTIFYINSERT__QUADTREEENTRY_:
		{
			notifyInsert(static_cast<QuadTreeEntry*>(inv->getObjectParameter()));
		}
		break;
	case RPC_NOTIFYPOSITIONUPDATE__QUADTREEENTRY_:
		{
			notifyPositionUpdate(static_cast<QuadTreeEntry*>(inv->getObjectParameter()));
		}
		break;
	case RPC_NOTIFYDISSAPEAR__QUADTREEENTRY_:
		{
			notifyDissapear(static_cast<QuadTreeEntry*>(inv->getObjectParameter()));
		}
		break;
	case RPC_GETPOSITIONX__:
		{
			resp->insertFloat(getPositionX());
		}
		break;
	case RPC_GETPOSITIONZ__:
		{
			resp->insertFloat(getPositionZ());
		}
		break;
	case RPC_GETPOSITIONY__:
		{
			resp->insertFloat(getPositionY());
		}
		break;
	case RPC_GETPREVIOUSPOSITIONX__:
		{
			resp->insertFloat(getPreviousPositionX());
		}
		break;
	case RPC_GETPREVIOUSPOSITIONZ__:
		{
			resp->insertFloat(getPreviousPositionZ());
		}
		break;
	case RPC_GETPREVIOUSPOSITIONY__:
		{
			resp->insertFloat(getPreviousPositionY());
		}
		break;
	case RPC_SETPOSITION__FLOAT_FLOAT_FLOAT_:
		{
			setPosition(inv->getFloatParameter(), inv->getFloatParameter(), inv->getFloatParameter());
		}
		break;
	case RPC_INITIALIZEPOSITION__FLOAT_FLOAT_FLOAT_:
		{
			initializePosition(inv->getFloatParameter(), inv->getFloatParameter(), inv->getFloatParameter());
		}
		break;
	case RPC_COMPARETO__QUADTREEENTRY_:
		{
			resp->insertSignedInt(compareTo(static_cast<QuadTreeEntry*>(inv->getObjectParameter())));
		}
		break;
	case RPC_ISINQUADTREE__:
		{
			resp->insertBoolean(isInQuadTree());
		}
		break;
	case RPC_GETDIRTYOBJECTID__:
		{
			resp->insertLong(getDirtyObjectID());
		}
		break;
	case RPC_GETOBJECTID__:
		{
			resp->insertLong(getObjectID());
		}
		break;
	case RPC_GETRADIUS__:
		{
			resp->insertFloat(getRadius());
		}
		break;
	case RPC_ISBOUNDING__:
		{
			resp->insertBoolean(isBounding());
		}
		break;
	case RPC_SETBOUNDING__:
		{
			setBounding();
		}
		break;
	case RPC_SETRADIUS__FLOAT_:
		{
			setRadius(inv->getFloatParameter());
		}
		break;
	case RPC_CLEARBOUNDING__:
		{
			clearBounding();
		}
		break;
	case RPC_SETPARENT__QUADTREEENTRY_:
		{
			setParent(static_cast<QuadTreeEntry*>(inv->getObjectParameter()));
		}
		break;
	default:
		throw Exception("Method does not exists");
	}
}

void QuadTreeEntryAdapter::addInRangeObject(QuadTreeEntry* obj, bool doNotifyUpdate) {
	(static_cast<QuadTreeEntry*>(stub))->addInRangeObject(obj, doNotifyUpdate);
}

void QuadTreeEntryAdapter::removeInRangeObject(QuadTreeEntry* obj) {
	(static_cast<QuadTreeEntry*>(stub))->removeInRangeObject(obj);
}

void QuadTreeEntryAdapter::removeInRangeObject(int index) {
	(static_cast<QuadTreeEntry*>(stub))->removeInRangeObject(index);
}

void QuadTreeEntryAdapter::removeInRangeObjects() {
	(static_cast<QuadTreeEntry*>(stub))->removeInRangeObjects();
}

bool QuadTreeEntryAdapter::isInRange(QuadTreeEntry* obj, float range) {
	return (static_cast<QuadTreeEntry*>(stub))->isInRange(obj, range);
}

bool QuadTreeEntryAdapter::isInRange(float x, float y, float range) {
	return (static_cast<QuadTreeEntry*>(stub))->isInRange(x, y, range);
}

float QuadTreeEntryAdapter::getDistanceTo(QuadTreeEntry* obj) {
	return (static_cast<QuadTreeEntry*>(stub))->getDistanceTo(obj);
}

ManagedWeakReference<QuadTreeEntry* > QuadTreeEntryAdapter::getParent() {
	return (static_cast<QuadTreeEntry*>(stub))->getParent();
}

QuadTreeEntry* QuadTreeEntryAdapter::getParentUnsafe() {
	return (static_cast<QuadTreeEntry*>(stub))->getParentUnsafe();
}

QuadTreeEntry* QuadTreeEntryAdapter::getRootParentUnsafe() {
	return (static_cast<QuadTreeEntry*>(stub))->getRootParentUnsafe();
}

bool QuadTreeEntryAdapter::containsPoint(float x, float y) {
	return (static_cast<QuadTreeEntry*>(stub))->containsPoint(x, y);
}

ManagedWeakReference<QuadTreeEntry* > QuadTreeEntryAdapter::getRootParent() {
	return (static_cast<QuadTreeEntry*>(stub))->getRootParent();
}

void QuadTreeEntryAdapter::notifyInsert(QuadTreeEntry* obj) {
	(static_cast<QuadTreeEntry*>(stub))->notifyInsert(obj);
}

void QuadTreeEntryAdapter::notifyPositionUpdate(QuadTreeEntry* obj) {
	(static_cast<QuadTreeEntry*>(stub))->notifyPositionUpdate(obj);
}

void QuadTreeEntryAdapter::notifyDissapear(QuadTreeEntry* obj) {
	(static_cast<QuadTreeEntry*>(stub))->notifyDissapear(obj);
}

float QuadTreeEntryAdapter::getPositionX() const {
	return (static_cast<QuadTreeEntry*>(stub))->getPositionX();
}

float QuadTreeEntryAdapter::getPositionZ() const {
	return (static_cast<QuadTreeEntry*>(stub))->getPositionZ();
}

float QuadTreeEntryAdapter::getPositionY() const {
	return (static_cast<QuadTreeEntry*>(stub))->getPositionY();
}

float QuadTreeEntryAdapter::getPreviousPositionX() const {
	return (static_cast<QuadTreeEntry*>(stub))->getPreviousPositionX();
}

float QuadTreeEntryAdapter::getPreviousPositionZ() const {
	return (static_cast<QuadTreeEntry*>(stub))->getPreviousPositionZ();
}

float QuadTreeEntryAdapter::getPreviousPositionY() const {
	return (static_cast<QuadTreeEntry*>(stub))->getPreviousPositionY();
}

void QuadTreeEntryAdapter::setPosition(float x, float z, float y) {
	(static_cast<QuadTreeEntry*>(stub))->setPosition(x, z, y);
}

void QuadTreeEntryAdapter::initializePosition(float x, float z, float y) {
	(static_cast<QuadTreeEntry*>(stub))->initializePosition(x, z, y);
}

int QuadTreeEntryAdapter::compareTo(QuadTreeEntry* obj) {
	return (static_cast<QuadTreeEntry*>(stub))->compareTo(obj);
}

bool QuadTreeEntryAdapter::isInQuadTree() const {
	return (static_cast<QuadTreeEntry*>(stub))->isInQuadTree();
}

unsigned long long QuadTreeEntryAdapter::getDirtyObjectID() {
	return (static_cast<QuadTreeEntry*>(stub))->getDirtyObjectID();
}

unsigned long long QuadTreeEntryAdapter::getObjectID() {
	return (static_cast<QuadTreeEntry*>(stub))->getObjectID();
}

float QuadTreeEntryAdapter::getRadius() const {
	return (static_cast<QuadTreeEntry*>(stub))->getRadius();
}

bool QuadTreeEntryAdapter::isBounding() const {
	return (static_cast<QuadTreeEntry*>(stub))->isBounding();
}

void QuadTreeEntryAdapter::setBounding() {
	(static_cast<QuadTreeEntry*>(stub))->setBounding();
}

void QuadTreeEntryAdapter::setRadius(float rad) {
	(static_cast<QuadTreeEntry*>(stub))->setRadius(rad);
}

void QuadTreeEntryAdapter::clearBounding() {
	(static_cast<QuadTreeEntry*>(stub))->clearBounding();
}

void QuadTreeEntryAdapter::setParent(QuadTreeEntry* par) {
	(static_cast<QuadTreeEntry*>(stub))->setParent(par);
}

/*
 *	QuadTreeEntryHelper
 */

QuadTreeEntryHelper* QuadTreeEntryHelper::staticInitializer = QuadTreeEntryHelper::instance();

QuadTreeEntryHelper::QuadTreeEntryHelper() {
	className = "QuadTreeEntry";

	Core::getObjectBroker()->registerClass(className, this);
}

void QuadTreeEntryHelper::finalizeHelper() {
	QuadTreeEntryHelper::finalize();
}

DistributedObject* QuadTreeEntryHelper::instantiateObject() {
	return new QuadTreeEntry(DummyConstructorParameter::instance());
}

DistributedObjectServant* QuadTreeEntryHelper::instantiateServant() {
	return new QuadTreeEntryImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* QuadTreeEntryHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new QuadTreeEntryAdapter(static_cast<QuadTreeEntry*>(obj));

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}


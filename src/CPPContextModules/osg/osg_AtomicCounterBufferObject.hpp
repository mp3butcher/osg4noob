#ifndef CONTEXT_META_CLASS_osg_AtomicCounterBufferObject_H
#define CONTEXT_META_CLASS_osg_AtomicCounterBufferObject_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/BufferObject>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_AtomicCounterBufferObject: public MetaClass{
protected:
std::set<osg::ref_ptr<osg::AtomicCounterBufferObject> 				 > _managedinstances;
   public:
osg_AtomicCounterBufferObject():MetaClass( "osg::AtomicCounterBufferObject"){_typeid=&typeid(osg::AtomicCounterBufferObject );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_AtomicCounterBufferObject(INSTANCE) BACK(osg::AtomicCounterBufferObject, "osg::AtomicCounterBufferObject",INSTANCE)
#endif


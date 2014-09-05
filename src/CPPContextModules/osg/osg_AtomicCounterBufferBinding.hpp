#ifndef CONTEXT_META_CLASS_osg_AtomicCounterBufferBinding_H
#define CONTEXT_META_CLASS_osg_AtomicCounterBufferBinding_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/BufferIndexBinding>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_AtomicCounterBufferBinding: public MetaClass{
protected:
std::set<osg::ref_ptr<osg::AtomicCounterBufferBinding> 				 > _managedinstances;
   public:
osg_AtomicCounterBufferBinding():MetaClass( "osg::AtomicCounterBufferBinding"){_typeid=&typeid(osg::AtomicCounterBufferBinding );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_AtomicCounterBufferBinding(INSTANCE) BACK(osg::AtomicCounterBufferBinding, "osg::AtomicCounterBufferBinding",INSTANCE)
#endif


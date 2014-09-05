#ifndef CONTEXT_META_CLASS_osg_UniformBufferBinding_H
#define CONTEXT_META_CLASS_osg_UniformBufferBinding_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/BufferIndexBinding>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_UniformBufferBinding: public MetaClass{
protected:
std::set<osg::ref_ptr<osg::UniformBufferBinding> 				 > _managedinstances;
   public:
osg_UniformBufferBinding():MetaClass( "osg::UniformBufferBinding"){_typeid=&typeid(osg::UniformBufferBinding );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_UniformBufferBinding(INSTANCE) BACK(osg::UniformBufferBinding, "osg::UniformBufferBinding",INSTANCE)
#endif


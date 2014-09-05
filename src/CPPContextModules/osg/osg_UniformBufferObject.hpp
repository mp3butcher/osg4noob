#ifndef CONTEXT_META_CLASS_osg_UniformBufferObject_H
#define CONTEXT_META_CLASS_osg_UniformBufferObject_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/BufferObject>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_UniformBufferObject: public MetaClass{
protected:
std::set<osg::ref_ptr<osg::UniformBufferObject> 				 > _managedinstances;
   public:
osg_UniformBufferObject():MetaClass( "osg::UniformBufferObject"){_typeid=&typeid(osg::UniformBufferObject );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_UniformBufferObject(INSTANCE) BACK(osg::UniformBufferObject, "osg::UniformBufferObject",INSTANCE)
#endif


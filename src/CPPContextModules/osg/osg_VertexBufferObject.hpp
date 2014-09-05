#ifndef CONTEXT_META_CLASS_osg_VertexBufferObject_H
#define CONTEXT_META_CLASS_osg_VertexBufferObject_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/BufferObject>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_VertexBufferObject: public MetaClass{
protected:
std::set<osg::ref_ptr<osg::VertexBufferObject> 				 > _managedinstances;
   public:
osg_VertexBufferObject():MetaClass( "osg::VertexBufferObject"){_typeid=&typeid(osg::VertexBufferObject );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_VertexBufferObject(INSTANCE) BACK(osg::VertexBufferObject, "osg::VertexBufferObject",INSTANCE)
#endif


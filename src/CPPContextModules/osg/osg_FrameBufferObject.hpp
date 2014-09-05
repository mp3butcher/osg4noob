#ifndef CONTEXT_META_CLASS_osg_FrameBufferObject_H
#define CONTEXT_META_CLASS_osg_FrameBufferObject_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/FrameBufferObject>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_FrameBufferObject: public MetaClass{
protected:
std::set<osg::ref_ptr<osg::FrameBufferObject> 				 > _managedinstances;
   public:
osg_FrameBufferObject():MetaClass( "osg::FrameBufferObject"){_typeid=&typeid(osg::FrameBufferObject );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_FrameBufferObject(INSTANCE) BACK(osg::FrameBufferObject, "osg::FrameBufferObject",INSTANCE)
#endif


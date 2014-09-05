#ifndef CONTEXT_META_CLASS_osg_RenderBuffer_H
#define CONTEXT_META_CLASS_osg_RenderBuffer_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/FrameBufferObject>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_RenderBuffer: public MetaClass{
protected:
std::set<osg::ref_ptr<osg::RenderBuffer> 				 > _managedinstances;
   public:
osg_RenderBuffer():MetaClass( "osg::RenderBuffer"){_typeid=&typeid(osg::RenderBuffer );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_RenderBuffer(INSTANCE) BACK(osg::RenderBuffer, "osg::RenderBuffer",INSTANCE)
#endif


#ifndef CONTEXT_META_CLASS_osg_FrameBufferAttachment_H
#define CONTEXT_META_CLASS_osg_FrameBufferAttachment_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/FrameBufferObject>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_FrameBufferAttachment: public MetaClass{
protected:
std::set<osg::FrameBufferAttachment* 							 > _managedinstances;
   public:
osg_FrameBufferAttachment():MetaClass( "osg::FrameBufferAttachment"){_typeid=&typeid(osg::FrameBufferAttachment );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_FrameBufferAttachment(INSTANCE) BACK(osg::FrameBufferAttachment, "osg::FrameBufferAttachment",INSTANCE)
#endif


#ifndef CONTEXT_META_CLASS_osg_FrameStamp_H
#define CONTEXT_META_CLASS_osg_FrameStamp_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/FrameStamp>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_FrameStamp: public MetaClass{
protected:
std::set<osg::ref_ptr<osg::FrameStamp> 				 > _managedinstances;
   public:
osg_FrameStamp():MetaClass( "osg::FrameStamp"){_typeid=&typeid(osg::FrameStamp );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_FrameStamp(INSTANCE) BACK(osg::FrameStamp, "osg::FrameStamp",INSTANCE)
#endif


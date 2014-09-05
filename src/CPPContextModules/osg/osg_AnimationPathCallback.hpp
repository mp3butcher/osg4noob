#ifndef CONTEXT_META_CLASS_osg_AnimationPathCallback_H
#define CONTEXT_META_CLASS_osg_AnimationPathCallback_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/AnimationPath>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_AnimationPathCallback: public MetaClass{
protected:
std::set<osg::ref_ptr<osg::AnimationPathCallback> 				 > _managedinstances;
   public:
osg_AnimationPathCallback():MetaClass( "osg::AnimationPathCallback"){_typeid=&typeid(osg::AnimationPathCallback );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_AnimationPathCallback(INSTANCE) BACK(osg::AnimationPathCallback, "osg::AnimationPathCallback",INSTANCE)
#endif


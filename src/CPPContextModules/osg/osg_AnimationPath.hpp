#ifndef CONTEXT_META_CLASS_osg_AnimationPath_H
#define CONTEXT_META_CLASS_osg_AnimationPath_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/AnimationPath>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_AnimationPath: public MetaClass{
protected:
std::set<osg::ref_ptr<osg::AnimationPath> 				 > _managedinstances;
   public:
osg_AnimationPath():MetaClass( "osg::AnimationPath"){_typeid=&typeid(osg::AnimationPath );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_AnimationPath(INSTANCE) BACK(osg::AnimationPath, "osg::AnimationPath",INSTANCE)
#endif


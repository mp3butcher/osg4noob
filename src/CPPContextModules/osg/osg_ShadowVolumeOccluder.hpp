#ifndef CONTEXT_META_CLASS_osg_ShadowVolumeOccluder_H
#define CONTEXT_META_CLASS_osg_ShadowVolumeOccluder_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/ShadowVolumeOccluder>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_ShadowVolumeOccluder: public MetaClass{
protected:
std::set<osg::ShadowVolumeOccluder* 							 > _managedinstances;
   public:
osg_ShadowVolumeOccluder():MetaClass( "osg::ShadowVolumeOccluder"){_typeid=&typeid(osg::ShadowVolumeOccluder );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_ShadowVolumeOccluder(INSTANCE) BACK(osg::ShadowVolumeOccluder, "osg::ShadowVolumeOccluder",INSTANCE)
#endif


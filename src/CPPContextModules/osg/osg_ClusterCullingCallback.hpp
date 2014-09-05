#ifndef CONTEXT_META_CLASS_osg_ClusterCullingCallback_H
#define CONTEXT_META_CLASS_osg_ClusterCullingCallback_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/ClusterCullingCallback>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_ClusterCullingCallback: public MetaClass{
protected:
std::set<osg::ref_ptr<osg::ClusterCullingCallback> 				 > _managedinstances;
   public:
osg_ClusterCullingCallback():MetaClass( "osg::ClusterCullingCallback"){_typeid=&typeid(osg::ClusterCullingCallback );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_ClusterCullingCallback(INSTANCE) BACK(osg::ClusterCullingCallback, "osg::ClusterCullingCallback",INSTANCE)
#endif


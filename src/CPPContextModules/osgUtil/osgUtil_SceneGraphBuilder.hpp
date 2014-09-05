#ifndef CONTEXT_META_CLASS_osgUtil_SceneGraphBuilder_H
#define CONTEXT_META_CLASS_osgUtil_SceneGraphBuilder_H

#include "Export.h"
#include <MetaClass.h>
#include <osgUtil/SceneGraphBuilder>

namespace pmoc{
class  METALIBRARY_osgUtil_EXPORT  osgUtil_SceneGraphBuilder: public MetaClass{
protected:
std::set<osgUtil::SceneGraphBuilder* 							 > _managedinstances;
   public:
osgUtil_SceneGraphBuilder():MetaClass( "osgUtil::SceneGraphBuilder"){_typeid=&typeid(osgUtil::SceneGraphBuilder );};
 virtual Instance createInstance();
};
}
#define BACKFromosgUtil_SceneGraphBuilder(INSTANCE) BACK(osgUtil::SceneGraphBuilder, "osgUtil::SceneGraphBuilder",INSTANCE)
#endif


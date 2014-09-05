#ifndef CONTEXT_META_CLASS_osgUtil_SceneView_H
#define CONTEXT_META_CLASS_osgUtil_SceneView_H

#include "Export.h"
#include <MetaClass.h>
#include <osgUtil/SceneView>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osgUtil_EXPORT  osgUtil_SceneView: public MetaClass{
protected:
std::set<osg::ref_ptr<osgUtil::SceneView> 				 > _managedinstances;
   public:
osgUtil_SceneView():MetaClass( "osgUtil::SceneView"){_typeid=&typeid(osgUtil::SceneView );};
 virtual Instance createInstance();
};
}
#define BACKFromosgUtil_SceneView(INSTANCE) BACK(osgUtil::SceneView, "osgUtil::SceneView",INSTANCE)
#endif


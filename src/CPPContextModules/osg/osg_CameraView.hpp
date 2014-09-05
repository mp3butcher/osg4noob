#ifndef CONTEXT_META_CLASS_osg_CameraView_H
#define CONTEXT_META_CLASS_osg_CameraView_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/CameraView>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_CameraView: public MetaClass{
protected:
std::set<osg::ref_ptr<osg::CameraView> 				 > _managedinstances;
   public:
osg_CameraView():MetaClass( "osg::CameraView"){_typeid=&typeid(osg::CameraView );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_CameraView(INSTANCE) BACK(osg::CameraView, "osg::CameraView",INSTANCE)
#endif


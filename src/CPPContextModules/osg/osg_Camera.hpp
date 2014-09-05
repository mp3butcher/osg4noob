#ifndef CONTEXT_META_CLASS_osg_Camera_H
#define CONTEXT_META_CLASS_osg_Camera_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/Camera>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_Camera: public MetaClass{
protected:
std::set<osg::ref_ptr<osg::Camera> 				 > _managedinstances;
   public:
osg_Camera():MetaClass( "osg::Camera"){_typeid=&typeid(osg::Camera );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_Camera(INSTANCE) BACK(osg::Camera, "osg::Camera",INSTANCE)
#endif


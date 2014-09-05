#ifndef CONTEXT_META_CLASS_osg_Geometry_H
#define CONTEXT_META_CLASS_osg_Geometry_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/Geometry>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_Geometry: public MetaClass{
protected:
std::set<osg::ref_ptr<osg::Geometry> 				 > _managedinstances;
   public:
osg_Geometry():MetaClass( "osg::Geometry"){_typeid=&typeid(osg::Geometry );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_Geometry(INSTANCE) BACK(osg::Geometry, "osg::Geometry",INSTANCE)
#endif


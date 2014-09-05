#ifndef CONTEXT_META_CLASS_osg_Plane_H
#define CONTEXT_META_CLASS_osg_Plane_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/Plane>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_Plane: public MetaClass{
protected:
std::set<osg::Plane* 							 > _managedinstances;
   public:
osg_Plane():MetaClass( "osg::Plane"){_typeid=&typeid(osg::Plane );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_Plane(INSTANCE) BACK(osg::Plane, "osg::Plane",INSTANCE)
#endif


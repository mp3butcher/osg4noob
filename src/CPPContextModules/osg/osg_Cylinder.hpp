#ifndef CONTEXT_META_CLASS_osg_Cylinder_H
#define CONTEXT_META_CLASS_osg_Cylinder_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/Shape>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_Cylinder: public MetaClass{
protected:
   public:
osg_Cylinder():MetaClass( "osg::Cylinder"){_typeid=&typeid(osg::Cylinder );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_Cylinder(INSTANCE) BACK(osg::Cylinder, "osg::Cylinder",INSTANCE)
#endif


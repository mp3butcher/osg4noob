#ifndef CONTEXT_META_CLASS_osg_Sphere_H
#define CONTEXT_META_CLASS_osg_Sphere_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/Shape>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_Sphere: public MetaClass{
protected:
   public:
osg_Sphere():MetaClass( "osg::Sphere"){_typeid=&typeid(osg::Sphere );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_Sphere(INSTANCE) BACK(osg::Sphere, "osg::Sphere",INSTANCE)
#endif


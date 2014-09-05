#ifndef CONTEXT_META_CLASS_osg_Transform_H
#define CONTEXT_META_CLASS_osg_Transform_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/Transform>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_Transform: public MetaClass{
protected:
std::set<osg::ref_ptr<osg::Transform> 				 > _managedinstances;
   public:
osg_Transform():MetaClass( "osg::Transform"){_typeid=&typeid(osg::Transform );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_Transform(INSTANCE) BACK(osg::Transform, "osg::Transform",INSTANCE)
#endif


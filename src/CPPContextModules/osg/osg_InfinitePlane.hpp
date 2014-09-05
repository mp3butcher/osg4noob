#ifndef CONTEXT_META_CLASS_osg_InfinitePlane_H
#define CONTEXT_META_CLASS_osg_InfinitePlane_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/Shape>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_InfinitePlane: public MetaClass{
protected:
   public:
osg_InfinitePlane():MetaClass( "osg::InfinitePlane"){_typeid=&typeid(osg::InfinitePlane );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_InfinitePlane(INSTANCE) BACK(osg::InfinitePlane, "osg::InfinitePlane",INSTANCE)
#endif


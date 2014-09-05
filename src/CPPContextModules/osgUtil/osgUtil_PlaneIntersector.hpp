#ifndef CONTEXT_META_CLASS_osgUtil_PlaneIntersector_H
#define CONTEXT_META_CLASS_osgUtil_PlaneIntersector_H

#include "Export.h"
#include <MetaClass.h>
#include <osgUtil/PlaneIntersector>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osgUtil_EXPORT  osgUtil_PlaneIntersector: public MetaClass{
protected:
   public:
osgUtil_PlaneIntersector():MetaClass( "osgUtil::PlaneIntersector"){_typeid=&typeid(osgUtil::PlaneIntersector );};
 virtual Instance createInstance();
};
}
#define BACKFromosgUtil_PlaneIntersector(INSTANCE) BACK(osgUtil::PlaneIntersector, "osgUtil::PlaneIntersector",INSTANCE)
#endif


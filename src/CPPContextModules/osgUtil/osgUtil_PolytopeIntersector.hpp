#ifndef CONTEXT_META_CLASS_osgUtil_PolytopeIntersector_H
#define CONTEXT_META_CLASS_osgUtil_PolytopeIntersector_H

#include "Export.h"
#include <MetaClass.h>
#include <osgUtil/PolytopeIntersector>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osgUtil_EXPORT  osgUtil_PolytopeIntersector: public MetaClass{
protected:
   public:
osgUtil_PolytopeIntersector():MetaClass( "osgUtil::PolytopeIntersector"){_typeid=&typeid(osgUtil::PolytopeIntersector );};
 virtual Instance createInstance();
};
}
#define BACKFromosgUtil_PolytopeIntersector(INSTANCE) BACK(osgUtil::PolytopeIntersector, "osgUtil::PolytopeIntersector",INSTANCE)
#endif


#ifndef CONTEXT_META_CLASS_osgUtil_GeometryCollector_H
#define CONTEXT_META_CLASS_osgUtil_GeometryCollector_H

#include "Export.h"
#include <MetaClass.h>
#include <osgUtil/MeshOptimizers>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osgUtil_EXPORT  osgUtil_GeometryCollector: public MetaClass{
protected:
   public:
osgUtil_GeometryCollector():MetaClass( "osgUtil::GeometryCollector"){_typeid=&typeid(osgUtil::GeometryCollector );};
 virtual Instance createInstance();
};
}
#define BACKFromosgUtil_GeometryCollector(INSTANCE) BACK(osgUtil::GeometryCollector, "osgUtil::GeometryCollector",INSTANCE)
#endif


#ifndef CONTEXT_META_CLASS_osgUtil_HalfWayMapGenerator_H
#define CONTEXT_META_CLASS_osgUtil_HalfWayMapGenerator_H

#include "Export.h"
#include <MetaClass.h>
#include <osgUtil/HalfWayMapGenerator>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osgUtil_EXPORT  osgUtil_HalfWayMapGenerator: public MetaClass{
protected:
   public:
osgUtil_HalfWayMapGenerator():MetaClass( "osgUtil::HalfWayMapGenerator"){_typeid=&typeid(osgUtil::HalfWayMapGenerator );};
 virtual Instance createInstance();
};
}
#define BACKFromosgUtil_HalfWayMapGenerator(INSTANCE) BACK(osgUtil::HalfWayMapGenerator, "osgUtil::HalfWayMapGenerator",INSTANCE)
#endif


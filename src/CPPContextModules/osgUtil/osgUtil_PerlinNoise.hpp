#ifndef CONTEXT_META_CLASS_osgUtil_PerlinNoise_H
#define CONTEXT_META_CLASS_osgUtil_PerlinNoise_H

#include "Export.h"
#include <MetaClass.h>
#include <osgUtil/PerlinNoise>

namespace pmoc{
class  METALIBRARY_osgUtil_EXPORT  osgUtil_PerlinNoise: public MetaClass{
protected:
std::set<osgUtil::PerlinNoise* 							 > _managedinstances;
   public:
osgUtil_PerlinNoise():MetaClass( "osgUtil::PerlinNoise"){_typeid=&typeid(osgUtil::PerlinNoise );};
 virtual Instance createInstance();
};
}
#define BACKFromosgUtil_PerlinNoise(INSTANCE) BACK(osgUtil::PerlinNoise, "osgUtil::PerlinNoise",INSTANCE)
#endif


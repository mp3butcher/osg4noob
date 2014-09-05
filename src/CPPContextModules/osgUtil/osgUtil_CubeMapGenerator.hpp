#ifndef CONTEXT_META_CLASS_osgUtil_CubeMapGenerator_H
#define CONTEXT_META_CLASS_osgUtil_CubeMapGenerator_H

#include "Export.h"
#include <MetaClass.h>
#include <osgUtil/CubeMapGenerator>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osgUtil_EXPORT  osgUtil_CubeMapGenerator: public MetaClass{
protected:
   public:
osgUtil_CubeMapGenerator():MetaClass( "osgUtil::CubeMapGenerator"){_typeid=&typeid(osgUtil::CubeMapGenerator );};
 virtual Instance createInstance();
};
}
#define BACKFromosgUtil_CubeMapGenerator(INSTANCE) BACK(osgUtil::CubeMapGenerator, "osgUtil::CubeMapGenerator",INSTANCE)
#endif


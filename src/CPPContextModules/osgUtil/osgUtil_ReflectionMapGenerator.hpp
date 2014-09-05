#ifndef CONTEXT_META_CLASS_osgUtil_ReflectionMapGenerator_H
#define CONTEXT_META_CLASS_osgUtil_ReflectionMapGenerator_H

#include "Export.h"
#include <MetaClass.h>
#include <osgUtil/ReflectionMapGenerator>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osgUtil_EXPORT  osgUtil_ReflectionMapGenerator: public MetaClass{
protected:
std::set<osg::ref_ptr<osgUtil::ReflectionMapGenerator> 				 > _managedinstances;
   public:
osgUtil_ReflectionMapGenerator():MetaClass( "osgUtil::ReflectionMapGenerator"){_typeid=&typeid(osgUtil::ReflectionMapGenerator );};
 virtual Instance createInstance();
};
}
#define BACKFromosgUtil_ReflectionMapGenerator(INSTANCE) BACK(osgUtil::ReflectionMapGenerator, "osgUtil::ReflectionMapGenerator",INSTANCE)
#endif


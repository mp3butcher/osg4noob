#ifndef CONTEXT_META_CLASS_osgUtil_TangentSpaceGenerator_H
#define CONTEXT_META_CLASS_osgUtil_TangentSpaceGenerator_H

#include "Export.h"
#include <MetaClass.h>
#include <osgUtil/TangentSpaceGenerator>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osgUtil_EXPORT  osgUtil_TangentSpaceGenerator: public MetaClass{
protected:
std::set<osg::ref_ptr<osgUtil::TangentSpaceGenerator> 				 > _managedinstances;
   public:
osgUtil_TangentSpaceGenerator():MetaClass( "osgUtil::TangentSpaceGenerator"){_typeid=&typeid(osgUtil::TangentSpaceGenerator );};
 virtual Instance createInstance();
};
}
#define BACKFromosgUtil_TangentSpaceGenerator(INSTANCE) BACK(osgUtil::TangentSpaceGenerator, "osgUtil::TangentSpaceGenerator",INSTANCE)
#endif


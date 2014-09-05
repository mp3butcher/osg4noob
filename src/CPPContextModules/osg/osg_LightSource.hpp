#ifndef CONTEXT_META_CLASS_osg_LightSource_H
#define CONTEXT_META_CLASS_osg_LightSource_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/LightSource>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_LightSource: public MetaClass{
protected:
std::set<osg::ref_ptr<osg::LightSource> 				 > _managedinstances;
   public:
osg_LightSource():MetaClass( "osg::LightSource"){_typeid=&typeid(osg::LightSource );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_LightSource(INSTANCE) BACK(osg::LightSource, "osg::LightSource",INSTANCE)
#endif


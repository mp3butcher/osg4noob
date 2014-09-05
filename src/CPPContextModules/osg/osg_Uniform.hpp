#ifndef CONTEXT_META_CLASS_osg_Uniform_H
#define CONTEXT_META_CLASS_osg_Uniform_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/Uniform>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_Uniform: public MetaClass{
protected:
std::set<osg::ref_ptr<osg::Uniform> 				 > _managedinstances;
   public:
osg_Uniform():MetaClass( "osg::Uniform"){_typeid=&typeid(osg::Uniform );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_Uniform(INSTANCE) BACK(osg::Uniform, "osg::Uniform",INSTANCE)
#endif


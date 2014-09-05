#ifndef CONTEXT_META_CLASS_osg_ShaderComponent_H
#define CONTEXT_META_CLASS_osg_ShaderComponent_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/Shader>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_ShaderComponent: public MetaClass{
protected:
std::set<osg::ref_ptr<osg::ShaderComponent> 				 > _managedinstances;
   public:
osg_ShaderComponent():MetaClass( "osg::ShaderComponent"){_typeid=&typeid(osg::ShaderComponent );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_ShaderComponent(INSTANCE) BACK(osg::ShaderComponent, "osg::ShaderComponent",INSTANCE)
#endif


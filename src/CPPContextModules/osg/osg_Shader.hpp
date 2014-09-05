#ifndef CONTEXT_META_CLASS_osg_Shader_H
#define CONTEXT_META_CLASS_osg_Shader_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/Shader>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_Shader: public MetaClass{
protected:
std::set<osg::ref_ptr<osg::Shader> 				 > _managedinstances;
   public:
osg_Shader():MetaClass( "osg::Shader"){_typeid=&typeid(osg::Shader );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_Shader(INSTANCE) BACK(osg::Shader, "osg::Shader",INSTANCE)
#endif


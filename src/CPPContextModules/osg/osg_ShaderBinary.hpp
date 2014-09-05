#ifndef CONTEXT_META_CLASS_osg_ShaderBinary_H
#define CONTEXT_META_CLASS_osg_ShaderBinary_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/Shader>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_ShaderBinary: public MetaClass{
protected:
std::set<osg::ref_ptr<osg::ShaderBinary> 				 > _managedinstances;
   public:
osg_ShaderBinary():MetaClass( "osg::ShaderBinary"){_typeid=&typeid(osg::ShaderBinary );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_ShaderBinary(INSTANCE) BACK(osg::ShaderBinary, "osg::ShaderBinary",INSTANCE)
#endif


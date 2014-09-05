#ifndef CONTEXT_META_CLASS_osg_ShaderAttribute_H
#define CONTEXT_META_CLASS_osg_ShaderAttribute_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/ShaderAttribute>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_ShaderAttribute: public MetaClass{
protected:
std::set<osg::ref_ptr<osg::ShaderAttribute> 				 > _managedinstances;
   public:
osg_ShaderAttribute():MetaClass( "osg::ShaderAttribute"){_typeid=&typeid(osg::ShaderAttribute );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_ShaderAttribute(INSTANCE) BACK(osg::ShaderAttribute, "osg::ShaderAttribute",INSTANCE)
#endif


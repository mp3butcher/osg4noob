#ifndef CONTEXT_META_CLASS_osg_ShaderComposer_H
#define CONTEXT_META_CLASS_osg_ShaderComposer_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/ShaderComposer>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_ShaderComposer: public MetaClass{
protected:
std::set<osg::ref_ptr<osg::ShaderComposer> 				 > _managedinstances;
   public:
osg_ShaderComposer():MetaClass( "osg::ShaderComposer"){_typeid=&typeid(osg::ShaderComposer );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_ShaderComposer(INSTANCE) BACK(osg::ShaderComposer, "osg::ShaderComposer",INSTANCE)
#endif


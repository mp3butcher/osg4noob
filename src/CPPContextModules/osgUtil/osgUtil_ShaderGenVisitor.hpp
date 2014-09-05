#ifndef CONTEXT_META_CLASS_osgUtil_ShaderGenVisitor_H
#define CONTEXT_META_CLASS_osgUtil_ShaderGenVisitor_H

#include "Export.h"
#include <MetaClass.h>
#include <osgUtil/ShaderGen>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osgUtil_EXPORT  osgUtil_ShaderGenVisitor: public MetaClass{
protected:
std::set<osg::ref_ptr<osgUtil::ShaderGenVisitor> 				 > _managedinstances;
   public:
osgUtil_ShaderGenVisitor():MetaClass( "osgUtil::ShaderGenVisitor"){_typeid=&typeid(osgUtil::ShaderGenVisitor );};
 virtual Instance createInstance();
};
}
#define BACKFromosgUtil_ShaderGenVisitor(INSTANCE) BACK(osgUtil::ShaderGenVisitor, "osgUtil::ShaderGenVisitor",INSTANCE)
#endif


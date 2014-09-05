#ifndef CONTEXT_META_CLASS_osgUtil_VertexAccessOrderVisitor_H
#define CONTEXT_META_CLASS_osgUtil_VertexAccessOrderVisitor_H

#include "Export.h"
#include <MetaClass.h>
#include <osgUtil/MeshOptimizers>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osgUtil_EXPORT  osgUtil_VertexAccessOrderVisitor: public MetaClass{
protected:
std::set<osg::ref_ptr<osgUtil::VertexAccessOrderVisitor> 				 > _managedinstances;
   public:
osgUtil_VertexAccessOrderVisitor():MetaClass( "osgUtil::VertexAccessOrderVisitor"){_typeid=&typeid(osgUtil::VertexAccessOrderVisitor );};
 virtual Instance createInstance();
};
}
#define BACKFromosgUtil_VertexAccessOrderVisitor(INSTANCE) BACK(osgUtil::VertexAccessOrderVisitor, "osgUtil::VertexAccessOrderVisitor",INSTANCE)
#endif


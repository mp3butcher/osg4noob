#ifndef CONTEXT_META_CLASS_osgUtil_IndexMeshVisitor_H
#define CONTEXT_META_CLASS_osgUtil_IndexMeshVisitor_H

#include "Export.h"
#include <MetaClass.h>
#include <osgUtil/MeshOptimizers>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osgUtil_EXPORT  osgUtil_IndexMeshVisitor: public MetaClass{
protected:
std::set<osg::ref_ptr<osgUtil::IndexMeshVisitor> 				 > _managedinstances;
   public:
osgUtil_IndexMeshVisitor():MetaClass( "osgUtil::IndexMeshVisitor"){_typeid=&typeid(osgUtil::IndexMeshVisitor );};
 virtual Instance createInstance();
};
}
#define BACKFromosgUtil_IndexMeshVisitor(INSTANCE) BACK(osgUtil::IndexMeshVisitor, "osgUtil::IndexMeshVisitor",INSTANCE)
#endif


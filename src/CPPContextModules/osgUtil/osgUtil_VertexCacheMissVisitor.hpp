#ifndef CONTEXT_META_CLASS_osgUtil_VertexCacheMissVisitor_H
#define CONTEXT_META_CLASS_osgUtil_VertexCacheMissVisitor_H

#include "Export.h"
#include <MetaClass.h>
#include <osgUtil/MeshOptimizers>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osgUtil_EXPORT  osgUtil_VertexCacheMissVisitor: public MetaClass{
protected:
std::set<osg::ref_ptr<osgUtil::VertexCacheMissVisitor> 				 > _managedinstances;
   public:
osgUtil_VertexCacheMissVisitor():MetaClass( "osgUtil::VertexCacheMissVisitor"){_typeid=&typeid(osgUtil::VertexCacheMissVisitor );};
 virtual Instance createInstance();
};
}
#define BACKFromosgUtil_VertexCacheMissVisitor(INSTANCE) BACK(osgUtil::VertexCacheMissVisitor, "osgUtil::VertexCacheMissVisitor",INSTANCE)
#endif


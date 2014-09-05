#ifndef CONTEXT_META_CLASS_osgUtil_VertexCacheVisitor_H
#define CONTEXT_META_CLASS_osgUtil_VertexCacheVisitor_H

#include "Export.h"
#include <MetaClass.h>
#include <osgUtil/MeshOptimizers>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osgUtil_EXPORT  osgUtil_VertexCacheVisitor: public MetaClass{
protected:
std::set<osg::ref_ptr<osgUtil::VertexCacheVisitor> 				 > _managedinstances;
   public:
osgUtil_VertexCacheVisitor():MetaClass( "osgUtil::VertexCacheVisitor"){_typeid=&typeid(osgUtil::VertexCacheVisitor );};
 virtual Instance createInstance();
};
}
#define BACKFromosgUtil_VertexCacheVisitor(INSTANCE) BACK(osgUtil::VertexCacheVisitor, "osgUtil::VertexCacheVisitor",INSTANCE)
#endif


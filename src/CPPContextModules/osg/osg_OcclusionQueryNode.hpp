#ifndef CONTEXT_META_CLASS_osg_OcclusionQueryNode_H
#define CONTEXT_META_CLASS_osg_OcclusionQueryNode_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/OcclusionQueryNode>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_OcclusionQueryNode: public MetaClass{
protected:
std::set<osg::ref_ptr<osg::OcclusionQueryNode> 				 > _managedinstances;
   public:
osg_OcclusionQueryNode():MetaClass( "osg::OcclusionQueryNode"){_typeid=&typeid(osg::OcclusionQueryNode );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_OcclusionQueryNode(INSTANCE) BACK(osg::OcclusionQueryNode, "osg::OcclusionQueryNode",INSTANCE)
#endif


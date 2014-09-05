#ifndef CONTEXT_META_CLASS_osg_OccluderNode_H
#define CONTEXT_META_CLASS_osg_OccluderNode_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/OccluderNode>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_OccluderNode: public MetaClass{
protected:
std::set<osg::ref_ptr<osg::OccluderNode> 				 > _managedinstances;
   public:
osg_OccluderNode():MetaClass( "osg::OccluderNode"){_typeid=&typeid(osg::OccluderNode );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_OccluderNode(INSTANCE) BACK(osg::OccluderNode, "osg::OccluderNode",INSTANCE)
#endif


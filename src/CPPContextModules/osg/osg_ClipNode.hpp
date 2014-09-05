#ifndef CONTEXT_META_CLASS_osg_ClipNode_H
#define CONTEXT_META_CLASS_osg_ClipNode_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/ClipNode>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_ClipNode: public MetaClass{
protected:
std::set<osg::ref_ptr<osg::ClipNode> 				 > _managedinstances;
   public:
osg_ClipNode():MetaClass( "osg::ClipNode"){_typeid=&typeid(osg::ClipNode );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_ClipNode(INSTANCE) BACK(osg::ClipNode, "osg::ClipNode",INSTANCE)
#endif


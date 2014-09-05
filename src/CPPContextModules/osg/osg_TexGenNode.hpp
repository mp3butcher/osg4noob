#ifndef CONTEXT_META_CLASS_osg_TexGenNode_H
#define CONTEXT_META_CLASS_osg_TexGenNode_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/TexGenNode>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_TexGenNode: public MetaClass{
protected:
std::set<osg::ref_ptr<osg::TexGenNode> 				 > _managedinstances;
   public:
osg_TexGenNode():MetaClass( "osg::TexGenNode"){_typeid=&typeid(osg::TexGenNode );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_TexGenNode(INSTANCE) BACK(osg::TexGenNode, "osg::TexGenNode",INSTANCE)
#endif


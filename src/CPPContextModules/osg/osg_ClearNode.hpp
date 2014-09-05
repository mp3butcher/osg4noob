#ifndef CONTEXT_META_CLASS_osg_ClearNode_H
#define CONTEXT_META_CLASS_osg_ClearNode_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/ClearNode>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_ClearNode: public MetaClass{
protected:
std::set<osg::ref_ptr<osg::ClearNode> 				 > _managedinstances;
   public:
osg_ClearNode():MetaClass( "osg::ClearNode"){_typeid=&typeid(osg::ClearNode );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_ClearNode(INSTANCE) BACK(osg::ClearNode, "osg::ClearNode",INSTANCE)
#endif


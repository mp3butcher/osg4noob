#ifndef CONTEXT_META_CLASS_osg_ProxyNode_H
#define CONTEXT_META_CLASS_osg_ProxyNode_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/ProxyNode>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_ProxyNode: public MetaClass{
protected:
std::set<osg::ref_ptr<osg::ProxyNode> 				 > _managedinstances;
   public:
osg_ProxyNode():MetaClass( "osg::ProxyNode"){_typeid=&typeid(osg::ProxyNode );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_ProxyNode(INSTANCE) BACK(osg::ProxyNode, "osg::ProxyNode",INSTANCE)
#endif


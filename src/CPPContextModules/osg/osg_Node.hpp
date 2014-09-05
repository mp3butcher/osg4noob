#ifndef CONTEXT_META_CLASS_osg_Node_H
#define CONTEXT_META_CLASS_osg_Node_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/Node>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_Node: public MetaClass{
protected:
std::set<osg::ref_ptr<osg::Node> 				 > _managedinstances;
   public:
osg_Node():MetaClass( "osg::Node"){_typeid=&typeid(osg::Node );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_Node(INSTANCE) BACK(osg::Node, "osg::Node",INSTANCE)
#endif


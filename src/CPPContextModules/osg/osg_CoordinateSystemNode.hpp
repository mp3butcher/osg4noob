#ifndef CONTEXT_META_CLASS_osg_CoordinateSystemNode_H
#define CONTEXT_META_CLASS_osg_CoordinateSystemNode_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/CoordinateSystemNode>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_CoordinateSystemNode: public MetaClass{
protected:
std::set<osg::ref_ptr<osg::CoordinateSystemNode> 				 > _managedinstances;
   public:
osg_CoordinateSystemNode():MetaClass( "osg::CoordinateSystemNode"){_typeid=&typeid(osg::CoordinateSystemNode );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_CoordinateSystemNode(INSTANCE) BACK(osg::CoordinateSystemNode, "osg::CoordinateSystemNode",INSTANCE)
#endif


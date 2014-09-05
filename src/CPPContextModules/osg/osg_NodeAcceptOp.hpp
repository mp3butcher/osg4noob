#ifndef CONTEXT_META_CLASS_osg_NodeAcceptOp_H
#define CONTEXT_META_CLASS_osg_NodeAcceptOp_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/NodeVisitor>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_NodeAcceptOp: public MetaClass{
protected:
   public:
osg_NodeAcceptOp():MetaClass( "osg::NodeAcceptOp"){_typeid=&typeid(osg::NodeAcceptOp );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_NodeAcceptOp(INSTANCE) BACK(osg::NodeAcceptOp, "osg::NodeAcceptOp",INSTANCE)
#endif


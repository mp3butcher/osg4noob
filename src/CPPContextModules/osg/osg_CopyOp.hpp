#ifndef CONTEXT_META_CLASS_osg_CopyOp_H
#define CONTEXT_META_CLASS_osg_CopyOp_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/CopyOp>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_CopyOp: public MetaClass{
protected:
std::set<osg::CopyOp* 							 > _managedinstances;
   public:
osg_CopyOp():MetaClass( "osg::CopyOp"){_typeid=&typeid(osg::CopyOp );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_CopyOp(INSTANCE) BACK(osg::CopyOp, "osg::CopyOp",INSTANCE)
#endif


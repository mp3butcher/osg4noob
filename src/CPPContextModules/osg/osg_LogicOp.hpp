#ifndef CONTEXT_META_CLASS_osg_LogicOp_H
#define CONTEXT_META_CLASS_osg_LogicOp_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/LogicOp>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_LogicOp: public MetaClass{
protected:
std::set<osg::ref_ptr<osg::LogicOp> 				 > _managedinstances;
   public:
osg_LogicOp():MetaClass( "osg::LogicOp"){_typeid=&typeid(osg::LogicOp );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_LogicOp(INSTANCE) BACK(osg::LogicOp, "osg::LogicOp",INSTANCE)
#endif


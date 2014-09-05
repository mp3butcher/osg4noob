#ifndef CONTEXT_META_CLASS_osgUtil_Optimizer_H
#define CONTEXT_META_CLASS_osgUtil_Optimizer_H

#include "Export.h"
#include <MetaClass.h>
#include <osgUtil/Optimizer>

namespace pmoc{
class  METALIBRARY_osgUtil_EXPORT  osgUtil_Optimizer: public MetaClass{
protected:
std::set<osgUtil::Optimizer* 							 > _managedinstances;
   public:
osgUtil_Optimizer():MetaClass( "osgUtil::Optimizer"){_typeid=&typeid(osgUtil::Optimizer );};
 virtual Instance createInstance();
};
}
#define BACKFromosgUtil_Optimizer(INSTANCE) BACK(osgUtil::Optimizer, "osgUtil::Optimizer",INSTANCE)
#endif


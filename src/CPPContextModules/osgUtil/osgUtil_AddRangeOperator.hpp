#ifndef CONTEXT_META_CLASS_osgUtil_AddRangeOperator_H
#define CONTEXT_META_CLASS_osgUtil_AddRangeOperator_H

#include "Export.h"
#include <MetaClass.h>
#include <osgUtil/OperationArrayFunctor>

namespace pmoc{
class  METALIBRARY_osgUtil_EXPORT  osgUtil_AddRangeOperator: public MetaClass{
protected:
   public:
osgUtil_AddRangeOperator():MetaClass( "osgUtil::AddRangeOperator"){_typeid=&typeid(osgUtil::AddRangeOperator );};
 virtual Instance createInstance();
};
}
#define BACKFromosgUtil_AddRangeOperator(INSTANCE) BACK(osgUtil::AddRangeOperator, "osgUtil::AddRangeOperator",INSTANCE)
#endif


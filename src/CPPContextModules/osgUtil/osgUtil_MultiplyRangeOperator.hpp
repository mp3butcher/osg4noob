#ifndef CONTEXT_META_CLASS_osgUtil_MultiplyRangeOperator_H
#define CONTEXT_META_CLASS_osgUtil_MultiplyRangeOperator_H

#include "Export.h"
#include <MetaClass.h>
#include <osgUtil/OperationArrayFunctor>

namespace pmoc{
class  METALIBRARY_osgUtil_EXPORT  osgUtil_MultiplyRangeOperator: public MetaClass{
protected:
   public:
osgUtil_MultiplyRangeOperator():MetaClass( "osgUtil::MultiplyRangeOperator"){_typeid=&typeid(osgUtil::MultiplyRangeOperator );};
 virtual Instance createInstance();
};
}
#define BACKFromosgUtil_MultiplyRangeOperator(INSTANCE) BACK(osgUtil::MultiplyRangeOperator, "osgUtil::MultiplyRangeOperator",INSTANCE)
#endif


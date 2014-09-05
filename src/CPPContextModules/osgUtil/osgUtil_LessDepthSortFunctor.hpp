#ifndef CONTEXT_META_CLASS_osgUtil_LessDepthSortFunctor_H
#define CONTEXT_META_CLASS_osgUtil_LessDepthSortFunctor_H

#include "Export.h"
#include <MetaClass.h>
#include <osgUtil/StateGraph>

namespace pmoc{
class  METALIBRARY_osgUtil_EXPORT  osgUtil_LessDepthSortFunctor: public MetaClass{
protected:
   public:
osgUtil_LessDepthSortFunctor():MetaClass( "osgUtil::LessDepthSortFunctor"){_typeid=&typeid(osgUtil::LessDepthSortFunctor );};
 virtual Instance createInstance();
};
}
#define BACKFromosgUtil_LessDepthSortFunctor(INSTANCE) BACK(osgUtil::LessDepthSortFunctor, "osgUtil::LessDepthSortFunctor",INSTANCE)
#endif


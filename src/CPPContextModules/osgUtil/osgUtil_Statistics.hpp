#ifndef CONTEXT_META_CLASS_osgUtil_Statistics_H
#define CONTEXT_META_CLASS_osgUtil_Statistics_H

#include "Export.h"
#include <MetaClass.h>
#include <osgUtil/Statistics>

namespace pmoc{
class  METALIBRARY_osgUtil_EXPORT  osgUtil_Statistics: public MetaClass{
protected:
std::set<osgUtil::Statistics* 							 > _managedinstances;
   public:
osgUtil_Statistics():MetaClass( "osgUtil::Statistics"){_typeid=&typeid(osgUtil::Statistics );};
 virtual Instance createInstance();
};
}
#define BACKFromosgUtil_Statistics(INSTANCE) BACK(osgUtil::Statistics, "osgUtil::Statistics",INSTANCE)
#endif


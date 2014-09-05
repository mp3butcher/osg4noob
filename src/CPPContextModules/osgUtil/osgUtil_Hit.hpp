#ifndef CONTEXT_META_CLASS_osgUtil_Hit_H
#define CONTEXT_META_CLASS_osgUtil_Hit_H

#include "Export.h"
#include <MetaClass.h>
#include <osgUtil/IntersectVisitor>

namespace pmoc{
class  METALIBRARY_osgUtil_EXPORT  osgUtil_Hit: public MetaClass{
protected:
std::set<osgUtil::Hit* 							 > _managedinstances;
   public:
osgUtil_Hit():MetaClass( "osgUtil::Hit"){_typeid=&typeid(osgUtil::Hit );};
 virtual Instance createInstance();
};
}
#define BACKFromosgUtil_Hit(INSTANCE) BACK(osgUtil::Hit, "osgUtil::Hit",INSTANCE)
#endif


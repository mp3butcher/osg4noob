#ifndef CONTEXT_META_CLASS_osg_ElapsedTime_H
#define CONTEXT_META_CLASS_osg_ElapsedTime_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/Timer>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_ElapsedTime: public MetaClass{
protected:
std::set<osg::ElapsedTime* 							 > _managedinstances;
   public:
osg_ElapsedTime():MetaClass( "osg::ElapsedTime"){_typeid=&typeid(osg::ElapsedTime );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_ElapsedTime(INSTANCE) BACK(osg::ElapsedTime, "osg::ElapsedTime",INSTANCE)
#endif


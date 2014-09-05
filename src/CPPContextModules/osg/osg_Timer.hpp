#ifndef CONTEXT_META_CLASS_osg_Timer_H
#define CONTEXT_META_CLASS_osg_Timer_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/Timer>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_Timer: public MetaClass{
protected:
std::set<osg::Timer* 							 > _managedinstances;
   public:
osg_Timer():MetaClass( "osg::Timer"){_typeid=&typeid(osg::Timer );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_Timer(INSTANCE) BACK(osg::Timer, "osg::Timer",INSTANCE)
#endif


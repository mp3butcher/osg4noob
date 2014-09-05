#ifndef CONTEXT_META_CLASS_osg_CullSettings_H
#define CONTEXT_META_CLASS_osg_CullSettings_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/CullSettings>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_CullSettings: public MetaClass{
protected:
std::set<osg::CullSettings* 							 > _managedinstances;
   public:
osg_CullSettings():MetaClass( "osg::CullSettings"){_typeid=&typeid(osg::CullSettings );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_CullSettings(INSTANCE) BACK(osg::CullSettings, "osg::CullSettings",INSTANCE)
#endif


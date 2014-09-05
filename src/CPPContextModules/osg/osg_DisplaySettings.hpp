#ifndef CONTEXT_META_CLASS_osg_DisplaySettings_H
#define CONTEXT_META_CLASS_osg_DisplaySettings_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/DisplaySettings>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_DisplaySettings: public MetaClass{
protected:
std::set<osg::ref_ptr<osg::DisplaySettings> 				 > _managedinstances;
   public:
osg_DisplaySettings():MetaClass( "osg::DisplaySettings"){_typeid=&typeid(osg::DisplaySettings );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_DisplaySettings(INSTANCE) BACK(osg::DisplaySettings, "osg::DisplaySettings",INSTANCE)
#endif


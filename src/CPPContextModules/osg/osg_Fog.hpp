#ifndef CONTEXT_META_CLASS_osg_Fog_H
#define CONTEXT_META_CLASS_osg_Fog_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/Fog>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_Fog: public MetaClass{
protected:
std::set<osg::ref_ptr<osg::Fog> 				 > _managedinstances;
   public:
osg_Fog():MetaClass( "osg::Fog"){_typeid=&typeid(osg::Fog );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_Fog(INSTANCE) BACK(osg::Fog, "osg::Fog",INSTANCE)
#endif


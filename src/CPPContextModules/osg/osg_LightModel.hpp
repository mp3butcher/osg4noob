#ifndef CONTEXT_META_CLASS_osg_LightModel_H
#define CONTEXT_META_CLASS_osg_LightModel_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/LightModel>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_LightModel: public MetaClass{
protected:
std::set<osg::ref_ptr<osg::LightModel> 				 > _managedinstances;
   public:
osg_LightModel():MetaClass( "osg::LightModel"){_typeid=&typeid(osg::LightModel );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_LightModel(INSTANCE) BACK(osg::LightModel, "osg::LightModel",INSTANCE)
#endif


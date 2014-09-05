#ifndef CONTEXT_META_CLASS_osg_PositionAttitudeTransform_H
#define CONTEXT_META_CLASS_osg_PositionAttitudeTransform_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/PositionAttitudeTransform>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_PositionAttitudeTransform: public MetaClass{
protected:
std::set<osg::ref_ptr<osg::PositionAttitudeTransform> 				 > _managedinstances;
   public:
osg_PositionAttitudeTransform():MetaClass( "osg::PositionAttitudeTransform"){_typeid=&typeid(osg::PositionAttitudeTransform );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_PositionAttitudeTransform(INSTANCE) BACK(osg::PositionAttitudeTransform, "osg::PositionAttitudeTransform",INSTANCE)
#endif


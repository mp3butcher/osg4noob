#ifndef CONTEXT_META_CLASS_osg_EllipsoidModel_H
#define CONTEXT_META_CLASS_osg_EllipsoidModel_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/CoordinateSystemNode>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_EllipsoidModel: public MetaClass{
protected:
std::set<osg::ref_ptr<osg::EllipsoidModel> 				 > _managedinstances;
   public:
osg_EllipsoidModel():MetaClass( "osg::EllipsoidModel"){_typeid=&typeid(osg::EllipsoidModel );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_EllipsoidModel(INSTANCE) BACK(osg::EllipsoidModel, "osg::EllipsoidModel",INSTANCE)
#endif


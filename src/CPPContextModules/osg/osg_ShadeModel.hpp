#ifndef CONTEXT_META_CLASS_osg_ShadeModel_H
#define CONTEXT_META_CLASS_osg_ShadeModel_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/ShadeModel>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_ShadeModel: public MetaClass{
protected:
std::set<osg::ref_ptr<osg::ShadeModel> 				 > _managedinstances;
   public:
osg_ShadeModel():MetaClass( "osg::ShadeModel"){_typeid=&typeid(osg::ShadeModel );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_ShadeModel(INSTANCE) BACK(osg::ShadeModel, "osg::ShadeModel",INSTANCE)
#endif


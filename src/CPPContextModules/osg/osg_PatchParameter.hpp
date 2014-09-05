#ifndef CONTEXT_META_CLASS_osg_PatchParameter_H
#define CONTEXT_META_CLASS_osg_PatchParameter_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/PatchParameter>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_PatchParameter: public MetaClass{
protected:
std::set<osg::ref_ptr<osg::PatchParameter> 				 > _managedinstances;
   public:
osg_PatchParameter():MetaClass( "osg::PatchParameter"){_typeid=&typeid(osg::PatchParameter );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_PatchParameter(INSTANCE) BACK(osg::PatchParameter, "osg::PatchParameter",INSTANCE)
#endif


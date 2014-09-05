#ifndef CONTEXT_META_CLASS_osg_Projection_H
#define CONTEXT_META_CLASS_osg_Projection_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/Projection>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_Projection: public MetaClass{
protected:
std::set<osg::ref_ptr<osg::Projection> 				 > _managedinstances;
   public:
osg_Projection():MetaClass( "osg::Projection"){_typeid=&typeid(osg::Projection );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_Projection(INSTANCE) BACK(osg::Projection, "osg::Projection",INSTANCE)
#endif


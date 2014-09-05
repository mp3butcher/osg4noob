#ifndef CONTEXT_META_CLASS_osg_Material_H
#define CONTEXT_META_CLASS_osg_Material_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/Material>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_Material: public MetaClass{
protected:
std::set<osg::ref_ptr<osg::Material> 				 > _managedinstances;
   public:
osg_Material():MetaClass( "osg::Material"){_typeid=&typeid(osg::Material );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_Material(INSTANCE) BACK(osg::Material, "osg::Material",INSTANCE)
#endif


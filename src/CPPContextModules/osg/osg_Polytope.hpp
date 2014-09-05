#ifndef CONTEXT_META_CLASS_osg_Polytope_H
#define CONTEXT_META_CLASS_osg_Polytope_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/Polytope>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_Polytope: public MetaClass{
protected:
std::set<osg::Polytope* 							 > _managedinstances;
   public:
osg_Polytope():MetaClass( "osg::Polytope"){_typeid=&typeid(osg::Polytope );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_Polytope(INSTANCE) BACK(osg::Polytope, "osg::Polytope",INSTANCE)
#endif


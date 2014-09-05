#ifndef CONTEXT_META_CLASS_osg_Cone_H
#define CONTEXT_META_CLASS_osg_Cone_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/Shape>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_Cone: public MetaClass{
protected:
   public:
osg_Cone():MetaClass( "osg::Cone"){_typeid=&typeid(osg::Cone );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_Cone(INSTANCE) BACK(osg::Cone, "osg::Cone",INSTANCE)
#endif


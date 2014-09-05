#ifndef CONTEXT_META_CLASS_osg_HeightField_H
#define CONTEXT_META_CLASS_osg_HeightField_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/Shape>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_HeightField: public MetaClass{
protected:
   public:
osg_HeightField():MetaClass( "osg::HeightField"){_typeid=&typeid(osg::HeightField );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_HeightField(INSTANCE) BACK(osg::HeightField, "osg::HeightField",INSTANCE)
#endif


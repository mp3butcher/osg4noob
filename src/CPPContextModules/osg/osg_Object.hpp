#ifndef CONTEXT_META_CLASS_osg_Object_H
#define CONTEXT_META_CLASS_osg_Object_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/Object>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_Object: public MetaClass{
protected:
   public:
osg_Object():MetaClass( "osg::Object"){_typeid=&typeid(osg::Object );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_Object(INSTANCE) BACK(osg::Object, "osg::Object",INSTANCE)
#endif


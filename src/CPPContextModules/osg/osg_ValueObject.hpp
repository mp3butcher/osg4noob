#ifndef CONTEXT_META_CLASS_osg_ValueObject_H
#define CONTEXT_META_CLASS_osg_ValueObject_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/ValueObject>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_ValueObject: public MetaClass{
protected:
std::set<osg::ref_ptr<osg::ValueObject> 				 > _managedinstances;
   public:
osg_ValueObject():MetaClass( "osg::ValueObject"){_typeid=&typeid(osg::ValueObject );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_ValueObject(INSTANCE) BACK(osg::ValueObject, "osg::ValueObject",INSTANCE)
#endif


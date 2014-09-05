#ifndef CONTEXT_META_CLASS_osg_ElementBufferObject_H
#define CONTEXT_META_CLASS_osg_ElementBufferObject_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/BufferObject>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_ElementBufferObject: public MetaClass{
protected:
std::set<osg::ref_ptr<osg::ElementBufferObject> 				 > _managedinstances;
   public:
osg_ElementBufferObject():MetaClass( "osg::ElementBufferObject"){_typeid=&typeid(osg::ElementBufferObject );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_ElementBufferObject(INSTANCE) BACK(osg::ElementBufferObject, "osg::ElementBufferObject",INSTANCE)
#endif


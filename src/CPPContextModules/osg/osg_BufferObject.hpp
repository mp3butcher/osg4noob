#ifndef CONTEXT_META_CLASS_osg_BufferObject_H
#define CONTEXT_META_CLASS_osg_BufferObject_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/BufferObject>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_BufferObject: public MetaClass{
protected:
   public:
osg_BufferObject():MetaClass( "osg::BufferObject"){_typeid=&typeid(osg::BufferObject );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_BufferObject(INSTANCE) BACK(osg::BufferObject, "osg::BufferObject",INSTANCE)
#endif


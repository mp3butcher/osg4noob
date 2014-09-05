#ifndef CONTEXT_META_CLASS_osg_PixelBufferObject_H
#define CONTEXT_META_CLASS_osg_PixelBufferObject_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/BufferObject>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_PixelBufferObject: public MetaClass{
protected:
std::set<osg::ref_ptr<osg::PixelBufferObject> 				 > _managedinstances;
   public:
osg_PixelBufferObject():MetaClass( "osg::PixelBufferObject"){_typeid=&typeid(osg::PixelBufferObject );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_PixelBufferObject(INSTANCE) BACK(osg::PixelBufferObject, "osg::PixelBufferObject",INSTANCE)
#endif


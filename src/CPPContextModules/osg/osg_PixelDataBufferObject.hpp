#ifndef CONTEXT_META_CLASS_osg_PixelDataBufferObject_H
#define CONTEXT_META_CLASS_osg_PixelDataBufferObject_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/BufferObject>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_PixelDataBufferObject: public MetaClass{
protected:
std::set<osg::ref_ptr<osg::PixelDataBufferObject> 				 > _managedinstances;
   public:
osg_PixelDataBufferObject():MetaClass( "osg::PixelDataBufferObject"){_typeid=&typeid(osg::PixelDataBufferObject );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_PixelDataBufferObject(INSTANCE) BACK(osg::PixelDataBufferObject, "osg::PixelDataBufferObject",INSTANCE)
#endif


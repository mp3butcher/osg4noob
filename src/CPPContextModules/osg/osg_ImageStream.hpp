#ifndef CONTEXT_META_CLASS_osg_ImageStream_H
#define CONTEXT_META_CLASS_osg_ImageStream_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/ImageStream>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_ImageStream: public MetaClass{
protected:
std::set<osg::ref_ptr<osg::ImageStream> 				 > _managedinstances;
   public:
osg_ImageStream():MetaClass( "osg::ImageStream"){_typeid=&typeid(osg::ImageStream );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_ImageStream(INSTANCE) BACK(osg::ImageStream, "osg::ImageStream",INSTANCE)
#endif


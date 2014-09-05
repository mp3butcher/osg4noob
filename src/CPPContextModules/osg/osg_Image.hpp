#ifndef CONTEXT_META_CLASS_osg_Image_H
#define CONTEXT_META_CLASS_osg_Image_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/Image>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_Image: public MetaClass{
protected:
std::set<osg::ref_ptr<osg::Image> 				 > _managedinstances;
   public:
osg_Image():MetaClass( "osg::Image"){_typeid=&typeid(osg::Image );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_Image(INSTANCE) BACK(osg::Image, "osg::Image",INSTANCE)
#endif


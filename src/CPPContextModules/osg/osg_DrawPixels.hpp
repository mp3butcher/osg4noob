#ifndef CONTEXT_META_CLASS_osg_DrawPixels_H
#define CONTEXT_META_CLASS_osg_DrawPixels_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/DrawPixels>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_DrawPixels: public MetaClass{
protected:
std::set<osg::ref_ptr<osg::DrawPixels> 				 > _managedinstances;
   public:
osg_DrawPixels():MetaClass( "osg::DrawPixels"){_typeid=&typeid(osg::DrawPixels );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_DrawPixels(INSTANCE) BACK(osg::DrawPixels, "osg::DrawPixels",INSTANCE)
#endif


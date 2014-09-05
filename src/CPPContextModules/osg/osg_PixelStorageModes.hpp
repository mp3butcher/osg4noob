#ifndef CONTEXT_META_CLASS_osg_PixelStorageModes_H
#define CONTEXT_META_CLASS_osg_PixelStorageModes_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/GLU>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_PixelStorageModes: public MetaClass{
protected:
   public:
osg_PixelStorageModes():MetaClass( "osg::PixelStorageModes"){_typeid=&typeid(osg::PixelStorageModes );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_PixelStorageModes(INSTANCE) BACK(osg::PixelStorageModes, "osg::PixelStorageModes",INSTANCE)
#endif


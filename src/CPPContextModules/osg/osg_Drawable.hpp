#ifndef CONTEXT_META_CLASS_osg_Drawable_H
#define CONTEXT_META_CLASS_osg_Drawable_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/Drawable>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_Drawable: public MetaClass{
protected:
   public:
osg_Drawable():MetaClass( "osg::Drawable"){_typeid=&typeid(osg::Drawable );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_Drawable(INSTANCE) BACK(osg::Drawable, "osg::Drawable",INSTANCE)
#endif


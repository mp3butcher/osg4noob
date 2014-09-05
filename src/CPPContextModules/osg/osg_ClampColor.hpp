#ifndef CONTEXT_META_CLASS_osg_ClampColor_H
#define CONTEXT_META_CLASS_osg_ClampColor_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/ClampColor>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_ClampColor: public MetaClass{
protected:
std::set<osg::ref_ptr<osg::ClampColor> 				 > _managedinstances;
   public:
osg_ClampColor():MetaClass( "osg::ClampColor"){_typeid=&typeid(osg::ClampColor );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_ClampColor(INSTANCE) BACK(osg::ClampColor, "osg::ClampColor",INSTANCE)
#endif


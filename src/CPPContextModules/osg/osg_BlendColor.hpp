#ifndef CONTEXT_META_CLASS_osg_BlendColor_H
#define CONTEXT_META_CLASS_osg_BlendColor_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/BlendColor>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_BlendColor: public MetaClass{
protected:
std::set<osg::ref_ptr<osg::BlendColor> 				 > _managedinstances;
   public:
osg_BlendColor():MetaClass( "osg::BlendColor"){_typeid=&typeid(osg::BlendColor );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_BlendColor(INSTANCE) BACK(osg::BlendColor, "osg::BlendColor",INSTANCE)
#endif


#ifndef CONTEXT_META_CLASS_osg_TessellationHints_H
#define CONTEXT_META_CLASS_osg_TessellationHints_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/ShapeDrawable>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_TessellationHints: public MetaClass{
protected:
std::set<osg::ref_ptr<osg::TessellationHints> 				 > _managedinstances;
   public:
osg_TessellationHints():MetaClass( "osg::TessellationHints"){_typeid=&typeid(osg::TessellationHints );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_TessellationHints(INSTANCE) BACK(osg::TessellationHints, "osg::TessellationHints",INSTANCE)
#endif


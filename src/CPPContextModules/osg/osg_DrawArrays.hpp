#ifndef CONTEXT_META_CLASS_osg_DrawArrays_H
#define CONTEXT_META_CLASS_osg_DrawArrays_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/PrimitiveSet>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_DrawArrays: public MetaClass{
protected:
std::set<osg::ref_ptr<osg::DrawArrays> 				 > _managedinstances;
   public:
osg_DrawArrays():MetaClass( "osg::DrawArrays"){_typeid=&typeid(osg::DrawArrays );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_DrawArrays(INSTANCE) BACK(osg::DrawArrays, "osg::DrawArrays",INSTANCE)
#endif


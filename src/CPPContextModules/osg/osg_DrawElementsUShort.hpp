#ifndef CONTEXT_META_CLASS_osg_DrawElementsUShort_H
#define CONTEXT_META_CLASS_osg_DrawElementsUShort_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/PrimitiveSet>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_DrawElementsUShort: public MetaClass{
protected:
std::set<osg::ref_ptr<osg::DrawElementsUShort> 				 > _managedinstances;
   public:
osg_DrawElementsUShort():MetaClass( "osg::DrawElementsUShort"){_typeid=&typeid(osg::DrawElementsUShort );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_DrawElementsUShort(INSTANCE) BACK(osg::DrawElementsUShort, "osg::DrawElementsUShort",INSTANCE)
#endif


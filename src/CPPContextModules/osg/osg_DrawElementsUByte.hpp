#ifndef CONTEXT_META_CLASS_osg_DrawElementsUByte_H
#define CONTEXT_META_CLASS_osg_DrawElementsUByte_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/PrimitiveSet>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_DrawElementsUByte: public MetaClass{
protected:
std::set<osg::ref_ptr<osg::DrawElementsUByte> 				 > _managedinstances;
   public:
osg_DrawElementsUByte():MetaClass( "osg::DrawElementsUByte"){_typeid=&typeid(osg::DrawElementsUByte );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_DrawElementsUByte(INSTANCE) BACK(osg::DrawElementsUByte, "osg::DrawElementsUByte",INSTANCE)
#endif


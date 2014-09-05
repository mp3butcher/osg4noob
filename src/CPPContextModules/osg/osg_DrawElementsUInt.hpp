#ifndef CONTEXT_META_CLASS_osg_DrawElementsUInt_H
#define CONTEXT_META_CLASS_osg_DrawElementsUInt_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/PrimitiveSet>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_DrawElementsUInt: public MetaClass{
protected:
std::set<osg::ref_ptr<osg::DrawElementsUInt> 				 > _managedinstances;
   public:
osg_DrawElementsUInt():MetaClass( "osg::DrawElementsUInt"){_typeid=&typeid(osg::DrawElementsUInt );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_DrawElementsUInt(INSTANCE) BACK(osg::DrawElementsUInt, "osg::DrawElementsUInt",INSTANCE)
#endif


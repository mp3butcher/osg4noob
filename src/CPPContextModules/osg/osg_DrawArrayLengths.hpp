#ifndef CONTEXT_META_CLASS_osg_DrawArrayLengths_H
#define CONTEXT_META_CLASS_osg_DrawArrayLengths_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/PrimitiveSet>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_DrawArrayLengths: public MetaClass{
protected:
std::set<osg::ref_ptr<osg::DrawArrayLengths> 				 > _managedinstances;
   public:
osg_DrawArrayLengths():MetaClass( "osg::DrawArrayLengths"){_typeid=&typeid(osg::DrawArrayLengths );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_DrawArrayLengths(INSTANCE) BACK(osg::DrawArrayLengths, "osg::DrawArrayLengths",INSTANCE)
#endif


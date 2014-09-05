#ifndef CONTEXT_META_CLASS_osgUtil_DrawElementTypeSimplifier_H
#define CONTEXT_META_CLASS_osgUtil_DrawElementTypeSimplifier_H

#include "Export.h"
#include <MetaClass.h>
#include <osgUtil/DrawElementTypeSimplifier>

namespace pmoc{
class  METALIBRARY_osgUtil_EXPORT  osgUtil_DrawElementTypeSimplifier: public MetaClass{
protected:
   public:
osgUtil_DrawElementTypeSimplifier():MetaClass( "osgUtil::DrawElementTypeSimplifier"){_typeid=&typeid(osgUtil::DrawElementTypeSimplifier );};
 virtual Instance createInstance();
};
}
#define BACKFromosgUtil_DrawElementTypeSimplifier(INSTANCE) BACK(osgUtil::DrawElementTypeSimplifier, "osgUtil::DrawElementTypeSimplifier",INSTANCE)
#endif


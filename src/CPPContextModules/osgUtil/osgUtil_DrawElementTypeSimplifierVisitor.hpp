#ifndef CONTEXT_META_CLASS_osgUtil_DrawElementTypeSimplifierVisitor_H
#define CONTEXT_META_CLASS_osgUtil_DrawElementTypeSimplifierVisitor_H

#include "Export.h"
#include <MetaClass.h>
#include <osgUtil/DrawElementTypeSimplifier>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osgUtil_EXPORT  osgUtil_DrawElementTypeSimplifierVisitor: public MetaClass{
protected:
   public:
osgUtil_DrawElementTypeSimplifierVisitor():MetaClass( "osgUtil::DrawElementTypeSimplifierVisitor"){_typeid=&typeid(osgUtil::DrawElementTypeSimplifierVisitor );};
 virtual Instance createInstance();
};
}
#define BACKFromosgUtil_DrawElementTypeSimplifierVisitor(INSTANCE) BACK(osgUtil::DrawElementTypeSimplifierVisitor, "osgUtil::DrawElementTypeSimplifierVisitor",INSTANCE)
#endif


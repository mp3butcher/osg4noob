#ifndef CONTEXT_META_CLASS_osgUtil_PickVisitor_H
#define CONTEXT_META_CLASS_osgUtil_PickVisitor_H

#include "Export.h"
#include <MetaClass.h>
#include <osgUtil/IntersectVisitor>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osgUtil_EXPORT  osgUtil_PickVisitor: public MetaClass{
protected:
   public:
osgUtil_PickVisitor():MetaClass( "osgUtil::PickVisitor"){_typeid=&typeid(osgUtil::PickVisitor );};
 virtual Instance createInstance();
};
}
#define BACKFromosgUtil_PickVisitor(INSTANCE) BACK(osgUtil::PickVisitor, "osgUtil::PickVisitor",INSTANCE)
#endif


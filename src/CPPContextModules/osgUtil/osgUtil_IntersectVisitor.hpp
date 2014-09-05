#ifndef CONTEXT_META_CLASS_osgUtil_IntersectVisitor_H
#define CONTEXT_META_CLASS_osgUtil_IntersectVisitor_H

#include "Export.h"
#include <MetaClass.h>
#include <osgUtil/IntersectVisitor>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osgUtil_EXPORT  osgUtil_IntersectVisitor: public MetaClass{
protected:
std::set<osg::ref_ptr<osgUtil::IntersectVisitor> 				 > _managedinstances;
   public:
osgUtil_IntersectVisitor():MetaClass( "osgUtil::IntersectVisitor"){_typeid=&typeid(osgUtil::IntersectVisitor );};
 virtual Instance createInstance();
};
}
#define BACKFromosgUtil_IntersectVisitor(INSTANCE) BACK(osgUtil::IntersectVisitor, "osgUtil::IntersectVisitor",INSTANCE)
#endif


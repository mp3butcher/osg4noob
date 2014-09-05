#ifndef CONTEXT_META_CLASS_osgUtil_IntersectionVisitor_H
#define CONTEXT_META_CLASS_osgUtil_IntersectionVisitor_H

#include "Export.h"
#include <MetaClass.h>
#include <osgUtil/IntersectionVisitor>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osgUtil_EXPORT  osgUtil_IntersectionVisitor: public MetaClass{
protected:
std::set<osg::ref_ptr<osgUtil::IntersectionVisitor> 				 > _managedinstances;
   public:
osgUtil_IntersectionVisitor():MetaClass( "osgUtil::IntersectionVisitor"){_typeid=&typeid(osgUtil::IntersectionVisitor );};
 virtual Instance createInstance();
};
}
#define BACKFromosgUtil_IntersectionVisitor(INSTANCE) BACK(osgUtil::IntersectionVisitor, "osgUtil::IntersectionVisitor",INSTANCE)
#endif


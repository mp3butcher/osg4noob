#ifndef CONTEXT_META_CLASS_osgUtil_CullVisitor_H
#define CONTEXT_META_CLASS_osgUtil_CullVisitor_H

#include "Export.h"
#include <MetaClass.h>
#include <osgUtil/CullVisitor>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osgUtil_EXPORT  osgUtil_CullVisitor: public MetaClass{
protected:
std::set<osg::ref_ptr<osgUtil::CullVisitor> 				 > _managedinstances;
   public:
osgUtil_CullVisitor():MetaClass( "osgUtil::CullVisitor"){_typeid=&typeid(osgUtil::CullVisitor );};
 virtual Instance createInstance();
};
}
#define BACKFromosgUtil_CullVisitor(INSTANCE) BACK(osgUtil::CullVisitor, "osgUtil::CullVisitor",INSTANCE)
#endif


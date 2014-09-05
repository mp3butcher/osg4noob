#ifndef CONTEXT_META_CLASS_osgUtil_UpdateVisitor_H
#define CONTEXT_META_CLASS_osgUtil_UpdateVisitor_H

#include "Export.h"
#include <MetaClass.h>
#include <osgUtil/UpdateVisitor>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osgUtil_EXPORT  osgUtil_UpdateVisitor: public MetaClass{
protected:
std::set<osg::ref_ptr<osgUtil::UpdateVisitor> 				 > _managedinstances;
   public:
osgUtil_UpdateVisitor():MetaClass( "osgUtil::UpdateVisitor"){_typeid=&typeid(osgUtil::UpdateVisitor );};
 virtual Instance createInstance();
};
}
#define BACKFromosgUtil_UpdateVisitor(INSTANCE) BACK(osgUtil::UpdateVisitor, "osgUtil::UpdateVisitor",INSTANCE)
#endif


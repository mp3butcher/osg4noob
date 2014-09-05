#ifndef CONTEXT_META_CLASS_osgUtil_DisplayRequirementsVisitor_H
#define CONTEXT_META_CLASS_osgUtil_DisplayRequirementsVisitor_H

#include "Export.h"
#include <MetaClass.h>
#include <osgUtil/DisplayRequirementsVisitor>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osgUtil_EXPORT  osgUtil_DisplayRequirementsVisitor: public MetaClass{
protected:
std::set<osg::ref_ptr<osgUtil::DisplayRequirementsVisitor> 				 > _managedinstances;
   public:
osgUtil_DisplayRequirementsVisitor():MetaClass( "osgUtil::DisplayRequirementsVisitor"){_typeid=&typeid(osgUtil::DisplayRequirementsVisitor );};
 virtual Instance createInstance();
};
}
#define BACKFromosgUtil_DisplayRequirementsVisitor(INSTANCE) BACK(osgUtil::DisplayRequirementsVisitor, "osgUtil::DisplayRequirementsVisitor",INSTANCE)
#endif


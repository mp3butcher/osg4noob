#ifndef CONTEXT_META_CLASS_osg_ComputeBoundsVisitor_H
#define CONTEXT_META_CLASS_osg_ComputeBoundsVisitor_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/ComputeBoundsVisitor>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_ComputeBoundsVisitor: public MetaClass{
protected:
std::set<osg::ref_ptr<osg::ComputeBoundsVisitor> 				 > _managedinstances;
   public:
osg_ComputeBoundsVisitor():MetaClass( "osg::ComputeBoundsVisitor"){_typeid=&typeid(osg::ComputeBoundsVisitor );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_ComputeBoundsVisitor(INSTANCE) BACK(osg::ComputeBoundsVisitor, "osg::ComputeBoundsVisitor",INSTANCE)
#endif


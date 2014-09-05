#ifndef CONTEXT_META_CLASS_osg_ConstValueVisitor_H
#define CONTEXT_META_CLASS_osg_ConstValueVisitor_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/Array>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_ConstValueVisitor: public MetaClass{
protected:
std::set<osg::ConstValueVisitor* 							 > _managedinstances;
   public:
osg_ConstValueVisitor():MetaClass( "osg::ConstValueVisitor"){_typeid=&typeid(osg::ConstValueVisitor );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_ConstValueVisitor(INSTANCE) BACK(osg::ConstValueVisitor, "osg::ConstValueVisitor",INSTANCE)
#endif


#ifndef CONTEXT_META_CLASS_osg_ConstArrayVisitor_H
#define CONTEXT_META_CLASS_osg_ConstArrayVisitor_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/Array>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_ConstArrayVisitor: public MetaClass{
protected:
std::set<osg::ConstArrayVisitor* 							 > _managedinstances;
   public:
osg_ConstArrayVisitor():MetaClass( "osg::ConstArrayVisitor"){_typeid=&typeid(osg::ConstArrayVisitor );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_ConstArrayVisitor(INSTANCE) BACK(osg::ConstArrayVisitor, "osg::ConstArrayVisitor",INSTANCE)
#endif


#ifndef CONTEXT_META_CLASS_osg_ArrayVisitor_H
#define CONTEXT_META_CLASS_osg_ArrayVisitor_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/Array>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_ArrayVisitor: public MetaClass{
protected:
std::set<osg::ArrayVisitor* 							 > _managedinstances;
   public:
osg_ArrayVisitor():MetaClass( "osg::ArrayVisitor"){_typeid=&typeid(osg::ArrayVisitor );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_ArrayVisitor(INSTANCE) BACK(osg::ArrayVisitor, "osg::ArrayVisitor",INSTANCE)
#endif


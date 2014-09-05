#ifndef CONTEXT_META_CLASS_osg_CollectOccludersVisitor_H
#define CONTEXT_META_CLASS_osg_CollectOccludersVisitor_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/CollectOccludersVisitor>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_CollectOccludersVisitor: public MetaClass{
protected:
std::set<osg::ref_ptr<osg::CollectOccludersVisitor> 				 > _managedinstances;
   public:
osg_CollectOccludersVisitor():MetaClass( "osg::CollectOccludersVisitor"){_typeid=&typeid(osg::CollectOccludersVisitor );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_CollectOccludersVisitor(INSTANCE) BACK(osg::CollectOccludersVisitor, "osg::CollectOccludersVisitor",INSTANCE)
#endif


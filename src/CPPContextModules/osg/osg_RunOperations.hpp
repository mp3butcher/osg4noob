#ifndef CONTEXT_META_CLASS_osg_RunOperations_H
#define CONTEXT_META_CLASS_osg_RunOperations_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/GraphicsThread>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_RunOperations: public MetaClass{
protected:
std::set<osg::ref_ptr<osg::RunOperations> 				 > _managedinstances;
   public:
osg_RunOperations():MetaClass( "osg::RunOperations"){_typeid=&typeid(osg::RunOperations );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_RunOperations(INSTANCE) BACK(osg::RunOperations, "osg::RunOperations",INSTANCE)
#endif


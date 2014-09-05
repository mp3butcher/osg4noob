#ifndef CONTEXT_META_CLASS_osg_ArrayDispatchers_H
#define CONTEXT_META_CLASS_osg_ArrayDispatchers_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/ArrayDispatchers>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_ArrayDispatchers: public MetaClass{
protected:
std::set<osg::ref_ptr<osg::ArrayDispatchers> 				 > _managedinstances;
   public:
osg_ArrayDispatchers():MetaClass( "osg::ArrayDispatchers"){_typeid=&typeid(osg::ArrayDispatchers );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_ArrayDispatchers(INSTANCE) BACK(osg::ArrayDispatchers, "osg::ArrayDispatchers",INSTANCE)
#endif


#ifndef CONTEXT_META_CLASS_osg_Referenced_H
#define CONTEXT_META_CLASS_osg_Referenced_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/Referenced>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_Referenced: public MetaClass{
protected:
std::set<osg::Referenced* 							 > _managedinstances;
   public:
osg_Referenced():MetaClass( "osg::Referenced"){_typeid=&typeid(osg::Referenced );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_Referenced(INSTANCE) BACK(osg::Referenced, "osg::Referenced",INSTANCE)
#endif


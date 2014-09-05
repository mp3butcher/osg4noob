#ifndef CONTEXT_META_CLASS_osg_ApplicationUsage_H
#define CONTEXT_META_CLASS_osg_ApplicationUsage_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/ApplicationUsage>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_ApplicationUsage: public MetaClass{
protected:
std::set<osg::ref_ptr<osg::ApplicationUsage> 				 > _managedinstances;
   public:
osg_ApplicationUsage():MetaClass( "osg::ApplicationUsage"){_typeid=&typeid(osg::ApplicationUsage );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_ApplicationUsage(INSTANCE) BACK(osg::ApplicationUsage, "osg::ApplicationUsage",INSTANCE)
#endif


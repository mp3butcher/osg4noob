#ifndef CONTEXT_META_CLASS_osg_Group_H
#define CONTEXT_META_CLASS_osg_Group_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/Group>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_Group: public MetaClass{
protected:
std::set<osg::ref_ptr<osg::Group> 				 > _managedinstances;
   public:
osg_Group():MetaClass( "osg::Group"){_typeid=&typeid(osg::Group );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_Group(INSTANCE) BACK(osg::Group, "osg::Group",INSTANCE)
#endif


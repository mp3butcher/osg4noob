#ifndef CONTEXT_META_CLASS_osg_Switch_H
#define CONTEXT_META_CLASS_osg_Switch_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/Switch>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_Switch: public MetaClass{
protected:
std::set<osg::ref_ptr<osg::Switch> 				 > _managedinstances;
   public:
osg_Switch():MetaClass( "osg::Switch"){_typeid=&typeid(osg::Switch );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_Switch(INSTANCE) BACK(osg::Switch, "osg::Switch",INSTANCE)
#endif


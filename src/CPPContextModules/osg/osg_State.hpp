#ifndef CONTEXT_META_CLASS_osg_State_H
#define CONTEXT_META_CLASS_osg_State_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/State>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_State: public MetaClass{
protected:
std::set<osg::ref_ptr<osg::State> 				 > _managedinstances;
   public:
osg_State():MetaClass( "osg::State"){_typeid=&typeid(osg::State );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_State(INSTANCE) BACK(osg::State, "osg::State",INSTANCE)
#endif


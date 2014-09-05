#ifndef CONTEXT_META_CLASS_osg_Scissor_H
#define CONTEXT_META_CLASS_osg_Scissor_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/Scissor>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_Scissor: public MetaClass{
protected:
std::set<osg::ref_ptr<osg::Scissor> 				 > _managedinstances;
   public:
osg_Scissor():MetaClass( "osg::Scissor"){_typeid=&typeid(osg::Scissor );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_Scissor(INSTANCE) BACK(osg::Scissor, "osg::Scissor",INSTANCE)
#endif


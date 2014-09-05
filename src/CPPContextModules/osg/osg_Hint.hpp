#ifndef CONTEXT_META_CLASS_osg_Hint_H
#define CONTEXT_META_CLASS_osg_Hint_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/Hint>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_Hint: public MetaClass{
protected:
std::set<osg::ref_ptr<osg::Hint> 				 > _managedinstances;
   public:
osg_Hint():MetaClass( "osg::Hint"){_typeid=&typeid(osg::Hint );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_Hint(INSTANCE) BACK(osg::Hint, "osg::Hint",INSTANCE)
#endif


#ifndef CONTEXT_META_CLASS_osg_Multisample_H
#define CONTEXT_META_CLASS_osg_Multisample_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/Multisample>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_Multisample: public MetaClass{
protected:
std::set<osg::ref_ptr<osg::Multisample> 				 > _managedinstances;
   public:
osg_Multisample():MetaClass( "osg::Multisample"){_typeid=&typeid(osg::Multisample );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_Multisample(INSTANCE) BACK(osg::Multisample, "osg::Multisample",INSTANCE)
#endif


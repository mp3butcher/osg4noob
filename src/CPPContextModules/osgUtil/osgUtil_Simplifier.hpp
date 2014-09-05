#ifndef CONTEXT_META_CLASS_osgUtil_Simplifier_H
#define CONTEXT_META_CLASS_osgUtil_Simplifier_H

#include "Export.h"
#include <MetaClass.h>
#include <osgUtil/Simplifier>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osgUtil_EXPORT  osgUtil_Simplifier: public MetaClass{
protected:
std::set<osg::ref_ptr<osgUtil::Simplifier> 				 > _managedinstances;
   public:
osgUtil_Simplifier():MetaClass( "osgUtil::Simplifier"){_typeid=&typeid(osgUtil::Simplifier );};
 virtual Instance createInstance();
};
}
#define BACKFromosgUtil_Simplifier(INSTANCE) BACK(osgUtil::Simplifier, "osgUtil::Simplifier",INSTANCE)
#endif


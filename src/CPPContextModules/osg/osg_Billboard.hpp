#ifndef CONTEXT_META_CLASS_osg_Billboard_H
#define CONTEXT_META_CLASS_osg_Billboard_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/Billboard>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_Billboard: public MetaClass{
protected:
std::set<osg::ref_ptr<osg::Billboard> 				 > _managedinstances;
   public:
osg_Billboard():MetaClass( "osg::Billboard"){_typeid=&typeid(osg::Billboard );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_Billboard(INSTANCE) BACK(osg::Billboard, "osg::Billboard",INSTANCE)
#endif


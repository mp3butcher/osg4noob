#ifndef CONTEXT_META_CLASS_osg_StateSet_H
#define CONTEXT_META_CLASS_osg_StateSet_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/StateSet>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_StateSet: public MetaClass{
protected:
std::set<osg::ref_ptr<osg::StateSet> 				 > _managedinstances;
   public:
osg_StateSet():MetaClass( "osg::StateSet"){_typeid=&typeid(osg::StateSet );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_StateSet(INSTANCE) BACK(osg::StateSet, "osg::StateSet",INSTANCE)
#endif


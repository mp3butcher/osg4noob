#ifndef CONTEXT_META_CLASS_osg_Geode_H
#define CONTEXT_META_CLASS_osg_Geode_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/Geode>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_Geode: public MetaClass{
protected:
std::set<osg::ref_ptr<osg::Geode> 				 > _managedinstances;
   public:
osg_Geode():MetaClass( "osg::Geode"){_typeid=&typeid(osg::Geode );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_Geode(INSTANCE) BACK(osg::Geode, "osg::Geode",INSTANCE)
#endif


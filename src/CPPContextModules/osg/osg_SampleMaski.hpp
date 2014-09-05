#ifndef CONTEXT_META_CLASS_osg_SampleMaski_H
#define CONTEXT_META_CLASS_osg_SampleMaski_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/SampleMaski>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_SampleMaski: public MetaClass{
protected:
std::set<osg::ref_ptr<osg::SampleMaski> 				 > _managedinstances;
   public:
osg_SampleMaski():MetaClass( "osg::SampleMaski"){_typeid=&typeid(osg::SampleMaski );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_SampleMaski(INSTANCE) BACK(osg::SampleMaski, "osg::SampleMaski",INSTANCE)
#endif


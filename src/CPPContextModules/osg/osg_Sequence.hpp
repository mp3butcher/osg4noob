#ifndef CONTEXT_META_CLASS_osg_Sequence_H
#define CONTEXT_META_CLASS_osg_Sequence_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/Sequence>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_Sequence: public MetaClass{
protected:
std::set<osg::ref_ptr<osg::Sequence> 				 > _managedinstances;
   public:
osg_Sequence():MetaClass( "osg::Sequence"){_typeid=&typeid(osg::Sequence );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_Sequence(INSTANCE) BACK(osg::Sequence, "osg::Sequence",INSTANCE)
#endif


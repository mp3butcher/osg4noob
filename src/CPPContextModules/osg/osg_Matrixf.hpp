#ifndef CONTEXT_META_CLASS_osg_Matrixf_H
#define CONTEXT_META_CLASS_osg_Matrixf_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/Matrixf>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_Matrixf: public MetaClass{
protected:
std::set<osg::Matrixf* 							 > _managedinstances;
   public:
osg_Matrixf():MetaClass( "osg::Matrixf"){_typeid=&typeid(osg::Matrixf );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_Matrixf(INSTANCE) BACK(osg::Matrixf, "osg::Matrixf",INSTANCE)
#endif


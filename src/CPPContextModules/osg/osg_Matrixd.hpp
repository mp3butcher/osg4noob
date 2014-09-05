#ifndef CONTEXT_META_CLASS_osg_Matrixd_H
#define CONTEXT_META_CLASS_osg_Matrixd_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/Matrixd>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_Matrixd: public MetaClass{
protected:
std::set<osg::Matrixd* 							 > _managedinstances;
   public:
osg_Matrixd():MetaClass( "osg::Matrixd"){_typeid=&typeid(osg::Matrixd );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_Matrixd(INSTANCE) BACK(osg::Matrixd, "osg::Matrixd",INSTANCE)
#endif


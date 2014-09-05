#ifndef CONTEXT_META_CLASS_osg_LOD_H
#define CONTEXT_META_CLASS_osg_LOD_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/LOD>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_LOD: public MetaClass{
protected:
std::set<osg::ref_ptr<osg::LOD> 				 > _managedinstances;
   public:
osg_LOD():MetaClass( "osg::LOD"){_typeid=&typeid(osg::LOD );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_LOD(INSTANCE) BACK(osg::LOD, "osg::LOD",INSTANCE)
#endif


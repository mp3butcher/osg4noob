#ifndef CONTEXT_META_CLASS_osg_PagedLOD_H
#define CONTEXT_META_CLASS_osg_PagedLOD_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/PagedLOD>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_PagedLOD: public MetaClass{
protected:
std::set<osg::ref_ptr<osg::PagedLOD> 				 > _managedinstances;
   public:
osg_PagedLOD():MetaClass( "osg::PagedLOD"){_typeid=&typeid(osg::PagedLOD );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_PagedLOD(INSTANCE) BACK(osg::PagedLOD, "osg::PagedLOD",INSTANCE)
#endif


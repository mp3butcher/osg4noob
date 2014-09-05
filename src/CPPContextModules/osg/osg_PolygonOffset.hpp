#ifndef CONTEXT_META_CLASS_osg_PolygonOffset_H
#define CONTEXT_META_CLASS_osg_PolygonOffset_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/PolygonOffset>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_PolygonOffset: public MetaClass{
protected:
std::set<osg::ref_ptr<osg::PolygonOffset> 				 > _managedinstances;
   public:
osg_PolygonOffset():MetaClass( "osg::PolygonOffset"){_typeid=&typeid(osg::PolygonOffset );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_PolygonOffset(INSTANCE) BACK(osg::PolygonOffset, "osg::PolygonOffset",INSTANCE)
#endif


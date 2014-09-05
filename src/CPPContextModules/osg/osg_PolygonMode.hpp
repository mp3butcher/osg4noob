#ifndef CONTEXT_META_CLASS_osg_PolygonMode_H
#define CONTEXT_META_CLASS_osg_PolygonMode_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/PolygonMode>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_PolygonMode: public MetaClass{
protected:
std::set<osg::ref_ptr<osg::PolygonMode> 				 > _managedinstances;
   public:
osg_PolygonMode():MetaClass( "osg::PolygonMode"){_typeid=&typeid(osg::PolygonMode );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_PolygonMode(INSTANCE) BACK(osg::PolygonMode, "osg::PolygonMode",INSTANCE)
#endif


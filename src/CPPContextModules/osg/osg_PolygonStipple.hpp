#ifndef CONTEXT_META_CLASS_osg_PolygonStipple_H
#define CONTEXT_META_CLASS_osg_PolygonStipple_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/PolygonStipple>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_PolygonStipple: public MetaClass{
protected:
std::set<osg::ref_ptr<osg::PolygonStipple> 				 > _managedinstances;
   public:
osg_PolygonStipple():MetaClass( "osg::PolygonStipple"){_typeid=&typeid(osg::PolygonStipple );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_PolygonStipple(INSTANCE) BACK(osg::PolygonStipple, "osg::PolygonStipple",INSTANCE)
#endif


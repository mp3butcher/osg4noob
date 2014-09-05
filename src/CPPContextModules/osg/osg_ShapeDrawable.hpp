#ifndef CONTEXT_META_CLASS_osg_ShapeDrawable_H
#define CONTEXT_META_CLASS_osg_ShapeDrawable_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/ShapeDrawable>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_ShapeDrawable: public MetaClass{
protected:
std::set<osg::ref_ptr<osg::ShapeDrawable> 				 > _managedinstances;
   public:
osg_ShapeDrawable():MetaClass( "osg::ShapeDrawable"){_typeid=&typeid(osg::ShapeDrawable );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_ShapeDrawable(INSTANCE) BACK(osg::ShapeDrawable, "osg::ShapeDrawable",INSTANCE)
#endif


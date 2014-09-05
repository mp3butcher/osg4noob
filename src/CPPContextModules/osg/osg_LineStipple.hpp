#ifndef CONTEXT_META_CLASS_osg_LineStipple_H
#define CONTEXT_META_CLASS_osg_LineStipple_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/LineStipple>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_LineStipple: public MetaClass{
protected:
std::set<osg::ref_ptr<osg::LineStipple> 				 > _managedinstances;
   public:
osg_LineStipple():MetaClass( "osg::LineStipple"){_typeid=&typeid(osg::LineStipple );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_LineStipple(INSTANCE) BACK(osg::LineStipple, "osg::LineStipple",INSTANCE)
#endif


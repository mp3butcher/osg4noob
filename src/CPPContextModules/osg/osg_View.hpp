#ifndef CONTEXT_META_CLASS_osg_View_H
#define CONTEXT_META_CLASS_osg_View_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/View>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_View: public MetaClass{
protected:
std::set<osg::ref_ptr<osg::View> 				 > _managedinstances;
   public:
osg_View():MetaClass( "osg::View"){_typeid=&typeid(osg::View );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_View(INSTANCE) BACK(osg::View, "osg::View",INSTANCE)
#endif


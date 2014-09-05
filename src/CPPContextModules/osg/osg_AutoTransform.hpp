#ifndef CONTEXT_META_CLASS_osg_AutoTransform_H
#define CONTEXT_META_CLASS_osg_AutoTransform_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/AutoTransform>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_AutoTransform: public MetaClass{
protected:
std::set<osg::ref_ptr<osg::AutoTransform> 				 > _managedinstances;
   public:
osg_AutoTransform():MetaClass( "osg::AutoTransform"){_typeid=&typeid(osg::AutoTransform );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_AutoTransform(INSTANCE) BACK(osg::AutoTransform, "osg::AutoTransform",INSTANCE)
#endif


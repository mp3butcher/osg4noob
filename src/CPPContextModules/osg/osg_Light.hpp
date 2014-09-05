#ifndef CONTEXT_META_CLASS_osg_Light_H
#define CONTEXT_META_CLASS_osg_Light_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/Light>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_Light: public MetaClass{
protected:
std::set<osg::ref_ptr<osg::Light> 				 > _managedinstances;
   public:
osg_Light():MetaClass( "osg::Light"){_typeid=&typeid(osg::Light );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_Light(INSTANCE) BACK(osg::Light, "osg::Light",INSTANCE)
#endif


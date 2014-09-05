#ifndef CONTEXT_META_CLASS_osg_BlendFunc_H
#define CONTEXT_META_CLASS_osg_BlendFunc_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/BlendFunc>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_BlendFunc: public MetaClass{
protected:
std::set<osg::ref_ptr<osg::BlendFunc> 				 > _managedinstances;
   public:
osg_BlendFunc():MetaClass( "osg::BlendFunc"){_typeid=&typeid(osg::BlendFunc );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_BlendFunc(INSTANCE) BACK(osg::BlendFunc, "osg::BlendFunc",INSTANCE)
#endif


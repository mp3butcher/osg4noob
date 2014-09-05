#ifndef CONTEXT_META_CLASS_osg_AlphaFunc_H
#define CONTEXT_META_CLASS_osg_AlphaFunc_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/AlphaFunc>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_AlphaFunc: public MetaClass{
protected:
std::set<osg::ref_ptr<osg::AlphaFunc> 				 > _managedinstances;
   public:
osg_AlphaFunc():MetaClass( "osg::AlphaFunc"){_typeid=&typeid(osg::AlphaFunc );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_AlphaFunc(INSTANCE) BACK(osg::AlphaFunc, "osg::AlphaFunc",INSTANCE)
#endif


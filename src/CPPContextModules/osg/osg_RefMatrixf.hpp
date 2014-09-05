#ifndef CONTEXT_META_CLASS_osg_RefMatrixf_H
#define CONTEXT_META_CLASS_osg_RefMatrixf_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/Matrixf>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_RefMatrixf: public MetaClass{
protected:
std::set<osg::ref_ptr<osg::RefMatrixf> 				 > _managedinstances;
   public:
osg_RefMatrixf():MetaClass( "osg::RefMatrixf"){_typeid=&typeid(osg::RefMatrixf );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_RefMatrixf(INSTANCE) BACK(osg::RefMatrixf, "osg::RefMatrixf",INSTANCE)
#endif


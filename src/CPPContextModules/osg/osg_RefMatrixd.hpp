#ifndef CONTEXT_META_CLASS_osg_RefMatrixd_H
#define CONTEXT_META_CLASS_osg_RefMatrixd_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/Matrixd>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_RefMatrixd: public MetaClass{
protected:
std::set<osg::ref_ptr<osg::RefMatrixd> 				 > _managedinstances;
   public:
osg_RefMatrixd():MetaClass( "osg::RefMatrixd"){_typeid=&typeid(osg::RefMatrixd );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_RefMatrixd(INSTANCE) BACK(osg::RefMatrixd, "osg::RefMatrixd",INSTANCE)
#endif


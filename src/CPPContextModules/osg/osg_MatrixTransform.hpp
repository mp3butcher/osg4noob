#ifndef CONTEXT_META_CLASS_osg_MatrixTransform_H
#define CONTEXT_META_CLASS_osg_MatrixTransform_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/MatrixTransform>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_MatrixTransform: public MetaClass{
protected:
std::set<osg::ref_ptr<osg::MatrixTransform> 				 > _managedinstances;
   public:
osg_MatrixTransform():MetaClass( "osg::MatrixTransform"){_typeid=&typeid(osg::MatrixTransform );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_MatrixTransform(INSTANCE) BACK(osg::MatrixTransform, "osg::MatrixTransform",INSTANCE)
#endif


#ifndef CONTEXT_META_CLASS_osg_ColorMatrix_H
#define CONTEXT_META_CLASS_osg_ColorMatrix_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/ColorMatrix>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_ColorMatrix: public MetaClass{
protected:
std::set<osg::ref_ptr<osg::ColorMatrix> 				 > _managedinstances;
   public:
osg_ColorMatrix():MetaClass( "osg::ColorMatrix"){_typeid=&typeid(osg::ColorMatrix );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_ColorMatrix(INSTANCE) BACK(osg::ColorMatrix, "osg::ColorMatrix",INSTANCE)
#endif


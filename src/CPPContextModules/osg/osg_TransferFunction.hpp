#ifndef CONTEXT_META_CLASS_osg_TransferFunction_H
#define CONTEXT_META_CLASS_osg_TransferFunction_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/TransferFunction>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_TransferFunction: public MetaClass{
protected:
std::set<osg::ref_ptr<osg::TransferFunction> 				 > _managedinstances;
   public:
osg_TransferFunction():MetaClass( "osg::TransferFunction"){_typeid=&typeid(osg::TransferFunction );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_TransferFunction(INSTANCE) BACK(osg::TransferFunction, "osg::TransferFunction",INSTANCE)
#endif


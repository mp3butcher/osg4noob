#ifndef CONTEXT_META_CLASS_osg_TransferFunction1D_H
#define CONTEXT_META_CLASS_osg_TransferFunction1D_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/TransferFunction>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_TransferFunction1D: public MetaClass{
protected:
std::set<osg::ref_ptr<osg::TransferFunction1D> 				 > _managedinstances;
   public:
osg_TransferFunction1D():MetaClass( "osg::TransferFunction1D"){_typeid=&typeid(osg::TransferFunction1D );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_TransferFunction1D(INSTANCE) BACK(osg::TransferFunction1D, "osg::TransferFunction1D",INSTANCE)
#endif


#ifndef CONTEXT_META_CLASS_osg_ClampedLinearCostFunction1D_H
#define CONTEXT_META_CLASS_osg_ClampedLinearCostFunction1D_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/GraphicsCostEstimator>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_ClampedLinearCostFunction1D: public MetaClass{
protected:
   public:
osg_ClampedLinearCostFunction1D():MetaClass( "osg::ClampedLinearCostFunction1D"){_typeid=&typeid(osg::ClampedLinearCostFunction1D );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_ClampedLinearCostFunction1D(INSTANCE) BACK(osg::ClampedLinearCostFunction1D, "osg::ClampedLinearCostFunction1D",INSTANCE)
#endif


#ifndef CONTEXT_META_CLASS_osg_ProgramCostEstimator_H
#define CONTEXT_META_CLASS_osg_ProgramCostEstimator_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/GraphicsCostEstimator>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_ProgramCostEstimator: public MetaClass{
protected:
std::set<osg::ref_ptr<osg::ProgramCostEstimator> 				 > _managedinstances;
   public:
osg_ProgramCostEstimator():MetaClass( "osg::ProgramCostEstimator"){_typeid=&typeid(osg::ProgramCostEstimator );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_ProgramCostEstimator(INSTANCE) BACK(osg::ProgramCostEstimator, "osg::ProgramCostEstimator",INSTANCE)
#endif


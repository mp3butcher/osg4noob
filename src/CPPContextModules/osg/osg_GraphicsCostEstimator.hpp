#ifndef CONTEXT_META_CLASS_osg_GraphicsCostEstimator_H
#define CONTEXT_META_CLASS_osg_GraphicsCostEstimator_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/GraphicsCostEstimator>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_GraphicsCostEstimator: public MetaClass{
protected:
std::set<osg::ref_ptr<osg::GraphicsCostEstimator> 				 > _managedinstances;
   public:
osg_GraphicsCostEstimator():MetaClass( "osg::GraphicsCostEstimator"){_typeid=&typeid(osg::GraphicsCostEstimator );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_GraphicsCostEstimator(INSTANCE) BACK(osg::GraphicsCostEstimator, "osg::GraphicsCostEstimator",INSTANCE)
#endif


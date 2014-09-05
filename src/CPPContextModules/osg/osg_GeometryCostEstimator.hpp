#ifndef CONTEXT_META_CLASS_osg_GeometryCostEstimator_H
#define CONTEXT_META_CLASS_osg_GeometryCostEstimator_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/GraphicsCostEstimator>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_GeometryCostEstimator: public MetaClass{
protected:
std::set<osg::ref_ptr<osg::GeometryCostEstimator> 				 > _managedinstances;
   public:
osg_GeometryCostEstimator():MetaClass( "osg::GeometryCostEstimator"){_typeid=&typeid(osg::GeometryCostEstimator );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_GeometryCostEstimator(INSTANCE) BACK(osg::GeometryCostEstimator, "osg::GeometryCostEstimator",INSTANCE)
#endif


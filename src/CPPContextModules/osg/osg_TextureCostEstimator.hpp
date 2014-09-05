#ifndef CONTEXT_META_CLASS_osg_TextureCostEstimator_H
#define CONTEXT_META_CLASS_osg_TextureCostEstimator_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/GraphicsCostEstimator>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_TextureCostEstimator: public MetaClass{
protected:
std::set<osg::ref_ptr<osg::TextureCostEstimator> 				 > _managedinstances;
   public:
osg_TextureCostEstimator():MetaClass( "osg::TextureCostEstimator"){_typeid=&typeid(osg::TextureCostEstimator );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_TextureCostEstimator(INSTANCE) BACK(osg::TextureCostEstimator, "osg::TextureCostEstimator",INSTANCE)
#endif


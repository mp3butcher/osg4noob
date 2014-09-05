#ifndef CONTEXT_META_CLASS_osgUtil_StateGraph_H
#define CONTEXT_META_CLASS_osgUtil_StateGraph_H

#include "Export.h"
#include <MetaClass.h>
#include <osgUtil/StateGraph>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osgUtil_EXPORT  osgUtil_StateGraph: public MetaClass{
protected:
std::set<osg::ref_ptr<osgUtil::StateGraph> 				 > _managedinstances;
   public:
osgUtil_StateGraph():MetaClass( "osgUtil::StateGraph"){_typeid=&typeid(osgUtil::StateGraph );};
 virtual Instance createInstance();
};
}
#define BACKFromosgUtil_StateGraph(INSTANCE) BACK(osgUtil::StateGraph, "osgUtil::StateGraph",INSTANCE)
#endif


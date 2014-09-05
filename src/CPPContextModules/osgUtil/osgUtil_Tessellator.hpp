#ifndef CONTEXT_META_CLASS_osgUtil_Tessellator_H
#define CONTEXT_META_CLASS_osgUtil_Tessellator_H

#include "Export.h"
#include <MetaClass.h>
#include <osgUtil/Tessellator>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osgUtil_EXPORT  osgUtil_Tessellator: public MetaClass{
protected:
std::set<osg::ref_ptr<osgUtil::Tessellator> 				 > _managedinstances;
   public:
osgUtil_Tessellator():MetaClass( "osgUtil::Tessellator"){_typeid=&typeid(osgUtil::Tessellator );};
 virtual Instance createInstance();
};
}
#define BACKFromosgUtil_Tessellator(INSTANCE) BACK(osgUtil::Tessellator, "osgUtil::Tessellator",INSTANCE)
#endif


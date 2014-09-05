#ifndef CONTEXT_META_CLASS_osg_Texture2DArray_H
#define CONTEXT_META_CLASS_osg_Texture2DArray_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/Texture2DArray>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_Texture2DArray: public MetaClass{
protected:
std::set<osg::ref_ptr<osg::Texture2DArray> 				 > _managedinstances;
   public:
osg_Texture2DArray():MetaClass( "osg::Texture2DArray"){_typeid=&typeid(osg::Texture2DArray );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_Texture2DArray(INSTANCE) BACK(osg::Texture2DArray, "osg::Texture2DArray",INSTANCE)
#endif


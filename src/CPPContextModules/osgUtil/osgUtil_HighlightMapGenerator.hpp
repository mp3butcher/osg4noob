#ifndef CONTEXT_META_CLASS_osgUtil_HighlightMapGenerator_H
#define CONTEXT_META_CLASS_osgUtil_HighlightMapGenerator_H

#include "Export.h"
#include <MetaClass.h>
#include <osgUtil/HighlightMapGenerator>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osgUtil_EXPORT  osgUtil_HighlightMapGenerator: public MetaClass{
protected:
   public:
osgUtil_HighlightMapGenerator():MetaClass( "osgUtil::HighlightMapGenerator"){_typeid=&typeid(osgUtil::HighlightMapGenerator );};
 virtual Instance createInstance();
};
}
#define BACKFromosgUtil_HighlightMapGenerator(INSTANCE) BACK(osgUtil::HighlightMapGenerator, "osgUtil::HighlightMapGenerator",INSTANCE)
#endif


#ifndef CONTEXT_META_CLASS_osg_Stats_H
#define CONTEXT_META_CLASS_osg_Stats_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/Stats>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_Stats: public MetaClass{
protected:
   public:
osg_Stats():MetaClass( "osg::Stats"){_typeid=&typeid(osg::Stats );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_Stats(INSTANCE) BACK(osg::Stats, "osg::Stats",INSTANCE)
#endif


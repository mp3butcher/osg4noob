#ifndef CONTEXT_META_CLASS_osg_ArgumentParser_H
#define CONTEXT_META_CLASS_osg_ArgumentParser_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/ArgumentParser>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_ArgumentParser: public MetaClass{
protected:
   public:
osg_ArgumentParser():MetaClass( "osg::ArgumentParser"){_typeid=&typeid(osg::ArgumentParser );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_ArgumentParser(INSTANCE) BACK(osg::ArgumentParser, "osg::ArgumentParser",INSTANCE)
#endif


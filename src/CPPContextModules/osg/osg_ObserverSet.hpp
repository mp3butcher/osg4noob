#ifndef CONTEXT_META_CLASS_osg_ObserverSet_H
#define CONTEXT_META_CLASS_osg_ObserverSet_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/Observer>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_ObserverSet: public MetaClass{
protected:
   public:
osg_ObserverSet():MetaClass( "osg::ObserverSet"){_typeid=&typeid(osg::ObserverSet );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_ObserverSet(INSTANCE) BACK(osg::ObserverSet, "osg::ObserverSet",INSTANCE)
#endif


#ifndef CONTEXT_META_CLASS_osg_RefBlock_H
#define CONTEXT_META_CLASS_osg_RefBlock_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/OperationThread>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_RefBlock: public MetaClass{
protected:
std::set<osg::ref_ptr<osg::RefBlock> 				 > _managedinstances;
   public:
osg_RefBlock():MetaClass( "osg::RefBlock"){_typeid=&typeid(osg::RefBlock );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_RefBlock(INSTANCE) BACK(osg::RefBlock, "osg::RefBlock",INSTANCE)
#endif


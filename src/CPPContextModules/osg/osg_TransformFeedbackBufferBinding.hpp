#ifndef CONTEXT_META_CLASS_osg_TransformFeedbackBufferBinding_H
#define CONTEXT_META_CLASS_osg_TransformFeedbackBufferBinding_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/BufferIndexBinding>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_TransformFeedbackBufferBinding: public MetaClass{
protected:
std::set<osg::ref_ptr<osg::TransformFeedbackBufferBinding> 				 > _managedinstances;
   public:
osg_TransformFeedbackBufferBinding():MetaClass( "osg::TransformFeedbackBufferBinding"){_typeid=&typeid(osg::TransformFeedbackBufferBinding );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_TransformFeedbackBufferBinding(INSTANCE) BACK(osg::TransformFeedbackBufferBinding, "osg::TransformFeedbackBufferBinding",INSTANCE)
#endif


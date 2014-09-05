#ifndef CONTEXT_META_CLASS_osg_AudioStream_H
#define CONTEXT_META_CLASS_osg_AudioStream_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/AudioStream>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_AudioStream: public MetaClass{
protected:
   public:
osg_AudioStream():MetaClass( "osg::AudioStream"){_typeid=&typeid(osg::AudioStream );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_AudioStream(INSTANCE) BACK(osg::AudioStream, "osg::AudioStream",INSTANCE)
#endif


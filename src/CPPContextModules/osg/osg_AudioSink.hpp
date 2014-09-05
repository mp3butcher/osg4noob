#ifndef CONTEXT_META_CLASS_osg_AudioSink_H
#define CONTEXT_META_CLASS_osg_AudioSink_H

#include "Export.h"
#include <MetaClass.h>
#include <osg/AudioStream>
#include <osg/ref_ptr>

namespace pmoc{
class  METALIBRARY_osg_EXPORT  osg_AudioSink: public MetaClass{
protected:
   public:
osg_AudioSink():MetaClass( "osg::AudioSink"){_typeid=&typeid(osg::AudioSink );};
 virtual Instance createInstance();
};
}
#define BACKFromosg_AudioSink(INSTANCE) BACK(osg::AudioSink, "osg::AudioSink",INSTANCE)
#endif


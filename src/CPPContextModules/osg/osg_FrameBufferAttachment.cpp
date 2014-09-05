#include "osg_FrameBufferAttachment.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/FrameBufferObject>

using namespace std;
using namespace pmoc;
	  Instance osg_FrameBufferAttachment::createInstance(){
osg::FrameBufferAttachment* realinstance							;
realinstance= new osg::FrameBufferAttachment()	 				;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance  									));}

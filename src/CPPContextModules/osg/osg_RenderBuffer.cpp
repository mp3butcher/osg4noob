#include "osg_RenderBuffer.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/FrameBufferObject>
#include <osg/ref_ptr>

using namespace std;
using namespace pmoc;
	  Instance osg_RenderBuffer::createInstance(){
osg::ref_ptr<osg::RenderBuffer> realinstance				;
realinstance = new osg::RenderBuffer ()					;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance.get()								));}

#include "osg_FrameBufferObject.hpp"
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
	  Instance osg_FrameBufferObject::createInstance(){
osg::ref_ptr<osg::FrameBufferObject> realinstance				;
realinstance = new osg::FrameBufferObject ()					;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance.get()								));}

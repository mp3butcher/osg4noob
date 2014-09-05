#include "osg_PixelBufferObject.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/BufferObject>
#include <osg/ref_ptr>

using namespace std;
using namespace pmoc;
	  Instance osg_PixelBufferObject::createInstance(){
osg::ref_ptr<osg::PixelBufferObject> realinstance				;
realinstance = new osg::PixelBufferObject ()					;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance.get()								));}

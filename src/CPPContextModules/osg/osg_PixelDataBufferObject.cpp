#include "osg_PixelDataBufferObject.hpp"
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
	  Instance osg_PixelDataBufferObject::createInstance(){
osg::ref_ptr<osg::PixelDataBufferObject> realinstance				;
realinstance = new osg::PixelDataBufferObject ()					;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance.get()								));}

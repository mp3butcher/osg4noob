#include "osg_UniformBufferObject.hpp"
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
	  Instance osg_UniformBufferObject::createInstance(){
osg::ref_ptr<osg::UniformBufferObject> realinstance				;
realinstance = new osg::UniformBufferObject ()					;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance.get()								));}

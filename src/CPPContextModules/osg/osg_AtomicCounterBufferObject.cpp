#include "osg_AtomicCounterBufferObject.hpp"
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
	  Instance osg_AtomicCounterBufferObject::createInstance(){
osg::ref_ptr<osg::AtomicCounterBufferObject> realinstance				;
realinstance = new osg::AtomicCounterBufferObject ()					;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance.get()								));}

#include "osg_VertexBufferObject.hpp"
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
	  Instance osg_VertexBufferObject::createInstance(){
osg::ref_ptr<osg::VertexBufferObject> realinstance				;
realinstance = new osg::VertexBufferObject ()					;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance.get()								));}

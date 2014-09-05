#include "osg_UniformBufferBinding.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/BufferIndexBinding>
#include <osg/ref_ptr>

using namespace std;
using namespace pmoc;
	  Instance osg_UniformBufferBinding::createInstance(){
osg::ref_ptr<osg::UniformBufferBinding> realinstance				;
realinstance = new osg::UniformBufferBinding ()					;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance.get()								));}

#include "osg_AtomicCounterBufferBinding.hpp"
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
	  Instance osg_AtomicCounterBufferBinding::createInstance(){
osg::ref_ptr<osg::AtomicCounterBufferBinding> realinstance				;
realinstance = new osg::AtomicCounterBufferBinding ()					;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance.get()								));}

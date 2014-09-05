#include "osg_GraphicsThread.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/GraphicsThread>
#include <osg/ref_ptr>

using namespace std;
using namespace pmoc;
	  Instance osg_GraphicsThread::createInstance(){
osg::ref_ptr<osg::GraphicsThread> realinstance				;
realinstance = new osg::GraphicsThread ()					;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance.get()								));}

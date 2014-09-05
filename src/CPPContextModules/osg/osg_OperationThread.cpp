#include "osg_OperationThread.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/OperationThread>
#include <osg/ref_ptr>

using namespace std;
using namespace pmoc;
	  Instance osg_OperationThread::createInstance(){
osg::ref_ptr<osg::OperationThread> realinstance				;
realinstance = new osg::OperationThread ()					;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance.get()								));}

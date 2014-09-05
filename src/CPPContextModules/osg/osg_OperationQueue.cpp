#include "osg_OperationQueue.hpp"
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
	  Instance osg_OperationQueue::createInstance(){
osg::ref_ptr<osg::OperationQueue> realinstance				;
realinstance = new osg::OperationQueue ()					;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance.get()								));}

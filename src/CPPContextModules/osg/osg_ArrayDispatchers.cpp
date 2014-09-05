#include "osg_ArrayDispatchers.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/ArrayDispatchers>
#include <osg/ref_ptr>

using namespace std;
using namespace pmoc;
	  Instance osg_ArrayDispatchers::createInstance(){
osg::ref_ptr<osg::ArrayDispatchers> realinstance				;
realinstance = new osg::ArrayDispatchers ()					;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance.get()								));}

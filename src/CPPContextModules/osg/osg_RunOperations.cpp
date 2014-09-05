#include "osg_RunOperations.hpp"
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
	  Instance osg_RunOperations::createInstance(){
osg::ref_ptr<osg::RunOperations> realinstance				;
realinstance = new osg::RunOperations ()					;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance.get()								));}

#include "osgUtil_IncrementalCompileOperation.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osgUtil/IncrementalCompileOperation>
#include <osg/ref_ptr>

using namespace std;
using namespace pmoc;
	  Instance osgUtil_IncrementalCompileOperation::createInstance(){
osg::ref_ptr<osgUtil::IncrementalCompileOperation> realinstance				;
realinstance = new osgUtil::IncrementalCompileOperation ()					;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance.get()								));}

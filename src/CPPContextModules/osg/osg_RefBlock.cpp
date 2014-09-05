#include "osg_RefBlock.hpp"
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
	  Instance osg_RefBlock::createInstance(){
osg::ref_ptr<osg::RefBlock> realinstance				;
realinstance = new osg::RefBlock ()					;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance.get()								));}

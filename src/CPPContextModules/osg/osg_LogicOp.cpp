#include "osg_LogicOp.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/LogicOp>
#include <osg/ref_ptr>

using namespace std;
using namespace pmoc;
	  Instance osg_LogicOp::createInstance(){
osg::ref_ptr<osg::LogicOp> realinstance				;
realinstance = new osg::LogicOp ()					;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance.get()								));}

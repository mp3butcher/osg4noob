#include "osg_CopyOp.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/CopyOp>

using namespace std;
using namespace pmoc;
	  Instance osg_CopyOp::createInstance(){
osg::CopyOp* realinstance							;
realinstance= new osg::CopyOp()	 				;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance  									));}

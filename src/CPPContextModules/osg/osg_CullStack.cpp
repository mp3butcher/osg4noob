#include "osg_CullStack.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/CullStack>

using namespace std;
using namespace pmoc;
	  Instance osg_CullStack::createInstance(){
osg::CullStack* realinstance							;
realinstance= new osg::CullStack()	 				;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance  									));}

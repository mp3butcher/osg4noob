#include "osg_Timer.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/Timer>

using namespace std;
using namespace pmoc;
	  Instance osg_Timer::createInstance(){
osg::Timer* realinstance							;
realinstance= new osg::Timer()	 				;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance  									));}

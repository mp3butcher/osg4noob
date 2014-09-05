#include "osgUtil_Statistics.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osgUtil/Statistics>

using namespace std;
using namespace pmoc;
	  Instance osgUtil_Statistics::createInstance(){
osgUtil::Statistics* realinstance							;
realinstance= new osgUtil::Statistics()	 				;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance  									));}

#include "osgUtil_Optimizer.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osgUtil/Optimizer>

using namespace std;
using namespace pmoc;
	  Instance osgUtil_Optimizer::createInstance(){
osgUtil::Optimizer* realinstance							;
realinstance= new osgUtil::Optimizer()	 				;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance  									));}

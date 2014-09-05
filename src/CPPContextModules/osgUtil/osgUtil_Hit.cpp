#include "osgUtil_Hit.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osgUtil/IntersectVisitor>

using namespace std;
using namespace pmoc;
	  Instance osgUtil_Hit::createInstance(){
osgUtil::Hit* realinstance							;
realinstance= new osgUtil::Hit()	 				;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance  									));}

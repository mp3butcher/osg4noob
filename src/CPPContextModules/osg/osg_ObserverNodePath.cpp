#include "osg_ObserverNodePath.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/ObserverNodePath>

using namespace std;
using namespace pmoc;
	  Instance osg_ObserverNodePath::createInstance(){
osg::ObserverNodePath* realinstance							;
realinstance= new osg::ObserverNodePath()	 				;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance  									));}

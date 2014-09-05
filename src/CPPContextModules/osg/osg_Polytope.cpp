#include "osg_Polytope.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/Polytope>

using namespace std;
using namespace pmoc;
	  Instance osg_Polytope::createInstance(){
osg::Polytope* realinstance							;
realinstance= new osg::Polytope()	 				;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance  									));}

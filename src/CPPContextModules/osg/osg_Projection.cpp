#include "osg_Projection.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/Projection>
#include <osg/ref_ptr>

using namespace std;
using namespace pmoc;
	  Instance osg_Projection::createInstance(){
osg::ref_ptr<osg::Projection> realinstance				;
realinstance = new osg::Projection ()					;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance.get()								));}

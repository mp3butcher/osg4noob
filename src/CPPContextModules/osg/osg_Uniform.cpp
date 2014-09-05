#include "osg_Uniform.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/Uniform>
#include <osg/ref_ptr>

using namespace std;
using namespace pmoc;
	  Instance osg_Uniform::createInstance(){
osg::ref_ptr<osg::Uniform> realinstance				;
realinstance = new osg::Uniform ()					;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance.get()								));}

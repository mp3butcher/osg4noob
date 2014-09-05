#include "osg_PatchParameter.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/PatchParameter>
#include <osg/ref_ptr>

using namespace std;
using namespace pmoc;
	  Instance osg_PatchParameter::createInstance(){
osg::ref_ptr<osg::PatchParameter> realinstance				;
realinstance = new osg::PatchParameter ()					;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance.get()								));}

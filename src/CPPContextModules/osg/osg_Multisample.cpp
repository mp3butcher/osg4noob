#include "osg_Multisample.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/Multisample>
#include <osg/ref_ptr>

using namespace std;
using namespace pmoc;
	  Instance osg_Multisample::createInstance(){
osg::ref_ptr<osg::Multisample> realinstance				;
realinstance = new osg::Multisample ()					;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance.get()								));}

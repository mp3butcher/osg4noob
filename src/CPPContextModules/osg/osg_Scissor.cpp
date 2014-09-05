#include "osg_Scissor.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/Scissor>
#include <osg/ref_ptr>

using namespace std;
using namespace pmoc;
	  Instance osg_Scissor::createInstance(){
osg::ref_ptr<osg::Scissor> realinstance				;
realinstance = new osg::Scissor ()					;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance.get()								));}

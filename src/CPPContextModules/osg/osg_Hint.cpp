#include "osg_Hint.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/Hint>
#include <osg/ref_ptr>

using namespace std;
using namespace pmoc;
	  Instance osg_Hint::createInstance(){
osg::ref_ptr<osg::Hint> realinstance				;
realinstance = new osg::Hint ()					;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance.get()								));}

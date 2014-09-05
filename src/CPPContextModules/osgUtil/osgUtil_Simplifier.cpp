#include "osgUtil_Simplifier.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osgUtil/Simplifier>
#include <osg/ref_ptr>

using namespace std;
using namespace pmoc;
	  Instance osgUtil_Simplifier::createInstance(){
osg::ref_ptr<osgUtil::Simplifier> realinstance				;
realinstance = new osgUtil::Simplifier ()					;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance.get()								));}

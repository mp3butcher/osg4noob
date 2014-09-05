#include "osgUtil_TangentSpaceGenerator.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osgUtil/TangentSpaceGenerator>
#include <osg/ref_ptr>

using namespace std;
using namespace pmoc;
	  Instance osgUtil_TangentSpaceGenerator::createInstance(){
osg::ref_ptr<osgUtil::TangentSpaceGenerator> realinstance				;
realinstance = new osgUtil::TangentSpaceGenerator ()					;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance.get()								));}

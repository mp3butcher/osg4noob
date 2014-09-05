#include "osgUtil_ReflectionMapGenerator.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osgUtil/ReflectionMapGenerator>
#include <osg/ref_ptr>

using namespace std;
using namespace pmoc;
	  Instance osgUtil_ReflectionMapGenerator::createInstance(){
osg::ref_ptr<osgUtil::ReflectionMapGenerator> realinstance				;
realinstance = new osgUtil::ReflectionMapGenerator ()					;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance.get()								));}

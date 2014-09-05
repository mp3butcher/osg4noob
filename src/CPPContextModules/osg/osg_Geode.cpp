#include "osg_Geode.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/Geode>
#include <osg/ref_ptr>

using namespace std;
using namespace pmoc;
	  Instance osg_Geode::createInstance(){
osg::ref_ptr<osg::Geode> realinstance				;
realinstance = new osg::Geode ()					;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance.get()								));}

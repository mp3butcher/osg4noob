#include "osg_Transform.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/Transform>
#include <osg/ref_ptr>

using namespace std;
using namespace pmoc;
	  Instance osg_Transform::createInstance(){
osg::ref_ptr<osg::Transform> realinstance				;
realinstance = new osg::Transform ()					;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance.get()								));}

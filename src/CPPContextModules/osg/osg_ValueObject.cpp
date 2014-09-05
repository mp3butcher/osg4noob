#include "osg_ValueObject.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/ValueObject>
#include <osg/ref_ptr>

using namespace std;
using namespace pmoc;
	  Instance osg_ValueObject::createInstance(){
osg::ref_ptr<osg::ValueObject> realinstance				;
realinstance = new osg::ValueObject ()					;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance.get()								));}

#include "osg_Group.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/Group>
#include <osg/ref_ptr>

using namespace std;
using namespace pmoc;
	  Instance osg_Group::createInstance(){
osg::ref_ptr<osg::Group> realinstance				;
realinstance = new osg::Group ()					;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance.get()								));}

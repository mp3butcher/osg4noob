#include "osg_Node.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/Node>
#include <osg/ref_ptr>

using namespace std;
using namespace pmoc;
	  Instance osg_Node::createInstance(){
osg::ref_ptr<osg::Node> realinstance				;
realinstance = new osg::Node ()					;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance.get()								));}

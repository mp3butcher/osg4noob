#include "osg_CoordinateSystemNode.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/CoordinateSystemNode>
#include <osg/ref_ptr>

using namespace std;
using namespace pmoc;
	  Instance osg_CoordinateSystemNode::createInstance(){
osg::ref_ptr<osg::CoordinateSystemNode> realinstance				;
realinstance = new osg::CoordinateSystemNode ()					;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance.get()								));}

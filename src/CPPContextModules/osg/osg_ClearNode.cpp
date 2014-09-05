#include "osg_ClearNode.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/ClearNode>
#include <osg/ref_ptr>

using namespace std;
using namespace pmoc;
	  Instance osg_ClearNode::createInstance(){
osg::ref_ptr<osg::ClearNode> realinstance				;
realinstance = new osg::ClearNode ()					;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance.get()								));}

#include "osg_ClipNode.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/ClipNode>
#include <osg/ref_ptr>

using namespace std;
using namespace pmoc;
	  Instance osg_ClipNode::createInstance(){
osg::ref_ptr<osg::ClipNode> realinstance				;
realinstance = new osg::ClipNode ()					;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance.get()								));}

#include "osg_ProxyNode.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/ProxyNode>
#include <osg/ref_ptr>

using namespace std;
using namespace pmoc;
	  Instance osg_ProxyNode::createInstance(){
osg::ref_ptr<osg::ProxyNode> realinstance				;
realinstance = new osg::ProxyNode ()					;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance.get()								));}

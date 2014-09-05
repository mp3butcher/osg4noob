#include "osg_OccluderNode.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/OccluderNode>
#include <osg/ref_ptr>

using namespace std;
using namespace pmoc;
	  Instance osg_OccluderNode::createInstance(){
osg::ref_ptr<osg::OccluderNode> realinstance				;
realinstance = new osg::OccluderNode ()					;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance.get()								));}

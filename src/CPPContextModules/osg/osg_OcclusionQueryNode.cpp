#include "osg_OcclusionQueryNode.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/OcclusionQueryNode>
#include <osg/ref_ptr>

using namespace std;
using namespace pmoc;
	  Instance osg_OcclusionQueryNode::createInstance(){
osg::ref_ptr<osg::OcclusionQueryNode> realinstance				;
realinstance = new osg::OcclusionQueryNode ()					;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance.get()								));}

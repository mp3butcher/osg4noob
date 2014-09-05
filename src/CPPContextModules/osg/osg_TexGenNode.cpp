#include "osg_TexGenNode.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/TexGenNode>
#include <osg/ref_ptr>

using namespace std;
using namespace pmoc;
	  Instance osg_TexGenNode::createInstance(){
osg::ref_ptr<osg::TexGenNode> realinstance				;
realinstance = new osg::TexGenNode ()					;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance.get()								));}

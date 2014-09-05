#include "osg_NodeVisitor.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/NodeVisitor>
#include <osg/ref_ptr>

using namespace std;
using namespace pmoc;
	  Instance osg_NodeVisitor::createInstance(){
osg::ref_ptr<osg::NodeVisitor> realinstance				;
realinstance = new osg::NodeVisitor ()					;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance.get()								));}

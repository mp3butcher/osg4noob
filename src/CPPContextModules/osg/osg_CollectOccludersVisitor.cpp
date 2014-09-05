#include "osg_CollectOccludersVisitor.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/CollectOccludersVisitor>
#include <osg/ref_ptr>

using namespace std;
using namespace pmoc;
	  Instance osg_CollectOccludersVisitor::createInstance(){
osg::ref_ptr<osg::CollectOccludersVisitor> realinstance				;
realinstance = new osg::CollectOccludersVisitor ()					;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance.get()								));}

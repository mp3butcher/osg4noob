#include "osgUtil_DisplayRequirementsVisitor.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osgUtil/DisplayRequirementsVisitor>
#include <osg/ref_ptr>

using namespace std;
using namespace pmoc;
	  Instance osgUtil_DisplayRequirementsVisitor::createInstance(){
osg::ref_ptr<osgUtil::DisplayRequirementsVisitor> realinstance				;
realinstance = new osgUtil::DisplayRequirementsVisitor ()					;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance.get()								));}

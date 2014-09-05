#include "osgUtil_StatsVisitor.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osgUtil/Statistics>
#include <osg/ref_ptr>

using namespace std;
using namespace pmoc;
	  Instance osgUtil_StatsVisitor::createInstance(){
osg::ref_ptr<osgUtil::StatsVisitor> realinstance				;
realinstance = new osgUtil::StatsVisitor ()					;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance.get()								));}

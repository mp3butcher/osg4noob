#include "osgUtil_SmoothingVisitor.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osgUtil/SmoothingVisitor>
#include <osg/ref_ptr>

using namespace std;
using namespace pmoc;
	  Instance osgUtil_SmoothingVisitor::createInstance(){
osg::ref_ptr<osgUtil::SmoothingVisitor> realinstance				;
realinstance = new osgUtil::SmoothingVisitor ()					;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance.get()								));}

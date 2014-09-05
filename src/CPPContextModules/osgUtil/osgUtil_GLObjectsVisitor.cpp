#include "osgUtil_GLObjectsVisitor.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osgUtil/GLObjectsVisitor>
#include <osg/ref_ptr>

using namespace std;
using namespace pmoc;
	  Instance osgUtil_GLObjectsVisitor::createInstance(){
osg::ref_ptr<osgUtil::GLObjectsVisitor> realinstance				;
realinstance = new osgUtil::GLObjectsVisitor ()					;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance.get()								));}

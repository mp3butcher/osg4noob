#include "osgUtil_IntersectionVisitor.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osgUtil/IntersectionVisitor>
#include <osg/ref_ptr>

using namespace std;
using namespace pmoc;
	  Instance osgUtil_IntersectionVisitor::createInstance(){
osg::ref_ptr<osgUtil::IntersectionVisitor> realinstance				;
realinstance = new osgUtil::IntersectionVisitor ()					;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance.get()								));}

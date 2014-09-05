#include "osgUtil_IntersectVisitor.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osgUtil/IntersectVisitor>
#include <osg/ref_ptr>

using namespace std;
using namespace pmoc;
	  Instance osgUtil_IntersectVisitor::createInstance(){
osg::ref_ptr<osgUtil::IntersectVisitor> realinstance				;
realinstance = new osgUtil::IntersectVisitor ()					;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance.get()								));}

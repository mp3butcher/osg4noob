#include "osgUtil_TriStripVisitor.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osgUtil/TriStripVisitor>
#include <osg/ref_ptr>

using namespace std;
using namespace pmoc;
	  Instance osgUtil_TriStripVisitor::createInstance(){
osg::ref_ptr<osgUtil::TriStripVisitor> realinstance				;
realinstance = new osgUtil::TriStripVisitor ()					;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance.get()								));}

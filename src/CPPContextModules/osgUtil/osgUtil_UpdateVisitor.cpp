#include "osgUtil_UpdateVisitor.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osgUtil/UpdateVisitor>
#include <osg/ref_ptr>

using namespace std;
using namespace pmoc;
	  Instance osgUtil_UpdateVisitor::createInstance(){
osg::ref_ptr<osgUtil::UpdateVisitor> realinstance				;
realinstance = new osgUtil::UpdateVisitor ()					;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance.get()								));}

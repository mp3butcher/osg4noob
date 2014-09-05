#include "osg_ComputeBoundsVisitor.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/ComputeBoundsVisitor>
#include <osg/ref_ptr>

using namespace std;
using namespace pmoc;
	  Instance osg_ComputeBoundsVisitor::createInstance(){
osg::ref_ptr<osg::ComputeBoundsVisitor> realinstance				;
realinstance = new osg::ComputeBoundsVisitor ()					;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance.get()								));}

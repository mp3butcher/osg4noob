#include "osgUtil_GLObjectsOperation.hpp"
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
	  Instance osgUtil_GLObjectsOperation::createInstance(){
osg::ref_ptr<osgUtil::GLObjectsOperation> realinstance				;
realinstance = new osgUtil::GLObjectsOperation ()					;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance.get()								));}
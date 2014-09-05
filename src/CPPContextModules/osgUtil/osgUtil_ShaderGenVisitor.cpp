#include "osgUtil_ShaderGenVisitor.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osgUtil/ShaderGen>
#include <osg/ref_ptr>

using namespace std;
using namespace pmoc;
	  Instance osgUtil_ShaderGenVisitor::createInstance(){
osg::ref_ptr<osgUtil::ShaderGenVisitor> realinstance				;
realinstance = new osgUtil::ShaderGenVisitor ()					;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance.get()								));}

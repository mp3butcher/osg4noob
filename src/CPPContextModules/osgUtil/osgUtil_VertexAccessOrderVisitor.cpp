#include "osgUtil_VertexAccessOrderVisitor.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osgUtil/MeshOptimizers>
#include <osg/ref_ptr>

using namespace std;
using namespace pmoc;
	  Instance osgUtil_VertexAccessOrderVisitor::createInstance(){
osg::ref_ptr<osgUtil::VertexAccessOrderVisitor> realinstance				;
realinstance = new osgUtil::VertexAccessOrderVisitor ()					;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance.get()								));}

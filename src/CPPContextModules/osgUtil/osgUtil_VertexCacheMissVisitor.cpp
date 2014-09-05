#include "osgUtil_VertexCacheMissVisitor.hpp"
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
	  Instance osgUtil_VertexCacheMissVisitor::createInstance(){
osg::ref_ptr<osgUtil::VertexCacheMissVisitor> realinstance				;
realinstance = new osgUtil::VertexCacheMissVisitor ()					;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance.get()								));}

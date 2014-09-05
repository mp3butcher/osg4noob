#include "osgUtil_VertexCacheVisitor.hpp"
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
	  Instance osgUtil_VertexCacheVisitor::createInstance(){
osg::ref_ptr<osgUtil::VertexCacheVisitor> realinstance				;
realinstance = new osgUtil::VertexCacheVisitor ()					;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance.get()								));}

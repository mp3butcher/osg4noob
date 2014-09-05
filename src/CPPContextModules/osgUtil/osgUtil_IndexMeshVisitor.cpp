#include "osgUtil_IndexMeshVisitor.hpp"
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
	  Instance osgUtil_IndexMeshVisitor::createInstance(){
osg::ref_ptr<osgUtil::IndexMeshVisitor> realinstance				;
realinstance = new osgUtil::IndexMeshVisitor ()					;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance.get()								));}

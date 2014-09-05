#include "osgUtil_DelaunayTriangulator.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osgUtil/DelaunayTriangulator>
#include <osg/ref_ptr>

using namespace std;
using namespace pmoc;
	  Instance osgUtil_DelaunayTriangulator::createInstance(){
osg::ref_ptr<osgUtil::DelaunayTriangulator> realinstance				;
realinstance = new osgUtil::DelaunayTriangulator ()					;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance.get()								));}

#include "osg_QueryGeometry.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/OcclusionQueryNode>
#include <osg/ref_ptr>

using namespace std;
using namespace pmoc;
	  Instance osg_QueryGeometry::createInstance(){
osg::ref_ptr<osg::QueryGeometry> realinstance				;
realinstance = new osg::QueryGeometry ()					;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance.get()								));}

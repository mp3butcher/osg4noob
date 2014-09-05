#include "osgUtil_DelaunayConstraint.hpp"
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
	  Instance osgUtil_DelaunayConstraint::createInstance(){
osg::ref_ptr<osgUtil::DelaunayConstraint> realinstance				;
realinstance = new osgUtil::DelaunayConstraint ()					;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance.get()								));}

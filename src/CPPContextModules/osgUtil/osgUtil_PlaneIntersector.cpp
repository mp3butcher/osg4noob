#include "osgUtil_PlaneIntersector.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osgUtil/PlaneIntersector>
#include <osg/ref_ptr>

using namespace std;
using namespace pmoc;
	  Instance osgUtil_PlaneIntersector::createInstance(){
 std::cerr<<"osgUtil::PlaneIntersector not instanciable"<<std::endl;
return(Instance(0, 0)); 
}

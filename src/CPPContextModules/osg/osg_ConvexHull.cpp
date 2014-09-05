#include "osg_ConvexHull.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/Shape>
#include <osg/ref_ptr>

using namespace std;
using namespace pmoc;
	  Instance osg_ConvexHull::createInstance(){
 std::cerr<<"osg::ConvexHull not instanciable"<<std::endl;
return(Instance(0, 0)); 
}

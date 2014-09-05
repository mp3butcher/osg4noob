#include "osgUtil_PolytopeIntersector.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osgUtil/PolytopeIntersector>
#include <osg/ref_ptr>

using namespace std;
using namespace pmoc;
	  Instance osgUtil_PolytopeIntersector::createInstance(){
 std::cerr<<"osgUtil::PolytopeIntersector not instanciable"<<std::endl;
return(Instance(0, 0)); 
}

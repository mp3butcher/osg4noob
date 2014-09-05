#include "osgUtil_GeometryCollector.hpp"
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
	  Instance osgUtil_GeometryCollector::createInstance(){
 std::cerr<<"osgUtil::GeometryCollector not instanciable"<<std::endl;
return(Instance(0, 0)); 
}

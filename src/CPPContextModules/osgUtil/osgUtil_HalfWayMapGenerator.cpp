#include "osgUtil_HalfWayMapGenerator.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osgUtil/HalfWayMapGenerator>
#include <osg/ref_ptr>

using namespace std;
using namespace pmoc;
	  Instance osgUtil_HalfWayMapGenerator::createInstance(){
 std::cerr<<"osgUtil::HalfWayMapGenerator not instanciable"<<std::endl;
return(Instance(0, 0)); 
}

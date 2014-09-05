#include "osg_Cylinder.hpp"
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
	  Instance osg_Cylinder::createInstance(){
 std::cerr<<"osg::Cylinder not instanciable"<<std::endl;
return(Instance(0, 0)); 
}

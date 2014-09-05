#include "osg_CompositeShape.hpp"
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
	  Instance osg_CompositeShape::createInstance(){
 std::cerr<<"osg::CompositeShape not instanciable"<<std::endl;
return(Instance(0, 0)); 
}

#include "osg_Array.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/Array>
#include <osg/ref_ptr>

using namespace std;
using namespace pmoc;
	  Instance osg_Array::createInstance(){
 std::cerr<<"osg::Array not instanciable"<<std::endl;
return(Instance(0, 0)); 
}

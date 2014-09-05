#include "osg_IndexArray.hpp"
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
	  Instance osg_IndexArray::createInstance(){
 std::cerr<<"osg::IndexArray not instanciable"<<std::endl;
return(Instance(0, 0)); 
}

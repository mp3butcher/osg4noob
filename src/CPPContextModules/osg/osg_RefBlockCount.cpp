#include "osg_RefBlockCount.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/OperationThread>
#include <osg/ref_ptr>

using namespace std;
using namespace pmoc;
	  Instance osg_RefBlockCount::createInstance(){
 std::cerr<<"osg::RefBlockCount not instanciable"<<std::endl;
return(Instance(0, 0)); 
}

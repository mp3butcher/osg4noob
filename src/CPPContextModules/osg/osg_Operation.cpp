#include "osg_Operation.hpp"
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
	  Instance osg_Operation::createInstance(){
 std::cerr<<"osg::Operation not instanciable"<<std::endl;
return(Instance(0, 0)); 
}

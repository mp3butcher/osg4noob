#include "osg_GraphicsOperation.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/GraphicsThread>
#include <osg/ref_ptr>

using namespace std;
using namespace pmoc;
	  Instance osg_GraphicsOperation::createInstance(){
 std::cerr<<"osg::GraphicsOperation not instanciable"<<std::endl;
return(Instance(0, 0)); 
}

#include "osg_BlockAndFlushOperation.hpp"
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
	  Instance osg_BlockAndFlushOperation::createInstance(){
 std::cerr<<"osg::BlockAndFlushOperation not instanciable"<<std::endl;
return(Instance(0, 0)); 
}
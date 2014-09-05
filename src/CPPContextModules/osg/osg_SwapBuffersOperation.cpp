#include "osg_SwapBuffersOperation.hpp"
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
	  Instance osg_SwapBuffersOperation::createInstance(){
 std::cerr<<"osg::SwapBuffersOperation not instanciable"<<std::endl;
return(Instance(0, 0)); 
}

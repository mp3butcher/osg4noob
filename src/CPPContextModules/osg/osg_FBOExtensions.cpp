#include "osg_FBOExtensions.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/FrameBufferObject>
#include <osg/ref_ptr>

using namespace std;
using namespace pmoc;
	  Instance osg_FBOExtensions::createInstance(){
 std::cerr<<"osg::FBOExtensions not instanciable"<<std::endl;
return(Instance(0, 0)); 
}

#include "osg_GraphicsContext.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/GraphicsContext>
#include <osg/ref_ptr>

using namespace std;
using namespace pmoc;
	  Instance osg_GraphicsContext::createInstance(){
 std::cerr<<"osg::GraphicsContext not instanciable"<<std::endl;
return(Instance(0, 0)); 
}

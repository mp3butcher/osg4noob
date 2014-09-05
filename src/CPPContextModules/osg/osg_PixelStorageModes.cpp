#include "osg_PixelStorageModes.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/GLU>

using namespace std;
using namespace pmoc;
	  Instance osg_PixelStorageModes::createInstance(){
 std::cerr<<"osg::PixelStorageModes not instanciable"<<std::endl;
return(Instance(0, 0)); 
}

#include "osg_EndOfDynamicDrawBlock.hpp"
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
	  Instance osg_EndOfDynamicDrawBlock::createInstance(){
 std::cerr<<"osg::EndOfDynamicDrawBlock not instanciable"<<std::endl;
return(Instance(0, 0)); 
}

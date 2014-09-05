#include "osgUtil_StateToCompile.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osgUtil/IncrementalCompileOperation>
#include <osg/ref_ptr>

using namespace std;
using namespace pmoc;
	  Instance osgUtil_StateToCompile::createInstance(){
 std::cerr<<"osgUtil::StateToCompile not instanciable"<<std::endl;
return(Instance(0, 0)); 
}

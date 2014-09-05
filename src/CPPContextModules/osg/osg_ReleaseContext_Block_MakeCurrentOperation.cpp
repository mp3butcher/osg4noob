#include "osg_ReleaseContext_Block_MakeCurrentOperation.hpp"
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
	  Instance osg_ReleaseContext_Block_MakeCurrentOperation::createInstance(){
 std::cerr<<"osg::ReleaseContext_Block_MakeCurrentOperation not instanciable"<<std::endl;
return(Instance(0, 0)); 
}

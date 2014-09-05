#include "osg_BufferIndexBinding.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/BufferIndexBinding>
#include <osg/ref_ptr>

using namespace std;
using namespace pmoc;
	  Instance osg_BufferIndexBinding::createInstance(){
 std::cerr<<"osg::BufferIndexBinding not instanciable"<<std::endl;
return(Instance(0, 0)); 
}

#include "osg_BufferData.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/BufferObject>
#include <osg/ref_ptr>

using namespace std;
using namespace pmoc;
	  Instance osg_BufferData::createInstance(){
 std::cerr<<"osg::BufferData not instanciable"<<std::endl;
return(Instance(0, 0)); 
}

#include "osg_BufferObject.hpp"
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
	  Instance osg_BufferObject::createInstance(){
 std::cerr<<"osg::BufferObject not instanciable"<<std::endl;
return(Instance(0, 0)); 
}

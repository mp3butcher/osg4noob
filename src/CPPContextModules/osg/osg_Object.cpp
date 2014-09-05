#include "osg_Object.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/Object>
#include <osg/ref_ptr>

using namespace std;
using namespace pmoc;
	  Instance osg_Object::createInstance(){
 std::cerr<<"osg::Object not instanciable"<<std::endl;
return(Instance(0, 0)); 
}

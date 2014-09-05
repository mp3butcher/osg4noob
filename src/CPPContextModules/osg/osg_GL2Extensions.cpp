#include "osg_GL2Extensions.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/GL2Extensions>
#include <osg/ref_ptr>

using namespace std;
using namespace pmoc;
	  Instance osg_GL2Extensions::createInstance(){
 std::cerr<<"osg::GL2Extensions not instanciable"<<std::endl;
return(Instance(0, 0)); 
}

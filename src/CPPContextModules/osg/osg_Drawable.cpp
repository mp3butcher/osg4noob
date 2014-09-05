#include "osg_Drawable.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/Drawable>
#include <osg/ref_ptr>

using namespace std;
using namespace pmoc;
	  Instance osg_Drawable::createInstance(){
 std::cerr<<"osg::Drawable not instanciable"<<std::endl;
return(Instance(0, 0)); 
}

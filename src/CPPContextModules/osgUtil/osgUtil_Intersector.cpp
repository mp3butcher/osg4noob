#include "osgUtil_Intersector.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osgUtil/IntersectionVisitor>
#include <osg/ref_ptr>

using namespace std;
using namespace pmoc;
	  Instance osgUtil_Intersector::createInstance(){
 std::cerr<<"osgUtil::Intersector not instanciable"<<std::endl;
return(Instance(0, 0)); 
}

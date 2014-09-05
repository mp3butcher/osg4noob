#include "osgUtil_PickVisitor.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osgUtil/IntersectVisitor>
#include <osg/ref_ptr>

using namespace std;
using namespace pmoc;
	  Instance osgUtil_PickVisitor::createInstance(){
 std::cerr<<"osgUtil::PickVisitor not instanciable"<<std::endl;
return(Instance(0, 0)); 
}

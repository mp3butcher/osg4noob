#include "osgUtil_PrintVisitor.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osgUtil/PrintVisitor>
#include <osg/ref_ptr>

using namespace std;
using namespace pmoc;
	  Instance osgUtil_PrintVisitor::createInstance(){
 std::cerr<<"osgUtil::PrintVisitor not instanciable"<<std::endl;
return(Instance(0, 0)); 
}

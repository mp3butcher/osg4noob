#include "osg_NodeAcceptOp.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/NodeVisitor>

using namespace std;
using namespace pmoc;
	  Instance osg_NodeAcceptOp::createInstance(){
 std::cerr<<"osg::NodeAcceptOp not instanciable"<<std::endl;
return(Instance(0, 0)); 
}

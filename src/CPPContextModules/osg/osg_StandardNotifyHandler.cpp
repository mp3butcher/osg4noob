#include "osg_StandardNotifyHandler.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/Notify>
#include <osg/ref_ptr>

using namespace std;
using namespace pmoc;
	  Instance osg_StandardNotifyHandler::createInstance(){
 std::cerr<<"osg::StandardNotifyHandler not instanciable"<<std::endl;
return(Instance(0, 0)); 
}

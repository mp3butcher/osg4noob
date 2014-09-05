#include "osg_ScriptEngine.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/ScriptEngine>
#include <osg/ref_ptr>

using namespace std;
using namespace pmoc;
	  Instance osg_ScriptEngine::createInstance(){
 std::cerr<<"osg::ScriptEngine not instanciable"<<std::endl;
return(Instance(0, 0)); 
}

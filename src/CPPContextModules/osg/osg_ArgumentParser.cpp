#include "osg_ArgumentParser.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/ArgumentParser>

using namespace std;
using namespace pmoc;
	  Instance osg_ArgumentParser::createInstance(){
 std::cerr<<"osg::ArgumentParser not instanciable"<<std::endl;
return(Instance(0, 0)); 
}

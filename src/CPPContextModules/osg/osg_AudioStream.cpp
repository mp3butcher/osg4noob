#include "osg_AudioStream.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/AudioStream>
#include <osg/ref_ptr>

using namespace std;
using namespace pmoc;
	  Instance osg_AudioStream::createInstance(){
 std::cerr<<"osg::AudioStream not instanciable"<<std::endl;
return(Instance(0, 0)); 
}

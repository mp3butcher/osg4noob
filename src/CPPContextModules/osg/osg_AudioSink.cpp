#include "osg_AudioSink.hpp"
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
	  Instance osg_AudioSink::createInstance(){
 std::cerr<<"osg::AudioSink not instanciable"<<std::endl;
return(Instance(0, 0)); 
}

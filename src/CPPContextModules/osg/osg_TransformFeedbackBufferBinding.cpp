#include "osg_TransformFeedbackBufferBinding.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/BufferIndexBinding>
#include <osg/ref_ptr>

using namespace std;
using namespace pmoc;
	  Instance osg_TransformFeedbackBufferBinding::createInstance(){
osg::ref_ptr<osg::TransformFeedbackBufferBinding> realinstance				;
realinstance = new osg::TransformFeedbackBufferBinding ()					;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance.get()								));}

#include "osg_TestResult.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/OcclusionQueryNode>
#include <osg/ref_ptr>

using namespace std;
using namespace pmoc;
	  Instance osg_TestResult::createInstance(){
osg::ref_ptr<osg::TestResult> realinstance				;
realinstance = new osg::TestResult ()					;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance.get()								));}

#include "osg_GLBeginEndAdapter.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/GLBeginEndAdapter>

using namespace std;
using namespace pmoc;
	  Instance osg_GLBeginEndAdapter::createInstance(){
osg::GLBeginEndAdapter* realinstance							;
realinstance= new osg::GLBeginEndAdapter()	 				;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance  									));}

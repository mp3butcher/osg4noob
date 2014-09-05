#include "osg_CullFace.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/CullFace>
#include <osg/ref_ptr>

using namespace std;
using namespace pmoc;
	  Instance osg_CullFace::createInstance(){
osg::ref_ptr<osg::CullFace> realinstance				;
realinstance = new osg::CullFace ()					;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance.get()								));}

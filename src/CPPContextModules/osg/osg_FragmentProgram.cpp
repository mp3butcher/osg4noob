#include "osg_FragmentProgram.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/FragmentProgram>
#include <osg/ref_ptr>

using namespace std;
using namespace pmoc;
	  Instance osg_FragmentProgram::createInstance(){
osg::ref_ptr<osg::FragmentProgram> realinstance				;
realinstance = new osg::FragmentProgram ()					;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance.get()								));}

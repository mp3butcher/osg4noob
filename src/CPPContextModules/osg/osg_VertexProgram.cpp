#include "osg_VertexProgram.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/VertexProgram>
#include <osg/ref_ptr>

using namespace std;
using namespace pmoc;
	  Instance osg_VertexProgram::createInstance(){
osg::ref_ptr<osg::VertexProgram> realinstance				;
realinstance = new osg::VertexProgram ()					;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance.get()								));}

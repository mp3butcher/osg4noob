#include "osg_TexMat.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/TexMat>
#include <osg/ref_ptr>

using namespace std;
using namespace pmoc;
	  Instance osg_TexMat::createInstance(){
osg::ref_ptr<osg::TexMat> realinstance				;
realinstance = new osg::TexMat ()					;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance.get()								));}

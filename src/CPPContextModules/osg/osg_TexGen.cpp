#include "osg_TexGen.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/TexGen>
#include <osg/ref_ptr>

using namespace std;
using namespace pmoc;
	  Instance osg_TexGen::createInstance(){
osg::ref_ptr<osg::TexGen> realinstance				;
realinstance = new osg::TexGen ()					;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance.get()								));}
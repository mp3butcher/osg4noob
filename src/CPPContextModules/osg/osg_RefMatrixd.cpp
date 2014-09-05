#include "osg_RefMatrixd.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/Matrixd>
#include <osg/ref_ptr>

using namespace std;
using namespace pmoc;
	  Instance osg_RefMatrixd::createInstance(){
osg::ref_ptr<osg::RefMatrixd> realinstance				;
realinstance = new osg::RefMatrixd ()					;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance.get()								));}

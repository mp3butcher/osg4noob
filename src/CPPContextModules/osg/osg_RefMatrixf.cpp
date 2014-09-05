#include "osg_RefMatrixf.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/Matrixf>
#include <osg/ref_ptr>

using namespace std;
using namespace pmoc;
	  Instance osg_RefMatrixf::createInstance(){
osg::ref_ptr<osg::RefMatrixf> realinstance				;
realinstance = new osg::RefMatrixf ()					;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance.get()								));}

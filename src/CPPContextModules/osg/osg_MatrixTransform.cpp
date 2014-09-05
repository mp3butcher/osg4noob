#include "osg_MatrixTransform.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/MatrixTransform>
#include <osg/ref_ptr>

using namespace std;
using namespace pmoc;
	  Instance osg_MatrixTransform::createInstance(){
osg::ref_ptr<osg::MatrixTransform> realinstance				;
realinstance = new osg::MatrixTransform ()					;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance.get()								));}

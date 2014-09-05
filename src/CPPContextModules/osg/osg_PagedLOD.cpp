#include "osg_PagedLOD.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/PagedLOD>
#include <osg/ref_ptr>

using namespace std;
using namespace pmoc;
	  Instance osg_PagedLOD::createInstance(){
osg::ref_ptr<osg::PagedLOD> realinstance				;
realinstance = new osg::PagedLOD ()					;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance.get()								));}

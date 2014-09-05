#include "osg_LOD.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/LOD>
#include <osg/ref_ptr>

using namespace std;
using namespace pmoc;
	  Instance osg_LOD::createInstance(){
osg::ref_ptr<osg::LOD> realinstance				;
realinstance = new osg::LOD ()					;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance.get()								));}

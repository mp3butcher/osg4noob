#include "osg_Vec4i.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/Vec4i>

using namespace std;
using namespace pmoc;
	  Instance osg_Vec4i::createInstance(){
osg::Vec4i* realinstance							;
realinstance= new osg::Vec4i()	 				;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance  									));}

#include "osg_Vec4d.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/Vec4d>

using namespace std;
using namespace pmoc;
	  Instance osg_Vec4d::createInstance(){
osg::Vec4d* realinstance							;
realinstance= new osg::Vec4d()	 				;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance  									));}

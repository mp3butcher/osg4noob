#include "osg_Vec4f.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/Vec4f>

using namespace std;
using namespace pmoc;
	  Instance osg_Vec4f::createInstance(){
osg::Vec4f* realinstance							;
realinstance= new osg::Vec4f()	 				;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance  									));}

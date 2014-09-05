#include "osg_Vec4ui.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/Vec4ui>

using namespace std;
using namespace pmoc;
	  Instance osg_Vec4ui::createInstance(){
osg::Vec4ui* realinstance							;
realinstance= new osg::Vec4ui()	 				;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance  									));}

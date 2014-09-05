#include "osg_Matrixf.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/Matrixf>

using namespace std;
using namespace pmoc;
	  Instance osg_Matrixf::createInstance(){
osg::Matrixf* realinstance							;
realinstance= new osg::Matrixf()	 				;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance  									));}

#include "osg_Matrixd.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/Matrixd>

using namespace std;
using namespace pmoc;
	  Instance osg_Matrixd::createInstance(){
osg::Matrixd* realinstance							;
realinstance= new osg::Matrixd()	 				;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance  									));}

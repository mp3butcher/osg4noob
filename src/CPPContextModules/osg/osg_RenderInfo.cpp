#include "osg_RenderInfo.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/RenderInfo>

using namespace std;
using namespace pmoc;
	  Instance osg_RenderInfo::createInstance(){
osg::RenderInfo* realinstance							;
realinstance= new osg::RenderInfo()	 				;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance  									));}

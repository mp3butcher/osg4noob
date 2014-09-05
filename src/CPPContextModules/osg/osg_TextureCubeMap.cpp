#include "osg_TextureCubeMap.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/TextureCubeMap>
#include <osg/ref_ptr>

using namespace std;
using namespace pmoc;
	  Instance osg_TextureCubeMap::createInstance(){
osg::ref_ptr<osg::TextureCubeMap> realinstance				;
realinstance = new osg::TextureCubeMap ()					;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance.get()								));}

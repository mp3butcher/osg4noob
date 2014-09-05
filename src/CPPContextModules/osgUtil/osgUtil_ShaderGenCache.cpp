#include "osgUtil_ShaderGenCache.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osgUtil/ShaderGen>
#include <osg/ref_ptr>

using namespace std;
using namespace pmoc;
	  Instance osgUtil_ShaderGenCache::createInstance(){
osg::ref_ptr<osgUtil::ShaderGenCache> realinstance				;
realinstance = new osgUtil::ShaderGenCache ()					;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance.get()								));}

#include "osg_Texture2DArray.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/Texture2DArray>
#include <osg/ref_ptr>

using namespace std;
using namespace pmoc;
	  Instance osg_Texture2DArray::createInstance(){
osg::ref_ptr<osg::Texture2DArray> realinstance				;
realinstance = new osg::Texture2DArray ()					;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance.get()								));}

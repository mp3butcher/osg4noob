#include "osg_TessellationHints.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/ShapeDrawable>
#include <osg/ref_ptr>

using namespace std;
using namespace pmoc;
	  Instance osg_TessellationHints::createInstance(){
osg::ref_ptr<osg::TessellationHints> realinstance				;
realinstance = new osg::TessellationHints ()					;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance.get()								));}

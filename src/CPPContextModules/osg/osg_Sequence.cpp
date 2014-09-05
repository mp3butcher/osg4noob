#include "osg_Sequence.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/Sequence>
#include <osg/ref_ptr>

using namespace std;
using namespace pmoc;
	  Instance osg_Sequence::createInstance(){
osg::ref_ptr<osg::Sequence> realinstance				;
realinstance = new osg::Sequence ()					;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance.get()								));}

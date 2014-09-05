#include "osg_TextureBuffer.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/TextureBuffer>
#include <osg/ref_ptr>

using namespace std;
using namespace pmoc;
	  Instance osg_TextureBuffer::createInstance(){
osg::ref_ptr<osg::TextureBuffer> realinstance				;
realinstance = new osg::TextureBuffer ()					;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance.get()								));}

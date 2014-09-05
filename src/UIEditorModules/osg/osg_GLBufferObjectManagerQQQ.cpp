#include "osg_GLBufferObjectManagerQQQ.hpp"
#include <list>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/BufferObject>

#include <MetaLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>
using namespace std;
using namespace pmoc;

///Copy Construction////////////////
osg_GLBufferObjectManagerQQQ_QModel::osg_GLBufferObjectManagerQQQ_QModel(const osg_GLBufferObjectManagerQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osg_GLBufferObjectManagerQQQ_QModel::~osg_GLBufferObjectManagerQQQ_QModel(){};
 
///DefaultConstructor////////////////
osg_GLBufferObjectManagerQQQ_QModel::osg_GLBufferObjectManagerQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osg::GLBufferObjectManager*>(i->ptr);
}
QQuickItem *osg_GLBufferObjectManagerQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osg_GLBufferObjectManagerQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg_GLBufferObjectManagerQQQ::PREcompoQML()const{return string("");}
const std::string osg_GLBufferObjectManagerQQQ::POSTcompoQML()const{return string("");}
QQModel* osg_GLBufferObjectManagerQQQ::createQQModel(Instance*i){ return new osg_GLBufferObjectManagerQQQ_QModel(i);}

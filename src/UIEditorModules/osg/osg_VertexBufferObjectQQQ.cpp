#include "osg_VertexBufferObjectQQQ.hpp"
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
osg_VertexBufferObjectQQQ_QModel::osg_VertexBufferObjectQQQ_QModel(const osg_VertexBufferObjectQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osg_VertexBufferObjectQQQ_QModel::~osg_VertexBufferObjectQQQ_QModel(){};
 
///DefaultConstructor////////////////
osg_VertexBufferObjectQQQ_QModel::osg_VertexBufferObjectQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osg::VertexBufferObject*>(i->ptr);
}
QQuickItem *osg_VertexBufferObjectQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osg_VertexBufferObjectQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg_VertexBufferObjectQQQ::PREcompoQML()const{return string("");}
const std::string osg_VertexBufferObjectQQQ::POSTcompoQML()const{return string("");}
QQModel* osg_VertexBufferObjectQQQ::createQQModel(Instance*i){ return new osg_VertexBufferObjectQQQ_QModel(i);}

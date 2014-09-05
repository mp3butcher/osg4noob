#include "osg_UniformBufferObjectQQQ.hpp"
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
osg_UniformBufferObjectQQQ_QModel::osg_UniformBufferObjectQQQ_QModel(const osg_UniformBufferObjectQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osg_UniformBufferObjectQQQ_QModel::~osg_UniformBufferObjectQQQ_QModel(){};
 
///DefaultConstructor////////////////
osg_UniformBufferObjectQQQ_QModel::osg_UniformBufferObjectQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osg::UniformBufferObject*>(i->ptr);
}
QQuickItem *osg_UniformBufferObjectQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osg_UniformBufferObjectQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg_UniformBufferObjectQQQ::PREcompoQML()const{return string("");}
const std::string osg_UniformBufferObjectQQQ::POSTcompoQML()const{return string("");}
QQModel* osg_UniformBufferObjectQQQ::createQQModel(Instance*i){ return new osg_UniformBufferObjectQQQ_QModel(i);}

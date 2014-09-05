#include "osg_PixelDataBufferObjectQQQ.hpp"
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
osg_PixelDataBufferObjectQQQ_QModel::osg_PixelDataBufferObjectQQQ_QModel(const osg_PixelDataBufferObjectQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osg_PixelDataBufferObjectQQQ_QModel::~osg_PixelDataBufferObjectQQQ_QModel(){};
 
///DefaultConstructor////////////////
osg_PixelDataBufferObjectQQQ_QModel::osg_PixelDataBufferObjectQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osg::PixelDataBufferObject*>(i->ptr);
}
QQuickItem *osg_PixelDataBufferObjectQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osg_PixelDataBufferObjectQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg_PixelDataBufferObjectQQQ::PREcompoQML()const{return string("");}
const std::string osg_PixelDataBufferObjectQQQ::POSTcompoQML()const{return string("");}
QQModel* osg_PixelDataBufferObjectQQQ::createQQModel(Instance*i){ return new osg_PixelDataBufferObjectQQQ_QModel(i);}

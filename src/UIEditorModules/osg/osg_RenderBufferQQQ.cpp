#include "osg_RenderBufferQQQ.hpp"
#include <list>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/FrameBufferObject>

#include <MetaLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>
using namespace std;
using namespace pmoc;

///Copy Construction////////////////
osg_RenderBufferQQQ_QModel::osg_RenderBufferQQQ_QModel(const osg_RenderBufferQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osg_RenderBufferQQQ_QModel::~osg_RenderBufferQQQ_QModel(){};
 
///DefaultConstructor////////////////
osg_RenderBufferQQQ_QModel::osg_RenderBufferQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osg::RenderBuffer*>(i->ptr);
}
QQuickItem *osg_RenderBufferQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osg_RenderBufferQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg_RenderBufferQQQ::PREcompoQML()const{return string("");}
const std::string osg_RenderBufferQQQ::POSTcompoQML()const{return string("");}
QQModel* osg_RenderBufferQQQ::createQQModel(Instance*i){ return new osg_RenderBufferQQQ_QModel(i);}

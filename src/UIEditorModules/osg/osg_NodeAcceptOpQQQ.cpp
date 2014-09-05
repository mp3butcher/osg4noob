#include "osg_NodeAcceptOpQQQ.hpp"
#include <list>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/NodeVisitor>

#include <MetaLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>
using namespace std;
using namespace pmoc;

///Copy Construction////////////////
osg_NodeAcceptOpQQQ_QModel::osg_NodeAcceptOpQQQ_QModel(const osg_NodeAcceptOpQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osg_NodeAcceptOpQQQ_QModel::~osg_NodeAcceptOpQQQ_QModel(){};
 
///DefaultConstructor////////////////
osg_NodeAcceptOpQQQ_QModel::osg_NodeAcceptOpQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osg::NodeAcceptOp*>(i->ptr);
}
QQuickItem *osg_NodeAcceptOpQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osg_NodeAcceptOpQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg_NodeAcceptOpQQQ::PREcompoQML()const{return string("");}
const std::string osg_NodeAcceptOpQQQ::POSTcompoQML()const{return string("");}
QQModel* osg_NodeAcceptOpQQQ::createQQModel(Instance*i){ return new osg_NodeAcceptOpQQQ_QModel(i);}

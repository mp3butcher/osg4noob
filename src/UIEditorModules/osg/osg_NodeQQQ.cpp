#include "osg_NodeQQQ.hpp"
#include <list>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/Node>

#include <MetaLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>
using namespace std;
using namespace pmoc;

///Copy Construction////////////////
osg_NodeQQQ_QModel::osg_NodeQQQ_QModel(const osg_NodeQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osg_NodeQQQ_QModel::~osg_NodeQQQ_QModel(){};
 
///DefaultConstructor////////////////
osg_NodeQQQ_QModel::osg_NodeQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osg::Node*>(i->ptr);
}
QQuickItem *osg_NodeQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osg_NodeQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg_NodeQQQ::PREcompoQML()const{return string("");}
const std::string osg_NodeQQQ::POSTcompoQML()const{return string("");}
QQModel* osg_NodeQQQ::createQQModel(Instance*i){ return new osg_NodeQQQ_QModel(i);}

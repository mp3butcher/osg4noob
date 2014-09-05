#include "osg_NodeCallbackQQQ.hpp"
#include <list>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/NodeCallback>

#include <MetaLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>
using namespace std;
using namespace pmoc;

///Copy Construction////////////////
osg_NodeCallbackQQQ_QModel::osg_NodeCallbackQQQ_QModel(const osg_NodeCallbackQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osg_NodeCallbackQQQ_QModel::~osg_NodeCallbackQQQ_QModel(){};
 
///DefaultConstructor////////////////
osg_NodeCallbackQQQ_QModel::osg_NodeCallbackQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osg::NodeCallback*>(i->ptr);
}
QQuickItem *osg_NodeCallbackQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osg_NodeCallbackQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg_NodeCallbackQQQ::PREcompoQML()const{return string("");}
const std::string osg_NodeCallbackQQQ::POSTcompoQML()const{return string("");}
QQModel* osg_NodeCallbackQQQ::createQQModel(Instance*i){ return new osg_NodeCallbackQQQ_QModel(i);}

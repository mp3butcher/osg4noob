#include "osg_StateAttributeCallbackQQQ.hpp"
#include <list>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/StateAttributeCallback>

#include <MetaLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>
using namespace std;
using namespace pmoc;

///Copy Construction////////////////
osg_StateAttributeCallbackQQQ_QModel::osg_StateAttributeCallbackQQQ_QModel(const osg_StateAttributeCallbackQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osg_StateAttributeCallbackQQQ_QModel::~osg_StateAttributeCallbackQQQ_QModel(){};
 
///DefaultConstructor////////////////
osg_StateAttributeCallbackQQQ_QModel::osg_StateAttributeCallbackQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osg::StateAttributeCallback*>(i->ptr);
}
QQuickItem *osg_StateAttributeCallbackQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osg_StateAttributeCallbackQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg_StateAttributeCallbackQQQ::PREcompoQML()const{return string("");}
const std::string osg_StateAttributeCallbackQQQ::POSTcompoQML()const{return string("");}
QQModel* osg_StateAttributeCallbackQQQ::createQQModel(Instance*i){ return new osg_StateAttributeCallbackQQQ_QModel(i);}

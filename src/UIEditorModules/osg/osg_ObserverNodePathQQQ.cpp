#include "osg_ObserverNodePathQQQ.hpp"
#include <list>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/ObserverNodePath>

#include <MetaLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>
using namespace std;
using namespace pmoc;

///Copy Construction////////////////
osg_ObserverNodePathQQQ_QModel::osg_ObserverNodePathQQQ_QModel(const osg_ObserverNodePathQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osg_ObserverNodePathQQQ_QModel::~osg_ObserverNodePathQQQ_QModel(){};
 
///DefaultConstructor////////////////
osg_ObserverNodePathQQQ_QModel::osg_ObserverNodePathQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osg::ObserverNodePath*>(i->ptr);
}
QQuickItem *osg_ObserverNodePathQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osg_ObserverNodePathQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg_ObserverNodePathQQQ::PREcompoQML()const{return string("");}
const std::string osg_ObserverNodePathQQQ::POSTcompoQML()const{return string("");}
QQModel* osg_ObserverNodePathQQQ::createQQModel(Instance*i){ return new osg_ObserverNodePathQQQ_QModel(i);}

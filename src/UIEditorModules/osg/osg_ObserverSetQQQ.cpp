#include "osg_ObserverSetQQQ.hpp"
#include <list>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/Observer>

#include <MetaLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>
using namespace std;
using namespace pmoc;

///Copy Construction////////////////
osg_ObserverSetQQQ_QModel::osg_ObserverSetQQQ_QModel(const osg_ObserverSetQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osg_ObserverSetQQQ_QModel::~osg_ObserverSetQQQ_QModel(){};
 
///DefaultConstructor////////////////
osg_ObserverSetQQQ_QModel::osg_ObserverSetQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osg::ObserverSet*>(i->ptr);
}
QQuickItem *osg_ObserverSetQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osg_ObserverSetQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg_ObserverSetQQQ::PREcompoQML()const{return string("");}
const std::string osg_ObserverSetQQQ::POSTcompoQML()const{return string("");}
QQModel* osg_ObserverSetQQQ::createQQModel(Instance*i){ return new osg_ObserverSetQQQ_QModel(i);}

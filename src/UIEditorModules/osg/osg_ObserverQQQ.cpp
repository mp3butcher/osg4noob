#include "osg_ObserverQQQ.hpp"
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
osg_ObserverQQQ_QModel::osg_ObserverQQQ_QModel(const osg_ObserverQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osg_ObserverQQQ_QModel::~osg_ObserverQQQ_QModel(){};
 
///DefaultConstructor////////////////
osg_ObserverQQQ_QModel::osg_ObserverQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osg::Observer*>(i->ptr);
}
QQuickItem *osg_ObserverQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osg_ObserverQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg_ObserverQQQ::PREcompoQML()const{return string("");}
const std::string osg_ObserverQQQ::POSTcompoQML()const{return string("");}
QQModel* osg_ObserverQQQ::createQQModel(Instance*i){ return new osg_ObserverQQQ_QModel(i);}

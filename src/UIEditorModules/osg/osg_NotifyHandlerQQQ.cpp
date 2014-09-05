#include "osg_NotifyHandlerQQQ.hpp"
#include <list>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/Notify>

#include <MetaLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>
using namespace std;
using namespace pmoc;

///Copy Construction////////////////
osg_NotifyHandlerQQQ_QModel::osg_NotifyHandlerQQQ_QModel(const osg_NotifyHandlerQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osg_NotifyHandlerQQQ_QModel::~osg_NotifyHandlerQQQ_QModel(){};
 
///DefaultConstructor////////////////
osg_NotifyHandlerQQQ_QModel::osg_NotifyHandlerQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osg::NotifyHandler*>(i->ptr);
}
QQuickItem *osg_NotifyHandlerQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osg_NotifyHandlerQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg_NotifyHandlerQQQ::PREcompoQML()const{return string("");}
const std::string osg_NotifyHandlerQQQ::POSTcompoQML()const{return string("");}
QQModel* osg_NotifyHandlerQQQ::createQQModel(Instance*i){ return new osg_NotifyHandlerQQQ_QModel(i);}

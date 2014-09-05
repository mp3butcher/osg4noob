#include "osg_StandardNotifyHandlerQQQ.hpp"
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
osg_StandardNotifyHandlerQQQ_QModel::osg_StandardNotifyHandlerQQQ_QModel(const osg_StandardNotifyHandlerQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osg_StandardNotifyHandlerQQQ_QModel::~osg_StandardNotifyHandlerQQQ_QModel(){};
 
///DefaultConstructor////////////////
osg_StandardNotifyHandlerQQQ_QModel::osg_StandardNotifyHandlerQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osg::StandardNotifyHandler*>(i->ptr);
}
QQuickItem *osg_StandardNotifyHandlerQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osg_StandardNotifyHandlerQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg_StandardNotifyHandlerQQQ::PREcompoQML()const{return string("");}
const std::string osg_StandardNotifyHandlerQQQ::POSTcompoQML()const{return string("");}
QQModel* osg_StandardNotifyHandlerQQQ::createQQModel(Instance*i){ return new osg_StandardNotifyHandlerQQQ_QModel(i);}

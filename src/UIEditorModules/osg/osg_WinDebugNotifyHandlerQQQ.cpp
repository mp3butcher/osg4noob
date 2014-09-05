#include "osg_WinDebugNotifyHandlerQQQ.hpp"
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
osg_WinDebugNotifyHandlerQQQ_QModel::osg_WinDebugNotifyHandlerQQQ_QModel(const osg_WinDebugNotifyHandlerQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osg_WinDebugNotifyHandlerQQQ_QModel::~osg_WinDebugNotifyHandlerQQQ_QModel(){};
 
///DefaultConstructor////////////////
osg_WinDebugNotifyHandlerQQQ_QModel::osg_WinDebugNotifyHandlerQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osg::WinDebugNotifyHandler*>(i->ptr);
}
QQuickItem *osg_WinDebugNotifyHandlerQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osg_WinDebugNotifyHandlerQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg_WinDebugNotifyHandlerQQQ::PREcompoQML()const{return string("");}
const std::string osg_WinDebugNotifyHandlerQQQ::POSTcompoQML()const{return string("");}
QQModel* osg_WinDebugNotifyHandlerQQQ::createQQModel(Instance*i){ return new osg_WinDebugNotifyHandlerQQQ_QModel(i);}

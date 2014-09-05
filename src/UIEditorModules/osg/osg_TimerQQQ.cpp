#include "osg_TimerQQQ.hpp"
#include <list>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/Timer>

#include <MetaLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>
using namespace std;
using namespace pmoc;

///Copy Construction////////////////
osg_TimerQQQ_QModel::osg_TimerQQQ_QModel(const osg_TimerQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osg_TimerQQQ_QModel::~osg_TimerQQQ_QModel(){};
 
///DefaultConstructor////////////////
osg_TimerQQQ_QModel::osg_TimerQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osg::Timer*>(i->ptr);
}
QQuickItem *osg_TimerQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osg_TimerQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg_TimerQQQ::PREcompoQML()const{return string("");}
const std::string osg_TimerQQQ::POSTcompoQML()const{return string("");}
QQModel* osg_TimerQQQ::createQQModel(Instance*i){ return new osg_TimerQQQ_QModel(i);}

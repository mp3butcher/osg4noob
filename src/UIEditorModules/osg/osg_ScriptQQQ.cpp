#include "osg_ScriptQQQ.hpp"
#include <list>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/ScriptEngine>

#include <MetaLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>
using namespace std;
using namespace pmoc;

///Copy Construction////////////////
osg_ScriptQQQ_QModel::osg_ScriptQQQ_QModel(const osg_ScriptQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osg_ScriptQQQ_QModel::~osg_ScriptQQQ_QModel(){};
 
///DefaultConstructor////////////////
osg_ScriptQQQ_QModel::osg_ScriptQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osg::Script*>(i->ptr);
}
QQuickItem *osg_ScriptQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osg_ScriptQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg_ScriptQQQ::PREcompoQML()const{return string("");}
const std::string osg_ScriptQQQ::POSTcompoQML()const{return string("");}
QQModel* osg_ScriptQQQ::createQQModel(Instance*i){ return new osg_ScriptQQQ_QModel(i);}

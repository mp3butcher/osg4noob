#include "osg_SwitchQQQ.hpp"
#include <list>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/Switch>

#include <MetaLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>
using namespace std;
using namespace pmoc;

///Copy Construction////////////////
osg_SwitchQQQ_QModel::osg_SwitchQQQ_QModel(const osg_SwitchQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osg_SwitchQQQ_QModel::~osg_SwitchQQQ_QModel(){};
 
///DefaultConstructor////////////////
osg_SwitchQQQ_QModel::osg_SwitchQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osg::Switch*>(i->ptr);
}
QQuickItem *osg_SwitchQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osg_SwitchQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg_SwitchQQQ::PREcompoQML()const{return string("");}
const std::string osg_SwitchQQQ::POSTcompoQML()const{return string("");}
QQModel* osg_SwitchQQQ::createQQModel(Instance*i){ return new osg_SwitchQQQ_QModel(i);}

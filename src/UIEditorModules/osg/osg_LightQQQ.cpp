#include "osg_LightQQQ.hpp"
#include <list>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/Light>

#include <MetaLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>
using namespace std;
using namespace pmoc;

///Copy Construction////////////////
osg_LightQQQ_QModel::osg_LightQQQ_QModel(const osg_LightQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osg_LightQQQ_QModel::~osg_LightQQQ_QModel(){};
 
///DefaultConstructor////////////////
osg_LightQQQ_QModel::osg_LightQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osg::Light*>(i->ptr);
}
QQuickItem *osg_LightQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osg_LightQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg_LightQQQ::PREcompoQML()const{return string("");}
const std::string osg_LightQQQ::POSTcompoQML()const{return string("");}
QQModel* osg_LightQQQ::createQQModel(Instance*i){ return new osg_LightQQQ_QModel(i);}

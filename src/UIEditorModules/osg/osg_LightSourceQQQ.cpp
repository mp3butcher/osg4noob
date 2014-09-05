#include "osg_LightSourceQQQ.hpp"
#include <list>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/LightSource>

#include <MetaLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>
using namespace std;
using namespace pmoc;

///Copy Construction////////////////
osg_LightSourceQQQ_QModel::osg_LightSourceQQQ_QModel(const osg_LightSourceQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osg_LightSourceQQQ_QModel::~osg_LightSourceQQQ_QModel(){};
 
///DefaultConstructor////////////////
osg_LightSourceQQQ_QModel::osg_LightSourceQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osg::LightSource*>(i->ptr);
}
QQuickItem *osg_LightSourceQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osg_LightSourceQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg_LightSourceQQQ::PREcompoQML()const{return string("");}
const std::string osg_LightSourceQQQ::POSTcompoQML()const{return string("");}
QQModel* osg_LightSourceQQQ::createQQModel(Instance*i){ return new osg_LightSourceQQQ_QModel(i);}
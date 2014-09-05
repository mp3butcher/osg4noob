#include "osg_LODQQQ.hpp"
#include <list>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/LOD>

#include <MetaLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>
using namespace std;
using namespace pmoc;

///Copy Construction////////////////
osg_LODQQQ_QModel::osg_LODQQQ_QModel(const osg_LODQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osg_LODQQQ_QModel::~osg_LODQQQ_QModel(){};
 
///DefaultConstructor////////////////
osg_LODQQQ_QModel::osg_LODQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osg::LOD*>(i->ptr);
}
QQuickItem *osg_LODQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osg_LODQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg_LODQQQ::PREcompoQML()const{return string("");}
const std::string osg_LODQQQ::POSTcompoQML()const{return string("");}
QQModel* osg_LODQQQ::createQQModel(Instance*i){ return new osg_LODQQQ_QModel(i);}

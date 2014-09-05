#include "osg_ConeQQQ.hpp"
#include <list>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/Shape>

#include <MetaLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>
using namespace std;
using namespace pmoc;

///Copy Construction////////////////
osg_ConeQQQ_QModel::osg_ConeQQQ_QModel(const osg_ConeQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osg_ConeQQQ_QModel::~osg_ConeQQQ_QModel(){};
 
///DefaultConstructor////////////////
osg_ConeQQQ_QModel::osg_ConeQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osg::Cone*>(i->ptr);
}
QQuickItem *osg_ConeQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osg_ConeQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg_ConeQQQ::PREcompoQML()const{return string("");}
const std::string osg_ConeQQQ::POSTcompoQML()const{return string("");}
QQModel* osg_ConeQQQ::createQQModel(Instance*i){ return new osg_ConeQQQ_QModel(i);}

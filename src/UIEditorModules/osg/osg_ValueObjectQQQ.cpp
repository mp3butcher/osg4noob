#include "osg_ValueObjectQQQ.hpp"
#include <list>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/ValueObject>

#include <MetaLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>
using namespace std;
using namespace pmoc;

///Copy Construction////////////////
osg_ValueObjectQQQ_QModel::osg_ValueObjectQQQ_QModel(const osg_ValueObjectQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osg_ValueObjectQQQ_QModel::~osg_ValueObjectQQQ_QModel(){};
 
///DefaultConstructor////////////////
osg_ValueObjectQQQ_QModel::osg_ValueObjectQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osg::ValueObject*>(i->ptr);
}
QQuickItem *osg_ValueObjectQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osg_ValueObjectQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg_ValueObjectQQQ::PREcompoQML()const{return string("");}
const std::string osg_ValueObjectQQQ::POSTcompoQML()const{return string("");}
QQModel* osg_ValueObjectQQQ::createQQModel(Instance*i){ return new osg_ValueObjectQQQ_QModel(i);}

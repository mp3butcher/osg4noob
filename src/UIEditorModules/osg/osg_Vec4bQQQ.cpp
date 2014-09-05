#include "osg_Vec4bQQQ.hpp"
#include <list>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/Vec4b>

#include <MetaLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>
using namespace std;
using namespace pmoc;

///Copy Construction////////////////
osg_Vec4bQQQ_QModel::osg_Vec4bQQQ_QModel(const osg_Vec4bQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osg_Vec4bQQQ_QModel::~osg_Vec4bQQQ_QModel(){};
 
///DefaultConstructor////////////////
osg_Vec4bQQQ_QModel::osg_Vec4bQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osg::Vec4b*>(i->ptr);
}
QQuickItem *osg_Vec4bQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osg_Vec4bQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg_Vec4bQQQ::PREcompoQML()const{return string("");}
const std::string osg_Vec4bQQQ::POSTcompoQML()const{return string("");}
QQModel* osg_Vec4bQQQ::createQQModel(Instance*i){ return new osg_Vec4bQQQ_QModel(i);}
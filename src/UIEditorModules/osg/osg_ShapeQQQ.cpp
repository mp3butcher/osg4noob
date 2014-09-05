#include "osg_ShapeQQQ.hpp"
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
osg_ShapeQQQ_QModel::osg_ShapeQQQ_QModel(const osg_ShapeQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osg_ShapeQQQ_QModel::~osg_ShapeQQQ_QModel(){};
 
///DefaultConstructor////////////////
osg_ShapeQQQ_QModel::osg_ShapeQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osg::Shape*>(i->ptr);
}
QQuickItem *osg_ShapeQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osg_ShapeQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg_ShapeQQQ::PREcompoQML()const{return string("");}
const std::string osg_ShapeQQQ::POSTcompoQML()const{return string("");}
QQModel* osg_ShapeQQQ::createQQModel(Instance*i){ return new osg_ShapeQQQ_QModel(i);}

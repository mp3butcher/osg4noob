#include "osg_ShapeVisitorQQQ.hpp"
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
osg_ShapeVisitorQQQ_QModel::osg_ShapeVisitorQQQ_QModel(const osg_ShapeVisitorQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osg_ShapeVisitorQQQ_QModel::~osg_ShapeVisitorQQQ_QModel(){};
 
///DefaultConstructor////////////////
osg_ShapeVisitorQQQ_QModel::osg_ShapeVisitorQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osg::ShapeVisitor*>(i->ptr);
}
QQuickItem *osg_ShapeVisitorQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osg_ShapeVisitorQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg_ShapeVisitorQQQ::PREcompoQML()const{return string("");}
const std::string osg_ShapeVisitorQQQ::POSTcompoQML()const{return string("");}
QQModel* osg_ShapeVisitorQQQ::createQQModel(Instance*i){ return new osg_ShapeVisitorQQQ_QModel(i);}

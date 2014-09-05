#include "osg_PolygonStippleQQQ.hpp"
#include <list>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/PolygonStipple>

#include <MetaLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>
using namespace std;
using namespace pmoc;

///Copy Construction////////////////
osg_PolygonStippleQQQ_QModel::osg_PolygonStippleQQQ_QModel(const osg_PolygonStippleQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osg_PolygonStippleQQQ_QModel::~osg_PolygonStippleQQQ_QModel(){};
 
///DefaultConstructor////////////////
osg_PolygonStippleQQQ_QModel::osg_PolygonStippleQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osg::PolygonStipple*>(i->ptr);
}
QQuickItem *osg_PolygonStippleQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osg_PolygonStippleQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg_PolygonStippleQQQ::PREcompoQML()const{return string("");}
const std::string osg_PolygonStippleQQQ::POSTcompoQML()const{return string("");}
QQModel* osg_PolygonStippleQQQ::createQQModel(Instance*i){ return new osg_PolygonStippleQQQ_QModel(i);}

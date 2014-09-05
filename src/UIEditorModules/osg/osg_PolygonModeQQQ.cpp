#include "osg_PolygonModeQQQ.hpp"
#include <list>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/PolygonMode>

#include <MetaLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>
using namespace std;
using namespace pmoc;

///Copy Construction////////////////
osg_PolygonModeQQQ_QModel::osg_PolygonModeQQQ_QModel(const osg_PolygonModeQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osg_PolygonModeQQQ_QModel::~osg_PolygonModeQQQ_QModel(){};
 
///DefaultConstructor////////////////
osg_PolygonModeQQQ_QModel::osg_PolygonModeQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osg::PolygonMode*>(i->ptr);
}
QQuickItem *osg_PolygonModeQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osg_PolygonModeQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg_PolygonModeQQQ::PREcompoQML()const{return string("");}
const std::string osg_PolygonModeQQQ::POSTcompoQML()const{return string("");}
QQModel* osg_PolygonModeQQQ::createQQModel(Instance*i){ return new osg_PolygonModeQQQ_QModel(i);}

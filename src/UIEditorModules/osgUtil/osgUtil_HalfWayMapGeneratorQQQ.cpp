#include "osgUtil_HalfWayMapGeneratorQQQ.hpp"
#include <list>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaQQuickClass.h>
#include <osgUtil/HalfWayMapGenerator>

#include <MetaLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>
using namespace std;
using namespace pmoc;

///Copy Construction////////////////
osgUtil_HalfWayMapGeneratorQQQ_QModel::osgUtil_HalfWayMapGeneratorQQQ_QModel(const osgUtil_HalfWayMapGeneratorQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osgUtil_HalfWayMapGeneratorQQQ_QModel::~osgUtil_HalfWayMapGeneratorQQQ_QModel(){};
 
///DefaultConstructor////////////////
osgUtil_HalfWayMapGeneratorQQQ_QModel::osgUtil_HalfWayMapGeneratorQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osgUtil::HalfWayMapGenerator*>(i->ptr);
}
QQuickItem *osgUtil_HalfWayMapGeneratorQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osgUtil_HalfWayMapGeneratorQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osgUtil_HalfWayMapGeneratorQQQ::PREcompoQML()const{return string("");}
const std::string osgUtil_HalfWayMapGeneratorQQQ::POSTcompoQML()const{return string("");}
QQModel* osgUtil_HalfWayMapGeneratorQQQ::createQQModel(Instance*i){ return new osgUtil_HalfWayMapGeneratorQQQ_QModel(i);}

#include "osgUtil_PerlinNoiseQQQ.hpp"
#include <list>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaQQuickClass.h>
#include <osgUtil/PerlinNoise>

#include <MetaLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>
using namespace std;
using namespace pmoc;

///Copy Construction////////////////
osgUtil_PerlinNoiseQQQ_QModel::osgUtil_PerlinNoiseQQQ_QModel(const osgUtil_PerlinNoiseQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osgUtil_PerlinNoiseQQQ_QModel::~osgUtil_PerlinNoiseQQQ_QModel(){};
 
///DefaultConstructor////////////////
osgUtil_PerlinNoiseQQQ_QModel::osgUtil_PerlinNoiseQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osgUtil::PerlinNoise*>(i->ptr);
}
QQuickItem *osgUtil_PerlinNoiseQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osgUtil_PerlinNoiseQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osgUtil_PerlinNoiseQQQ::PREcompoQML()const{return string("");}
const std::string osgUtil_PerlinNoiseQQQ::POSTcompoQML()const{return string("");}
QQModel* osgUtil_PerlinNoiseQQQ::createQQModel(Instance*i){ return new osgUtil_PerlinNoiseQQQ_QModel(i);}

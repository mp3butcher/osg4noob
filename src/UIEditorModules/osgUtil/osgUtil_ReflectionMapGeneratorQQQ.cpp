#include "osgUtil_ReflectionMapGeneratorQQQ.hpp"
#include <list>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaQQuickClass.h>
#include <osgUtil/ReflectionMapGenerator>

#include <MetaLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>
using namespace std;
using namespace pmoc;

///Copy Construction////////////////
osgUtil_ReflectionMapGeneratorQQQ_QModel::osgUtil_ReflectionMapGeneratorQQQ_QModel(const osgUtil_ReflectionMapGeneratorQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osgUtil_ReflectionMapGeneratorQQQ_QModel::~osgUtil_ReflectionMapGeneratorQQQ_QModel(){};
 
///DefaultConstructor////////////////
osgUtil_ReflectionMapGeneratorQQQ_QModel::osgUtil_ReflectionMapGeneratorQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osgUtil::ReflectionMapGenerator*>(i->ptr);
}
QQuickItem *osgUtil_ReflectionMapGeneratorQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osgUtil_ReflectionMapGeneratorQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osgUtil_ReflectionMapGeneratorQQQ::PREcompoQML()const{return string("");}
const std::string osgUtil_ReflectionMapGeneratorQQQ::POSTcompoQML()const{return string("");}
QQModel* osgUtil_ReflectionMapGeneratorQQQ::createQQModel(Instance*i){ return new osgUtil_ReflectionMapGeneratorQQQ_QModel(i);}

#include "osgUtil_CubeMapGeneratorQQQ.hpp"
#include <list>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaQQuickClass.h>
#include <osgUtil/CubeMapGenerator>

#include <MetaLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>
using namespace std;
using namespace pmoc;

///Copy Construction////////////////
osgUtil_CubeMapGeneratorQQQ_QModel::osgUtil_CubeMapGeneratorQQQ_QModel(const osgUtil_CubeMapGeneratorQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osgUtil_CubeMapGeneratorQQQ_QModel::~osgUtil_CubeMapGeneratorQQQ_QModel(){};
 
///DefaultConstructor////////////////
osgUtil_CubeMapGeneratorQQQ_QModel::osgUtil_CubeMapGeneratorQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osgUtil::CubeMapGenerator*>(i->ptr);
}
QQuickItem *osgUtil_CubeMapGeneratorQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osgUtil_CubeMapGeneratorQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osgUtil_CubeMapGeneratorQQQ::PREcompoQML()const{return string("");}
const std::string osgUtil_CubeMapGeneratorQQQ::POSTcompoQML()const{return string("");}
QQModel* osgUtil_CubeMapGeneratorQQQ::createQQModel(Instance*i){ return new osgUtil_CubeMapGeneratorQQQ_QModel(i);}

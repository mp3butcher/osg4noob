#include "osgUtil_HighlightMapGeneratorQQQ.hpp"
#include <list>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaQQuickClass.h>
#include <osgUtil/HighlightMapGenerator>

#include <MetaLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>
using namespace std;
using namespace pmoc;

///Copy Construction////////////////
osgUtil_HighlightMapGeneratorQQQ_QModel::osgUtil_HighlightMapGeneratorQQQ_QModel(const osgUtil_HighlightMapGeneratorQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osgUtil_HighlightMapGeneratorQQQ_QModel::~osgUtil_HighlightMapGeneratorQQQ_QModel(){};
 
///DefaultConstructor////////////////
osgUtil_HighlightMapGeneratorQQQ_QModel::osgUtil_HighlightMapGeneratorQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osgUtil::HighlightMapGenerator*>(i->ptr);
}
QQuickItem *osgUtil_HighlightMapGeneratorQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osgUtil_HighlightMapGeneratorQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osgUtil_HighlightMapGeneratorQQQ::PREcompoQML()const{return string("");}
const std::string osgUtil_HighlightMapGeneratorQQQ::POSTcompoQML()const{return string("");}
QQModel* osgUtil_HighlightMapGeneratorQQQ::createQQModel(Instance*i){ return new osgUtil_HighlightMapGeneratorQQQ_QModel(i);}

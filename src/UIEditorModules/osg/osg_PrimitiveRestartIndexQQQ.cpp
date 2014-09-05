#include "osg_PrimitiveRestartIndexQQQ.hpp"
#include <list>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/PrimitiveRestartIndex>

#include <MetaLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>
using namespace std;
using namespace pmoc;

///Copy Construction////////////////
osg_PrimitiveRestartIndexQQQ_QModel::osg_PrimitiveRestartIndexQQQ_QModel(const osg_PrimitiveRestartIndexQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osg_PrimitiveRestartIndexQQQ_QModel::~osg_PrimitiveRestartIndexQQQ_QModel(){};
 
///DefaultConstructor////////////////
osg_PrimitiveRestartIndexQQQ_QModel::osg_PrimitiveRestartIndexQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osg::PrimitiveRestartIndex*>(i->ptr);
}
QQuickItem *osg_PrimitiveRestartIndexQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osg_PrimitiveRestartIndexQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg_PrimitiveRestartIndexQQQ::PREcompoQML()const{return string("");}
const std::string osg_PrimitiveRestartIndexQQQ::POSTcompoQML()const{return string("");}
QQModel* osg_PrimitiveRestartIndexQQQ::createQQModel(Instance*i){ return new osg_PrimitiveRestartIndexQQQ_QModel(i);}

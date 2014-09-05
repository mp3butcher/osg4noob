#include "osg_StencilTwoSidedQQQ.hpp"
#include <list>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/StencilTwoSided>

#include <MetaLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>
using namespace std;
using namespace pmoc;

///Copy Construction////////////////
osg_StencilTwoSidedQQQ_QModel::osg_StencilTwoSidedQQQ_QModel(const osg_StencilTwoSidedQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osg_StencilTwoSidedQQQ_QModel::~osg_StencilTwoSidedQQQ_QModel(){};
 
///DefaultConstructor////////////////
osg_StencilTwoSidedQQQ_QModel::osg_StencilTwoSidedQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osg::StencilTwoSided*>(i->ptr);
}
QQuickItem *osg_StencilTwoSidedQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osg_StencilTwoSidedQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg_StencilTwoSidedQQQ::PREcompoQML()const{return string("");}
const std::string osg_StencilTwoSidedQQQ::POSTcompoQML()const{return string("");}
QQModel* osg_StencilTwoSidedQQQ::createQQModel(Instance*i){ return new osg_StencilTwoSidedQQQ_QModel(i);}

#include "osg_StencilQQQ.hpp"
#include <list>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/Stencil>

#include <MetaLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>
using namespace std;
using namespace pmoc;

///Copy Construction////////////////
osg_StencilQQQ_QModel::osg_StencilQQQ_QModel(const osg_StencilQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osg_StencilQQQ_QModel::~osg_StencilQQQ_QModel(){};
 
///DefaultConstructor////////////////
osg_StencilQQQ_QModel::osg_StencilQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osg::Stencil*>(i->ptr);
}
QQuickItem *osg_StencilQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osg_StencilQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg_StencilQQQ::PREcompoQML()const{return string("");}
const std::string osg_StencilQQQ::POSTcompoQML()const{return string("");}
QQModel* osg_StencilQQQ::createQQModel(Instance*i){ return new osg_StencilQQQ_QModel(i);}

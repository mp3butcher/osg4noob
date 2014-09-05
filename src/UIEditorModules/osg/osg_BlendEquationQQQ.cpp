#include "osg_BlendEquationQQQ.hpp"
#include <list>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/BlendEquation>

#include <MetaLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>
using namespace std;
using namespace pmoc;

///Copy Construction////////////////
osg_BlendEquationQQQ_QModel::osg_BlendEquationQQQ_QModel(const osg_BlendEquationQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osg_BlendEquationQQQ_QModel::~osg_BlendEquationQQQ_QModel(){};
 
///DefaultConstructor////////////////
osg_BlendEquationQQQ_QModel::osg_BlendEquationQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osg::BlendEquation*>(i->ptr);
}
QQuickItem *osg_BlendEquationQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osg_BlendEquationQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg_BlendEquationQQQ::PREcompoQML()const{return string("");}
const std::string osg_BlendEquationQQQ::POSTcompoQML()const{return string("");}
QQModel* osg_BlendEquationQQQ::createQQModel(Instance*i){ return new osg_BlendEquationQQQ_QModel(i);}

#include "osg_TexEnvFilterQQQ.hpp"
#include <list>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/TexEnvFilter>

#include <MetaLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>
using namespace std;
using namespace pmoc;

///Copy Construction////////////////
osg_TexEnvFilterQQQ_QModel::osg_TexEnvFilterQQQ_QModel(const osg_TexEnvFilterQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osg_TexEnvFilterQQQ_QModel::~osg_TexEnvFilterQQQ_QModel(){};
 
///DefaultConstructor////////////////
osg_TexEnvFilterQQQ_QModel::osg_TexEnvFilterQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osg::TexEnvFilter*>(i->ptr);
}
QQuickItem *osg_TexEnvFilterQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osg_TexEnvFilterQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg_TexEnvFilterQQQ::PREcompoQML()const{return string("");}
const std::string osg_TexEnvFilterQQQ::POSTcompoQML()const{return string("");}
QQModel* osg_TexEnvFilterQQQ::createQQModel(Instance*i){ return new osg_TexEnvFilterQQQ_QModel(i);}

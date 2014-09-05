#include "osg_TexEnvQQQ.hpp"
#include <list>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/TexEnv>

#include <MetaLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>
using namespace std;
using namespace pmoc;

///Copy Construction////////////////
osg_TexEnvQQQ_QModel::osg_TexEnvQQQ_QModel(const osg_TexEnvQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osg_TexEnvQQQ_QModel::~osg_TexEnvQQQ_QModel(){};
 
///DefaultConstructor////////////////
osg_TexEnvQQQ_QModel::osg_TexEnvQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osg::TexEnv*>(i->ptr);
}
QQuickItem *osg_TexEnvQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osg_TexEnvQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg_TexEnvQQQ::PREcompoQML()const{return string("");}
const std::string osg_TexEnvQQQ::POSTcompoQML()const{return string("");}
QQModel* osg_TexEnvQQQ::createQQModel(Instance*i){ return new osg_TexEnvQQQ_QModel(i);}

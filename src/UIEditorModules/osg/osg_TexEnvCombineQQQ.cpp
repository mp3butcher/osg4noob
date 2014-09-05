#include "osg_TexEnvCombineQQQ.hpp"
#include <list>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/TexEnvCombine>

#include <MetaLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>
using namespace std;
using namespace pmoc;

///Copy Construction////////////////
osg_TexEnvCombineQQQ_QModel::osg_TexEnvCombineQQQ_QModel(const osg_TexEnvCombineQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osg_TexEnvCombineQQQ_QModel::~osg_TexEnvCombineQQQ_QModel(){};
 
///DefaultConstructor////////////////
osg_TexEnvCombineQQQ_QModel::osg_TexEnvCombineQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osg::TexEnvCombine*>(i->ptr);
}
QQuickItem *osg_TexEnvCombineQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osg_TexEnvCombineQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg_TexEnvCombineQQQ::PREcompoQML()const{return string("");}
const std::string osg_TexEnvCombineQQQ::POSTcompoQML()const{return string("");}
QQModel* osg_TexEnvCombineQQQ::createQQModel(Instance*i){ return new osg_TexEnvCombineQQQ_QModel(i);}

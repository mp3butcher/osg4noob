#include "osg_ShaderQQQ.hpp"
#include <list>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/Shader>

#include <MetaLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>
using namespace std;
using namespace pmoc;

///Copy Construction////////////////
osg_ShaderQQQ_QModel::osg_ShaderQQQ_QModel(const osg_ShaderQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osg_ShaderQQQ_QModel::~osg_ShaderQQQ_QModel(){};
 
///DefaultConstructor////////////////
osg_ShaderQQQ_QModel::osg_ShaderQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osg::Shader*>(i->ptr);
}
QQuickItem *osg_ShaderQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osg_ShaderQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg_ShaderQQQ::PREcompoQML()const{return string("");}
const std::string osg_ShaderQQQ::POSTcompoQML()const{return string("");}
QQModel* osg_ShaderQQQ::createQQModel(Instance*i){ return new osg_ShaderQQQ_QModel(i);}

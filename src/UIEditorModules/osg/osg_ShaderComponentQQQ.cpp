#include "osg_ShaderComponentQQQ.hpp"
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
osg_ShaderComponentQQQ_QModel::osg_ShaderComponentQQQ_QModel(const osg_ShaderComponentQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osg_ShaderComponentQQQ_QModel::~osg_ShaderComponentQQQ_QModel(){};
 
///DefaultConstructor////////////////
osg_ShaderComponentQQQ_QModel::osg_ShaderComponentQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osg::ShaderComponent*>(i->ptr);
}
QQuickItem *osg_ShaderComponentQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osg_ShaderComponentQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg_ShaderComponentQQQ::PREcompoQML()const{return string("");}
const std::string osg_ShaderComponentQQQ::POSTcompoQML()const{return string("");}
QQModel* osg_ShaderComponentQQQ::createQQModel(Instance*i){ return new osg_ShaderComponentQQQ_QModel(i);}

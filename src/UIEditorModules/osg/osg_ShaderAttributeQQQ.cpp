#include "osg_ShaderAttributeQQQ.hpp"
#include <list>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/ShaderAttribute>

#include <MetaLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>
using namespace std;
using namespace pmoc;

///Copy Construction////////////////
osg_ShaderAttributeQQQ_QModel::osg_ShaderAttributeQQQ_QModel(const osg_ShaderAttributeQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osg_ShaderAttributeQQQ_QModel::~osg_ShaderAttributeQQQ_QModel(){};
 
///DefaultConstructor////////////////
osg_ShaderAttributeQQQ_QModel::osg_ShaderAttributeQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osg::ShaderAttribute*>(i->ptr);
}
QQuickItem *osg_ShaderAttributeQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osg_ShaderAttributeQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg_ShaderAttributeQQQ::PREcompoQML()const{return string("");}
const std::string osg_ShaderAttributeQQQ::POSTcompoQML()const{return string("");}
QQModel* osg_ShaderAttributeQQQ::createQQModel(Instance*i){ return new osg_ShaderAttributeQQQ_QModel(i);}

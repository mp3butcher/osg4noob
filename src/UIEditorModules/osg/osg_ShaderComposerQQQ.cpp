#include "osg_ShaderComposerQQQ.hpp"
#include <list>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/ShaderComposer>

#include <MetaLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>
using namespace std;
using namespace pmoc;

///Copy Construction////////////////
osg_ShaderComposerQQQ_QModel::osg_ShaderComposerQQQ_QModel(const osg_ShaderComposerQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osg_ShaderComposerQQQ_QModel::~osg_ShaderComposerQQQ_QModel(){};
 
///DefaultConstructor////////////////
osg_ShaderComposerQQQ_QModel::osg_ShaderComposerQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osg::ShaderComposer*>(i->ptr);
}
QQuickItem *osg_ShaderComposerQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osg_ShaderComposerQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg_ShaderComposerQQQ::PREcompoQML()const{return string("");}
const std::string osg_ShaderComposerQQQ::POSTcompoQML()const{return string("");}
QQModel* osg_ShaderComposerQQQ::createQQModel(Instance*i){ return new osg_ShaderComposerQQQ_QModel(i);}

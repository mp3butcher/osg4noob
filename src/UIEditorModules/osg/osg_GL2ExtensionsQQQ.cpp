#include "osg_GL2ExtensionsQQQ.hpp"
#include <list>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/GL2Extensions>

#include <MetaLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>
using namespace std;
using namespace pmoc;

///Copy Construction////////////////
osg_GL2ExtensionsQQQ_QModel::osg_GL2ExtensionsQQQ_QModel(const osg_GL2ExtensionsQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osg_GL2ExtensionsQQQ_QModel::~osg_GL2ExtensionsQQQ_QModel(){};
 
///DefaultConstructor////////////////
osg_GL2ExtensionsQQQ_QModel::osg_GL2ExtensionsQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osg::GL2Extensions*>(i->ptr);
}
QQuickItem *osg_GL2ExtensionsQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osg_GL2ExtensionsQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg_GL2ExtensionsQQQ::PREcompoQML()const{return string("");}
const std::string osg_GL2ExtensionsQQQ::POSTcompoQML()const{return string("");}
QQModel* osg_GL2ExtensionsQQQ::createQQModel(Instance*i){ return new osg_GL2ExtensionsQQQ_QModel(i);}

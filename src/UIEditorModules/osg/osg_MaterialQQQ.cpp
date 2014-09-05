#include "osg_MaterialQQQ.hpp"
#include <list>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/Material>

#include <MetaLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>
using namespace std;
using namespace pmoc;

///Copy Construction////////////////
osg_MaterialQQQ_QModel::osg_MaterialQQQ_QModel(const osg_MaterialQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osg_MaterialQQQ_QModel::~osg_MaterialQQQ_QModel(){};

///DefaultConstructor////////////////
osg_MaterialQQQ_QModel::osg_MaterialQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osg::Material*>(i->ptr);
}
QQuickItem *osg_MaterialQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osg_MaterialQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg_MaterialQQQ::PREcompoQML()const{return string("");}
const std::string osg_MaterialQQQ::POSTcompoQML()const{return string("");}
QQModel* osg_MaterialQQQ::createQQModel(Instance*i){ return new osg_MaterialQQQ_QModel(i);}

#include "osg_StateQQQ.hpp"
#include <list>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/State>

#include <MetaLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>
using namespace std;
using namespace pmoc;

///Copy Construction////////////////
osg_StateQQQ_QModel::osg_StateQQQ_QModel(const osg_StateQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osg_StateQQQ_QModel::~osg_StateQQQ_QModel(){};
 
///DefaultConstructor////////////////
osg_StateQQQ_QModel::osg_StateQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osg::State*>(i->ptr);
}
QQuickItem *osg_StateQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osg_StateQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg_StateQQQ::PREcompoQML()const{return string("");}
const std::string osg_StateQQQ::POSTcompoQML()const{return string("");}
QQModel* osg_StateQQQ::createQQModel(Instance*i){ return new osg_StateQQQ_QModel(i);}

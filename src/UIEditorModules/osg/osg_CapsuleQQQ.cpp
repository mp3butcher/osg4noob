#include "osg_CapsuleQQQ.hpp"
#include <list>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/Shape>

#include <MetaLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>
using namespace std;
using namespace pmoc;

///Copy Construction////////////////
osg_CapsuleQQQ_QModel::osg_CapsuleQQQ_QModel(const osg_CapsuleQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osg_CapsuleQQQ_QModel::~osg_CapsuleQQQ_QModel(){};
 
///DefaultConstructor////////////////
osg_CapsuleQQQ_QModel::osg_CapsuleQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osg::Capsule*>(i->ptr);
}
QQuickItem *osg_CapsuleQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osg_CapsuleQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg_CapsuleQQQ::PREcompoQML()const{return string("");}
const std::string osg_CapsuleQQQ::POSTcompoQML()const{return string("");}
QQModel* osg_CapsuleQQQ::createQQModel(Instance*i){ return new osg_CapsuleQQQ_QModel(i);}

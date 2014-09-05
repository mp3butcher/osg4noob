#include "osg_MultisampleQQQ.hpp"
#include <list>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/Multisample>

#include <MetaLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>
using namespace std;
using namespace pmoc;

///Copy Construction////////////////
osg_MultisampleQQQ_QModel::osg_MultisampleQQQ_QModel(const osg_MultisampleQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osg_MultisampleQQQ_QModel::~osg_MultisampleQQQ_QModel(){};
 
///DefaultConstructor////////////////
osg_MultisampleQQQ_QModel::osg_MultisampleQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osg::Multisample*>(i->ptr);
}
QQuickItem *osg_MultisampleQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osg_MultisampleQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg_MultisampleQQQ::PREcompoQML()const{return string("");}
const std::string osg_MultisampleQQQ::POSTcompoQML()const{return string("");}
QQModel* osg_MultisampleQQQ::createQQModel(Instance*i){ return new osg_MultisampleQQQ_QModel(i);}

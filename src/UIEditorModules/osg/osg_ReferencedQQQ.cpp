#include "osg_ReferencedQQQ.hpp"
#include <list>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/Referenced>

#include <MetaLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>
using namespace std;
using namespace pmoc;

///Copy Construction////////////////
osg_ReferencedQQQ_QModel::osg_ReferencedQQQ_QModel(const osg_ReferencedQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osg_ReferencedQQQ_QModel::~osg_ReferencedQQQ_QModel(){};
 
///DefaultConstructor////////////////
osg_ReferencedQQQ_QModel::osg_ReferencedQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osg::Referenced*>(i->ptr);
}
QQuickItem *osg_ReferencedQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osg_ReferencedQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg_ReferencedQQQ::PREcompoQML()const{return string("");}
const std::string osg_ReferencedQQQ::POSTcompoQML()const{return string("");}
QQModel* osg_ReferencedQQQ::createQQModel(Instance*i){ return new osg_ReferencedQQQ_QModel(i);}

#include "osg_PrimitiveSetQQQ.hpp"
#include <list>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/PrimitiveSet>

#include <MetaLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>
using namespace std;
using namespace pmoc;

///Copy Construction////////////////
osg_PrimitiveSetQQQ_QModel::osg_PrimitiveSetQQQ_QModel(const osg_PrimitiveSetQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osg_PrimitiveSetQQQ_QModel::~osg_PrimitiveSetQQQ_QModel(){};
 
///DefaultConstructor////////////////
osg_PrimitiveSetQQQ_QModel::osg_PrimitiveSetQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osg::PrimitiveSet*>(i->ptr);
}
QQuickItem *osg_PrimitiveSetQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osg_PrimitiveSetQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg_PrimitiveSetQQQ::PREcompoQML()const{return string("");}
const std::string osg_PrimitiveSetQQQ::POSTcompoQML()const{return string("");}
QQModel* osg_PrimitiveSetQQQ::createQQModel(Instance*i){ return new osg_PrimitiveSetQQQ_QModel(i);}

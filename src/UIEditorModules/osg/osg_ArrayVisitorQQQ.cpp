#include "osg_ArrayVisitorQQQ.hpp"
#include <list>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/Array>

#include <MetaLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>
using namespace std;
using namespace pmoc;

///Copy Construction////////////////
osg_ArrayVisitorQQQ_QModel::osg_ArrayVisitorQQQ_QModel(const osg_ArrayVisitorQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osg_ArrayVisitorQQQ_QModel::~osg_ArrayVisitorQQQ_QModel(){};
 
///DefaultConstructor////////////////
osg_ArrayVisitorQQQ_QModel::osg_ArrayVisitorQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osg::ArrayVisitor*>(i->ptr);
}
QQuickItem *osg_ArrayVisitorQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osg_ArrayVisitorQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg_ArrayVisitorQQQ::PREcompoQML()const{return string("");}
const std::string osg_ArrayVisitorQQQ::POSTcompoQML()const{return string("");}
QQModel* osg_ArrayVisitorQQQ::createQQModel(Instance*i){ return new osg_ArrayVisitorQQQ_QModel(i);}

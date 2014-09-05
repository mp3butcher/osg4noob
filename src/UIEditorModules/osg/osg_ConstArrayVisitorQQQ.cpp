#include "osg_ConstArrayVisitorQQQ.hpp"
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
osg_ConstArrayVisitorQQQ_QModel::osg_ConstArrayVisitorQQQ_QModel(const osg_ConstArrayVisitorQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osg_ConstArrayVisitorQQQ_QModel::~osg_ConstArrayVisitorQQQ_QModel(){};
 
///DefaultConstructor////////////////
osg_ConstArrayVisitorQQQ_QModel::osg_ConstArrayVisitorQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osg::ConstArrayVisitor*>(i->ptr);
}
QQuickItem *osg_ConstArrayVisitorQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osg_ConstArrayVisitorQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg_ConstArrayVisitorQQQ::PREcompoQML()const{return string("");}
const std::string osg_ConstArrayVisitorQQQ::POSTcompoQML()const{return string("");}
QQModel* osg_ConstArrayVisitorQQQ::createQQModel(Instance*i){ return new osg_ConstArrayVisitorQQQ_QModel(i);}

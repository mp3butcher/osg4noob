#include "osg_ConstValueVisitorQQQ.hpp"
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
osg_ConstValueVisitorQQQ_QModel::osg_ConstValueVisitorQQQ_QModel(const osg_ConstValueVisitorQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osg_ConstValueVisitorQQQ_QModel::~osg_ConstValueVisitorQQQ_QModel(){};
 
///DefaultConstructor////////////////
osg_ConstValueVisitorQQQ_QModel::osg_ConstValueVisitorQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osg::ConstValueVisitor*>(i->ptr);
}
QQuickItem *osg_ConstValueVisitorQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osg_ConstValueVisitorQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg_ConstValueVisitorQQQ::PREcompoQML()const{return string("");}
const std::string osg_ConstValueVisitorQQQ::POSTcompoQML()const{return string("");}
QQModel* osg_ConstValueVisitorQQQ::createQQModel(Instance*i){ return new osg_ConstValueVisitorQQQ_QModel(i);}

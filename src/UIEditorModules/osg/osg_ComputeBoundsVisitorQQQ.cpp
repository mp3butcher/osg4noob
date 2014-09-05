#include "osg_ComputeBoundsVisitorQQQ.hpp"
#include <list>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/ComputeBoundsVisitor>

#include <MetaLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>
using namespace std;
using namespace pmoc;

///Copy Construction////////////////
osg_ComputeBoundsVisitorQQQ_QModel::osg_ComputeBoundsVisitorQQQ_QModel(const osg_ComputeBoundsVisitorQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osg_ComputeBoundsVisitorQQQ_QModel::~osg_ComputeBoundsVisitorQQQ_QModel(){};
 
///DefaultConstructor////////////////
osg_ComputeBoundsVisitorQQQ_QModel::osg_ComputeBoundsVisitorQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osg::ComputeBoundsVisitor*>(i->ptr);
}
QQuickItem *osg_ComputeBoundsVisitorQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osg_ComputeBoundsVisitorQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg_ComputeBoundsVisitorQQQ::PREcompoQML()const{return string("");}
const std::string osg_ComputeBoundsVisitorQQQ::POSTcompoQML()const{return string("");}
QQModel* osg_ComputeBoundsVisitorQQQ::createQQModel(Instance*i){ return new osg_ComputeBoundsVisitorQQQ_QModel(i);}

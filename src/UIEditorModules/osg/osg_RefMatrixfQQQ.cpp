#include "osg_RefMatrixfQQQ.hpp"
#include <list>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/Matrixf>

#include <MetaLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>
using namespace std;
using namespace pmoc;

///Copy Construction////////////////
osg_RefMatrixfQQQ_QModel::osg_RefMatrixfQQQ_QModel(const osg_RefMatrixfQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osg_RefMatrixfQQQ_QModel::~osg_RefMatrixfQQQ_QModel(){};
 
///DefaultConstructor////////////////
osg_RefMatrixfQQQ_QModel::osg_RefMatrixfQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osg::RefMatrixf*>(i->ptr);
}
QQuickItem *osg_RefMatrixfQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osg_RefMatrixfQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg_RefMatrixfQQQ::PREcompoQML()const{return string("");}
const std::string osg_RefMatrixfQQQ::POSTcompoQML()const{return string("");}
QQModel* osg_RefMatrixfQQQ::createQQModel(Instance*i){ return new osg_RefMatrixfQQQ_QModel(i);}

#include "osg_BillboardQQQ.hpp"
#include <list>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/Billboard>

#include <MetaLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>
using namespace std;
using namespace pmoc;

///Copy Construction////////////////
osg_BillboardQQQ_QModel::osg_BillboardQQQ_QModel(const osg_BillboardQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osg_BillboardQQQ_QModel::~osg_BillboardQQQ_QModel(){};
 
///DefaultConstructor////////////////
osg_BillboardQQQ_QModel::osg_BillboardQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osg::Billboard*>(i->ptr);
}
QQuickItem *osg_BillboardQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osg_BillboardQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg_BillboardQQQ::PREcompoQML()const{return string("");}
const std::string osg_BillboardQQQ::POSTcompoQML()const{return string("");}
QQModel* osg_BillboardQQQ::createQQModel(Instance*i){ return new osg_BillboardQQQ_QModel(i);}

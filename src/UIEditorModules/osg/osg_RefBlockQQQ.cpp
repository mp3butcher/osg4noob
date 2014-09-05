#include "osg_RefBlockQQQ.hpp"
#include <list>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/OperationThread>

#include <MetaLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>
using namespace std;
using namespace pmoc;

///Copy Construction////////////////
osg_RefBlockQQQ_QModel::osg_RefBlockQQQ_QModel(const osg_RefBlockQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osg_RefBlockQQQ_QModel::~osg_RefBlockQQQ_QModel(){};
 
///DefaultConstructor////////////////
osg_RefBlockQQQ_QModel::osg_RefBlockQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osg::RefBlock*>(i->ptr);
}
QQuickItem *osg_RefBlockQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osg_RefBlockQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg_RefBlockQQQ::PREcompoQML()const{return string("");}
const std::string osg_RefBlockQQQ::POSTcompoQML()const{return string("");}
QQModel* osg_RefBlockQQQ::createQQModel(Instance*i){ return new osg_RefBlockQQQ_QModel(i);}

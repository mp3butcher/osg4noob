#include "osg_RefBlockCountQQQ.hpp"
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
osg_RefBlockCountQQQ_QModel::osg_RefBlockCountQQQ_QModel(const osg_RefBlockCountQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osg_RefBlockCountQQQ_QModel::~osg_RefBlockCountQQQ_QModel(){};
 
///DefaultConstructor////////////////
osg_RefBlockCountQQQ_QModel::osg_RefBlockCountQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osg::RefBlockCount*>(i->ptr);
}
QQuickItem *osg_RefBlockCountQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osg_RefBlockCountQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg_RefBlockCountQQQ::PREcompoQML()const{return string("");}
const std::string osg_RefBlockCountQQQ::POSTcompoQML()const{return string("");}
QQModel* osg_RefBlockCountQQQ::createQQModel(Instance*i){ return new osg_RefBlockCountQQQ_QModel(i);}

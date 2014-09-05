#include "osg_ArrayDispatchersQQQ.hpp"
#include <list>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/ArrayDispatchers>

#include <MetaLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>
using namespace std;
using namespace pmoc;

///Copy Construction////////////////
osg_ArrayDispatchersQQQ_QModel::osg_ArrayDispatchersQQQ_QModel(const osg_ArrayDispatchersQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osg_ArrayDispatchersQQQ_QModel::~osg_ArrayDispatchersQQQ_QModel(){};
 
///DefaultConstructor////////////////
osg_ArrayDispatchersQQQ_QModel::osg_ArrayDispatchersQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osg::ArrayDispatchers*>(i->ptr);
}
QQuickItem *osg_ArrayDispatchersQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osg_ArrayDispatchersQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg_ArrayDispatchersQQQ::PREcompoQML()const{return string("");}
const std::string osg_ArrayDispatchersQQQ::POSTcompoQML()const{return string("");}
QQModel* osg_ArrayDispatchersQQQ::createQQModel(Instance*i){ return new osg_ArrayDispatchersQQQ_QModel(i);}

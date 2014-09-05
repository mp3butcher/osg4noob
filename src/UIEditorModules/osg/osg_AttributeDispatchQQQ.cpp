#include "osg_AttributeDispatchQQQ.hpp"
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
osg_AttributeDispatchQQQ_QModel::osg_AttributeDispatchQQQ_QModel(const osg_AttributeDispatchQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osg_AttributeDispatchQQQ_QModel::~osg_AttributeDispatchQQQ_QModel(){};
 
///DefaultConstructor////////////////
osg_AttributeDispatchQQQ_QModel::osg_AttributeDispatchQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osg::AttributeDispatch*>(i->ptr);
}
QQuickItem *osg_AttributeDispatchQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osg_AttributeDispatchQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg_AttributeDispatchQQQ::PREcompoQML()const{return string("");}
const std::string osg_AttributeDispatchQQQ::POSTcompoQML()const{return string("");}
QQModel* osg_AttributeDispatchQQQ::createQQModel(Instance*i){ return new osg_AttributeDispatchQQQ_QModel(i);}

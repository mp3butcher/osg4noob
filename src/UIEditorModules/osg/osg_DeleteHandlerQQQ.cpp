#include "osg_DeleteHandlerQQQ.hpp"
#include <list>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/DeleteHandler>

#include <MetaLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>
using namespace std;
using namespace pmoc;

///Copy Construction////////////////
osg_DeleteHandlerQQQ_QModel::osg_DeleteHandlerQQQ_QModel(const osg_DeleteHandlerQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osg_DeleteHandlerQQQ_QModel::~osg_DeleteHandlerQQQ_QModel(){};
 
///DefaultConstructor////////////////
osg_DeleteHandlerQQQ_QModel::osg_DeleteHandlerQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osg::DeleteHandler*>(i->ptr);
}
QQuickItem *osg_DeleteHandlerQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osg_DeleteHandlerQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg_DeleteHandlerQQQ::PREcompoQML()const{return string("");}
const std::string osg_DeleteHandlerQQQ::POSTcompoQML()const{return string("");}
QQModel* osg_DeleteHandlerQQQ::createQQModel(Instance*i){ return new osg_DeleteHandlerQQQ_QModel(i);}

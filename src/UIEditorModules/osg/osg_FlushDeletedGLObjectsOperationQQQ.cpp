#include "osg_FlushDeletedGLObjectsOperationQQQ.hpp"
#include <list>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/GraphicsThread>

#include <MetaLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>
using namespace std;
using namespace pmoc;

///Copy Construction////////////////
osg_FlushDeletedGLObjectsOperationQQQ_QModel::osg_FlushDeletedGLObjectsOperationQQQ_QModel(const osg_FlushDeletedGLObjectsOperationQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osg_FlushDeletedGLObjectsOperationQQQ_QModel::~osg_FlushDeletedGLObjectsOperationQQQ_QModel(){};
 
///DefaultConstructor////////////////
osg_FlushDeletedGLObjectsOperationQQQ_QModel::osg_FlushDeletedGLObjectsOperationQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osg::FlushDeletedGLObjectsOperation*>(i->ptr);
}
QQuickItem *osg_FlushDeletedGLObjectsOperationQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osg_FlushDeletedGLObjectsOperationQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg_FlushDeletedGLObjectsOperationQQQ::PREcompoQML()const{return string("");}
const std::string osg_FlushDeletedGLObjectsOperationQQQ::POSTcompoQML()const{return string("");}
QQModel* osg_FlushDeletedGLObjectsOperationQQQ::createQQModel(Instance*i){ return new osg_FlushDeletedGLObjectsOperationQQQ_QModel(i);}

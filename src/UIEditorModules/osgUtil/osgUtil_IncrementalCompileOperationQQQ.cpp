#include "osgUtil_IncrementalCompileOperationQQQ.hpp"
#include <list>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaQQuickClass.h>
#include <osgUtil/IncrementalCompileOperation>

#include <MetaLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>
using namespace std;
using namespace pmoc;

///Copy Construction////////////////
osgUtil_IncrementalCompileOperationQQQ_QModel::osgUtil_IncrementalCompileOperationQQQ_QModel(const osgUtil_IncrementalCompileOperationQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osgUtil_IncrementalCompileOperationQQQ_QModel::~osgUtil_IncrementalCompileOperationQQQ_QModel(){};
 
///DefaultConstructor////////////////
osgUtil_IncrementalCompileOperationQQQ_QModel::osgUtil_IncrementalCompileOperationQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osgUtil::IncrementalCompileOperation*>(i->ptr);
}
QQuickItem *osgUtil_IncrementalCompileOperationQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osgUtil_IncrementalCompileOperationQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osgUtil_IncrementalCompileOperationQQQ::PREcompoQML()const{return string("");}
const std::string osgUtil_IncrementalCompileOperationQQQ::POSTcompoQML()const{return string("");}
QQModel* osgUtil_IncrementalCompileOperationQQQ::createQQModel(Instance*i){ return new osgUtil_IncrementalCompileOperationQQQ_QModel(i);}

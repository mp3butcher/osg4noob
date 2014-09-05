#include "osg_RunOperationsQQQ.hpp"
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
osg_RunOperationsQQQ_QModel::osg_RunOperationsQQQ_QModel(const osg_RunOperationsQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osg_RunOperationsQQQ_QModel::~osg_RunOperationsQQQ_QModel(){};
 
///DefaultConstructor////////////////
osg_RunOperationsQQQ_QModel::osg_RunOperationsQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osg::RunOperations*>(i->ptr);
}
QQuickItem *osg_RunOperationsQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osg_RunOperationsQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg_RunOperationsQQQ::PREcompoQML()const{return string("");}
const std::string osg_RunOperationsQQQ::POSTcompoQML()const{return string("");}
QQModel* osg_RunOperationsQQQ::createQQModel(Instance*i){ return new osg_RunOperationsQQQ_QModel(i);}

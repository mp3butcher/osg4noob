#include "osg_EndOfDynamicDrawBlockQQQ.hpp"
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
osg_EndOfDynamicDrawBlockQQQ_QModel::osg_EndOfDynamicDrawBlockQQQ_QModel(const osg_EndOfDynamicDrawBlockQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osg_EndOfDynamicDrawBlockQQQ_QModel::~osg_EndOfDynamicDrawBlockQQQ_QModel(){};
 
///DefaultConstructor////////////////
osg_EndOfDynamicDrawBlockQQQ_QModel::osg_EndOfDynamicDrawBlockQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osg::EndOfDynamicDrawBlock*>(i->ptr);
}
QQuickItem *osg_EndOfDynamicDrawBlockQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osg_EndOfDynamicDrawBlockQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg_EndOfDynamicDrawBlockQQQ::PREcompoQML()const{return string("");}
const std::string osg_EndOfDynamicDrawBlockQQQ::POSTcompoQML()const{return string("");}
QQModel* osg_EndOfDynamicDrawBlockQQQ::createQQModel(Instance*i){ return new osg_EndOfDynamicDrawBlockQQQ_QModel(i);}

#include "osg_NodeTrackerCallbackQQQ.hpp"
#include <list>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/NodeTrackerCallback>

#include <MetaLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>
using namespace std;
using namespace pmoc;

///Copy Construction////////////////
osg_NodeTrackerCallbackQQQ_QModel::osg_NodeTrackerCallbackQQQ_QModel(const osg_NodeTrackerCallbackQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osg_NodeTrackerCallbackQQQ_QModel::~osg_NodeTrackerCallbackQQQ_QModel(){};
 
///DefaultConstructor////////////////
osg_NodeTrackerCallbackQQQ_QModel::osg_NodeTrackerCallbackQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osg::NodeTrackerCallback*>(i->ptr);
}
QQuickItem *osg_NodeTrackerCallbackQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osg_NodeTrackerCallbackQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg_NodeTrackerCallbackQQQ::PREcompoQML()const{return string("");}
const std::string osg_NodeTrackerCallbackQQQ::POSTcompoQML()const{return string("");}
QQModel* osg_NodeTrackerCallbackQQQ::createQQModel(Instance*i){ return new osg_NodeTrackerCallbackQQQ_QModel(i);}

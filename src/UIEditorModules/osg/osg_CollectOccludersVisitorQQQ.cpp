#include "osg_CollectOccludersVisitorQQQ.hpp"
#include <list>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/CollectOccludersVisitor>

#include <MetaLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>
using namespace std;
using namespace pmoc;

///Copy Construction////////////////
osg_CollectOccludersVisitorQQQ_QModel::osg_CollectOccludersVisitorQQQ_QModel(const osg_CollectOccludersVisitorQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osg_CollectOccludersVisitorQQQ_QModel::~osg_CollectOccludersVisitorQQQ_QModel(){};
 
///DefaultConstructor////////////////
osg_CollectOccludersVisitorQQQ_QModel::osg_CollectOccludersVisitorQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osg::CollectOccludersVisitor*>(i->ptr);
}
QQuickItem *osg_CollectOccludersVisitorQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osg_CollectOccludersVisitorQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg_CollectOccludersVisitorQQQ::PREcompoQML()const{return string("");}
const std::string osg_CollectOccludersVisitorQQQ::POSTcompoQML()const{return string("");}
QQModel* osg_CollectOccludersVisitorQQQ::createQQModel(Instance*i){ return new osg_CollectOccludersVisitorQQQ_QModel(i);}

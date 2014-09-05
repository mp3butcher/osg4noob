#include "osg_ProxyNodeQQQ.hpp"
#include <list>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/ProxyNode>

#include <MetaLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>
using namespace std;
using namespace pmoc;

///Copy Construction////////////////
osg_ProxyNodeQQQ_QModel::osg_ProxyNodeQQQ_QModel(const osg_ProxyNodeQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osg_ProxyNodeQQQ_QModel::~osg_ProxyNodeQQQ_QModel(){};
 
///DefaultConstructor////////////////
osg_ProxyNodeQQQ_QModel::osg_ProxyNodeQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osg::ProxyNode*>(i->ptr);
}
QQuickItem *osg_ProxyNodeQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osg_ProxyNodeQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg_ProxyNodeQQQ::PREcompoQML()const{return string("");}
const std::string osg_ProxyNodeQQQ::POSTcompoQML()const{return string("");}
QQModel* osg_ProxyNodeQQQ::createQQModel(Instance*i){ return new osg_ProxyNodeQQQ_QModel(i);}
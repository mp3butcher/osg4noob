#include "osg_ApplicationUsageProxyQQQ.hpp"
#include <list>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/ApplicationUsage>

#include <MetaLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>
using namespace std;
using namespace pmoc;

///Copy Construction////////////////
osg_ApplicationUsageProxyQQQ_QModel::osg_ApplicationUsageProxyQQQ_QModel(const osg_ApplicationUsageProxyQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osg_ApplicationUsageProxyQQQ_QModel::~osg_ApplicationUsageProxyQQQ_QModel(){};
 
///DefaultConstructor////////////////
osg_ApplicationUsageProxyQQQ_QModel::osg_ApplicationUsageProxyQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osg::ApplicationUsageProxy*>(i->ptr);
}
QQuickItem *osg_ApplicationUsageProxyQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osg_ApplicationUsageProxyQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg_ApplicationUsageProxyQQQ::PREcompoQML()const{return string("");}
const std::string osg_ApplicationUsageProxyQQQ::POSTcompoQML()const{return string("");}
QQModel* osg_ApplicationUsageProxyQQQ::createQQModel(Instance*i){ return new osg_ApplicationUsageProxyQQQ_QModel(i);}

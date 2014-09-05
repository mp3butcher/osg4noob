#include "osg_ApplicationUsageQQQ.hpp"
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
osg_ApplicationUsageQQQ_QModel::osg_ApplicationUsageQQQ_QModel(const osg_ApplicationUsageQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osg_ApplicationUsageQQQ_QModel::~osg_ApplicationUsageQQQ_QModel(){};
 
///DefaultConstructor////////////////
osg_ApplicationUsageQQQ_QModel::osg_ApplicationUsageQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osg::ApplicationUsage*>(i->ptr);
}
QQuickItem *osg_ApplicationUsageQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osg_ApplicationUsageQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg_ApplicationUsageQQQ::PREcompoQML()const{return string("");}
const std::string osg_ApplicationUsageQQQ::POSTcompoQML()const{return string("");}
QQModel* osg_ApplicationUsageQQQ::createQQModel(Instance*i){ return new osg_ApplicationUsageQQQ_QModel(i);}

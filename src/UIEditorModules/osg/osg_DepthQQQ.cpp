#include "osg_DepthQQQ.hpp"
#include <list>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/Depth>

#include <MetaLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>
using namespace std;
using namespace pmoc;

///Copy Construction////////////////
osg_DepthQQQ_QModel::osg_DepthQQQ_QModel(const osg_DepthQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osg_DepthQQQ_QModel::~osg_DepthQQQ_QModel(){};
 
///DefaultConstructor////////////////
osg_DepthQQQ_QModel::osg_DepthQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osg::Depth*>(i->ptr);
}
QQuickItem *osg_DepthQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osg_DepthQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg_DepthQQQ::PREcompoQML()const{return string("");}
const std::string osg_DepthQQQ::POSTcompoQML()const{return string("");}
QQModel* osg_DepthQQQ::createQQModel(Instance*i){ return new osg_DepthQQQ_QModel(i);}

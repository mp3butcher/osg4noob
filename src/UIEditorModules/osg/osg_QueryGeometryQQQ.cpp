#include "osg_QueryGeometryQQQ.hpp"
#include <list>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/OcclusionQueryNode>

#include <MetaLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>
using namespace std;
using namespace pmoc;

///Copy Construction////////////////
osg_QueryGeometryQQQ_QModel::osg_QueryGeometryQQQ_QModel(const osg_QueryGeometryQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osg_QueryGeometryQQQ_QModel::~osg_QueryGeometryQQQ_QModel(){};
 
///DefaultConstructor////////////////
osg_QueryGeometryQQQ_QModel::osg_QueryGeometryQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osg::QueryGeometry*>(i->ptr);
}
QQuickItem *osg_QueryGeometryQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osg_QueryGeometryQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg_QueryGeometryQQQ::PREcompoQML()const{return string("");}
const std::string osg_QueryGeometryQQQ::POSTcompoQML()const{return string("");}
QQModel* osg_QueryGeometryQQQ::createQQModel(Instance*i){ return new osg_QueryGeometryQQQ_QModel(i);}

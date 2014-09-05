#include "osgUtil_PolytopeIntersectorQQQ.hpp"
#include <list>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaQQuickClass.h>
#include <osgUtil/PolytopeIntersector>

#include <MetaLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>
using namespace std;
using namespace pmoc;

///Copy Construction////////////////
osgUtil_PolytopeIntersectorQQQ_QModel::osgUtil_PolytopeIntersectorQQQ_QModel(const osgUtil_PolytopeIntersectorQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osgUtil_PolytopeIntersectorQQQ_QModel::~osgUtil_PolytopeIntersectorQQQ_QModel(){};
 
///DefaultConstructor////////////////
osgUtil_PolytopeIntersectorQQQ_QModel::osgUtil_PolytopeIntersectorQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osgUtil::PolytopeIntersector*>(i->ptr);
}
QQuickItem *osgUtil_PolytopeIntersectorQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osgUtil_PolytopeIntersectorQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osgUtil_PolytopeIntersectorQQQ::PREcompoQML()const{return string("");}
const std::string osgUtil_PolytopeIntersectorQQQ::POSTcompoQML()const{return string("");}
QQModel* osgUtil_PolytopeIntersectorQQQ::createQQModel(Instance*i){ return new osgUtil_PolytopeIntersectorQQQ_QModel(i);}

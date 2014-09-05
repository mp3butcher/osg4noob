#include "osgUtil_PlaneIntersectorQQQ.hpp"
#include <list>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaQQuickClass.h>
#include <osgUtil/PlaneIntersector>

#include <MetaLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>
using namespace std;
using namespace pmoc;

///Copy Construction////////////////
osgUtil_PlaneIntersectorQQQ_QModel::osgUtil_PlaneIntersectorQQQ_QModel(const osgUtil_PlaneIntersectorQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osgUtil_PlaneIntersectorQQQ_QModel::~osgUtil_PlaneIntersectorQQQ_QModel(){};
 
///DefaultConstructor////////////////
osgUtil_PlaneIntersectorQQQ_QModel::osgUtil_PlaneIntersectorQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osgUtil::PlaneIntersector*>(i->ptr);
}
QQuickItem *osgUtil_PlaneIntersectorQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osgUtil_PlaneIntersectorQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osgUtil_PlaneIntersectorQQQ::PREcompoQML()const{return string("");}
const std::string osgUtil_PlaneIntersectorQQQ::POSTcompoQML()const{return string("");}
QQModel* osgUtil_PlaneIntersectorQQQ::createQQModel(Instance*i){ return new osgUtil_PlaneIntersectorQQQ_QModel(i);}

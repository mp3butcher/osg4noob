#include "osgUtil_HitQQQ.hpp"
#include <list>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaQQuickClass.h>
#include <osgUtil/IntersectVisitor>

#include <MetaLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>
using namespace std;
using namespace pmoc;

///Copy Construction////////////////
osgUtil_HitQQQ_QModel::osgUtil_HitQQQ_QModel(const osgUtil_HitQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osgUtil_HitQQQ_QModel::~osgUtil_HitQQQ_QModel(){};
 
///DefaultConstructor////////////////
osgUtil_HitQQQ_QModel::osgUtil_HitQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osgUtil::Hit*>(i->ptr);
}
QQuickItem *osgUtil_HitQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osgUtil_HitQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osgUtil_HitQQQ::PREcompoQML()const{return string("");}
const std::string osgUtil_HitQQQ::POSTcompoQML()const{return string("");}
QQModel* osgUtil_HitQQQ::createQQModel(Instance*i){ return new osgUtil_HitQQQ_QModel(i);}

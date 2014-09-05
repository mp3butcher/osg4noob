#include "osgUtil_IntersectorQQQ.hpp"
#include <list>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaQQuickClass.h>
#include <osgUtil/IntersectionVisitor>

#include <MetaLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>
using namespace std;
using namespace pmoc;

///Copy Construction////////////////
osgUtil_IntersectorQQQ_QModel::osgUtil_IntersectorQQQ_QModel(const osgUtil_IntersectorQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osgUtil_IntersectorQQQ_QModel::~osgUtil_IntersectorQQQ_QModel(){};
 
///DefaultConstructor////////////////
osgUtil_IntersectorQQQ_QModel::osgUtil_IntersectorQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osgUtil::Intersector*>(i->ptr);
}
QQuickItem *osgUtil_IntersectorQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osgUtil_IntersectorQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osgUtil_IntersectorQQQ::PREcompoQML()const{return string("");}
const std::string osgUtil_IntersectorQQQ::POSTcompoQML()const{return string("");}
QQModel* osgUtil_IntersectorQQQ::createQQModel(Instance*i){ return new osgUtil_IntersectorQQQ_QModel(i);}

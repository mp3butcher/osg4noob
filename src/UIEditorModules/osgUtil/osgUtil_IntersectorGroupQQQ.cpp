#include "osgUtil_IntersectorGroupQQQ.hpp"
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
osgUtil_IntersectorGroupQQQ_QModel::osgUtil_IntersectorGroupQQQ_QModel(const osgUtil_IntersectorGroupQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osgUtil_IntersectorGroupQQQ_QModel::~osgUtil_IntersectorGroupQQQ_QModel(){};
 
///DefaultConstructor////////////////
osgUtil_IntersectorGroupQQQ_QModel::osgUtil_IntersectorGroupQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osgUtil::IntersectorGroup*>(i->ptr);
}
QQuickItem *osgUtil_IntersectorGroupQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osgUtil_IntersectorGroupQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osgUtil_IntersectorGroupQQQ::PREcompoQML()const{return string("");}
const std::string osgUtil_IntersectorGroupQQQ::POSTcompoQML()const{return string("");}
QQModel* osgUtil_IntersectorGroupQQQ::createQQModel(Instance*i){ return new osgUtil_IntersectorGroupQQQ_QModel(i);}

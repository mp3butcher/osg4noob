#include "osgUtil_RenderLeafQQQ.hpp"
#include <list>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaQQuickClass.h>
#include <osgUtil/RenderLeaf>

#include <MetaLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>
using namespace std;
using namespace pmoc;

///Copy Construction////////////////
osgUtil_RenderLeafQQQ_QModel::osgUtil_RenderLeafQQQ_QModel(const osgUtil_RenderLeafQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osgUtil_RenderLeafQQQ_QModel::~osgUtil_RenderLeafQQQ_QModel(){};
 
///DefaultConstructor////////////////
osgUtil_RenderLeafQQQ_QModel::osgUtil_RenderLeafQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osgUtil::RenderLeaf*>(i->ptr);
}
QQuickItem *osgUtil_RenderLeafQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osgUtil_RenderLeafQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osgUtil_RenderLeafQQQ::PREcompoQML()const{return string("");}
const std::string osgUtil_RenderLeafQQQ::POSTcompoQML()const{return string("");}
QQModel* osgUtil_RenderLeafQQQ::createQQModel(Instance*i){ return new osgUtil_RenderLeafQQQ_QModel(i);}

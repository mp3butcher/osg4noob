#include "osgUtil_TessellatorQQQ.hpp"
#include <list>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaQQuickClass.h>
#include <osgUtil/Tessellator>

#include <MetaLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>
using namespace std;
using namespace pmoc;

///Copy Construction////////////////
osgUtil_TessellatorQQQ_QModel::osgUtil_TessellatorQQQ_QModel(const osgUtil_TessellatorQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osgUtil_TessellatorQQQ_QModel::~osgUtil_TessellatorQQQ_QModel(){};
 
///DefaultConstructor////////////////
osgUtil_TessellatorQQQ_QModel::osgUtil_TessellatorQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osgUtil::Tessellator*>(i->ptr);
}
QQuickItem *osgUtil_TessellatorQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osgUtil_TessellatorQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osgUtil_TessellatorQQQ::PREcompoQML()const{return string("");}
const std::string osgUtil_TessellatorQQQ::POSTcompoQML()const{return string("");}
QQModel* osgUtil_TessellatorQQQ::createQQModel(Instance*i){ return new osgUtil_TessellatorQQQ_QModel(i);}

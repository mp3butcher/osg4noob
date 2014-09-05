#include "osg_TessellationHintsQQQ.hpp"
#include <list>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/ShapeDrawable>

#include <MetaLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>
using namespace std;
using namespace pmoc;

///Copy Construction////////////////
osg_TessellationHintsQQQ_QModel::osg_TessellationHintsQQQ_QModel(const osg_TessellationHintsQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osg_TessellationHintsQQQ_QModel::~osg_TessellationHintsQQQ_QModel(){};
 
///DefaultConstructor////////////////
osg_TessellationHintsQQQ_QModel::osg_TessellationHintsQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osg::TessellationHints*>(i->ptr);
}
QQuickItem *osg_TessellationHintsQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osg_TessellationHintsQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg_TessellationHintsQQQ::PREcompoQML()const{return string("");}
const std::string osg_TessellationHintsQQQ::POSTcompoQML()const{return string("");}
QQModel* osg_TessellationHintsQQQ::createQQModel(Instance*i){ return new osg_TessellationHintsQQQ_QModel(i);}

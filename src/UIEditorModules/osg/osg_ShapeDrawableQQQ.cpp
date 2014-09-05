#include "osg_ShapeDrawableQQQ.hpp"
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
osg_ShapeDrawableQQQ_QModel::osg_ShapeDrawableQQQ_QModel(const osg_ShapeDrawableQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osg_ShapeDrawableQQQ_QModel::~osg_ShapeDrawableQQQ_QModel(){};
 
///DefaultConstructor////////////////
osg_ShapeDrawableQQQ_QModel::osg_ShapeDrawableQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osg::ShapeDrawable*>(i->ptr);
}
QQuickItem *osg_ShapeDrawableQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osg_ShapeDrawableQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg_ShapeDrawableQQQ::PREcompoQML()const{return string("");}
const std::string osg_ShapeDrawableQQQ::POSTcompoQML()const{return string("");}
QQModel* osg_ShapeDrawableQQQ::createQQModel(Instance*i){ return new osg_ShapeDrawableQQQ_QModel(i);}

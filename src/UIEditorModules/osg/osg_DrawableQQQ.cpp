#include "osg_DrawableQQQ.hpp"
#include <list>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/Drawable>

#include <MetaLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>
using namespace std;
using namespace pmoc;

///CopyConstruction////////////////
osg_DrawableQQQ_QModel::osg_DrawableQQQ_QModel(const osg_DrawableQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osg_DrawableQQQ_QModel::~osg_DrawableQQQ_QModel(){};

///DefaultConstructor////////////////
osg_DrawableQQQ_QModel::osg_DrawableQQQ_QModel(Instance*i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osg::Drawable*>(i->ptr);
qRegisterMetaType<pmoc::osg_DrawableQQQ_QModel>("osg_DrawableQQQ_QModel");
qmlRegisterType<pmoc::osg_DrawableQQQ_QModel,1>("osg_DrawableQQQ_QModel",1,0,"DrawableQQQ");
}
QQuickItem *osg_DrawableQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osg_DrawableQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg_DrawableQQQ::PREcompoQML()const{return string("");}
const std::string osg_DrawableQQQ::POSTcompoQML()const{return string("");}
QQModel* osg_DrawableQQQ::createQQModel(Instance*i){ return new osg_DrawableQQQ_QModel(i);}

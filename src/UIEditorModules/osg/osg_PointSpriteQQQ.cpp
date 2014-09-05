#include "osg_PointSpriteQQQ.hpp"
#include <list>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/PointSprite>

#include <MetaLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>
using namespace std;
using namespace pmoc;

///Copy Construction////////////////
osg_PointSpriteQQQ_QModel::osg_PointSpriteQQQ_QModel(const osg_PointSpriteQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osg_PointSpriteQQQ_QModel::~osg_PointSpriteQQQ_QModel(){};
 
///DefaultConstructor////////////////
osg_PointSpriteQQQ_QModel::osg_PointSpriteQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osg::PointSprite*>(i->ptr);
}
QQuickItem *osg_PointSpriteQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osg_PointSpriteQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg_PointSpriteQQQ::PREcompoQML()const{return string("");}
const std::string osg_PointSpriteQQQ::POSTcompoQML()const{return string("");}
QQModel* osg_PointSpriteQQQ::createQQModel(Instance*i){ return new osg_PointSpriteQQQ_QModel(i);}

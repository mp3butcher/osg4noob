#include "osg_DrawArraysQQQ.hpp"
#include <list>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/PrimitiveSet>

#include <MetaLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>
using namespace std;
using namespace pmoc;

///Copy Construction////////////////
osg_DrawArraysQQQ_QModel::osg_DrawArraysQQQ_QModel(const osg_DrawArraysQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osg_DrawArraysQQQ_QModel::~osg_DrawArraysQQQ_QModel(){};
 
///DefaultConstructor////////////////
osg_DrawArraysQQQ_QModel::osg_DrawArraysQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osg::DrawArrays*>(i->ptr);
}
QQuickItem *osg_DrawArraysQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osg_DrawArraysQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg_DrawArraysQQQ::PREcompoQML()const{return string("");}
const std::string osg_DrawArraysQQQ::POSTcompoQML()const{return string("");}
QQModel* osg_DrawArraysQQQ::createQQModel(Instance*i){ return new osg_DrawArraysQQQ_QModel(i);}

#include "osg_ColorMaskQQQ.hpp"
#include <list>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/ColorMask>

#include <MetaLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>
using namespace std;
using namespace pmoc;

///Copy Construction////////////////
osg_ColorMaskQQQ_QModel::osg_ColorMaskQQQ_QModel(const osg_ColorMaskQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osg_ColorMaskQQQ_QModel::~osg_ColorMaskQQQ_QModel(){};
 
///DefaultConstructor////////////////
osg_ColorMaskQQQ_QModel::osg_ColorMaskQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osg::ColorMask*>(i->ptr);
}
QQuickItem *osg_ColorMaskQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osg_ColorMaskQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg_ColorMaskQQQ::PREcompoQML()const{return string("");}
const std::string osg_ColorMaskQQQ::POSTcompoQML()const{return string("");}
QQModel* osg_ColorMaskQQQ::createQQModel(Instance*i){ return new osg_ColorMaskQQQ_QModel(i);}

#include "osg_DrawPixelsQQQ.hpp"
#include <list>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/DrawPixels>

#include <MetaLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>
using namespace std;
using namespace pmoc;

///Copy Construction////////////////
osg_DrawPixelsQQQ_QModel::osg_DrawPixelsQQQ_QModel(const osg_DrawPixelsQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osg_DrawPixelsQQQ_QModel::~osg_DrawPixelsQQQ_QModel(){};
 
///DefaultConstructor////////////////
osg_DrawPixelsQQQ_QModel::osg_DrawPixelsQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osg::DrawPixels*>(i->ptr);
}
QQuickItem *osg_DrawPixelsQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osg_DrawPixelsQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg_DrawPixelsQQQ::PREcompoQML()const{return string("");}
const std::string osg_DrawPixelsQQQ::POSTcompoQML()const{return string("");}
QQModel* osg_DrawPixelsQQQ::createQQModel(Instance*i){ return new osg_DrawPixelsQQQ_QModel(i);}

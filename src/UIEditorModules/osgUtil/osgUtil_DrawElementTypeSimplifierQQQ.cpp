#include "osgUtil_DrawElementTypeSimplifierQQQ.hpp"
#include <list>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaQQuickClass.h>
#include <osgUtil/DrawElementTypeSimplifier>

#include <MetaLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>
using namespace std;
using namespace pmoc;

///Copy Construction////////////////
osgUtil_DrawElementTypeSimplifierQQQ_QModel::osgUtil_DrawElementTypeSimplifierQQQ_QModel(const osgUtil_DrawElementTypeSimplifierQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osgUtil_DrawElementTypeSimplifierQQQ_QModel::~osgUtil_DrawElementTypeSimplifierQQQ_QModel(){};
 
///DefaultConstructor////////////////
osgUtil_DrawElementTypeSimplifierQQQ_QModel::osgUtil_DrawElementTypeSimplifierQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osgUtil::DrawElementTypeSimplifier*>(i->ptr);
}
QQuickItem *osgUtil_DrawElementTypeSimplifierQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osgUtil_DrawElementTypeSimplifierQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osgUtil_DrawElementTypeSimplifierQQQ::PREcompoQML()const{return string("");}
const std::string osgUtil_DrawElementTypeSimplifierQQQ::POSTcompoQML()const{return string("");}
QQModel* osgUtil_DrawElementTypeSimplifierQQQ::createQQModel(Instance*i){ return new osgUtil_DrawElementTypeSimplifierQQQ_QModel(i);}

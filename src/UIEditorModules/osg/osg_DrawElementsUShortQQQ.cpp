#include "osg_DrawElementsUShortQQQ.hpp"
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
osg_DrawElementsUShortQQQ_QModel::osg_DrawElementsUShortQQQ_QModel(const osg_DrawElementsUShortQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osg_DrawElementsUShortQQQ_QModel::~osg_DrawElementsUShortQQQ_QModel(){};
 
///DefaultConstructor////////////////
osg_DrawElementsUShortQQQ_QModel::osg_DrawElementsUShortQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osg::DrawElementsUShort*>(i->ptr);
}
QQuickItem *osg_DrawElementsUShortQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osg_DrawElementsUShortQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg_DrawElementsUShortQQQ::PREcompoQML()const{return string("");}
const std::string osg_DrawElementsUShortQQQ::POSTcompoQML()const{return string("");}
QQModel* osg_DrawElementsUShortQQQ::createQQModel(Instance*i){ return new osg_DrawElementsUShortQQQ_QModel(i);}

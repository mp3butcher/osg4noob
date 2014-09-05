#include "osg_DrawElementsUIntQQQ.hpp"
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
osg_DrawElementsUIntQQQ_QModel::osg_DrawElementsUIntQQQ_QModel(const osg_DrawElementsUIntQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osg_DrawElementsUIntQQQ_QModel::~osg_DrawElementsUIntQQQ_QModel(){};
 
///DefaultConstructor////////////////
osg_DrawElementsUIntQQQ_QModel::osg_DrawElementsUIntQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osg::DrawElementsUInt*>(i->ptr);
}
QQuickItem *osg_DrawElementsUIntQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osg_DrawElementsUIntQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg_DrawElementsUIntQQQ::PREcompoQML()const{return string("");}
const std::string osg_DrawElementsUIntQQQ::POSTcompoQML()const{return string("");}
QQModel* osg_DrawElementsUIntQQQ::createQQModel(Instance*i){ return new osg_DrawElementsUIntQQQ_QModel(i);}

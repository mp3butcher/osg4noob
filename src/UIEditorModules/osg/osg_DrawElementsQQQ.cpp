#include "osg_DrawElementsQQQ.hpp"
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
osg_DrawElementsQQQ_QModel::osg_DrawElementsQQQ_QModel(const osg_DrawElementsQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osg_DrawElementsQQQ_QModel::~osg_DrawElementsQQQ_QModel(){};
 
///DefaultConstructor////////////////
osg_DrawElementsQQQ_QModel::osg_DrawElementsQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osg::DrawElements*>(i->ptr);
}
QQuickItem *osg_DrawElementsQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osg_DrawElementsQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg_DrawElementsQQQ::PREcompoQML()const{return string("");}
const std::string osg_DrawElementsQQQ::POSTcompoQML()const{return string("");}
QQModel* osg_DrawElementsQQQ::createQQModel(Instance*i){ return new osg_DrawElementsQQQ_QModel(i);}

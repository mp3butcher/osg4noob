#include "osgUtil_PositionalStateContainerQQQ.hpp"
#include <list>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaQQuickClass.h>
#include <osgUtil/PositionalStateContainer>

#include <MetaLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>
using namespace std;
using namespace pmoc;

///Copy Construction////////////////
osgUtil_PositionalStateContainerQQQ_QModel::osgUtil_PositionalStateContainerQQQ_QModel(const osgUtil_PositionalStateContainerQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osgUtil_PositionalStateContainerQQQ_QModel::~osgUtil_PositionalStateContainerQQQ_QModel(){};
 
///DefaultConstructor////////////////
osgUtil_PositionalStateContainerQQQ_QModel::osgUtil_PositionalStateContainerQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osgUtil::PositionalStateContainer*>(i->ptr);
}
QQuickItem *osgUtil_PositionalStateContainerQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osgUtil_PositionalStateContainerQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osgUtil_PositionalStateContainerQQQ::PREcompoQML()const{return string("");}
const std::string osgUtil_PositionalStateContainerQQQ::POSTcompoQML()const{return string("");}
QQModel* osgUtil_PositionalStateContainerQQQ::createQQModel(Instance*i){ return new osgUtil_PositionalStateContainerQQQ_QModel(i);}

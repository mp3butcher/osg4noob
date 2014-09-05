#include "osgUtil_RenderStageQQQ.hpp"
#include <list>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaQQuickClass.h>
#include <osgUtil/RenderStage>

#include <MetaLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>
using namespace std;
using namespace pmoc;

///Copy Construction////////////////
osgUtil_RenderStageQQQ_QModel::osgUtil_RenderStageQQQ_QModel(const osgUtil_RenderStageQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osgUtil_RenderStageQQQ_QModel::~osgUtil_RenderStageQQQ_QModel(){};
 
///DefaultConstructor////////////////
osgUtil_RenderStageQQQ_QModel::osgUtil_RenderStageQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osgUtil::RenderStage*>(i->ptr);
}
QQuickItem *osgUtil_RenderStageQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osgUtil_RenderStageQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osgUtil_RenderStageQQQ::PREcompoQML()const{return string("");}
const std::string osgUtil_RenderStageQQQ::POSTcompoQML()const{return string("");}
QQModel* osgUtil_RenderStageQQQ::createQQModel(Instance*i){ return new osgUtil_RenderStageQQQ_QModel(i);}

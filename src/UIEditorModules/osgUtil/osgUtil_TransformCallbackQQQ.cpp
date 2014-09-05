#include "osgUtil_TransformCallbackQQQ.hpp"
#include <list>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaQQuickClass.h>
#include <osgUtil/TransformCallback>

#include <MetaLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>
using namespace std;
using namespace pmoc;

///Copy Construction////////////////
osgUtil_TransformCallbackQQQ_QModel::osgUtil_TransformCallbackQQQ_QModel(const osgUtil_TransformCallbackQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osgUtil_TransformCallbackQQQ_QModel::~osgUtil_TransformCallbackQQQ_QModel(){};
 
///DefaultConstructor////////////////
osgUtil_TransformCallbackQQQ_QModel::osgUtil_TransformCallbackQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osgUtil::TransformCallback*>(i->ptr);
}
QQuickItem *osgUtil_TransformCallbackQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osgUtil_TransformCallbackQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osgUtil_TransformCallbackQQQ::PREcompoQML()const{return string("");}
const std::string osgUtil_TransformCallbackQQQ::POSTcompoQML()const{return string("");}
QQModel* osgUtil_TransformCallbackQQQ::createQQModel(Instance*i){ return new osgUtil_TransformCallbackQQQ_QModel(i);}

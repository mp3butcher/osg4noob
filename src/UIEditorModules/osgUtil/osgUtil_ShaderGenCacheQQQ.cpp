#include "osgUtil_ShaderGenCacheQQQ.hpp"
#include <list>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaQQuickClass.h>
#include <osgUtil/ShaderGen>

#include <MetaLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>
using namespace std;
using namespace pmoc;

///Copy Construction////////////////
osgUtil_ShaderGenCacheQQQ_QModel::osgUtil_ShaderGenCacheQQQ_QModel(const osgUtil_ShaderGenCacheQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osgUtil_ShaderGenCacheQQQ_QModel::~osgUtil_ShaderGenCacheQQQ_QModel(){};
 
///DefaultConstructor////////////////
osgUtil_ShaderGenCacheQQQ_QModel::osgUtil_ShaderGenCacheQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osgUtil::ShaderGenCache*>(i->ptr);
}
QQuickItem *osgUtil_ShaderGenCacheQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osgUtil_ShaderGenCacheQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osgUtil_ShaderGenCacheQQQ::PREcompoQML()const{return string("");}
const std::string osgUtil_ShaderGenCacheQQQ::POSTcompoQML()const{return string("");}
QQModel* osgUtil_ShaderGenCacheQQQ::createQQModel(Instance*i){ return new osgUtil_ShaderGenCacheQQQ_QModel(i);}

#include "osgUtil_StateToCompileQQQ.hpp"
#include <list>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaQQuickClass.h>
#include <osgUtil/IncrementalCompileOperation>

#include <MetaLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>
using namespace std;
using namespace pmoc;

///Copy Construction////////////////
osgUtil_StateToCompileQQQ_QModel::osgUtil_StateToCompileQQQ_QModel(const osgUtil_StateToCompileQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osgUtil_StateToCompileQQQ_QModel::~osgUtil_StateToCompileQQQ_QModel(){};
 
///DefaultConstructor////////////////
osgUtil_StateToCompileQQQ_QModel::osgUtil_StateToCompileQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osgUtil::StateToCompile*>(i->ptr);
}
QQuickItem *osgUtil_StateToCompileQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osgUtil_StateToCompileQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osgUtil_StateToCompileQQQ::PREcompoQML()const{return string("");}
const std::string osgUtil_StateToCompileQQQ::POSTcompoQML()const{return string("");}
QQModel* osgUtil_StateToCompileQQQ::createQQModel(Instance*i){ return new osgUtil_StateToCompileQQQ_QModel(i);}

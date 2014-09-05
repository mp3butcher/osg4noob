#include "osg_DisplaySettingsQQQ.hpp"
#include <list>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/DisplaySettings>

#include <MetaLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>
using namespace std;
using namespace pmoc;

///Copy Construction////////////////
osg_DisplaySettingsQQQ_QModel::osg_DisplaySettingsQQQ_QModel(const osg_DisplaySettingsQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osg_DisplaySettingsQQQ_QModel::~osg_DisplaySettingsQQQ_QModel(){};
 
///DefaultConstructor////////////////
osg_DisplaySettingsQQQ_QModel::osg_DisplaySettingsQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osg::DisplaySettings*>(i->ptr);
}
QQuickItem *osg_DisplaySettingsQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osg_DisplaySettingsQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg_DisplaySettingsQQQ::PREcompoQML()const{return string("");}
const std::string osg_DisplaySettingsQQQ::POSTcompoQML()const{return string("");}
QQModel* osg_DisplaySettingsQQQ::createQQModel(Instance*i){ return new osg_DisplaySettingsQQQ_QModel(i);}

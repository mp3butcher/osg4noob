#include "osg_AudioStreamQQQ.hpp"
#include <list>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/AudioStream>

#include <MetaLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>
using namespace std;
using namespace pmoc;

///Copy Construction////////////////
osg_AudioStreamQQQ_QModel::osg_AudioStreamQQQ_QModel(const osg_AudioStreamQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osg_AudioStreamQQQ_QModel::~osg_AudioStreamQQQ_QModel(){};
 
///DefaultConstructor////////////////
osg_AudioStreamQQQ_QModel::osg_AudioStreamQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osg::AudioStream*>(i->ptr);
}
QQuickItem *osg_AudioStreamQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osg_AudioStreamQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg_AudioStreamQQQ::PREcompoQML()const{return string("");}
const std::string osg_AudioStreamQQQ::POSTcompoQML()const{return string("");}
QQModel* osg_AudioStreamQQQ::createQQModel(Instance*i){ return new osg_AudioStreamQQQ_QModel(i);}

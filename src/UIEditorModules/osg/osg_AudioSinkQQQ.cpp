#include "osg_AudioSinkQQQ.hpp"
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
osg_AudioSinkQQQ_QModel::osg_AudioSinkQQQ_QModel(const osg_AudioSinkQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osg_AudioSinkQQQ_QModel::~osg_AudioSinkQQQ_QModel(){};
 
///DefaultConstructor////////////////
osg_AudioSinkQQQ_QModel::osg_AudioSinkQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osg::AudioSink*>(i->ptr);
}
QQuickItem *osg_AudioSinkQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osg_AudioSinkQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg_AudioSinkQQQ::PREcompoQML()const{return string("");}
const std::string osg_AudioSinkQQQ::POSTcompoQML()const{return string("");}
QQModel* osg_AudioSinkQQQ::createQQModel(Instance*i){ return new osg_AudioSinkQQQ_QModel(i);}

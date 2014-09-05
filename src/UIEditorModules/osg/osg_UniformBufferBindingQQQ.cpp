#include "osg_UniformBufferBindingQQQ.hpp"
#include <list>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/BufferIndexBinding>

#include <MetaLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>
using namespace std;
using namespace pmoc;

///Copy Construction////////////////
osg_UniformBufferBindingQQQ_QModel::osg_UniformBufferBindingQQQ_QModel(const osg_UniformBufferBindingQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osg_UniformBufferBindingQQQ_QModel::~osg_UniformBufferBindingQQQ_QModel(){};
 
///DefaultConstructor////////////////
osg_UniformBufferBindingQQQ_QModel::osg_UniformBufferBindingQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osg::UniformBufferBinding*>(i->ptr);
}
QQuickItem *osg_UniformBufferBindingQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osg_UniformBufferBindingQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg_UniformBufferBindingQQQ::PREcompoQML()const{return string("");}
const std::string osg_UniformBufferBindingQQQ::POSTcompoQML()const{return string("");}
QQModel* osg_UniformBufferBindingQQQ::createQQModel(Instance*i){ return new osg_UniformBufferBindingQQQ_QModel(i);}

#include "osg_FrameBufferAttachmentQQQ.hpp"
#include <list>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/FrameBufferObject>

#include <MetaLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>
using namespace std;
using namespace pmoc;

///Copy Construction////////////////
osg_FrameBufferAttachmentQQQ_QModel::osg_FrameBufferAttachmentQQQ_QModel(const osg_FrameBufferAttachmentQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osg_FrameBufferAttachmentQQQ_QModel::~osg_FrameBufferAttachmentQQQ_QModel(){};
 
///DefaultConstructor////////////////
osg_FrameBufferAttachmentQQQ_QModel::osg_FrameBufferAttachmentQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osg::FrameBufferAttachment*>(i->ptr);
}
QQuickItem *osg_FrameBufferAttachmentQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osg_FrameBufferAttachmentQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg_FrameBufferAttachmentQQQ::PREcompoQML()const{return string("");}
const std::string osg_FrameBufferAttachmentQQQ::POSTcompoQML()const{return string("");}
QQModel* osg_FrameBufferAttachmentQQQ::createQQModel(Instance*i){ return new osg_FrameBufferAttachmentQQQ_QModel(i);}

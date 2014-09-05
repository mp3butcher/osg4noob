#include "osg_ReleaseContext_Block_MakeCurrentOperationQQQ.hpp"
#include <list>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/GraphicsThread>

#include <MetaLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>
using namespace std;
using namespace pmoc;

///Copy Construction////////////////
osg_ReleaseContext_Block_MakeCurrentOperationQQQ_QModel::osg_ReleaseContext_Block_MakeCurrentOperationQQQ_QModel(const osg_ReleaseContext_Block_MakeCurrentOperationQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osg_ReleaseContext_Block_MakeCurrentOperationQQQ_QModel::~osg_ReleaseContext_Block_MakeCurrentOperationQQQ_QModel(){};
 
///DefaultConstructor////////////////
osg_ReleaseContext_Block_MakeCurrentOperationQQQ_QModel::osg_ReleaseContext_Block_MakeCurrentOperationQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osg::ReleaseContext_Block_MakeCurrentOperation*>(i->ptr);
}
QQuickItem *osg_ReleaseContext_Block_MakeCurrentOperationQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osg_ReleaseContext_Block_MakeCurrentOperationQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg_ReleaseContext_Block_MakeCurrentOperationQQQ::PREcompoQML()const{return string("");}
const std::string osg_ReleaseContext_Block_MakeCurrentOperationQQQ::POSTcompoQML()const{return string("");}
QQModel* osg_ReleaseContext_Block_MakeCurrentOperationQQQ::createQQModel(Instance*i){ return new osg_ReleaseContext_Block_MakeCurrentOperationQQQ_QModel(i);}

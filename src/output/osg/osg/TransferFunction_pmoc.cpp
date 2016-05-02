#include <osg/TransferFunction>
//includes

#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/TransferFunction_pmoc.hpp>
#include <customCode/osg/TransferFunction_pmoc.hpp>
#include <customCode/osg/Object_pmoc.hpp>
#include <customCode/osg/Image_pmoc.hpp>
using namespace pmoc;
osg::QReflect_Image*osg::QReflect_TransferFunction::getImage()const{
//params checking
PMOCSAFEADDOBJECT(*_model->getImage(),inst);
return inst.isValid()?((osg::QReflect_Image * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Image*osg::QReflect_TransferFunction::getImage(){
//params checking
PMOCSAFEADDOBJECT(*_model->getImage(),inst);
return inst.isValid()?((osg::QReflect_Image * )inst.model->createQQModel(&inst)):NULL;
}

///DefaultConstructor////////////////
osg::QReflect_TransferFunction::QReflect_TransferFunction(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::TransferFunction*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_TransferFunction::~QReflect_TransferFunction( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_TransferFunction::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_TransferFunction::createInstance( ){
osg::ref_ptr<osg::TransferFunction> osg_TransferFunction_ptr	;
osg_TransferFunction_ptr = new osg::TransferFunction ()	;
Instance o(PMOCGETMETACLASS("osg::TransferFunction"),(void*)osg_TransferFunction_ptr.get()		,true);
_managedinstances.insert(osg_TransferFunction_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_TransferFunction::MetaQReflect_TransferFunction():MetaQQuickClass( "osg::TransferFunction"){
_typeid=&typeid(osg::TransferFunction );
           qRegisterMetaType<osg::QMLTransferFunction>();
           qRegisterMetaType<osg::QMLTransferFunction*>("pmoc.osg.QMLTransferFunction");
qmlRegisterType<osg::QReflect_TransferFunction>("pmoc.osg",1,0,"QReflect_TransferFunction");
           qmlRegisterType<osg::QMLTransferFunction>("pmoc.osg",1,0,"QMLTransferFunction");
};
const std::string osg::MetaQReflect_TransferFunction::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_TransferFunction::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_TransferFunction::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_TransferFunction::createQQModel(const Instance*i){ //return new MetaQReflect_TransferFunction_QModel(i);}
QMLTransferFunction *ret =new QMLTransferFunction(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::Object *mother =dynamic_cast<osg::Object*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::Object");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::Object model for osg::TransferFunctionis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::Object");
if(!cl){std::cerr<<"osg::Object QQModel for osg::TransferFunctionis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_TransferFunction_pmoc.cpp"
#endif
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/TransferFunction_pmoc.hpp>
#include <customCode/osg/TransferFunction_pmoc.hpp>
#include <customCode/osg/TransferFunction_pmoc.hpp>
#include <customCode/osg/Vec4f_pmoc.hpp>
using namespace pmoc;
 float  osg::QReflect_TransferFunction1D:: getMaximum()const{
//params checking
return _model->getMaximum();

}
 float  osg::QReflect_TransferFunction1D:: getMinimum()const{
//params checking
return _model->getMinimum();

}
 unsigned int  osg::QReflect_TransferFunction1D:: getNumberImageCells()const{
//params checking
return _model->getNumberImageCells();

}
 void osg::QReflect_TransferFunction1D::allocate( unsigned int  p0){
//params checking
 _model->allocate(p0);

}
 void osg::QReflect_TransferFunction1D::clear(osg::QReflect_Vec4f  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_TransferFunction1D::clear : parameter n.0 is NULL\n"<<endl;return;}
 _model->clear(*p0->_model);

}
 void osg::QReflect_TransferFunction1D::setColor( float  p0 ,osg::QReflect_Vec4f  *p1 , bool  p2){
//params checking
if(! p1) {std::cerr<<"PMOC: osg::QReflect_TransferFunction1D::setColor : parameter n.1 is NULL\n"<<endl;return;}
 _model->setColor(p0 ,*p1->_model ,p2);

}
 void osg::QReflect_TransferFunction1D::updateImage(){
//params checking
 _model->updateImage();

}

///DefaultConstructor////////////////
osg::QReflect_TransferFunction1D::QReflect_TransferFunction1D(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::TransferFunction1D*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_TransferFunction1D::~QReflect_TransferFunction1D( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_TransferFunction1D::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_TransferFunction1D::createInstance( ){
osg::ref_ptr<osg::TransferFunction1D> osg_TransferFunction1D_ptr	;
osg_TransferFunction1D_ptr = new osg::TransferFunction1D ()	;
Instance o(PMOCGETMETACLASS("osg::TransferFunction1D"),(void*)osg_TransferFunction1D_ptr.get()		,true);
_managedinstances.insert(osg_TransferFunction1D_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_TransferFunction1D::MetaQReflect_TransferFunction1D():MetaQQuickClass( "osg::TransferFunction1D"){
_typeid=&typeid(osg::TransferFunction1D );
           qRegisterMetaType<osg::QMLTransferFunction1D>();
           qRegisterMetaType<osg::QMLTransferFunction1D*>("pmoc.osg.QMLTransferFunction1D");
qmlRegisterType<osg::QReflect_TransferFunction1D>("pmoc.osg",1,0,"QReflect_TransferFunction1D");
           qmlRegisterType<osg::QMLTransferFunction1D>("pmoc.osg",1,0,"QMLTransferFunction1D");
};
const std::string osg::MetaQReflect_TransferFunction1D::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_TransferFunction1D::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_TransferFunction1D::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_TransferFunction1D::createQQModel(const Instance*i){ //return new MetaQReflect_TransferFunction1D_QModel(i);}
QMLTransferFunction1D *ret =new QMLTransferFunction1D(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::TransferFunction *mother =dynamic_cast<osg::TransferFunction*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::TransferFunction");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::TransferFunction model for osg::TransferFunction1Dis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::TransferFunction");
if(!cl){std::cerr<<"osg::TransferFunction QQModel for osg::TransferFunction1Dis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_TransferFunction_pmoc.cpp"
#endif





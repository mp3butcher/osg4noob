#include <osg/Stencil>
//includes
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/Stencil_pmoc.hpp>
#include <customCode/osg/Stencil_pmoc.hpp>
#include <customCode/osg/StateAttribute_pmoc.hpp>
#include <customCode/osg/StateAttribute_pmoc.hpp>
using namespace pmoc;
 int  osg::QReflect_Stencil::compare(osg::QReflect_StateAttribute *p0)const{
return _model->compare(*p0->_model);

}
 void osg::QReflect_Stencil::setFunction(osg::QReflect_Stencil::Function p0 , int p1 , unsigned int p2){
 _model->setFunction(static_cast<osg::Stencil::Function>(p0) ,p1 ,p2);

}
 void osg::QReflect_Stencil::setFunction(osg::QReflect_Stencil::Function p0){
 _model->setFunction(static_cast<osg::Stencil::Function>(p0));

}
 void osg::QReflect_Stencil::setOperation(osg::QReflect_Stencil::Operation p0 ,osg::QReflect_Stencil::Operation p1 ,osg::QReflect_Stencil::Operation p2){
 _model->setOperation(static_cast<osg::Stencil::Operation>(p0) ,static_cast<osg::Stencil::Operation>(p1) ,static_cast<osg::Stencil::Operation>(p2));

}
 void osg::QReflect_Stencil::setStencilFailOperation(osg::QReflect_Stencil::Operation p0){
 _model->setStencilFailOperation(static_cast<osg::Stencil::Operation>(p0));

}
 void osg::QReflect_Stencil::setStencilPassAndDepthFailOperation(osg::QReflect_Stencil::Operation p0){
 _model->setStencilPassAndDepthFailOperation(static_cast<osg::Stencil::Operation>(p0));

}
 void osg::QReflect_Stencil::setStencilPassAndDepthPassOperation(osg::QReflect_Stencil::Operation p0){
 _model->setStencilPassAndDepthPassOperation(static_cast<osg::Stencil::Operation>(p0));

}
const int osg::QReflect_Stencil::getFunctionRef()const{return _model->getFunctionRef();}
const unsigned int osg::QReflect_Stencil::getFunctionMask()const{return _model->getFunctionMask();}
const unsigned int osg::QReflect_Stencil::getWriteMask()const{return _model->getWriteMask();}
osg::QReflect_Stencil::Function  osg::QReflect_Stencil::getFunction()const{
osg::QReflect_Stencil::Function ret=static_cast<osg::QReflect_Stencil::Function>( _model->getFunction());return  ret;

}
osg::QReflect_Stencil::Operation  osg::QReflect_Stencil::getStencilFailOperation()const{
osg::QReflect_Stencil::Operation ret=static_cast<osg::QReflect_Stencil::Operation>( _model->getStencilFailOperation());return  ret;

}
osg::QReflect_Stencil::Operation  osg::QReflect_Stencil::getStencilPassAndDepthFailOperation()const{
osg::QReflect_Stencil::Operation ret=static_cast<osg::QReflect_Stencil::Operation>( _model->getStencilPassAndDepthFailOperation());return  ret;

}
osg::QReflect_Stencil::Operation  osg::QReflect_Stencil::getStencilPassAndDepthPassOperation()const{
osg::QReflect_Stencil::Operation ret=static_cast<osg::QReflect_Stencil::Operation>( _model->getStencilPassAndDepthPassOperation());return  ret;

}
void  osg::QReflect_Stencil::setFunctionMask(const unsigned int &par){_model->setFunctionMask(par);emit FunctionMaskChanged(par);}
void  osg::QReflect_Stencil::setFunctionRef(const int &par){_model->setFunctionRef(par);emit FunctionRefChanged(par);}
void  osg::QReflect_Stencil::setWriteMask(const unsigned int &par){_model->setWriteMask(par);emit WriteMaskChanged(par);}

///DefaultConstructor////////////////
osg::QReflect_Stencil::QReflect_Stencil(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::Stencil*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_Stencil::~QReflect_Stencil( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_Stencil::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_Stencil::createInstance( ){
osg::ref_ptr<osg::Stencil> osg_Stencil_ptr	;
osg_Stencil_ptr = new osg::Stencil ()	;
Instance o(PMOCGETMETACLASS("osg::Stencil"),(void*)osg_Stencil_ptr.get()		,true);
_managedinstances.insert(osg_Stencil_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_Stencil::MetaQReflect_Stencil():MetaQQuickClass( "osg::Stencil"){
_typeid=&typeid(osg::Stencil );           qRegisterMetaType<QMLStencil>();
qmlRegisterType<QReflect_Stencil>("pmoc.osg",1,0,"QReflect_Stencil");
           qmlRegisterType<QMLStencil>("pmoc.osg",1,0,"QMLStencil");
};
const std::string osg::MetaQReflect_Stencil::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_Stencil::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_Stencil::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_Stencil::createQQModel(Instance*i){ //return new MetaQReflect_Stencil_QModel(i);}
QMLStencil *ret =new QMLStencil(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::StateAttribute *mother =dynamic_cast<osg::StateAttribute*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::StateAttribute");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::StateAttribute model for osg::Stencilis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::StateAttribute");
if(!cl){std::cerr<<"osg::StateAttribute QQModel for osg::Stencilis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Stencil_pmoc.cpp"
#endif



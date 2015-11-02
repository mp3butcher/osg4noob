#include <osg/StencilTwoSided>
//includes
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/StencilTwoSided_pmoc.hpp>
#include <customCode/osg/StencilTwoSided_pmoc.hpp>
#include <customCode/osg/StateAttribute_pmoc.hpp>
#include <customCode/osg/StateAttribute_pmoc.hpp>
using namespace pmoc;
 int  osg::QReflect_StencilTwoSided::compare(osg::QReflect_StateAttribute *p0)const{
return _model->compare(*p0->_model);

}
 int  osg::QReflect_StencilTwoSided::getFunctionRef(osg::QReflect_StencilTwoSided::Face p0)const{
return _model->getFunctionRef(static_cast<osg::StencilTwoSided::Face>(p0));

}
 unsigned int  osg::QReflect_StencilTwoSided::getFunctionMask(osg::QReflect_StencilTwoSided::Face p0)const{
return _model->getFunctionMask(static_cast<osg::StencilTwoSided::Face>(p0));

}
 unsigned int  osg::QReflect_StencilTwoSided::getWriteMask(osg::QReflect_StencilTwoSided::Face p0)const{
return _model->getWriteMask(static_cast<osg::StencilTwoSided::Face>(p0));

}
 void osg::QReflect_StencilTwoSided::setFunction(osg::QReflect_StencilTwoSided::Face p0 ,osg::QReflect_StencilTwoSided::Function p1 , int p2 , unsigned int p3){
 _model->setFunction(static_cast<osg::StencilTwoSided::Face>(p0) ,static_cast<osg::StencilTwoSided::Function>(p1) ,p2 ,p3);

}
 void osg::QReflect_StencilTwoSided::setFunction(osg::QReflect_StencilTwoSided::Face p0 ,osg::QReflect_StencilTwoSided::Function p1){
 _model->setFunction(static_cast<osg::StencilTwoSided::Face>(p0) ,static_cast<osg::StencilTwoSided::Function>(p1));

}
 void osg::QReflect_StencilTwoSided::setFunctionMask(osg::QReflect_StencilTwoSided::Face p0 , unsigned int p1){
 _model->setFunctionMask(static_cast<osg::StencilTwoSided::Face>(p0) ,p1);

}
 void osg::QReflect_StencilTwoSided::setFunctionRef(osg::QReflect_StencilTwoSided::Face p0 , int p1){
 _model->setFunctionRef(static_cast<osg::StencilTwoSided::Face>(p0) ,p1);

}
 void osg::QReflect_StencilTwoSided::setOperation(osg::QReflect_StencilTwoSided::Face p0 ,osg::QReflect_StencilTwoSided::Operation p1 ,osg::QReflect_StencilTwoSided::Operation p2 ,osg::QReflect_StencilTwoSided::Operation p3){
 _model->setOperation(static_cast<osg::StencilTwoSided::Face>(p0) ,static_cast<osg::StencilTwoSided::Operation>(p1) ,static_cast<osg::StencilTwoSided::Operation>(p2) ,static_cast<osg::StencilTwoSided::Operation>(p3));

}
 void osg::QReflect_StencilTwoSided::setStencilFailOperation(osg::QReflect_StencilTwoSided::Face p0 ,osg::QReflect_StencilTwoSided::Operation p1){
 _model->setStencilFailOperation(static_cast<osg::StencilTwoSided::Face>(p0) ,static_cast<osg::StencilTwoSided::Operation>(p1));

}
 void osg::QReflect_StencilTwoSided::setStencilPassAndDepthFailOperation(osg::QReflect_StencilTwoSided::Face p0 ,osg::QReflect_StencilTwoSided::Operation p1){
 _model->setStencilPassAndDepthFailOperation(static_cast<osg::StencilTwoSided::Face>(p0) ,static_cast<osg::StencilTwoSided::Operation>(p1));

}
 void osg::QReflect_StencilTwoSided::setStencilPassAndDepthPassOperation(osg::QReflect_StencilTwoSided::Face p0 ,osg::QReflect_StencilTwoSided::Operation p1){
 _model->setStencilPassAndDepthPassOperation(static_cast<osg::StencilTwoSided::Face>(p0) ,static_cast<osg::StencilTwoSided::Operation>(p1));

}
 void osg::QReflect_StencilTwoSided::setWriteMask(osg::QReflect_StencilTwoSided::Face p0 , unsigned int p1){
 _model->setWriteMask(static_cast<osg::StencilTwoSided::Face>(p0) ,p1);

}
osg::QReflect_StencilTwoSided::Function  osg::QReflect_StencilTwoSided::getFunction(osg::QReflect_StencilTwoSided::Face p0)const{
osg::QReflect_StencilTwoSided::Function ret=static_cast<osg::QReflect_StencilTwoSided::Function>( _model->getFunction(static_cast<osg::StencilTwoSided::Face>(p0)));return  ret;

}
osg::QReflect_StencilTwoSided::Operation  osg::QReflect_StencilTwoSided::getStencilFailOperation(osg::QReflect_StencilTwoSided::Face p0)const{
osg::QReflect_StencilTwoSided::Operation ret=static_cast<osg::QReflect_StencilTwoSided::Operation>( _model->getStencilFailOperation(static_cast<osg::StencilTwoSided::Face>(p0)));return  ret;

}
osg::QReflect_StencilTwoSided::Operation  osg::QReflect_StencilTwoSided::getStencilPassAndDepthFailOperation(osg::QReflect_StencilTwoSided::Face p0)const{
osg::QReflect_StencilTwoSided::Operation ret=static_cast<osg::QReflect_StencilTwoSided::Operation>( _model->getStencilPassAndDepthFailOperation(static_cast<osg::StencilTwoSided::Face>(p0)));return  ret;

}
osg::QReflect_StencilTwoSided::Operation  osg::QReflect_StencilTwoSided::getStencilPassAndDepthPassOperation(osg::QReflect_StencilTwoSided::Face p0)const{
osg::QReflect_StencilTwoSided::Operation ret=static_cast<osg::QReflect_StencilTwoSided::Operation>( _model->getStencilPassAndDepthPassOperation(static_cast<osg::StencilTwoSided::Face>(p0)));return  ret;

}

///DefaultConstructor////////////////
osg::QReflect_StencilTwoSided::QReflect_StencilTwoSided(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::StencilTwoSided*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_StencilTwoSided::~QReflect_StencilTwoSided( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_StencilTwoSided::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_StencilTwoSided::createInstance( ){
osg::ref_ptr<osg::StencilTwoSided> osg_StencilTwoSided_ptr	;
osg_StencilTwoSided_ptr = new osg::StencilTwoSided ()	;
Instance o(PMOCGETMETACLASS("osg::StencilTwoSided"),(void*)osg_StencilTwoSided_ptr.get()		,true);
_managedinstances.insert(osg_StencilTwoSided_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_StencilTwoSided::MetaQReflect_StencilTwoSided():MetaQQuickClass( "osg::StencilTwoSided"){
_typeid=&typeid(osg::StencilTwoSided );           qRegisterMetaType<QMLStencilTwoSided>();
qmlRegisterType<QReflect_StencilTwoSided>("pmoc.osg",1,0,"QReflect_StencilTwoSided");
           qmlRegisterType<QMLStencilTwoSided>("pmoc.osg",1,0,"QMLStencilTwoSided");
};
const std::string osg::MetaQReflect_StencilTwoSided::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_StencilTwoSided::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_StencilTwoSided::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_StencilTwoSided::createQQModel(Instance*i){ //return new MetaQReflect_StencilTwoSided_QModel(i);}
QMLStencilTwoSided *ret =new QMLStencilTwoSided(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::StateAttribute *mother =dynamic_cast<osg::StateAttribute*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::StateAttribute");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::StateAttribute model for osg::StencilTwoSidedis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::StateAttribute");
if(!cl){std::cerr<<"osg::StateAttribute QQModel for osg::StencilTwoSidedis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_StencilTwoSided_pmoc.cpp"
#endif



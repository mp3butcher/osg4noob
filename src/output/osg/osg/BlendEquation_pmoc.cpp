#include <osg/BlendEquation>
//includes

#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/BlendEquation_pmoc.hpp>
#include <customCode/osg/BlendEquation_pmoc.hpp>
#include <customCode/osg/StateAttribute_pmoc.hpp>
#include <customCode/osg/StateAttribute_pmoc.hpp>
#include <customCode/osg/State_pmoc.hpp>
using namespace pmoc;
 int  osg::QReflect_BlendEquation:: compare(osg::QReflect_StateAttribute  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_BlendEquation::compare : parameter n.0 is NULL\n"<<endl;return -1;}
return _model->compare(*p0->_model);

}
 void osg::QReflect_BlendEquation::apply(osg::QReflect_State  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_BlendEquation::apply : parameter n.0 is NULL\n"<<endl;return;}
 _model->apply(*p0->_model);

}
 void osg::QReflect_BlendEquation::setEquation(osg::QReflect_BlendEquation::Equation  p0){
//params checking
 _model->setEquation(static_cast<osg::BlendEquation::Equation>(p0));
emit EquationChanged();

}
 void osg::QReflect_BlendEquation::setEquationAlpha(osg::QReflect_BlendEquation::Equation  p0){
//params checking
 _model->setEquationAlpha(static_cast<osg::BlendEquation::Equation>(p0));
emit EquationAlphaChanged();

}
 void osg::QReflect_BlendEquation::setEquationRGB(osg::QReflect_BlendEquation::Equation  p0){
//params checking
 _model->setEquationRGB(static_cast<osg::BlendEquation::Equation>(p0));
emit EquationRGBChanged();

}
osg::QReflect_BlendEquation::Equation  osg::QReflect_BlendEquation::getEquation()const{
//params checking
osg::QReflect_BlendEquation::Equation ret=static_cast<osg::QReflect_BlendEquation::Equation>( _model->getEquation());return  ret;

}
osg::QReflect_BlendEquation::Equation  osg::QReflect_BlendEquation::getEquationAlpha()const{
//params checking
osg::QReflect_BlendEquation::Equation ret=static_cast<osg::QReflect_BlendEquation::Equation>( _model->getEquationAlpha());return  ret;

}
osg::QReflect_BlendEquation::Equation  osg::QReflect_BlendEquation::getEquationRGB()const{
//params checking
osg::QReflect_BlendEquation::Equation ret=static_cast<osg::QReflect_BlendEquation::Equation>( _model->getEquationRGB());return  ret;

}

///DefaultConstructor////////////////
osg::QReflect_BlendEquation::QReflect_BlendEquation(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::BlendEquation*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_BlendEquation::~QReflect_BlendEquation( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_BlendEquation::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_BlendEquation::createInstance( ){
osg::ref_ptr<osg::BlendEquation> osg_BlendEquation_ptr	;
osg_BlendEquation_ptr = new osg::BlendEquation ()	;
Instance o(PMOCGETMETACLASS("osg::BlendEquation"),(void*)osg_BlendEquation_ptr.get()		,true);
_managedinstances.insert(osg_BlendEquation_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_BlendEquation::MetaQReflect_BlendEquation():MetaQQuickClass( "osg::BlendEquation"){
_typeid=&typeid(osg::BlendEquation );
           qRegisterMetaType<osg::QMLBlendEquation>();
           qRegisterMetaType<osg::QMLBlendEquation*>("pmoc.osg.QMLBlendEquation");
qmlRegisterType<osg::QReflect_BlendEquation>("pmoc.osg",1,0,"QReflect_BlendEquation");
           qmlRegisterType<osg::QMLBlendEquation>("pmoc.osg",1,0,"QMLBlendEquation");
};
const std::string osg::MetaQReflect_BlendEquation::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_BlendEquation::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_BlendEquation::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_BlendEquation::createQQModel(const Instance*i){ //return new MetaQReflect_BlendEquation_QModel(i);}
QMLBlendEquation *ret =new QMLBlendEquation(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::StateAttribute *mother =dynamic_cast<osg::StateAttribute*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::StateAttribute");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::StateAttribute model for osg::BlendEquationis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::StateAttribute");
if(!cl){std::cerr<<"osg::StateAttribute QQModel for osg::BlendEquationis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_BlendEquation_pmoc.cpp"
#endif





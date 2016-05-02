#include <osg/BlendColor>
//includes

#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/BlendColor_pmoc.hpp>
#include <customCode/osg/BlendColor_pmoc.hpp>
#include <customCode/osg/StateAttribute_pmoc.hpp>
#include <customCode/osg/StateAttribute_pmoc.hpp>
#include <customCode/osg/State_pmoc.hpp>
#include <customCode/osg/Vec4f_pmoc.hpp>
using namespace pmoc;
 int  osg::QReflect_BlendColor:: compare(osg::QReflect_StateAttribute  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_BlendColor::compare : parameter n.0 is NULL\n"<<endl;return -1;}
return _model->compare(*p0->_model);

}
 void osg::QReflect_BlendColor::apply(osg::QReflect_State  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_BlendColor::apply : parameter n.0 is NULL\n"<<endl;return;}
 _model->apply(*p0->_model);

}
 void osg::QReflect_BlendColor::setConstantColor(osg::QReflect_Vec4f  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_BlendColor::setConstantColor : parameter n.0 is NULL\n"<<endl;return;}
 _model->setConstantColor(*p0->_model);

}

///DefaultConstructor////////////////
osg::QReflect_BlendColor::QReflect_BlendColor(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::BlendColor*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_BlendColor::~QReflect_BlendColor( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_BlendColor::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_BlendColor::createInstance( ){
osg::ref_ptr<osg::BlendColor> osg_BlendColor_ptr	;
osg_BlendColor_ptr = new osg::BlendColor ()	;
Instance o(PMOCGETMETACLASS("osg::BlendColor"),(void*)osg_BlendColor_ptr.get()		,true);
_managedinstances.insert(osg_BlendColor_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_BlendColor::MetaQReflect_BlendColor():MetaQQuickClass( "osg::BlendColor"){
_typeid=&typeid(osg::BlendColor );
           qRegisterMetaType<osg::QMLBlendColor>();
           qRegisterMetaType<osg::QMLBlendColor*>("pmoc.osg.QMLBlendColor");
qmlRegisterType<osg::QReflect_BlendColor>("pmoc.osg",1,0,"QReflect_BlendColor");
           qmlRegisterType<osg::QMLBlendColor>("pmoc.osg",1,0,"QMLBlendColor");
};
const std::string osg::MetaQReflect_BlendColor::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_BlendColor::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_BlendColor::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_BlendColor::createQQModel(const Instance*i){ //return new MetaQReflect_BlendColor_QModel(i);}
QMLBlendColor *ret =new QMLBlendColor(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::StateAttribute *mother =dynamic_cast<osg::StateAttribute*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::StateAttribute");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::StateAttribute model for osg::BlendColoris invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::StateAttribute");
if(!cl){std::cerr<<"osg::StateAttribute QQModel for osg::BlendColoris not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_BlendColor_pmoc.cpp"
#endif





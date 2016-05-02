#include <osg/ClampColor>
//includes

#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/ClampColor_pmoc.hpp>
#include <customCode/osg/ClampColor_pmoc.hpp>
#include <customCode/osg/StateAttribute_pmoc.hpp>
#include <customCode/osg/StateAttribute_pmoc.hpp>
#include <customCode/osg/State_pmoc.hpp>
using namespace pmoc;
 GLenum  osg::QReflect_ClampColor:: getClampFragmentColor()const{
//params checking
return _model->getClampFragmentColor();

}
 GLenum  osg::QReflect_ClampColor:: getClampReadColor()const{
//params checking
return _model->getClampReadColor();

}
 GLenum  osg::QReflect_ClampColor:: getClampVertexColor()const{
//params checking
return _model->getClampVertexColor();

}
 int  osg::QReflect_ClampColor:: compare(osg::QReflect_StateAttribute  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_ClampColor::compare : parameter n.0 is NULL\n"<<endl;return -1;}
return _model->compare(*p0->_model);

}
 void osg::QReflect_ClampColor::apply(osg::QReflect_State  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_ClampColor::apply : parameter n.0 is NULL\n"<<endl;return;}
 _model->apply(*p0->_model);

}
 void osg::QReflect_ClampColor::setClampFragmentColor( GLenum  p0){
//params checking
 _model->setClampFragmentColor(p0);
emit ClampFragmentColorChanged();

}
 void osg::QReflect_ClampColor::setClampReadColor( GLenum  p0){
//params checking
 _model->setClampReadColor(p0);
emit ClampReadColorChanged();

}
 void osg::QReflect_ClampColor::setClampVertexColor( GLenum  p0){
//params checking
 _model->setClampVertexColor(p0);
emit ClampVertexColorChanged();

}

///DefaultConstructor////////////////
osg::QReflect_ClampColor::QReflect_ClampColor(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::ClampColor*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_ClampColor::~QReflect_ClampColor( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_ClampColor::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_ClampColor::createInstance( ){
osg::ref_ptr<osg::ClampColor> osg_ClampColor_ptr	;
osg_ClampColor_ptr = new osg::ClampColor ()	;
Instance o(PMOCGETMETACLASS("osg::ClampColor"),(void*)osg_ClampColor_ptr.get()		,true);
_managedinstances.insert(osg_ClampColor_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_ClampColor::MetaQReflect_ClampColor():MetaQQuickClass( "osg::ClampColor"){
_typeid=&typeid(osg::ClampColor );
           qRegisterMetaType<osg::QMLClampColor>();
           qRegisterMetaType<osg::QMLClampColor*>("pmoc.osg.QMLClampColor");
qmlRegisterType<osg::QReflect_ClampColor>("pmoc.osg",1,0,"QReflect_ClampColor");
           qmlRegisterType<osg::QMLClampColor>("pmoc.osg",1,0,"QMLClampColor");
};
const std::string osg::MetaQReflect_ClampColor::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_ClampColor::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_ClampColor::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_ClampColor::createQQModel(const Instance*i){ //return new MetaQReflect_ClampColor_QModel(i);}
QMLClampColor *ret =new QMLClampColor(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::StateAttribute *mother =dynamic_cast<osg::StateAttribute*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::StateAttribute");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::StateAttribute model for osg::ClampColoris invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::StateAttribute");
if(!cl){std::cerr<<"osg::StateAttribute QQModel for osg::ClampColoris not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_ClampColor_pmoc.cpp"
#endif





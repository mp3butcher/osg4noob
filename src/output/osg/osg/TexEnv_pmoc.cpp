#include <osg/TexEnv>
//includes

#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/TexEnv_pmoc.hpp>
#include <customCode/osg/TexEnv_pmoc.hpp>
#include <customCode/osg/StateAttribute_pmoc.hpp>
#include <customCode/osg/StateAttribute_pmoc.hpp>
#include <customCode/osg/State_pmoc.hpp>
#include <customCode/osg/Vec4f_pmoc.hpp>
using namespace pmoc;
 bool  osg::QReflect_TexEnv:: isTextureAttribute()const{
//params checking
return _model->isTextureAttribute();

}
 int  osg::QReflect_TexEnv:: compare(osg::QReflect_StateAttribute  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_TexEnv::compare : parameter n.0 is NULL\n"<<endl;return -1;}
return _model->compare(*p0->_model);

}
 void osg::QReflect_TexEnv::apply(osg::QReflect_State  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_TexEnv::apply : parameter n.0 is NULL\n"<<endl;return;}
 _model->apply(*p0->_model);

}
 void osg::QReflect_TexEnv::setColor(osg::QReflect_Vec4f  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_TexEnv::setColor : parameter n.0 is NULL\n"<<endl;return;}
 _model->setColor(*p0->_model);

}
 void osg::QReflect_TexEnv::setMode(osg::QReflect_TexEnv::Mode  p0){
//params checking
 _model->setMode(static_cast<osg::TexEnv::Mode>(p0));
emit ModeChanged();

}
osg::QReflect_TexEnv::Mode  osg::QReflect_TexEnv::getMode()const{
//params checking
osg::QReflect_TexEnv::Mode ret=static_cast<osg::QReflect_TexEnv::Mode>( _model->getMode());return  ret;

}

///DefaultConstructor////////////////
osg::QReflect_TexEnv::QReflect_TexEnv(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::TexEnv*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_TexEnv::~QReflect_TexEnv( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_TexEnv::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_TexEnv::createInstance( ){
osg::ref_ptr<osg::TexEnv> osg_TexEnv_ptr	;
osg_TexEnv_ptr = new osg::TexEnv ()	;
Instance o(PMOCGETMETACLASS("osg::TexEnv"),(void*)osg_TexEnv_ptr.get()		,true);
_managedinstances.insert(osg_TexEnv_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_TexEnv::MetaQReflect_TexEnv():MetaQQuickClass( "osg::TexEnv"){
_typeid=&typeid(osg::TexEnv );
           qRegisterMetaType<osg::QMLTexEnv>();
           qRegisterMetaType<osg::QMLTexEnv*>("pmoc.osg.QMLTexEnv");
qmlRegisterType<osg::QReflect_TexEnv>("pmoc.osg",1,0,"QReflect_TexEnv");
           qmlRegisterType<osg::QMLTexEnv>("pmoc.osg",1,0,"QMLTexEnv");
};
const std::string osg::MetaQReflect_TexEnv::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_TexEnv::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_TexEnv::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_TexEnv::createQQModel(const Instance*i){ //return new MetaQReflect_TexEnv_QModel(i);}
QMLTexEnv *ret =new QMLTexEnv(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::StateAttribute *mother =dynamic_cast<osg::StateAttribute*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::StateAttribute");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::StateAttribute model for osg::TexEnvis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::StateAttribute");
if(!cl){std::cerr<<"osg::StateAttribute QQModel for osg::TexEnvis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_TexEnv_pmoc.cpp"
#endif





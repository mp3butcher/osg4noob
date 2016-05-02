#include <osg/PolygonMode>
//includes

#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/PolygonMode_pmoc.hpp>
#include <customCode/osg/PolygonMode_pmoc.hpp>
#include <customCode/osg/StateAttribute_pmoc.hpp>
#include <customCode/osg/StateAttribute_pmoc.hpp>
#include <customCode/osg/State_pmoc.hpp>
using namespace pmoc;
 bool  osg::QReflect_PolygonMode:: getFrontAndBack()const{
//params checking
return _model->getFrontAndBack();

}
 int  osg::QReflect_PolygonMode:: compare(osg::QReflect_StateAttribute  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_PolygonMode::compare : parameter n.0 is NULL\n"<<endl;return -1;}
return _model->compare(*p0->_model);

}
 void osg::QReflect_PolygonMode::apply(osg::QReflect_State  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_PolygonMode::apply : parameter n.0 is NULL\n"<<endl;return;}
 _model->apply(*p0->_model);

}
 void osg::QReflect_PolygonMode::setMode(osg::QReflect_PolygonMode::Face  p0 ,osg::QReflect_PolygonMode::Mode  p1){
//params checking
 _model->setMode(static_cast<osg::PolygonMode::Face>(p0) ,static_cast<osg::PolygonMode::Mode>(p1));

}
osg::QReflect_PolygonMode::Mode  osg::QReflect_PolygonMode::getMode(osg::QReflect_PolygonMode::Face  p0)const{
//params checking
osg::QReflect_PolygonMode::Mode ret=static_cast<osg::QReflect_PolygonMode::Mode>( _model->getMode(static_cast<osg::PolygonMode::Face>(p0)));return  ret;

}

///DefaultConstructor////////////////
osg::QReflect_PolygonMode::QReflect_PolygonMode(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::PolygonMode*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_PolygonMode::~QReflect_PolygonMode( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_PolygonMode::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_PolygonMode::createInstance( ){
osg::ref_ptr<osg::PolygonMode> osg_PolygonMode_ptr	;
osg_PolygonMode_ptr = new osg::PolygonMode ()	;
Instance o(PMOCGETMETACLASS("osg::PolygonMode"),(void*)osg_PolygonMode_ptr.get()		,true);
_managedinstances.insert(osg_PolygonMode_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_PolygonMode::MetaQReflect_PolygonMode():MetaQQuickClass( "osg::PolygonMode"){
_typeid=&typeid(osg::PolygonMode );
           qRegisterMetaType<osg::QMLPolygonMode>();
           qRegisterMetaType<osg::QMLPolygonMode*>("pmoc.osg.QMLPolygonMode");
qmlRegisterType<osg::QReflect_PolygonMode>("pmoc.osg",1,0,"QReflect_PolygonMode");
           qmlRegisterType<osg::QMLPolygonMode>("pmoc.osg",1,0,"QMLPolygonMode");
};
const std::string osg::MetaQReflect_PolygonMode::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_PolygonMode::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_PolygonMode::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_PolygonMode::createQQModel(const Instance*i){ //return new MetaQReflect_PolygonMode_QModel(i);}
QMLPolygonMode *ret =new QMLPolygonMode(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::StateAttribute *mother =dynamic_cast<osg::StateAttribute*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::StateAttribute");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::StateAttribute model for osg::PolygonModeis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::StateAttribute");
if(!cl){std::cerr<<"osg::StateAttribute QQModel for osg::PolygonModeis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_PolygonMode_pmoc.cpp"
#endif





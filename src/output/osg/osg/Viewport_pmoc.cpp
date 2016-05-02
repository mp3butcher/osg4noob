#include <osg/Viewport>
//includes

#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/Viewport_pmoc.hpp>
#include <customCode/osg/Viewport_pmoc.hpp>
#include <customCode/osg/StateAttribute_pmoc.hpp>
#include <customCode/osg/StateAttribute_pmoc.hpp>
#include <customCode/osg/State_pmoc.hpp>
using namespace pmoc;
 bool  osg::QReflect_Viewport:: valid()const{
//params checking
return _model->valid();

}
 double  osg::QReflect_Viewport:: aspectRatio()const{
//params checking
return _model->aspectRatio();

}
 double  osg::QReflect_Viewport:: height()const{
//params checking
return _model->height();

}
 double  osg::QReflect_Viewport:: width()const{
//params checking
return _model->width();

}
 double  osg::QReflect_Viewport:: x()const{
//params checking
return _model->x();

}
 double  osg::QReflect_Viewport:: y()const{
//params checking
return _model->y();

}
 double&  osg::QReflect_Viewport:: height(){
//params checking
return _model->height();

}
 double&  osg::QReflect_Viewport:: width(){
//params checking
return _model->width();

}
 double&  osg::QReflect_Viewport:: x(){
//params checking
return _model->x();

}
 double&  osg::QReflect_Viewport:: y(){
//params checking
return _model->y();

}
 int  osg::QReflect_Viewport:: compare(osg::QReflect_StateAttribute  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Viewport::compare : parameter n.0 is NULL\n"<<endl;return -1;}
return _model->compare(*p0->_model);

}
 void osg::QReflect_Viewport::apply(osg::QReflect_State  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Viewport::apply : parameter n.0 is NULL\n"<<endl;return;}
 _model->apply(*p0->_model);

}
 void osg::QReflect_Viewport::setViewport( double  p0 , double  p1 , double  p2 , double  p3){
//params checking
 _model->setViewport(p0 ,p1 ,p2 ,p3);

}

///DefaultConstructor////////////////
osg::QReflect_Viewport::QReflect_Viewport(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::Viewport*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_Viewport::~QReflect_Viewport( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_Viewport::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_Viewport::createInstance( ){
osg::ref_ptr<osg::Viewport> osg_Viewport_ptr	;
osg_Viewport_ptr = new osg::Viewport ()	;
Instance o(PMOCGETMETACLASS("osg::Viewport"),(void*)osg_Viewport_ptr.get()		,true);
_managedinstances.insert(osg_Viewport_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_Viewport::MetaQReflect_Viewport():MetaQQuickClass( "osg::Viewport"){
_typeid=&typeid(osg::Viewport );
           qRegisterMetaType<osg::QMLViewport>();
           qRegisterMetaType<osg::QMLViewport*>("pmoc.osg.QMLViewport");
qmlRegisterType<osg::QReflect_Viewport>("pmoc.osg",1,0,"QReflect_Viewport");
           qmlRegisterType<osg::QMLViewport>("pmoc.osg",1,0,"QMLViewport");
};
const std::string osg::MetaQReflect_Viewport::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_Viewport::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_Viewport::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_Viewport::createQQModel(const Instance*i){ //return new MetaQReflect_Viewport_QModel(i);}
QMLViewport *ret =new QMLViewport(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::StateAttribute *mother =dynamic_cast<osg::StateAttribute*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::StateAttribute");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::StateAttribute model for osg::Viewportis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::StateAttribute");
if(!cl){std::cerr<<"osg::StateAttribute QQModel for osg::Viewportis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Viewport_pmoc.cpp"
#endif





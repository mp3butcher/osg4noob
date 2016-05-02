#include <osg/Depth>
//includes

#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/Depth_pmoc.hpp>
#include <customCode/osg/Depth_pmoc.hpp>
#include <customCode/osg/StateAttribute_pmoc.hpp>
#include <customCode/osg/StateAttribute_pmoc.hpp>
#include <customCode/osg/State_pmoc.hpp>
using namespace pmoc;
 bool  osg::QReflect_Depth:: getWriteMask()const{
//params checking
return _model->getWriteMask();

}
 double  osg::QReflect_Depth:: getZFar()const{
//params checking
return _model->getZFar();

}
 double  osg::QReflect_Depth:: getZNear()const{
//params checking
return _model->getZNear();

}
 int  osg::QReflect_Depth:: compare(osg::QReflect_StateAttribute  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Depth::compare : parameter n.0 is NULL\n"<<endl;return -1;}
return _model->compare(*p0->_model);

}
 void osg::QReflect_Depth::apply(osg::QReflect_State  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Depth::apply : parameter n.0 is NULL\n"<<endl;return;}
 _model->apply(*p0->_model);

}
 void osg::QReflect_Depth::setFunction(osg::QReflect_Depth::Function  p0){
//params checking
 _model->setFunction(static_cast<osg::Depth::Function>(p0));
emit FunctionChanged();

}
 void osg::QReflect_Depth::setRange( double  p0 , double  p1){
//params checking
 _model->setRange(p0 ,p1);

}
 void osg::QReflect_Depth::setWriteMask( bool  p0){
//params checking
 _model->setWriteMask(p0);
emit WriteMaskChanged();

}
 void osg::QReflect_Depth::setZFar( double  p0){
//params checking
 _model->setZFar(p0);
emit ZFarChanged();

}
 void osg::QReflect_Depth::setZNear( double  p0){
//params checking
 _model->setZNear(p0);
emit ZNearChanged();

}
osg::QReflect_Depth::Function  osg::QReflect_Depth::getFunction()const{
//params checking
osg::QReflect_Depth::Function ret=static_cast<osg::QReflect_Depth::Function>( _model->getFunction());return  ret;

}

///DefaultConstructor////////////////
osg::QReflect_Depth::QReflect_Depth(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::Depth*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_Depth::~QReflect_Depth( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_Depth::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_Depth::createInstance( ){
osg::ref_ptr<osg::Depth> osg_Depth_ptr	;
osg_Depth_ptr = new osg::Depth ()	;
Instance o(PMOCGETMETACLASS("osg::Depth"),(void*)osg_Depth_ptr.get()		,true);
_managedinstances.insert(osg_Depth_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_Depth::MetaQReflect_Depth():MetaQQuickClass( "osg::Depth"){
_typeid=&typeid(osg::Depth );
           qRegisterMetaType<osg::QMLDepth>();
           qRegisterMetaType<osg::QMLDepth*>("pmoc.osg.QMLDepth");
qmlRegisterType<osg::QReflect_Depth>("pmoc.osg",1,0,"QReflect_Depth");
           qmlRegisterType<osg::QMLDepth>("pmoc.osg",1,0,"QMLDepth");
};
const std::string osg::MetaQReflect_Depth::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_Depth::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_Depth::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_Depth::createQQModel(const Instance*i){ //return new MetaQReflect_Depth_QModel(i);}
QMLDepth *ret =new QMLDepth(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::StateAttribute *mother =dynamic_cast<osg::StateAttribute*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::StateAttribute");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::StateAttribute model for osg::Depthis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::StateAttribute");
if(!cl){std::cerr<<"osg::StateAttribute QQModel for osg::Depthis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Depth_pmoc.cpp"
#endif





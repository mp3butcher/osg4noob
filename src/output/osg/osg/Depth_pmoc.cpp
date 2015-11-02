#include <osg/Depth>
//includes
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/Depth_pmoc.hpp>
#include <customCode/osg/Depth_pmoc.hpp>
#include <customCode/osg/StateAttribute_pmoc.hpp>
#include <customCode/osg/StateAttribute_pmoc.hpp>
using namespace pmoc;
 int  osg::QReflect_Depth::compare(osg::QReflect_StateAttribute *p0)const{
return _model->compare(*p0->_model);

}
 void osg::QReflect_Depth::setFunction(osg::QReflect_Depth::Function p0){
 _model->setFunction(static_cast<osg::Depth::Function>(p0));

}
 void osg::QReflect_Depth::setRange( double p0 , double p1){
 _model->setRange(p0 ,p1);

}
const bool osg::QReflect_Depth::getWriteMask()const{return _model->getWriteMask();}
const double osg::QReflect_Depth::getZFar()const{return _model->getZFar();}
const double osg::QReflect_Depth::getZNear()const{return _model->getZNear();}
osg::QReflect_Depth::Function  osg::QReflect_Depth::getFunction()const{
osg::QReflect_Depth::Function ret=static_cast<osg::QReflect_Depth::Function>( _model->getFunction());return  ret;

}
void  osg::QReflect_Depth::setWriteMask(const bool &par){_model->setWriteMask(par);emit WriteMaskChanged(par);}
void  osg::QReflect_Depth::setZFar(const double &par){_model->setZFar(par);emit ZFarChanged(par);}
void  osg::QReflect_Depth::setZNear(const double &par){_model->setZNear(par);emit ZNearChanged(par);}

///DefaultConstructor////////////////
osg::QReflect_Depth::QReflect_Depth(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
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
_typeid=&typeid(osg::Depth );           qRegisterMetaType<QMLDepth>();
qmlRegisterType<QReflect_Depth>("pmoc.osg",1,0,"QReflect_Depth");
           qmlRegisterType<QMLDepth>("pmoc.osg",1,0,"QMLDepth");
};
const std::string osg::MetaQReflect_Depth::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_Depth::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_Depth::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_Depth::createQQModel(Instance*i){ //return new MetaQReflect_Depth_QModel(i);}
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



#include <osg/FrameStamp>
//includes

#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/FrameStamp_pmoc.hpp>
#include <customCode/osg/FrameStamp_pmoc.hpp>
#include <customCode/osg/Referenced_pmoc.hpp>
using namespace pmoc;
 double  osg::QReflect_FrameStamp:: getReferenceTime()const{
//params checking
return _model->getReferenceTime();

}
 double  osg::QReflect_FrameStamp:: getSimulationTime()const{
//params checking
return _model->getSimulationTime();

}
 unsigned int  osg::QReflect_FrameStamp:: getFrameNumber()const{
//params checking
return _model->getFrameNumber();

}
 void osg::QReflect_FrameStamp::setFrameNumber( unsigned int  p0){
//params checking
 _model->setFrameNumber(p0);
emit FrameNumberChanged();

}
 void osg::QReflect_FrameStamp::setReferenceTime( double  p0){
//params checking
 _model->setReferenceTime(p0);
emit ReferenceTimeChanged();

}
 void osg::QReflect_FrameStamp::setSimulationTime( double  p0){
//params checking
 _model->setSimulationTime(p0);
emit SimulationTimeChanged();

}

///DefaultConstructor////////////////
osg::QReflect_FrameStamp::QReflect_FrameStamp(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::FrameStamp*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_FrameStamp::~QReflect_FrameStamp( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_FrameStamp::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_FrameStamp::createInstance( ){
osg::ref_ptr<osg::FrameStamp> osg_FrameStamp_ptr	;
osg_FrameStamp_ptr = new osg::FrameStamp ()	;
Instance o(PMOCGETMETACLASS("osg::FrameStamp"),(void*)osg_FrameStamp_ptr.get()		,true);
_managedinstances.insert(osg_FrameStamp_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_FrameStamp::MetaQReflect_FrameStamp():MetaQQuickClass( "osg::FrameStamp"){
_typeid=&typeid(osg::FrameStamp );
           qRegisterMetaType<osg::QMLFrameStamp>();
           qRegisterMetaType<osg::QMLFrameStamp*>("pmoc.osg.QMLFrameStamp");
qmlRegisterType<osg::QReflect_FrameStamp>("pmoc.osg",1,0,"QReflect_FrameStamp");
           qmlRegisterType<osg::QMLFrameStamp>("pmoc.osg",1,0,"QMLFrameStamp");
};
const std::string osg::MetaQReflect_FrameStamp::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_FrameStamp::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_FrameStamp::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_FrameStamp::createQQModel(const Instance*i){ //return new MetaQReflect_FrameStamp_QModel(i);}
QMLFrameStamp *ret =new QMLFrameStamp(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::Referenced *mother =dynamic_cast<osg::Referenced*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::Referenced");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::Referenced model for osg::FrameStampis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::Referenced");
if(!cl){std::cerr<<"osg::Referenced QQModel for osg::FrameStampis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_FrameStamp_pmoc.cpp"
#endif





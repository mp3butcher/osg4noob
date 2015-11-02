#include <osg/Timer>
//includes
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/Timer_pmoc.hpp>
#include <customCode/osg/Timer_pmoc.hpp>
using namespace pmoc;
 double  osg::QReflect_ElapsedTime::elapsedTime()const{
return _model->elapsedTime();

}
 double  osg::QReflect_ElapsedTime::elapsedTime_m()const{
return _model->elapsedTime_m();

}
 double  osg::QReflect_ElapsedTime::elapsedTime_n()const{
return _model->elapsedTime_n();

}
 double  osg::QReflect_ElapsedTime::elapsedTime_u()const{
return _model->elapsedTime_u();

}
 void osg::QReflect_ElapsedTime::finish(){
 _model->finish();

}
 void osg::QReflect_ElapsedTime::reset(){
 _model->reset();

}

///DefaultConstructor////////////////
osg::QReflect_ElapsedTime::QReflect_ElapsedTime(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::ElapsedTime*>(i->ptr);
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_ElapsedTime::~QReflect_ElapsedTime( ){
 }
///update this according _model new state
void osg::QReflect_ElapsedTime::updateModel(){
}
Instance osg::MetaQReflect_ElapsedTime::createInstance( ){
osg::ElapsedTime* osg_ElapsedTime_ptr	;
osg_ElapsedTime_ptr= new osg::ElapsedTime()	;
Instance o(PMOCGETMETACLASS("osg::ElapsedTime"),(void*)osg_ElapsedTime_ptr	,true);
_managedinstances.insert(osg_ElapsedTime_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_ElapsedTime::MetaQReflect_ElapsedTime():MetaQQuickClass( "osg::ElapsedTime"){
_typeid=&typeid(osg::ElapsedTime );           qRegisterMetaType<QMLElapsedTime>();
qmlRegisterType<QReflect_ElapsedTime>("pmoc.osg",1,0,"QReflect_ElapsedTime");
           qmlRegisterType<QMLElapsedTime>("pmoc.osg",1,0,"QMLElapsedTime");
};
const std::string osg::MetaQReflect_ElapsedTime::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_ElapsedTime::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_ElapsedTime::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_ElapsedTime::createQQModel(Instance*i){ //return new MetaQReflect_ElapsedTime_QModel(i);}
QMLElapsedTime *ret =new QMLElapsedTime(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Timer_pmoc.cpp"
#endif
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/Timer_pmoc.hpp>
#include <customCode/osg/Timer_pmoc.hpp>
using namespace pmoc;
 double  osg::QReflect_Timer::getSecondsPerTick()const{
return _model->getSecondsPerTick();

}
 double  osg::QReflect_Timer::time_m()const{
return _model->time_m();

}
 double  osg::QReflect_Timer::time_n()const{
return _model->time_n();

}
 double  osg::QReflect_Timer::time_s()const{
return _model->time_s();

}
 double  osg::QReflect_Timer::time_u()const{
return _model->time_u();

}
 void osg::QReflect_Timer::setStartTick(){
 _model->setStartTick();

}
osg::QReflect_Timer*osg::QReflect_Timer::instance(){
PMOCSAFEADDOBJECT(*_model->instance(),inst);
return inst.isValid()?((osg::QReflect_Timer * )inst.model->createQQModel(&inst)):NULL;
}

///DefaultConstructor////////////////
osg::QReflect_Timer::QReflect_Timer(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::Timer*>(i->ptr);
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_Timer::~QReflect_Timer( ){
 }
///update this according _model new state
void osg::QReflect_Timer::updateModel(){
}
Instance osg::MetaQReflect_Timer::createInstance( ){
osg::Timer* osg_Timer_ptr	;
osg_Timer_ptr= new osg::Timer()	;
Instance o(PMOCGETMETACLASS("osg::Timer"),(void*)osg_Timer_ptr	,true);
_managedinstances.insert(osg_Timer_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_Timer::MetaQReflect_Timer():MetaQQuickClass( "osg::Timer"){
_typeid=&typeid(osg::Timer );           qRegisterMetaType<QMLTimer>();
qmlRegisterType<QReflect_Timer>("pmoc.osg",1,0,"QReflect_Timer");
           qmlRegisterType<QMLTimer>("pmoc.osg",1,0,"QMLTimer");
};
const std::string osg::MetaQReflect_Timer::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_Timer::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_Timer::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_Timer::createQQModel(Instance*i){ //return new MetaQReflect_Timer_QModel(i);}
QMLTimer *ret =new QMLTimer(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Timer_pmoc.cpp"
#endif



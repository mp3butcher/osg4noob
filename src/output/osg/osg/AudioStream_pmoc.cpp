#include <osg/AudioStream>
//includes

#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/AudioStream_pmoc.hpp>
#include <customCode/osg/AudioStream_pmoc.hpp>
#include <customCode/osg/Object_pmoc.hpp>
using namespace pmoc;
 double  osg::QReflect_AudioSink:: getDelay()const{
//params checking
return _model->getDelay();

}
 float  osg::QReflect_AudioSink:: getVolume()const{
//params checking
return _model->getVolume();

}
 void osg::QReflect_AudioSink::setDelay(const  double  p0){
//params checking
 _model->setDelay(p0);
emit DelayChanged();

}
 void osg::QReflect_AudioSink::setVolume( float  p0){
//params checking
 _model->setVolume(p0);
emit VolumeChanged();

}
const  char*  osg::QReflect_AudioSink:: className()const{
//params checking
return _model->className();

}
const  char*  osg::QReflect_AudioSink:: libraryName()const{
//params checking
return _model->libraryName();

}

///DefaultConstructor////////////////
osg::QReflect_AudioSink::QReflect_AudioSink(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::AudioSink*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_AudioSink::~QReflect_AudioSink( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_AudioSink::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_AudioSink::createInstance( ){
std::cerr<<"osg::AudioSink is not instanciable"<<std::endl;return Instance();


}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_AudioSink::MetaQReflect_AudioSink():MetaQQuickClass( "osg::AudioSink"){
_typeid=&typeid(osg::AudioSink );
           qRegisterMetaType<osg::QMLAudioSink>();
           qRegisterMetaType<osg::QMLAudioSink*>("pmoc.osg.QMLAudioSink");
qmlRegisterType<osg::QReflect_AudioSink>("pmoc.osg",1,0,"QReflect_AudioSink");
           qmlRegisterType<osg::QMLAudioSink>("pmoc.osg",1,0,"QMLAudioSink");
};
const std::string osg::MetaQReflect_AudioSink::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_AudioSink::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_AudioSink::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_AudioSink::createQQModel(const Instance*i){ //return new MetaQReflect_AudioSink_QModel(i);}
QMLAudioSink *ret =new QMLAudioSink(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::Object *mother =dynamic_cast<osg::Object*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::Object");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::Object model for osg::AudioSinkis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::Object");
if(!cl){std::cerr<<"osg::Object QQModel for osg::AudioSinkis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_AudioStream_pmoc.cpp"
#endif
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/AudioStream_pmoc.hpp>
#include <customCode/osg/AudioStream_pmoc.hpp>
#include <customCode/osg/Object_pmoc.hpp>
#include <customCode/osg/Object_pmoc.hpp>
using namespace pmoc;
 bool  osg::QReflect_AudioStream:: isSameKindAs(osg::QReflect_Object  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_AudioStream::isSameKindAs : parameter n.0 is NULL\n"<<endl;return -1;}
return _model->isSameKindAs(p0->_model);

}
const  char*  osg::QReflect_AudioStream:: className()const{
//params checking
return _model->className();

}
const  char*  osg::QReflect_AudioStream:: libraryName()const{
//params checking
return _model->libraryName();

}

///DefaultConstructor////////////////
osg::QReflect_AudioStream::QReflect_AudioStream(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::AudioStream*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_AudioStream::~QReflect_AudioStream( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_AudioStream::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_AudioStream::createInstance( ){
std::cerr<<"osg::AudioStream is not instanciable"<<std::endl;return Instance();


}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_AudioStream::MetaQReflect_AudioStream():MetaQQuickClass( "osg::AudioStream"){
_typeid=&typeid(osg::AudioStream );
           qRegisterMetaType<osg::QMLAudioStream>();
           qRegisterMetaType<osg::QMLAudioStream*>("pmoc.osg.QMLAudioStream");
qmlRegisterType<osg::QReflect_AudioStream>("pmoc.osg",1,0,"QReflect_AudioStream");
           qmlRegisterType<osg::QMLAudioStream>("pmoc.osg",1,0,"QMLAudioStream");
};
const std::string osg::MetaQReflect_AudioStream::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_AudioStream::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_AudioStream::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_AudioStream::createQQModel(const Instance*i){ //return new MetaQReflect_AudioStream_QModel(i);}
QMLAudioStream *ret =new QMLAudioStream(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::Object *mother =dynamic_cast<osg::Object*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::Object");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::Object model for osg::AudioStreamis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::Object");
if(!cl){std::cerr<<"osg::Object QQModel for osg::AudioStreamis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_AudioStream_pmoc.cpp"
#endif





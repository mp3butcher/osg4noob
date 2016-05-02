#include <osg/ImageStream>
//includes

#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/ImageStream_pmoc.hpp>
#include <customCode/osg/ImageStream_pmoc.hpp>
#include <customCode/osg/Image_pmoc.hpp>
#include <customCode/osg/CopyOp_pmoc.hpp>
#include <customCode/osg/Image_pmoc.hpp>
#include <customCode/osg/Object_pmoc.hpp>
#include <customCode/osg/Texture_pmoc.hpp>
using namespace pmoc;
 bool  osg::QReflect_ImageStream:: isSameKindAs(osg::QReflect_Object  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_ImageStream::isSameKindAs : parameter n.0 is NULL\n"<<endl;return -1;}
return _model->isSameKindAs(p0->_model);

}
 double  osg::QReflect_ImageStream:: getCreationTime()const{
//params checking
return _model->getCreationTime();

}
 double  osg::QReflect_ImageStream:: getCurrentTime()const{
//params checking
return _model->getCurrentTime();

}
 double  osg::QReflect_ImageStream:: getFrameRate()const{
//params checking
return _model->getFrameRate();

}
 double  osg::QReflect_ImageStream:: getLength()const{
//params checking
return _model->getLength();

}
 double  osg::QReflect_ImageStream:: getReferenceTime()const{
//params checking
return _model->getReferenceTime();

}
 double  osg::QReflect_ImageStream:: getTimeMultiplier()const{
//params checking
return _model->getTimeMultiplier();

}
 float  osg::QReflect_ImageStream:: getAudioBalance(){
//params checking
return _model->getAudioBalance();

}
 float  osg::QReflect_ImageStream:: getVolume()const{
//params checking
return _model->getVolume();

}
 int  osg::QReflect_ImageStream:: compare(osg::QReflect_Image  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_ImageStream::compare : parameter n.0 is NULL\n"<<endl;return -1;}
return _model->compare(*p0->_model);

}
 void osg::QReflect_ImageStream::pause(){
//params checking
 _model->pause();

}
 void osg::QReflect_ImageStream::play(){
//params checking
 _model->play();

}
 void osg::QReflect_ImageStream::quit( bool  p0){
//params checking
 _model->quit(p0);

}
 void osg::QReflect_ImageStream::rewind(){
//params checking
 _model->rewind();

}
 void osg::QReflect_ImageStream::seek( double  p0){
//params checking
 _model->seek(p0);

}
 void osg::QReflect_ImageStream::setAudioBalance( float  p0){
//params checking
 _model->setAudioBalance(p0);
emit AudioBalanceChanged();

}
 void osg::QReflect_ImageStream::setLoopingMode(osg::QReflect_ImageStream::LoopingMode  p0){
//params checking
 _model->setLoopingMode(static_cast<osg::ImageStream::LoopingMode>(p0));
emit LoopingModeChanged();

}
 void osg::QReflect_ImageStream::setReferenceTime( double  p0){
//params checking
 _model->setReferenceTime(p0);
emit ReferenceTimeChanged();

}
 void osg::QReflect_ImageStream::setTimeMultiplier( double  p0){
//params checking
 _model->setTimeMultiplier(p0);
emit TimeMultiplierChanged();

}
 void osg::QReflect_ImageStream::setVolume( float  p0){
//params checking
 _model->setVolume(p0);
emit VolumeChanged();

}
const  char*  osg::QReflect_ImageStream:: className()const{
//params checking
return _model->className();

}
const  char*  osg::QReflect_ImageStream:: libraryName()const{
//params checking
return _model->libraryName();

}
osg::QReflect_ImageStream::LoopingMode  osg::QReflect_ImageStream::getLoopingMode()const{
//params checking
osg::QReflect_ImageStream::LoopingMode ret=static_cast<osg::QReflect_ImageStream::LoopingMode>( _model->getLoopingMode());return  ret;

}
osg::QReflect_ImageStream::StreamStatus  osg::QReflect_ImageStream::getStatus()const{
//params checking
osg::QReflect_ImageStream::StreamStatus ret=static_cast<osg::QReflect_ImageStream::StreamStatus>( _model->getStatus());return  ret;

}
osg::QReflect_Object*osg::QReflect_ImageStream::clone(osg::QReflect_CopyOp  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_ImageStream::clone : parameter n.0 is NULL\n"<<endl;;}
PMOCSAFEADDOBJECT(*_model->clone(*p0->_model),inst);
return inst.isValid()?((osg::QReflect_Object * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Object*osg::QReflect_ImageStream::cloneType()const{
//params checking
PMOCSAFEADDOBJECT(*_model->cloneType(),inst);
return inst.isValid()?((osg::QReflect_Object * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Texture*osg::QReflect_ImageStream::createSuitableTexture(){
//params checking
PMOCSAFEADDOBJECT(*_model->createSuitableTexture(),inst);
return inst.isValid()?((osg::QReflect_Texture * )inst.model->createQQModel(&inst)):NULL;
}

///DefaultConstructor////////////////
osg::QReflect_ImageStream::QReflect_ImageStream(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::ImageStream*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_ImageStream::~QReflect_ImageStream( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_ImageStream::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_ImageStream::createInstance( ){
osg::ref_ptr<osg::ImageStream> osg_ImageStream_ptr	;
osg_ImageStream_ptr = new osg::ImageStream ()	;
Instance o(PMOCGETMETACLASS("osg::ImageStream"),(void*)osg_ImageStream_ptr.get()		,true);
_managedinstances.insert(osg_ImageStream_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_ImageStream::MetaQReflect_ImageStream():MetaQQuickClass( "osg::ImageStream"){
_typeid=&typeid(osg::ImageStream );
           qRegisterMetaType<osg::QMLImageStream>();
           qRegisterMetaType<osg::QMLImageStream*>("pmoc.osg.QMLImageStream");
qmlRegisterType<osg::QReflect_ImageStream>("pmoc.osg",1,0,"QReflect_ImageStream");
           qmlRegisterType<osg::QMLImageStream>("pmoc.osg",1,0,"QMLImageStream");
};
const std::string osg::MetaQReflect_ImageStream::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_ImageStream::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_ImageStream::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_ImageStream::createQQModel(const Instance*i){ //return new MetaQReflect_ImageStream_QModel(i);}
QMLImageStream *ret =new QMLImageStream(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::Image *mother =dynamic_cast<osg::Image*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::Image");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::Image model for osg::ImageStreamis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::Image");
if(!cl){std::cerr<<"osg::Image QQModel for osg::ImageStreamis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_ImageStream_pmoc.cpp"
#endif





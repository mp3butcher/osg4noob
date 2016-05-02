#include <osg/ImageSequence>
//includes

#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/ImageSequence_pmoc.hpp>
#include <customCode/osg/ImageSequence_pmoc.hpp>
#include <customCode/osg/ImageStream_pmoc.hpp>
#include <customCode/osg/CopyOp_pmoc.hpp>
#include <customCode/osg/Image_pmoc.hpp>
#include <customCode/osg/NodeVisitor_pmoc.hpp>
#include <customCode/osg/Object_pmoc.hpp>
#include <customCode/osg/Referenced_pmoc.hpp>
using namespace pmoc;
 bool  osg::QReflect_ImageSequence:: isSameKindAs(osg::QReflect_Object  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_ImageSequence::isSameKindAs : parameter n.0 is NULL\n"<<endl;return -1;}
return _model->isSameKindAs(p0->_model);

}
 bool  osg::QReflect_ImageSequence:: requiresUpdateCall()const{
//params checking
return _model->requiresUpdateCall();

}
 double  osg::QReflect_ImageSequence:: getLength()const{
//params checking
return _model->getLength();

}
 double  osg::QReflect_ImageSequence:: getReferenceTime()const{
//params checking
return _model->getReferenceTime();

}
 double  osg::QReflect_ImageSequence:: getTimeMultiplier()const{
//params checking
return _model->getTimeMultiplier();

}
 int  osg::QReflect_ImageSequence:: compare(osg::QReflect_Image  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_ImageSequence::compare : parameter n.0 is NULL\n"<<endl;return -1;}
return _model->compare(*p0->_model);

}
 unsigned int  osg::QReflect_ImageSequence:: getNumImageData()const{
//params checking
return _model->getNumImageData();

}
 void osg::QReflect_ImageSequence::addImage(osg::QReflect_Image  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_ImageSequence::addImage : parameter n.0 is NULL\n"<<endl;return;}
 _model->addImage(p0->_model);

}
 void osg::QReflect_ImageSequence::addImageFile(const  QString  &p0){
//params checking
 _model->addImageFile(std::string(p0.toStdString()));

}
 void osg::QReflect_ImageSequence::pause(){
//params checking
 _model->pause();

}
 void osg::QReflect_ImageSequence::play(){
//params checking
 _model->play();

}
 void osg::QReflect_ImageSequence::rewind(){
//params checking
 _model->rewind();

}
 void osg::QReflect_ImageSequence::seek( double  p0){
//params checking
 _model->seek(p0);

}
 void osg::QReflect_ImageSequence::setImage( unsigned int  p0 ,osg::QReflect_Image  *p1){
//params checking
if(! p1) {std::cerr<<"PMOC: osg::QReflect_ImageSequence::setImage : parameter n.1 is NULL\n"<<endl;return;}
 _model->setImage(p0 ,p1->_model);

}
 void osg::QReflect_ImageSequence::setImageFile( unsigned int  p0 ,const  QString  &p1){
//params checking
 _model->setImageFile(p0 ,std::string(p1.toStdString()));

}
 void osg::QReflect_ImageSequence::setLength( double  p0){
//params checking
 _model->setLength(p0);
emit LengthChanged();

}
 void osg::QReflect_ImageSequence::setMode(osg::QReflect_ImageSequence::Mode  p0){
//params checking
 _model->setMode(static_cast<osg::ImageSequence::Mode>(p0));
emit ModeChanged();

}
 void osg::QReflect_ImageSequence::setReadOptions(osg::QReflect_Referenced  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_ImageSequence::setReadOptions : parameter n.0 is NULL\n"<<endl;return;}
 _model->setReadOptions(p0->_model);
emit ReadOptionsChanged();

}
 void osg::QReflect_ImageSequence::setReferenceTime( double  p0){
//params checking
 _model->setReferenceTime(p0);
emit ReferenceTimeChanged();

}
 void osg::QReflect_ImageSequence::setTimeMultiplier( double  p0){
//params checking
 _model->setTimeMultiplier(p0);
emit TimeMultiplierChanged();

}
 void osg::QReflect_ImageSequence::update(osg::QReflect_NodeVisitor  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_ImageSequence::update : parameter n.0 is NULL\n"<<endl;return;}
 _model->update(p0->_model);

}
QString  osg::QReflect_ImageSequence::getImageFile( unsigned int  p0)const{
//params checking
QString ret(_model->getImageFile(p0).c_str());return ret;

}
const  char*  osg::QReflect_ImageSequence:: className()const{
//params checking
return _model->className();

}
const  char*  osg::QReflect_ImageSequence:: libraryName()const{
//params checking
return _model->libraryName();

}
osg::QReflect_Image*osg::QReflect_ImageSequence::getImage( unsigned int  p0)const{
//params checking
PMOCSAFEADDOBJECT(*_model->getImage(p0),inst);
return inst.isValid()?((osg::QReflect_Image * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Image*osg::QReflect_ImageSequence::getImage( unsigned int  p0){
//params checking
PMOCSAFEADDOBJECT(*_model->getImage(p0),inst);
return inst.isValid()?((osg::QReflect_Image * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_ImageSequence::Mode  osg::QReflect_ImageSequence::getMode()const{
//params checking
osg::QReflect_ImageSequence::Mode ret=static_cast<osg::QReflect_ImageSequence::Mode>( _model->getMode());return  ret;

}
osg::QReflect_Object*osg::QReflect_ImageSequence::clone(osg::QReflect_CopyOp  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_ImageSequence::clone : parameter n.0 is NULL\n"<<endl;;}
PMOCSAFEADDOBJECT(*_model->clone(*p0->_model),inst);
return inst.isValid()?((osg::QReflect_Object * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Object*osg::QReflect_ImageSequence::cloneType()const{
//params checking
PMOCSAFEADDOBJECT(*_model->cloneType(),inst);
return inst.isValid()?((osg::QReflect_Object * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Referenced*osg::QReflect_ImageSequence::getReadOptions()const{
//params checking
PMOCSAFEADDOBJECT(*_model->getReadOptions(),inst);
return inst.isValid()?((osg::QReflect_Referenced * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Referenced*osg::QReflect_ImageSequence::getReadOptions(){
//params checking
PMOCSAFEADDOBJECT(*_model->getReadOptions(),inst);
return inst.isValid()?((osg::QReflect_Referenced * )inst.model->createQQModel(&inst)):NULL;
}

///DefaultConstructor////////////////
osg::QReflect_ImageSequence::QReflect_ImageSequence(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::ImageSequence*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_ImageSequence::~QReflect_ImageSequence( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_ImageSequence::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_ImageSequence::createInstance( ){
osg::ref_ptr<osg::ImageSequence> osg_ImageSequence_ptr	;
osg_ImageSequence_ptr = new osg::ImageSequence ()	;
Instance o(PMOCGETMETACLASS("osg::ImageSequence"),(void*)osg_ImageSequence_ptr.get()		,true);
_managedinstances.insert(osg_ImageSequence_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_ImageSequence::MetaQReflect_ImageSequence():MetaQQuickClass( "osg::ImageSequence"){
_typeid=&typeid(osg::ImageSequence );
           qRegisterMetaType<osg::QMLImageSequence>();
           qRegisterMetaType<osg::QMLImageSequence*>("pmoc.osg.QMLImageSequence");
qmlRegisterType<osg::QReflect_ImageSequence>("pmoc.osg",1,0,"QReflect_ImageSequence");
           qmlRegisterType<osg::QMLImageSequence>("pmoc.osg",1,0,"QMLImageSequence");
};
const std::string osg::MetaQReflect_ImageSequence::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_ImageSequence::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_ImageSequence::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_ImageSequence::createQQModel(const Instance*i){ //return new MetaQReflect_ImageSequence_QModel(i);}
QMLImageSequence *ret =new QMLImageSequence(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::ImageStream *mother =dynamic_cast<osg::ImageStream*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::ImageStream");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::ImageStream model for osg::ImageSequenceis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::ImageStream");
if(!cl){std::cerr<<"osg::ImageStream QQModel for osg::ImageSequenceis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_ImageSequence_pmoc.cpp"
#endif





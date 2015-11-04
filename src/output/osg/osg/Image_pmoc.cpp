#include <osg/Image>
//includes
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/Image_pmoc.hpp>
#include <customCode/osg/Image_pmoc.hpp>
#include <customCode/osg/BufferObject_pmoc.hpp>
#include <customCode/osg/BufferObject_pmoc.hpp>
#include <customCode/osg/CopyOp_pmoc.hpp>
#include <customCode/osg/FrameStamp_pmoc.hpp>
#include <customCode/osg/Image_pmoc.hpp>
#include <customCode/osg/Object_pmoc.hpp>
#include <customCode/osg/Vec2f_pmoc.hpp>
#include <customCode/osg/Vec3f_pmoc.hpp>
#include <customCode/osg/Vec4f_pmoc.hpp>
#include <osg/BufferObject>
#include <osg/BufferObject_pmoc.hpp>
using namespace pmoc;
 GLint  osg::QReflect_Image::getInternalTextureFormat()const{
return _model->getInternalTextureFormat();

}
 bool  osg::QReflect_Image::isCompressed()const{
return _model->isCompressed();

}
 bool  osg::QReflect_Image::isDataContiguous()const{
return _model->isDataContiguous();

}
 bool  osg::QReflect_Image::isImageTranslucent()const{
return _model->isImageTranslucent();

}
 bool  osg::QReflect_Image::isMipmap()const{
return _model->isMipmap();

}
 bool  osg::QReflect_Image::isSameKindAs(osg::QReflect_Object *p0)const{
return _model->isSameKindAs(p0->_model);

}
 bool  osg::QReflect_Image::requiresUpdateCall()const{
return _model->requiresUpdateCall();

}
 bool  osg::QReflect_Image::sendFocusHint( bool p0){
return _model->sendFocusHint(p0);

}
 bool  osg::QReflect_Image::sendKeyEvent( int p0 , bool p1){
return _model->sendKeyEvent(p0 ,p1);

}
 bool  osg::QReflect_Image::sendPointerEvent( int p0 , int p1 , int p2){
return _model->sendPointerEvent(p0 ,p1 ,p2);

}
 bool  osg::QReflect_Image::supportsTextureSubloading()const{
return _model->supportsTextureSubloading();

}
 bool  osg::QReflect_Image::valid()const{
return _model->valid();

}
 int  osg::QReflect_Image::compare(osg::QReflect_Image *p0)const{
return _model->compare(*p0->_model);

}
 int  osg::QReflect_Image::computeNearestPowerOfTwo( int p0 , float p1){
return _model->computeNearestPowerOfTwo(p0 ,p1);

}
 int  osg::QReflect_Image::computeNumberOfMipmapLevels( int p0 , int p1 , int p2){
return _model->computeNumberOfMipmapLevels(p0 ,p1 ,p2);

}
 int  osg::QReflect_Image::r()const{
return _model->r();

}
 int  osg::QReflect_Image::s()const{
return _model->s();

}
 int  osg::QReflect_Image::t()const{
return _model->t();

}
 unsigned int  osg::QReflect_Image::getImageSizeInBytes()const{
return _model->getImageSizeInBytes();

}
 unsigned int  osg::QReflect_Image::getImageStepInBytes()const{
return _model->getImageStepInBytes();

}
 unsigned int  osg::QReflect_Image::getMipmapOffset( unsigned int p0)const{
return _model->getMipmapOffset(p0);

}
 unsigned int  osg::QReflect_Image::getNumMipmapLevels()const{
return _model->getNumMipmapLevels();

}
 unsigned int  osg::QReflect_Image::getPixelSizeInBits()const{
return _model->getPixelSizeInBits();

}
 unsigned int  osg::QReflect_Image::getRowSizeInBytes()const{
return _model->getRowSizeInBytes();

}
 unsigned int  osg::QReflect_Image::getRowStepInBytes()const{
return _model->getRowStepInBytes();

}
 unsigned int  osg::QReflect_Image::getTotalDataSize()const{
return _model->getTotalDataSize();

}
 unsigned int  osg::QReflect_Image::getTotalSizeInBytes()const{
return _model->getTotalSizeInBytes();

}
 unsigned int  osg::QReflect_Image::getTotalSizeInBytesIncludingMipmaps()const{
return _model->getTotalSizeInBytesIncludingMipmaps();

}
 void osg::QReflect_Image::copySubImage( int p0 , int p1 , int p2 ,osg::QReflect_Image *p3){
 _model->copySubImage(p0 ,p1 ,p2 ,p3->_model);

}
 void osg::QReflect_Image::ensureValidSizeForTexturing( GLint p0){
 _model->ensureValidSizeForTexturing(p0);

}
 void osg::QReflect_Image::flipDepth(){
 _model->flipDepth();

}
 void osg::QReflect_Image::flipHorizontal(){
 _model->flipHorizontal();

}
 void osg::QReflect_Image::flipVertical(){
 _model->flipVertical();

}
 void osg::QReflect_Image::scaleImage( int p0 , int p1 , int p2){
 _model->scaleImage(p0 ,p1 ,p2);

}
 void osg::QReflect_Image::setAllocationMode(osg::QReflect_Image::AllocationMode p0){
 _model->setAllocationMode(static_cast<osg::Image::AllocationMode>(p0));

}
 void osg::QReflect_Image::setColor(osg::QReflect_Vec4f *p0 , unsigned int p1 , unsigned int p2 , unsigned int p3){
 _model->setColor(*p0->_model ,p1 ,p2 ,p3);

}
 void osg::QReflect_Image::setColor(osg::QReflect_Vec4f *p0 ,osg::QReflect_Vec2f *p1){
 _model->setColor(*p0->_model ,*p1->_model);

}
 void osg::QReflect_Image::setColor(osg::QReflect_Vec4f *p0 ,osg::QReflect_Vec3f *p1){
 _model->setColor(*p0->_model ,*p1->_model);

}
 void osg::QReflect_Image::setFrameLastRendered(osg::QReflect_FrameStamp *p0){
 _model->setFrameLastRendered(p0->_model);

}
 void osg::QReflect_Image::setInternalTextureFormat( GLint p0){
 _model->setInternalTextureFormat(p0);

}
 void osg::QReflect_Image::setOrigin(osg::QReflect_Image::Origin p0){
 _model->setOrigin(static_cast<osg::Image::Origin>(p0));

}
 void osg::QReflect_Image::setWriteHint(osg::QReflect_Image::WriteHint p0){
 _model->setWriteHint(static_cast<osg::Image::WriteHint>(p0));

}
const  char*  osg::QReflect_Image::className()const{
return _model->className();

}
const  char*  osg::QReflect_Image::libraryName()const{
return _model->libraryName();

}
const QString osg::QReflect_Image::getFileName()const{return QString(_model->getFileName().c_str());}
const float osg::QReflect_Image::getPixelAspectRatio()const{return _model->getPixelAspectRatio();}
const int osg::QReflect_Image::getRowLength()const{return _model->getRowLength();}
const unsigned int osg::QReflect_Image::getPacking()const{return _model->getPacking();}
osg::QReflect_Image*osg::QReflect_Image::asImage()const{
PMOCSAFEADDOBJECT(*_model->asImage(),inst);
return inst.isValid()?((osg::QReflect_Image * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Image*osg::QReflect_Image::asImage(){
PMOCSAFEADDOBJECT(*_model->asImage(),inst);
return inst.isValid()?((osg::QReflect_Image * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Image::AllocationMode  osg::QReflect_Image::getAllocationMode()const{
osg::QReflect_Image::AllocationMode ret=static_cast<osg::QReflect_Image::AllocationMode>( _model->getAllocationMode());return  ret;

}
osg::QReflect_Image::Origin  osg::QReflect_Image::getOrigin()const{
osg::QReflect_Image::Origin ret=static_cast<osg::QReflect_Image::Origin>( _model->getOrigin());return  ret;

}
osg::QReflect_Image::WriteHint  osg::QReflect_Image::getWriteHint()const{
osg::QReflect_Image::WriteHint ret=static_cast<osg::QReflect_Image::WriteHint>( _model->getWriteHint());return  ret;

}
osg::QReflect_Object*osg::QReflect_Image::clone(osg::QReflect_CopyOp *p0)const{
PMOCSAFEADDOBJECT(*_model->clone(*p0->_model),inst);
return inst.isValid()?((osg::QReflect_Object * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Object*osg::QReflect_Image::cloneType()const{
PMOCSAFEADDOBJECT(*_model->cloneType(),inst);
return inst.isValid()?((osg::QReflect_Object * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_PixelBufferObject * osg::QReflect_Image::getPixelBufferObject()const{
PMOCSAFEADDOBJECT(*_model->getPixelBufferObject(),inst);
return inst.isValid()?((osg::QReflect_PixelBufferObject * )inst.model->createQQModel(&inst)):NULL;
}
void  osg::QReflect_Image::setPacking(const unsigned int &par){_model->setPacking(par);emit PackingChanged(par);}
void  osg::QReflect_Image::setPixelAspectRatio(const float &par){_model->setPixelAspectRatio(par);emit PixelAspectRatioChanged(par);}
void  osg::QReflect_Image::setRowLength(const int &par){_model->setRowLength(par);emit RowLengthChanged(par);}
void osg::QReflect_Image::pmoc_reverse_setPixelBufferObject( osg::QReflect_PixelBufferObject *par){_model->setPixelBufferObject(NULL);
emit PixelBufferObjectChanged(NULL);
}
void osg::QReflect_Image::setFileName(const QString &par){_model->setFileName(par.toStdString());emit FileNameChanged(par);}
void osg::QReflect_Image::setPixelBufferObject( osg::QReflect_PixelBufferObject *par){_model->setPixelBufferObject(par->_model);
emit PixelBufferObjectChanged(par);
}

///DefaultConstructor////////////////
osg::QReflect_Image::QReflect_Image(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::Image*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_Image::~QReflect_Image( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_Image::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_Image::createInstance( ){
osg::ref_ptr<osg::Image> osg_Image_ptr	;
osg_Image_ptr = new osg::Image ()	;
Instance o(PMOCGETMETACLASS("osg::Image"),(void*)osg_Image_ptr.get()		,true);
_managedinstances.insert(osg_Image_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_Image::MetaQReflect_Image():MetaQQuickClass( "osg::Image"){
_typeid=&typeid(osg::Image );           qRegisterMetaType<QMLImage>();
qmlRegisterType<QReflect_Image>("pmoc.osg",1,0,"QReflect_Image");
           qmlRegisterType<QMLImage>("pmoc.osg",1,0,"QMLImage");
       PMOCACTION("getPixelBufferObject","setPixelBufferObject","unsetPixelBufferObject");
};
const std::string osg::MetaQReflect_Image::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_Image::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_Image::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_Image::createQQModel(Instance*i){ //return new MetaQReflect_Image_QModel(i);}
QMLImage *ret =new QMLImage(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::BufferData *mother =dynamic_cast<osg::BufferData*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::BufferData");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::BufferData model for osg::Imageis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::BufferData");
if(!cl){std::cerr<<"osg::BufferData QQModel for osg::Imageis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Image_pmoc.cpp"
#endif



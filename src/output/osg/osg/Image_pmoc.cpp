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
#include <customCode/osg/NodeVisitor_pmoc.hpp>
#include <customCode/osg/Object_pmoc.hpp>
#include <customCode/osg/Vec2f_pmoc.hpp>
#include <customCode/osg/Vec3f_pmoc.hpp>
#include <customCode/osg/Vec4f_pmoc.hpp>
using namespace pmoc;
 GLenum  osg::QReflect_Image:: computeFormatDataType( GLenum  p0){
//params checking
return _model->computeFormatDataType(p0);

}
 GLenum  osg::QReflect_Image:: computePixelFormat( GLenum  p0){
//params checking
return _model->computePixelFormat(p0);

}
 GLenum  osg::QReflect_Image:: getDataType()const{
//params checking
return _model->getDataType();

}
 GLenum  osg::QReflect_Image:: getPixelFormat()const{
//params checking
return _model->getPixelFormat();

}
 GLint  osg::QReflect_Image:: getInternalTextureFormat()const{
//params checking
return _model->getInternalTextureFormat();

}
 bool  osg::QReflect_Image:: isCompressed()const{
//params checking
return _model->isCompressed();

}
 bool  osg::QReflect_Image:: isDataContiguous()const{
//params checking
return _model->isDataContiguous();

}
 bool  osg::QReflect_Image:: isImageTranslucent()const{
//params checking
return _model->isImageTranslucent();

}
 bool  osg::QReflect_Image:: isMipmap()const{
//params checking
return _model->isMipmap();

}
 bool  osg::QReflect_Image:: isPackedType( GLenum  p0){
//params checking
return _model->isPackedType(p0);

}
 bool  osg::QReflect_Image:: isSameKindAs(osg::QReflect_Object  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Image::isSameKindAs : parameter n.0 is NULL\n"<<endl;return -1;}
return _model->isSameKindAs(p0->_model);

}
 bool  osg::QReflect_Image:: requiresUpdateCall()const{
//params checking
return _model->requiresUpdateCall();

}
 bool  osg::QReflect_Image:: sendFocusHint( bool  p0){
//params checking
return _model->sendFocusHint(p0);

}
 bool  osg::QReflect_Image:: sendKeyEvent( int  p0 , bool  p1){
//params checking
return _model->sendKeyEvent(p0 ,p1);

}
 bool  osg::QReflect_Image:: sendPointerEvent( int  p0 , int  p1 , int  p2){
//params checking
return _model->sendPointerEvent(p0 ,p1 ,p2);

}
 bool  osg::QReflect_Image:: supportsTextureSubloading()const{
//params checking
return _model->supportsTextureSubloading();

}
 bool  osg::QReflect_Image:: valid()const{
//params checking
return _model->valid();

}
 float  osg::QReflect_Image:: getPixelAspectRatio()const{
//params checking
return _model->getPixelAspectRatio();

}
 int  osg::QReflect_Image:: compare(osg::QReflect_Image  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Image::compare : parameter n.0 is NULL\n"<<endl;return -1;}
return _model->compare(*p0->_model);

}
 int  osg::QReflect_Image:: computeNearestPowerOfTwo( int  p0 , float  p1){
//params checking
return _model->computeNearestPowerOfTwo(p0 ,p1);

}
 int  osg::QReflect_Image:: computeNumberOfMipmapLevels( int  p0 , int  p1 , int  p2){
//params checking
return _model->computeNumberOfMipmapLevels(p0 ,p1 ,p2);

}
 int  osg::QReflect_Image:: getRowLength()const{
//params checking
return _model->getRowLength();

}
 int  osg::QReflect_Image:: r()const{
//params checking
return _model->r();

}
 int  osg::QReflect_Image:: s()const{
//params checking
return _model->s();

}
 int  osg::QReflect_Image:: t()const{
//params checking
return _model->t();

}
 unsigned int  osg::QReflect_Image:: computeBlockSize( GLenum  p0 , GLenum  p1){
//params checking
return _model->computeBlockSize(p0 ,p1);

}
 unsigned int  osg::QReflect_Image:: computeImageSizeInBytes( int  p0 , int  p1 , int  p2 , GLenum  p3 , GLenum  p4 , int  p5 , int  p6 , int  p7){
//params checking
return _model->computeImageSizeInBytes(p0 ,p1 ,p2 ,p3 ,p4 ,p5 ,p6 ,p7);

}
 unsigned int  osg::QReflect_Image:: computeNumComponents( GLenum  p0){
//params checking
return _model->computeNumComponents(p0);

}
 unsigned int  osg::QReflect_Image:: computePixelSizeInBits( GLenum  p0 , GLenum  p1){
//params checking
return _model->computePixelSizeInBits(p0 ,p1);

}
 unsigned int  osg::QReflect_Image:: computeRowWidthInBytes( int  p0 , GLenum  p1 , GLenum  p2 , int  p3){
//params checking
return _model->computeRowWidthInBytes(p0 ,p1 ,p2 ,p3);

}
 unsigned int  osg::QReflect_Image:: getImageSizeInBytes()const{
//params checking
return _model->getImageSizeInBytes();

}
 unsigned int  osg::QReflect_Image:: getImageStepInBytes()const{
//params checking
return _model->getImageStepInBytes();

}
 unsigned int  osg::QReflect_Image:: getMipmapOffset( unsigned int  p0)const{
//params checking
return _model->getMipmapOffset(p0);

}
 unsigned int  osg::QReflect_Image:: getNumMipmapLevels()const{
//params checking
return _model->getNumMipmapLevels();

}
 unsigned int  osg::QReflect_Image:: getPacking()const{
//params checking
return _model->getPacking();

}
 unsigned int  osg::QReflect_Image:: getPixelSizeInBits()const{
//params checking
return _model->getPixelSizeInBits();

}
 unsigned int  osg::QReflect_Image:: getRowSizeInBytes()const{
//params checking
return _model->getRowSizeInBytes();

}
 unsigned int  osg::QReflect_Image:: getRowStepInBytes()const{
//params checking
return _model->getRowStepInBytes();

}
 unsigned int  osg::QReflect_Image:: getTotalDataSize()const{
//params checking
return _model->getTotalDataSize();

}
 unsigned int  osg::QReflect_Image:: getTotalSizeInBytes()const{
//params checking
return _model->getTotalSizeInBytes();

}
 unsigned int  osg::QReflect_Image:: getTotalSizeInBytesIncludingMipmaps()const{
//params checking
return _model->getTotalSizeInBytesIncludingMipmaps();

}
 void osg::QReflect_Image::allocateImage( int  p0 , int  p1 , int  p2 , GLenum  p3 , GLenum  p4 , int  p5){
//params checking
 _model->allocateImage(p0 ,p1 ,p2 ,p3 ,p4 ,p5);

}
 void osg::QReflect_Image::copySubImage( int  p0 , int  p1 , int  p2 ,osg::QReflect_Image  *p3){
//params checking
if(! p3) {std::cerr<<"PMOC: osg::QReflect_Image::copySubImage : parameter n.3 is NULL\n"<<endl;return;}
 _model->copySubImage(p0 ,p1 ,p2 ,p3->_model);

}
 void osg::QReflect_Image::ensureValidSizeForTexturing( GLint  p0){
//params checking
 _model->ensureValidSizeForTexturing(p0);

}
 void osg::QReflect_Image::flipDepth(){
//params checking
 _model->flipDepth();

}
 void osg::QReflect_Image::flipHorizontal(){
//params checking
 _model->flipHorizontal();

}
 void osg::QReflect_Image::flipVertical(){
//params checking
 _model->flipVertical();

}
 void osg::QReflect_Image::readImageFromCurrentTexture( unsigned int  p0 , bool  p1 , GLenum  p2 , unsigned int  p3){
//params checking
 _model->readImageFromCurrentTexture(p0 ,p1 ,p2 ,p3);

}
 void osg::QReflect_Image::readPixels( int  p0 , int  p1 , int  p2 , int  p3 , GLenum  p4 , GLenum  p5 , int  p6){
//params checking
 _model->readPixels(p0 ,p1 ,p2 ,p3 ,p4 ,p5 ,p6);

}
 void osg::QReflect_Image::scaleImage( int  p0 , int  p1 , int  p2 , GLenum  p3){
//params checking
 _model->scaleImage(p0 ,p1 ,p2 ,p3);

}
 void osg::QReflect_Image::scaleImage( int  p0 , int  p1 , int  p2){
//params checking
 _model->scaleImage(p0 ,p1 ,p2);

}
 void osg::QReflect_Image::setAllocationMode(osg::QReflect_Image::AllocationMode  p0){
//params checking
 _model->setAllocationMode(static_cast<osg::Image::AllocationMode>(p0));
emit AllocationModeChanged();

}
 void osg::QReflect_Image::setColor(osg::QReflect_Vec4f  *p0 , unsigned int  p1 , unsigned int  p2 , unsigned int  p3){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Image::setColor : parameter n.0 is NULL\n"<<endl;return;}
 _model->setColor(*p0->_model ,p1 ,p2 ,p3);

}
 void osg::QReflect_Image::setColor(osg::QReflect_Vec4f  *p0 ,osg::QReflect_Vec2f  *p1){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Image::setColor : parameter n.0 is NULL\n"<<endl;return;}
if(! p1) {std::cerr<<"PMOC: osg::QReflect_Image::setColor : parameter n.1 is NULL\n"<<endl;return;}
 _model->setColor(*p0->_model ,*p1->_model);

}
 void osg::QReflect_Image::setColor(osg::QReflect_Vec4f  *p0 ,osg::QReflect_Vec3f  *p1){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Image::setColor : parameter n.0 is NULL\n"<<endl;return;}
if(! p1) {std::cerr<<"PMOC: osg::QReflect_Image::setColor : parameter n.1 is NULL\n"<<endl;return;}
 _model->setColor(*p0->_model ,*p1->_model);

}
 void osg::QReflect_Image::setDataType( GLenum  p0){
//params checking
 _model->setDataType(p0);
emit DataTypeChanged();

}
 void osg::QReflect_Image::setFileName(const  QString  &p0){
//params checking
 _model->setFileName(std::string(p0.toStdString()));
emit FileNameChanged();

}
 void osg::QReflect_Image::setFrameLastRendered(osg::QReflect_FrameStamp  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Image::setFrameLastRendered : parameter n.0 is NULL\n"<<endl;return;}
 _model->setFrameLastRendered(p0->_model);

}
 void osg::QReflect_Image::setInternalTextureFormat( GLint  p0){
//params checking
 _model->setInternalTextureFormat(p0);
emit InternalTextureFormatChanged();

}
 void osg::QReflect_Image::setOrigin(osg::QReflect_Image::Origin  p0){
//params checking
 _model->setOrigin(static_cast<osg::Image::Origin>(p0));
emit OriginChanged();

}
 void osg::QReflect_Image::setPacking( unsigned int  p0){
//params checking
 _model->setPacking(p0);
emit PackingChanged();

}
 void osg::QReflect_Image::setPixelAspectRatio( float  p0){
//params checking
 _model->setPixelAspectRatio(p0);
emit PixelAspectRatioChanged();

}
 void osg::QReflect_Image::setPixelBufferObject(osg::QReflect_PixelBufferObject  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Image::setPixelBufferObject : parameter n.0 is NULL\n"<<endl;return;}
 _model->setPixelBufferObject(p0->_model);
emit PixelBufferObjectChanged();

}
 void osg::QReflect_Image::setPixelFormat( GLenum  p0){
//params checking
 _model->setPixelFormat(p0);
emit PixelFormatChanged();

}
 void osg::QReflect_Image::setRowLength( int  p0){
//params checking
 _model->setRowLength(p0);
emit RowLengthChanged();

}
 void osg::QReflect_Image::setWriteHint(osg::QReflect_Image::WriteHint  p0){
//params checking
 _model->setWriteHint(static_cast<osg::Image::WriteHint>(p0));
emit WriteHintChanged();

}
 void osg::QReflect_Image::swap(osg::QReflect_Image  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Image::swap : parameter n.0 is NULL\n"<<endl;return;}
 _model->swap(*p0->_model);

}
 void osg::QReflect_Image::update(osg::QReflect_NodeVisitor  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Image::update : parameter n.0 is NULL\n"<<endl;return;}
 _model->update(p0->_model);

}
QString  osg::QReflect_Image::getFileName()const{
//params checking
QString ret(_model->getFileName().c_str());return ret;

}
const  GLvoid*  osg::QReflect_Image:: getDataPointer()const{
//params checking
return _model->getDataPointer();

}
const  char*  osg::QReflect_Image:: className()const{
//params checking
return _model->className();

}
const  char*  osg::QReflect_Image:: libraryName()const{
//params checking
return _model->libraryName();

}
osg::QReflect_Image*osg::QReflect_Image::asImage()const{
//params checking
PMOCSAFEADDOBJECT(*_model->asImage(),inst);
return inst.isValid()?((osg::QReflect_Image * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Image*osg::QReflect_Image::asImage(){
//params checking
PMOCSAFEADDOBJECT(*_model->asImage(),inst);
return inst.isValid()?((osg::QReflect_Image * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Image::AllocationMode  osg::QReflect_Image::getAllocationMode()const{
//params checking
osg::QReflect_Image::AllocationMode ret=static_cast<osg::QReflect_Image::AllocationMode>( _model->getAllocationMode());return  ret;

}
osg::QReflect_Image::Origin  osg::QReflect_Image::getOrigin()const{
//params checking
osg::QReflect_Image::Origin ret=static_cast<osg::QReflect_Image::Origin>( _model->getOrigin());return  ret;

}
osg::QReflect_Image::WriteHint  osg::QReflect_Image::getWriteHint()const{
//params checking
osg::QReflect_Image::WriteHint ret=static_cast<osg::QReflect_Image::WriteHint>( _model->getWriteHint());return  ret;

}
osg::QReflect_Object*osg::QReflect_Image::clone(osg::QReflect_CopyOp  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Image::clone : parameter n.0 is NULL\n"<<endl;;}
PMOCSAFEADDOBJECT(*_model->clone(*p0->_model),inst);
return inst.isValid()?((osg::QReflect_Object * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Object*osg::QReflect_Image::cloneType()const{
//params checking
PMOCSAFEADDOBJECT(*_model->cloneType(),inst);
return inst.isValid()?((osg::QReflect_Object * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_PixelBufferObject*osg::QReflect_Image::getPixelBufferObject()const{
//params checking
PMOCSAFEADDOBJECT(*_model->getPixelBufferObject(),inst);
return inst.isValid()?((osg::QReflect_PixelBufferObject * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_PixelBufferObject*osg::QReflect_Image::getPixelBufferObject(){
//params checking
PMOCSAFEADDOBJECT(*_model->getPixelBufferObject(),inst);
return inst.isValid()?((osg::QReflect_PixelBufferObject * )inst.model->createQQModel(&inst)):NULL;
}

///DefaultConstructor////////////////
osg::QReflect_Image::QReflect_Image(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
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
_typeid=&typeid(osg::Image );
           qRegisterMetaType<osg::QMLImage>();
           qRegisterMetaType<osg::QMLImage*>("pmoc.osg.QMLImage");
qmlRegisterType<osg::QReflect_Image>("pmoc.osg",1,0,"QReflect_Image");
           qmlRegisterType<osg::QMLImage>("pmoc.osg",1,0,"QMLImage");
};
const std::string osg::MetaQReflect_Image::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_Image::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_Image::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_Image::createQQModel(const Instance*i){ //return new MetaQReflect_Image_QModel(i);}
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





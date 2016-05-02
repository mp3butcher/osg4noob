#include <osg/Texture>
//includes

#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/Texture_pmoc.hpp>
#include <customCode/osg/Texture_pmoc.hpp>
#include <customCode/osg/StateAttribute_pmoc.hpp>
#include <customCode/osg/GraphicsContext_pmoc.hpp>
#include <customCode/osg/Image_pmoc.hpp>
#include <customCode/osg/Object_pmoc.hpp>
#include <customCode/osg/State_pmoc.hpp>
#include <customCode/osg/Texture_pmoc.hpp>
#include <customCode/osg/Vec4d_pmoc.hpp>
#include <customCode/osg/Vec4i_pmoc.hpp>
using namespace pmoc;
 GLenum  osg::QReflect_Texture:: getSourceFormat()const{
//params checking
return _model->getSourceFormat();

}
 GLenum  osg::QReflect_Texture:: getSourceType()const{
//params checking
return _model->getSourceType();

}
 GLint  osg::QReflect_Texture:: getBorderWidth()const{
//params checking
return _model->getBorderWidth();

}
 GLint  osg::QReflect_Texture:: getInternalFormat()const{
//params checking
return _model->getInternalFormat();

}
 bool  osg::QReflect_Texture:: areAllTextureObjectsLoaded()const{
//params checking
return _model->areAllTextureObjectsLoaded();

}
 bool  osg::QReflect_Texture:: getClientStorageHint()const{
//params checking
return _model->getClientStorageHint();

}
 bool  osg::QReflect_Texture:: getResizeNonPowerOfTwoHint()const{
//params checking
return _model->getResizeNonPowerOfTwoHint();

}
 bool  osg::QReflect_Texture:: getShadowComparison()const{
//params checking
return _model->getShadowComparison();

}
 bool  osg::QReflect_Texture:: getUnRefImageDataAfterApply()const{
//params checking
return _model->getUnRefImageDataAfterApply();

}
 bool  osg::QReflect_Texture:: getUseHardwareMipMapGeneration()const{
//params checking
return _model->getUseHardwareMipMapGeneration();

}
 bool  osg::QReflect_Texture:: isCompressedInternalFormat( GLint  p0){
//params checking
return _model->isCompressedInternalFormat(p0);

}
 bool  osg::QReflect_Texture:: isCompressedInternalFormat()const{
//params checking
return _model->isCompressedInternalFormat();

}
 bool  osg::QReflect_Texture:: isSameKindAs(osg::QReflect_Object  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Texture::isSameKindAs : parameter n.0 is NULL\n"<<endl;return -1;}
return _model->isSameKindAs(p0->_model);

}
 bool  osg::QReflect_Texture:: isTextureAttribute()const{
//params checking
return _model->isTextureAttribute();

}
 float  osg::QReflect_Texture:: getMaxAnisotropy()const{
//params checking
return _model->getMaxAnisotropy();

}
 float  osg::QReflect_Texture:: getShadowAmbient()const{
//params checking
return _model->getShadowAmbient();

}
 int  osg::QReflect_Texture:: getTextureDepth()const{
//params checking
return _model->getTextureDepth();

}
 int  osg::QReflect_Texture:: getTextureHeight()const{
//params checking
return _model->getTextureHeight();

}
 int  osg::QReflect_Texture:: getTextureWidth()const{
//params checking
return _model->getTextureWidth();

}
 unsigned int&  osg::QReflect_Texture:: getTextureParameterDirty( unsigned int  p0)const{
//params checking
return _model->getTextureParameterDirty(p0);

}
 void osg::QReflect_Texture::allocateMipmapLevels(){
//params checking
 _model->allocateMipmapLevels();

}
 void osg::QReflect_Texture::applyTexImage2D_load(osg::QReflect_State  *p0 , GLenum  p1 ,osg::QReflect_Image  *p2 , GLsizei  p3 , GLsizei  p4 , GLsizei  p5)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Texture::applyTexImage2D_load : parameter n.0 is NULL\n"<<endl;return;}
if(! p2) {std::cerr<<"PMOC: osg::QReflect_Texture::applyTexImage2D_load : parameter n.2 is NULL\n"<<endl;return;}
 _model->applyTexImage2D_load(*p0->_model ,p1 ,p2->_model ,p3 ,p4 ,p5);

}
 void osg::QReflect_Texture::applyTexImage2D_subload(osg::QReflect_State  *p0 , GLenum  p1 ,osg::QReflect_Image  *p2 , GLsizei  p3 , GLsizei  p4 , GLint  p5 , GLsizei  p6)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Texture::applyTexImage2D_subload : parameter n.0 is NULL\n"<<endl;return;}
if(! p2) {std::cerr<<"PMOC: osg::QReflect_Texture::applyTexImage2D_subload : parameter n.2 is NULL\n"<<endl;return;}
 _model->applyTexImage2D_subload(*p0->_model ,p1 ,p2->_model ,p3 ,p4 ,p5 ,p6);

}
 void osg::QReflect_Texture::bindToImageUnit( unsigned int  p0 , GLenum  p1 , GLenum  p2 , int  p3 , bool  p4 , int  p5){
//params checking
 _model->bindToImageUnit(p0 ,p1 ,p2 ,p3 ,p4 ,p5);

}
 void osg::QReflect_Texture::compileGLObjects(osg::QReflect_State  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Texture::compileGLObjects : parameter n.0 is NULL\n"<<endl;return;}
 _model->compileGLObjects(*p0->_model);

}
 void osg::QReflect_Texture::deleteAllTextureObjects( unsigned int  p0){
//params checking
 _model->deleteAllTextureObjects(p0);

}
 void osg::QReflect_Texture::dirtyTextureObject(){
//params checking
 _model->dirtyTextureObject();

}
 void osg::QReflect_Texture::dirtyTextureParameters(){
//params checking
 _model->dirtyTextureParameters();

}
 void osg::QReflect_Texture::discardAllDeletedTextureObjects( unsigned int  p0){
//params checking
 _model->discardAllDeletedTextureObjects(p0);

}
 void osg::QReflect_Texture::discardAllTextureObjects( unsigned int  p0){
//params checking
 _model->discardAllTextureObjects(p0);

}
 void osg::QReflect_Texture::flushAllDeletedTextureObjects( unsigned int  p0){
//params checking
 _model->flushAllDeletedTextureObjects(p0);

}
 void osg::QReflect_Texture::flushDeletedTextureObjects( unsigned int  p0 , double  p1 , double  &p2){
//params checking
 _model->flushDeletedTextureObjects(p0 ,p1 ,p2);

}
 void osg::QReflect_Texture::getCompressedSize( GLenum  p0 , GLint  p1 , GLint  p2 , GLint  p3 , GLint  &p4 , GLint  &p5){
//params checking
 _model->getCompressedSize(p0 ,p1 ,p2 ,p3 ,p4 ,p5);

}
 void osg::QReflect_Texture::releaseGLObjects(osg::QReflect_State  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Texture::releaseGLObjects : parameter n.0 is NULL\n"<<endl;return;}
 _model->releaseGLObjects(p0->_model);

}
 void osg::QReflect_Texture::resizeGLObjectBuffers( unsigned int  p0){
//params checking
 _model->resizeGLObjectBuffers(p0);

}
 void osg::QReflect_Texture::setBorderColor(osg::QReflect_Vec4d  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Texture::setBorderColor : parameter n.0 is NULL\n"<<endl;return;}
 _model->setBorderColor(*p0->_model);

}
 void osg::QReflect_Texture::setBorderWidth( GLint  p0){
//params checking
 _model->setBorderWidth(p0);
emit BorderWidthChanged();

}
 void osg::QReflect_Texture::setClientStorageHint( bool  p0){
//params checking
 _model->setClientStorageHint(p0);
emit ClientStorageHintChanged();

}
 void osg::QReflect_Texture::setFilter(osg::QReflect_Texture::FilterParameter  p0 ,osg::QReflect_Texture::FilterMode  p1){
//params checking
 _model->setFilter(static_cast<osg::Texture::FilterParameter>(p0) ,static_cast<osg::Texture::FilterMode>(p1));

}
 void osg::QReflect_Texture::setInternalFormat( GLint  p0){
//params checking
 _model->setInternalFormat(p0);
emit InternalFormatChanged();

}
 void osg::QReflect_Texture::setInternalFormatMode(osg::QReflect_Texture::InternalFormatMode  p0){
//params checking
 _model->setInternalFormatMode(static_cast<osg::Texture::InternalFormatMode>(p0));
emit InternalFormatModeChanged();

}
 void osg::QReflect_Texture::setMaxAnisotropy( float  p0){
//params checking
 _model->setMaxAnisotropy(p0);
emit MaxAnisotropyChanged();

}
 void osg::QReflect_Texture::setReadPBuffer(osg::QReflect_GraphicsContext  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Texture::setReadPBuffer : parameter n.0 is NULL\n"<<endl;return;}
 _model->setReadPBuffer(p0->_model);
emit ReadPBufferChanged();

}
 void osg::QReflect_Texture::setResizeNonPowerOfTwoHint( bool  p0){
//params checking
 _model->setResizeNonPowerOfTwoHint(p0);
emit ResizeNonPowerOfTwoHintChanged();

}
 void osg::QReflect_Texture::setShadowAmbient( float  p0){
//params checking
 _model->setShadowAmbient(p0);
emit ShadowAmbientChanged();

}
 void osg::QReflect_Texture::setShadowCompareFunc(osg::QReflect_Texture::ShadowCompareFunc  p0){
//params checking
 _model->setShadowCompareFunc(static_cast<osg::Texture::ShadowCompareFunc>(p0));
emit ShadowCompareFuncChanged();

}
 void osg::QReflect_Texture::setShadowComparison( bool  p0){
//params checking
 _model->setShadowComparison(p0);
emit ShadowComparisonChanged();

}
 void osg::QReflect_Texture::setShadowTextureMode(osg::QReflect_Texture::ShadowTextureMode  p0){
//params checking
 _model->setShadowTextureMode(static_cast<osg::Texture::ShadowTextureMode>(p0));
emit ShadowTextureModeChanged();

}
 void osg::QReflect_Texture::setSourceFormat( GLenum  p0){
//params checking
 _model->setSourceFormat(p0);
emit SourceFormatChanged();

}
 void osg::QReflect_Texture::setSourceType( GLenum  p0){
//params checking
 _model->setSourceType(p0);
emit SourceTypeChanged();

}
 void osg::QReflect_Texture::setSwizzle(osg::QReflect_Vec4i  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Texture::setSwizzle : parameter n.0 is NULL\n"<<endl;return;}
 _model->setSwizzle(*p0->_model);

}
 void osg::QReflect_Texture::setUnRefImageDataAfterApply( bool  p0){
//params checking
 _model->setUnRefImageDataAfterApply(p0);
emit UnRefImageDataAfterApplyChanged();

}
 void osg::QReflect_Texture::setUseHardwareMipMapGeneration( bool  p0){
//params checking
 _model->setUseHardwareMipMapGeneration(p0);
emit UseHardwareMipMapGenerationChanged();

}
 void osg::QReflect_Texture::setWrap(osg::QReflect_Texture::WrapParameter  p0 ,osg::QReflect_Texture::WrapMode  p1){
//params checking
 _model->setWrap(static_cast<osg::Texture::WrapParameter>(p0) ,static_cast<osg::Texture::WrapMode>(p1));

}
const  char*  osg::QReflect_Texture:: className()const{
//params checking
return _model->className();

}
const  char*  osg::QReflect_Texture:: libraryName()const{
//params checking
return _model->libraryName();

}
osg::QReflect_GraphicsContext*osg::QReflect_Texture::getReadPBuffer()const{
//params checking
PMOCSAFEADDOBJECT(*_model->getReadPBuffer(),inst);
return inst.isValid()?((osg::QReflect_GraphicsContext * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_GraphicsContext*osg::QReflect_Texture::getReadPBuffer(){
//params checking
PMOCSAFEADDOBJECT(*_model->getReadPBuffer(),inst);
return inst.isValid()?((osg::QReflect_GraphicsContext * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Texture*osg::QReflect_Texture::asTexture()const{
//params checking
PMOCSAFEADDOBJECT(*_model->asTexture(),inst);
return inst.isValid()?((osg::QReflect_Texture * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Texture*osg::QReflect_Texture::asTexture(){
//params checking
PMOCSAFEADDOBJECT(*_model->asTexture(),inst);
return inst.isValid()?((osg::QReflect_Texture * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Texture::FilterMode  osg::QReflect_Texture::getFilter(osg::QReflect_Texture::FilterParameter  p0)const{
//params checking
osg::QReflect_Texture::FilterMode ret=static_cast<osg::QReflect_Texture::FilterMode>( _model->getFilter(static_cast<osg::Texture::FilterParameter>(p0)));return  ret;

}
osg::QReflect_Texture::InternalFormatMode  osg::QReflect_Texture::getInternalFormatMode()const{
//params checking
osg::QReflect_Texture::InternalFormatMode ret=static_cast<osg::QReflect_Texture::InternalFormatMode>( _model->getInternalFormatMode());return  ret;

}
osg::QReflect_Texture::InternalFormatType  osg::QReflect_Texture::getInternalFormatType()const{
//params checking
osg::QReflect_Texture::InternalFormatType ret=static_cast<osg::QReflect_Texture::InternalFormatType>( _model->getInternalFormatType());return  ret;

}
osg::QReflect_Texture::ShadowCompareFunc  osg::QReflect_Texture::getShadowCompareFunc()const{
//params checking
osg::QReflect_Texture::ShadowCompareFunc ret=static_cast<osg::QReflect_Texture::ShadowCompareFunc>( _model->getShadowCompareFunc());return  ret;

}
osg::QReflect_Texture::ShadowTextureMode  osg::QReflect_Texture::getShadowTextureMode()const{
//params checking
osg::QReflect_Texture::ShadowTextureMode ret=static_cast<osg::QReflect_Texture::ShadowTextureMode>( _model->getShadowTextureMode());return  ret;

}
osg::QReflect_Texture::WrapMode  osg::QReflect_Texture::getWrap(osg::QReflect_Texture::WrapParameter  p0)const{
//params checking
osg::QReflect_Texture::WrapMode ret=static_cast<osg::QReflect_Texture::WrapMode>( _model->getWrap(static_cast<osg::Texture::WrapParameter>(p0)));return  ret;

}

///DefaultConstructor////////////////
osg::QReflect_Texture::QReflect_Texture(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::Texture*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_Texture::~QReflect_Texture( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_Texture::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_Texture::createInstance( ){
std::cerr<<"osg::Texture is not instanciable"<<std::endl;return Instance();


}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_Texture::MetaQReflect_Texture():MetaQQuickClass( "osg::Texture"){
_typeid=&typeid(osg::Texture );
           qRegisterMetaType<osg::QMLTexture>();
           qRegisterMetaType<osg::QMLTexture*>("pmoc.osg.QMLTexture");
qmlRegisterType<osg::QReflect_Texture>("pmoc.osg",1,0,"QReflect_Texture");
           qmlRegisterType<osg::QMLTexture>("pmoc.osg",1,0,"QMLTexture");
};
const std::string osg::MetaQReflect_Texture::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_Texture::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_Texture::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_Texture::createQQModel(const Instance*i){ //return new MetaQReflect_Texture_QModel(i);}
QMLTexture *ret =new QMLTexture(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::StateAttribute *mother =dynamic_cast<osg::StateAttribute*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::StateAttribute");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::StateAttribute model for osg::Textureis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::StateAttribute");
if(!cl){std::cerr<<"osg::StateAttribute QQModel for osg::Textureis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Texture_pmoc.cpp"
#endif





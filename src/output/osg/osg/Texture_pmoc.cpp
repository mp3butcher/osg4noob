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
#include <customCode/osg/Vec4d_pmoc.hpp>
#include <customCode/osg/Vec4i_pmoc.hpp>
#include <osg/GraphicsContext>
#include <osg/GraphicsContext_pmoc.hpp>
using namespace pmoc;
 GLenum  osg::QReflect_Texture::getSourceFormat()const{
return _model->getSourceFormat();

}
 GLenum  osg::QReflect_Texture::getSourceType()const{
return _model->getSourceType();

}
 GLint  osg::QReflect_Texture::getBorderWidth()const{
return _model->getBorderWidth();

}
 GLint  osg::QReflect_Texture::getInternalFormat()const{
return _model->getInternalFormat();

}
 bool  osg::QReflect_Texture::areAllTextureObjectsLoaded()const{
return _model->areAllTextureObjectsLoaded();

}
 bool  osg::QReflect_Texture::isCompressedInternalFormat( GLint p0){
return _model->isCompressedInternalFormat(p0);

}
 bool  osg::QReflect_Texture::isCompressedInternalFormat()const{
return _model->isCompressedInternalFormat();

}
 bool  osg::QReflect_Texture::isSameKindAs(osg::QReflect_Object *p0)const{
return _model->isSameKindAs(p0->_model);

}
 bool  osg::QReflect_Texture::isTextureAttribute()const{
return _model->isTextureAttribute();

}
 int  osg::QReflect_Texture::getTextureDepth()const{
return _model->getTextureDepth();

}
 int  osg::QReflect_Texture::getTextureHeight()const{
return _model->getTextureHeight();

}
 int  osg::QReflect_Texture::getTextureWidth()const{
return _model->getTextureWidth();

}
 unsigned int&  osg::QReflect_Texture::getTextureParameterDirty( unsigned int p0)const{
return _model->getTextureParameterDirty(p0);

}
 void osg::QReflect_Texture::allocateMipmapLevels(){
 _model->allocateMipmapLevels();

}
 void osg::QReflect_Texture::applyTexImage2D_load(osg::QReflect_State *p0 , GLenum p1 ,osg::QReflect_Image *p2 , GLsizei p3 , GLsizei p4 , GLsizei p5)const{
 _model->applyTexImage2D_load(*p0->_model ,p1 ,p2->_model ,p3 ,p4 ,p5);

}
 void osg::QReflect_Texture::applyTexImage2D_subload(osg::QReflect_State *p0 , GLenum p1 ,osg::QReflect_Image *p2 , GLsizei p3 , GLsizei p4 , GLint p5 , GLsizei p6)const{
 _model->applyTexImage2D_subload(*p0->_model ,p1 ,p2->_model ,p3 ,p4 ,p5 ,p6);

}
 void osg::QReflect_Texture::bindToImageUnit( unsigned int p0 , GLenum p1 , GLenum p2 , int p3 , bool p4 , int p5){
 _model->bindToImageUnit(p0 ,p1 ,p2 ,p3 ,p4 ,p5);

}
 void osg::QReflect_Texture::compileGLObjects(osg::QReflect_State *p0)const{
 _model->compileGLObjects(*p0->_model);

}
 void osg::QReflect_Texture::dirtyTextureObject(){
 _model->dirtyTextureObject();

}
 void osg::QReflect_Texture::dirtyTextureParameters(){
 _model->dirtyTextureParameters();

}
 void osg::QReflect_Texture::getCompressedSize( GLenum p0 , GLint p1 , GLint p2 , GLint p3 , GLint &p4 , GLint &p5){
 _model->getCompressedSize(p0 ,p1 ,p2 ,p3 ,p4 ,p5);

}
 void osg::QReflect_Texture::releaseGLObjects(osg::QReflect_State *p0)const{
 _model->releaseGLObjects(p0->_model);

}
 void osg::QReflect_Texture::resizeGLObjectBuffers( unsigned int p0){
 _model->resizeGLObjectBuffers(p0);

}
 void osg::QReflect_Texture::setBorderColor(osg::QReflect_Vec4d *p0){
 _model->setBorderColor(*p0->_model);

}
 void osg::QReflect_Texture::setBorderWidth( GLint p0){
 _model->setBorderWidth(p0);

}
 void osg::QReflect_Texture::setFilter(osg::QReflect_Texture::FilterParameter p0 ,osg::QReflect_Texture::FilterMode p1){
 _model->setFilter(static_cast<osg::Texture::FilterParameter>(p0) ,static_cast<osg::Texture::FilterMode>(p1));

}
 void osg::QReflect_Texture::setInternalFormat( GLint p0){
 _model->setInternalFormat(p0);

}
 void osg::QReflect_Texture::setInternalFormatMode(osg::QReflect_Texture::InternalFormatMode p0){
 _model->setInternalFormatMode(static_cast<osg::Texture::InternalFormatMode>(p0));

}
 void osg::QReflect_Texture::setShadowCompareFunc(osg::QReflect_Texture::ShadowCompareFunc p0){
 _model->setShadowCompareFunc(static_cast<osg::Texture::ShadowCompareFunc>(p0));

}
 void osg::QReflect_Texture::setShadowTextureMode(osg::QReflect_Texture::ShadowTextureMode p0){
 _model->setShadowTextureMode(static_cast<osg::Texture::ShadowTextureMode>(p0));

}
 void osg::QReflect_Texture::setSourceFormat( GLenum p0){
 _model->setSourceFormat(p0);

}
 void osg::QReflect_Texture::setSourceType( GLenum p0){
 _model->setSourceType(p0);

}
 void osg::QReflect_Texture::setSwizzle(osg::QReflect_Vec4i *p0){
 _model->setSwizzle(*p0->_model);

}
 void osg::QReflect_Texture::setWrap(osg::QReflect_Texture::WrapParameter p0 ,osg::QReflect_Texture::WrapMode p1){
 _model->setWrap(static_cast<osg::Texture::WrapParameter>(p0) ,static_cast<osg::Texture::WrapMode>(p1));

}
const  char*  osg::QReflect_Texture::className()const{
return _model->className();

}
const  char*  osg::QReflect_Texture::libraryName()const{
return _model->libraryName();

}
const bool osg::QReflect_Texture::getClientStorageHint()const{return _model->getClientStorageHint();}
const bool osg::QReflect_Texture::getResizeNonPowerOfTwoHint()const{return _model->getResizeNonPowerOfTwoHint();}
const bool osg::QReflect_Texture::getShadowComparison()const{return _model->getShadowComparison();}
const bool osg::QReflect_Texture::getUnRefImageDataAfterApply()const{return _model->getUnRefImageDataAfterApply();}
const bool osg::QReflect_Texture::getUseHardwareMipMapGeneration()const{return _model->getUseHardwareMipMapGeneration();}
const float osg::QReflect_Texture::getMaxAnisotropy()const{return _model->getMaxAnisotropy();}
const float osg::QReflect_Texture::getShadowAmbient()const{return _model->getShadowAmbient();}
osg::QReflect_GraphicsContext * osg::QReflect_Texture::getReadPBuffer()const{
PMOCSAFEADDOBJECT(*_model->getReadPBuffer(),inst);
return inst.isValid()?((osg::QReflect_GraphicsContext * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Texture*osg::QReflect_Texture::asTexture()const{
PMOCSAFEADDOBJECT(*_model->asTexture(),inst);
return inst.isValid()?((osg::QReflect_Texture * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Texture*osg::QReflect_Texture::asTexture(){
PMOCSAFEADDOBJECT(*_model->asTexture(),inst);
return inst.isValid()?((osg::QReflect_Texture * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Texture::FilterMode  osg::QReflect_Texture::getFilter(osg::QReflect_Texture::FilterParameter p0)const{
osg::QReflect_Texture::FilterMode ret=static_cast<osg::QReflect_Texture::FilterMode>( _model->getFilter(static_cast<osg::Texture::FilterParameter>(p0)));return  ret;

}
osg::QReflect_Texture::InternalFormatMode  osg::QReflect_Texture::getInternalFormatMode()const{
osg::QReflect_Texture::InternalFormatMode ret=static_cast<osg::QReflect_Texture::InternalFormatMode>( _model->getInternalFormatMode());return  ret;

}
osg::QReflect_Texture::InternalFormatType  osg::QReflect_Texture::getInternalFormatType()const{
osg::QReflect_Texture::InternalFormatType ret=static_cast<osg::QReflect_Texture::InternalFormatType>( _model->getInternalFormatType());return  ret;

}
osg::QReflect_Texture::ShadowCompareFunc  osg::QReflect_Texture::getShadowCompareFunc()const{
osg::QReflect_Texture::ShadowCompareFunc ret=static_cast<osg::QReflect_Texture::ShadowCompareFunc>( _model->getShadowCompareFunc());return  ret;

}
osg::QReflect_Texture::ShadowTextureMode  osg::QReflect_Texture::getShadowTextureMode()const{
osg::QReflect_Texture::ShadowTextureMode ret=static_cast<osg::QReflect_Texture::ShadowTextureMode>( _model->getShadowTextureMode());return  ret;

}
osg::QReflect_Texture::WrapMode  osg::QReflect_Texture::getWrap(osg::QReflect_Texture::WrapParameter p0)const{
osg::QReflect_Texture::WrapMode ret=static_cast<osg::QReflect_Texture::WrapMode>( _model->getWrap(static_cast<osg::Texture::WrapParameter>(p0)));return  ret;

}
void  osg::QReflect_Texture::setClientStorageHint(const bool &par){_model->setClientStorageHint(par);emit ClientStorageHintChanged(par);}
void  osg::QReflect_Texture::setMaxAnisotropy(const float &par){_model->setMaxAnisotropy(par);emit MaxAnisotropyChanged(par);}
void  osg::QReflect_Texture::setResizeNonPowerOfTwoHint(const bool &par){_model->setResizeNonPowerOfTwoHint(par);emit ResizeNonPowerOfTwoHintChanged(par);}
void  osg::QReflect_Texture::setShadowAmbient(const float &par){_model->setShadowAmbient(par);emit ShadowAmbientChanged(par);}
void  osg::QReflect_Texture::setShadowComparison(const bool &par){_model->setShadowComparison(par);emit ShadowComparisonChanged(par);}
void  osg::QReflect_Texture::setUnRefImageDataAfterApply(const bool &par){_model->setUnRefImageDataAfterApply(par);emit UnRefImageDataAfterApplyChanged(par);}
void  osg::QReflect_Texture::setUseHardwareMipMapGeneration(const bool &par){_model->setUseHardwareMipMapGeneration(par);emit UseHardwareMipMapGenerationChanged(par);}
void osg::QReflect_Texture::pmoc_reverse_setReadPBuffer( osg::QReflect_GraphicsContext *par){_model->setReadPBuffer(NULL);
emit ReadPBufferChanged(NULL);
}
void osg::QReflect_Texture::setReadPBuffer( osg::QReflect_GraphicsContext *par){_model->setReadPBuffer(par->_model);
emit ReadPBufferChanged(par);
}

///DefaultConstructor////////////////
osg::QReflect_Texture::QReflect_Texture(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
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
_typeid=&typeid(osg::Texture );           qRegisterMetaType<QMLTexture>();
qmlRegisterType<QReflect_Texture>("pmoc.osg",1,0,"QReflect_Texture");
           qmlRegisterType<QMLTexture>("pmoc.osg",1,0,"QMLTexture");
       PMOCACTION("getReadPBuffer","setReadPBuffer","unsetReadPBuffer");
};
const std::string osg::MetaQReflect_Texture::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_Texture::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_Texture::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_Texture::createQQModel(Instance*i){ //return new MetaQReflect_Texture_QModel(i);}
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
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/Texture_pmoc.hpp>
#include <customCode/osg/Texture_pmoc.hpp>
#include <customCode/osg/FrameStamp_pmoc.hpp>
using namespace pmoc;
 bool  osg::QReflect_TextureObjectManager::checkConsistency()const{
return _model->checkConsistency();

}
 bool  osg::QReflect_TextureObjectManager::hasSpace( unsigned int p0)const{
return _model->hasSpace(p0);

}
 bool  osg::QReflect_TextureObjectManager::makeSpace( unsigned int p0){
return _model->makeSpace(p0);

}
 double&  osg::QReflect_TextureObjectManager::getDeleteTime(){
return _model->getDeleteTime();

}
 double&  osg::QReflect_TextureObjectManager::getGenerateTime(){
return _model->getGenerateTime();

}
 unsigned int&  osg::QReflect_TextureObjectManager::getFrameNumber(){
return _model->getFrameNumber();

}
 unsigned int&  osg::QReflect_TextureObjectManager::getNumberDeleted(){
return _model->getNumberDeleted();

}
 unsigned int&  osg::QReflect_TextureObjectManager::getNumberFrames(){
return _model->getNumberFrames();

}
 unsigned int&  osg::QReflect_TextureObjectManager::getNumberGenerated(){
return _model->getNumberGenerated();

}
 void osg::QReflect_TextureObjectManager::deleteAllGLObjects(){
 _model->deleteAllGLObjects();

}
 void osg::QReflect_TextureObjectManager::discardAllDeletedGLObjects(){
 _model->discardAllDeletedGLObjects();

}
 void osg::QReflect_TextureObjectManager::discardAllGLObjects(){
 _model->discardAllGLObjects();

}
 void osg::QReflect_TextureObjectManager::flushAllDeletedGLObjects(){
 _model->flushAllDeletedGLObjects();

}
 void osg::QReflect_TextureObjectManager::flushDeletedGLObjects( double p0 , double &p1){
 _model->flushDeletedGLObjects(p0 ,p1);

}
 void osg::QReflect_TextureObjectManager::handlePendingOrphandedTextureObjects(){
 _model->handlePendingOrphandedTextureObjects();

}
 void osg::QReflect_TextureObjectManager::newFrame(osg::QReflect_FrameStamp *p0){
 _model->newFrame(p0->_model);

}
 void osg::QReflect_TextureObjectManager::resetStats(){
 _model->resetStats();

}
const unsigned int osg::QReflect_TextureObjectManager::getCurrTexturePoolSize()const{return _model->getCurrTexturePoolSize();}
const unsigned int osg::QReflect_TextureObjectManager::getMaxTexturePoolSize()const{return _model->getMaxTexturePoolSize();}
const unsigned int osg::QReflect_TextureObjectManager::getNumberActiveTextureObjects()const{return _model->getNumberActiveTextureObjects();}
const unsigned int osg::QReflect_TextureObjectManager::getNumberOrphanedTextureObjects()const{return _model->getNumberOrphanedTextureObjects();}
void  osg::QReflect_TextureObjectManager::setCurrTexturePoolSize(const unsigned int &par){_model->setCurrTexturePoolSize(par);emit CurrTexturePoolSizeChanged(par);}
void  osg::QReflect_TextureObjectManager::setMaxTexturePoolSize(const unsigned int &par){_model->setMaxTexturePoolSize(par);emit MaxTexturePoolSizeChanged(par);}
void  osg::QReflect_TextureObjectManager::setNumberActiveTextureObjects(const unsigned int &par){_model->setNumberActiveTextureObjects(par);emit NumberActiveTextureObjectsChanged(par);}
void  osg::QReflect_TextureObjectManager::setNumberOrphanedTextureObjects(const unsigned int &par){_model->setNumberOrphanedTextureObjects(par);emit NumberOrphanedTextureObjectsChanged(par);}

///DefaultConstructor////////////////
osg::QReflect_TextureObjectManager::QReflect_TextureObjectManager(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::TextureObjectManager*>(i->ptr);
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_TextureObjectManager::~QReflect_TextureObjectManager( ){
 }
///update this according _model new state
void osg::QReflect_TextureObjectManager::updateModel(){
}
Instance osg::MetaQReflect_TextureObjectManager::createInstance( ){
std::cerr<<"osg::TextureObjectManager is not instanciable"<<std::endl;return Instance();


}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_TextureObjectManager::MetaQReflect_TextureObjectManager():MetaQQuickClass( "osg::TextureObjectManager"){
_typeid=&typeid(osg::TextureObjectManager );           qRegisterMetaType<QMLTextureObjectManager>();
qmlRegisterType<QReflect_TextureObjectManager>("pmoc.osg",1,0,"QReflect_TextureObjectManager");
           qmlRegisterType<QMLTextureObjectManager>("pmoc.osg",1,0,"QMLTextureObjectManager");
};
const std::string osg::MetaQReflect_TextureObjectManager::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_TextureObjectManager::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_TextureObjectManager::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_TextureObjectManager::createQQModel(Instance*i){ //return new MetaQReflect_TextureObjectManager_QModel(i);}
QMLTextureObjectManager *ret =new QMLTextureObjectManager(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Texture_pmoc.cpp"
#endif
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/Texture_pmoc.hpp>
#include <customCode/osg/Texture_pmoc.hpp>
#include <customCode/osg/Referenced_pmoc.hpp>
using namespace pmoc;
 bool  osg::QReflect_TextureObjectSet::checkConsistency()const{
return _model->checkConsistency();

}
 bool  osg::QReflect_TextureObjectSet::makeSpace( unsigned int &p0){
return _model->makeSpace(p0);

}
 unsigned int  osg::QReflect_TextureObjectSet::computeNumTextureObjectsInList()const{
return _model->computeNumTextureObjectsInList();

}
 unsigned int  osg::QReflect_TextureObjectSet::getNumOfTextureObjects()const{
return _model->getNumOfTextureObjects();

}
 unsigned int  osg::QReflect_TextureObjectSet::getNumOrphans()const{
return _model->getNumOrphans();

}
 unsigned int  osg::QReflect_TextureObjectSet::getNumPendingOrphans()const{
return _model->getNumPendingOrphans();

}
 unsigned int  osg::QReflect_TextureObjectSet::size()const{
return _model->size();

}
 void osg::QReflect_TextureObjectSet::deleteAllTextureObjects(){
 _model->deleteAllTextureObjects();

}
 void osg::QReflect_TextureObjectSet::discardAllDeletedTextureObjects(){
 _model->discardAllDeletedTextureObjects();

}
 void osg::QReflect_TextureObjectSet::discardAllTextureObjects(){
 _model->discardAllTextureObjects();

}
 void osg::QReflect_TextureObjectSet::flushAllDeletedTextureObjects(){
 _model->flushAllDeletedTextureObjects();

}
 void osg::QReflect_TextureObjectSet::flushDeletedTextureObjects( double p0 , double &p1){
 _model->flushDeletedTextureObjects(p0 ,p1);

}
 void osg::QReflect_TextureObjectSet::handlePendingOrphandedTextureObjects(){
 _model->handlePendingOrphandedTextureObjects();

}
osg::QReflect_TextureObjectManager*osg::QReflect_TextureObjectSet::getParent(){
PMOCSAFEADDOBJECT(*_model->getParent(),inst);
return inst.isValid()?((osg::QReflect_TextureObjectManager * )inst.model->createQQModel(&inst)):NULL;
}

///DefaultConstructor////////////////
osg::QReflect_TextureObjectSet::QReflect_TextureObjectSet(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::TextureObjectSet*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_TextureObjectSet::~QReflect_TextureObjectSet( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_TextureObjectSet::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_TextureObjectSet::createInstance( ){
std::cerr<<"osg::TextureObjectSet is not instanciable"<<std::endl;return Instance();


}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_TextureObjectSet::MetaQReflect_TextureObjectSet():MetaQQuickClass( "osg::TextureObjectSet"){
_typeid=&typeid(osg::TextureObjectSet );           qRegisterMetaType<QMLTextureObjectSet>();
qmlRegisterType<QReflect_TextureObjectSet>("pmoc.osg",1,0,"QReflect_TextureObjectSet");
           qmlRegisterType<QMLTextureObjectSet>("pmoc.osg",1,0,"QMLTextureObjectSet");
};
const std::string osg::MetaQReflect_TextureObjectSet::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_TextureObjectSet::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_TextureObjectSet::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_TextureObjectSet::createQQModel(Instance*i){ //return new MetaQReflect_TextureObjectSet_QModel(i);}
QMLTextureObjectSet *ret =new QMLTextureObjectSet(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::Referenced *mother =dynamic_cast<osg::Referenced*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::Referenced");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::Referenced model for osg::TextureObjectSetis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::Referenced");
if(!cl){std::cerr<<"osg::Referenced QQModel for osg::TextureObjectSetis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Texture_pmoc.cpp"
#endif



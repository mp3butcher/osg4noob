#include <osg/State>
//includes

#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/State_pmoc.hpp>
#include <customCode/osg/State_pmoc.hpp>
#include <customCode/osg/Referenced_pmoc.hpp>
#include <customCode/osg/Array_pmoc.hpp>
#include <customCode/osg/BufferObject_pmoc.hpp>
#include <customCode/osg/DisplaySettings_pmoc.hpp>
#include <customCode/osg/FrameStamp_pmoc.hpp>
#include <customCode/osg/GraphicsContext_pmoc.hpp>
#include <customCode/osg/GraphicsCostEstimator_pmoc.hpp>
#include <customCode/osg/Matrixd_pmoc.hpp>
#include <customCode/osg/ShaderComposer_pmoc.hpp>
#include <customCode/osg/StateAttribute_pmoc.hpp>
#include <customCode/osg/StateSet_pmoc.hpp>
#include <customCode/osg/State_pmoc.hpp>
#include <customCode/osg/Uniform_pmoc.hpp>
#include <customCode/osg/Viewport_pmoc.hpp>
using namespace pmoc;
 GLint  osg::QReflect_State:: getAttribLocation(const  QString  &p0)const{
//params checking
return _model->getAttribLocation(std::string(p0.toStdString()));

}
 GLint  osg::QReflect_State:: getMaxTextureCoords()const{
//params checking
return _model->getMaxTextureCoords();

}
 GLint  osg::QReflect_State:: getMaxTextureUnits()const{
//params checking
return _model->getMaxTextureUnits();

}
 GLint  osg::QReflect_State:: getUniformLocation( unsigned int  p0)const{
//params checking
return _model->getUniformLocation(p0);

}
 GLint  osg::QReflect_State:: getUniformLocation(const  QString  &p0)const{
//params checking
return _model->getUniformLocation(std::string(p0.toStdString()));

}
 bool  osg::QReflect_State:: applyAttribute(osg::QReflect_StateAttribute  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_State::applyAttribute : parameter n.0 is NULL\n"<<endl;return -1;}
return _model->applyAttribute(p0->_model);

}
 bool  osg::QReflect_State:: applyMode( GLenum  p0 , bool  p1){
//params checking
return _model->applyMode(p0 ,p1);

}
 bool  osg::QReflect_State:: applyTextureAttribute( unsigned int  p0 ,osg::QReflect_StateAttribute  *p1){
//params checking
if(! p1) {std::cerr<<"PMOC: osg::QReflect_State::applyTextureAttribute : parameter n.1 is NULL\n"<<endl;return -1;}
return _model->applyTextureAttribute(p0 ,p1->_model);

}
 bool  osg::QReflect_State:: applyTextureMode( unsigned int  p0 , GLenum  p1 , bool  p2){
//params checking
return _model->applyTextureMode(p0 ,p1 ,p2);

}
 bool  osg::QReflect_State:: checkGLErrors( GLenum  p0)const{
//params checking
return _model->checkGLErrors(p0);

}
 bool  osg::QReflect_State:: checkGLErrors(const  char  *p0)const{
//params checking
return _model->checkGLErrors(p0);

}
 bool  osg::QReflect_State:: checkGLErrors(osg::QReflect_StateAttribute  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_State::checkGLErrors : parameter n.0 is NULL\n"<<endl;return -1;}
return _model->checkGLErrors(p0->_model);

}
 bool  osg::QReflect_State:: getAbortRendering()const{
//params checking
return _model->getAbortRendering();

}
 bool  osg::QReflect_State:: getGlobalDefaultModeValue( GLenum  p0){
//params checking
return _model->getGlobalDefaultModeValue(p0);

}
 bool  osg::QReflect_State:: getGlobalDefaultTextureModeValue( unsigned int  p0 , GLenum  p1){
//params checking
return _model->getGlobalDefaultTextureModeValue(p0 ,p1);

}
 bool  osg::QReflect_State:: getLastAppliedMode( GLenum  p0)const{
//params checking
return _model->getLastAppliedMode(p0);

}
 bool  osg::QReflect_State:: getLastAppliedTextureMode( unsigned int  p0 , GLenum  p1)const{
//params checking
return _model->getLastAppliedTextureMode(p0 ,p1);

}
 bool  osg::QReflect_State:: getModeValidity( GLenum  p0){
//params checking
return _model->getModeValidity(p0);

}
 bool  osg::QReflect_State:: getShaderCompositionEnabled()const{
//params checking
return _model->getShaderCompositionEnabled();

}
 bool  osg::QReflect_State:: getUseModelViewAndProjectionUniforms()const{
//params checking
return _model->getUseModelViewAndProjectionUniforms();

}
 bool  osg::QReflect_State:: getUseVertexAttributeAliasing()const{
//params checking
return _model->getUseVertexAttributeAliasing();

}
 bool  osg::QReflect_State:: isFogCoordSupported()const{
//params checking
return _model->isFogCoordSupported();

}
 bool  osg::QReflect_State:: isSecondaryColorSupported()const{
//params checking
return _model->isSecondaryColorSupported();

}
 bool  osg::QReflect_State:: isVertexBufferObjectSupported()const{
//params checking
return _model->isVertexBufferObjectSupported();

}
 bool  osg::QReflect_State:: setActiveTextureUnit( unsigned int  p0){
//params checking
emit ActiveTextureUnitChanged();
return _model->setActiveTextureUnit(p0);

}
 bool  osg::QReflect_State:: setClientActiveTextureUnit( unsigned int  p0){
//params checking
emit ClientActiveTextureUnitChanged();
return _model->setClientActiveTextureUnit(p0);

}
 bool  osg::QReflect_State:: supportsShaderRequirement(const  QString  &p0){
//params checking
return _model->supportsShaderRequirement(std::string(p0.toStdString()));

}
 double  osg::QReflect_State:: getGpuTime()const{
//params checking
return _model->getGpuTime();

}
 int  osg::QReflect_State:: getTimestampBits()const{
//params checking
return _model->getTimestampBits();

}
 unsigned int  osg::QReflect_State:: getActiveTextureUnit()const{
//params checking
return _model->getActiveTextureUnit();

}
 unsigned int  osg::QReflect_State:: getClientActiveTextureUnit()const{
//params checking
return _model->getClientActiveTextureUnit();

}
 unsigned int  osg::QReflect_State:: getContextID()const{
//params checking
return _model->getContextID();

}
 unsigned int  osg::QReflect_State:: getDynamicObjectCount()const{
//params checking
return _model->getDynamicObjectCount();

}
 unsigned int  osg::QReflect_State:: getMaxBufferObjectPoolSize()const{
//params checking
return _model->getMaxBufferObjectPoolSize();

}
 unsigned int  osg::QReflect_State:: getMaxTexturePoolSize()const{
//params checking
return _model->getMaxTexturePoolSize();

}
 unsigned int  osg::QReflect_State:: getStateSetStackSize(){
//params checking
return _model->getStateSetStackSize();

}
 void osg::QReflect_State::Color( float  p0 , float  p1 , float  p2 , float  p3){
//params checking
 _model->Color(p0 ,p1 ,p2 ,p3);

}
 void osg::QReflect_State::MultiTexCoord( unsigned int  p0 , float  p1 , float  p2 , float  p3 , float  p4){
//params checking
 _model->MultiTexCoord(p0 ,p1 ,p2 ,p3 ,p4);

}
 void osg::QReflect_State::Normal( float  p0 , float  p1 , float  p2){
//params checking
 _model->Normal(p0 ,p1 ,p2);

}
 void osg::QReflect_State::TexCoord( float  p0 , float  p1 , float  p2 , float  p3){
//params checking
 _model->TexCoord(p0 ,p1 ,p2 ,p3);

}
 void osg::QReflect_State::VerteAttrib( unsigned int  p0 , float  p1 , float  p2 , float  p3 , float  p4){
//params checking
 _model->VerteAttrib(p0 ,p1 ,p2 ,p3 ,p4);

}
 void osg::QReflect_State::Vertex( float  p0 , float  p1 , float  p2 , float  p3){
//params checking
 _model->Vertex(p0 ,p1 ,p2 ,p3);

}
 void osg::QReflect_State::apply(){
//params checking
 _model->apply();

}
 void osg::QReflect_State::apply(osg::QReflect_StateSet  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_State::apply : parameter n.0 is NULL\n"<<endl;return;}
 _model->apply(p0->_model);

}
 void osg::QReflect_State::applyDisablingOfVertexAttributes(){
//params checking
 _model->applyDisablingOfVertexAttributes();

}
 void osg::QReflect_State::applyModelViewAndProjectionUniformsIfRequired(){
//params checking
 _model->applyModelViewAndProjectionUniformsIfRequired();

}
 void osg::QReflect_State::applyModelViewMatrix(osg::QReflect_Matrixd  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_State::applyModelViewMatrix : parameter n.0 is NULL\n"<<endl;return;}
 _model->applyModelViewMatrix(*p0->_model);

}
 void osg::QReflect_State::applyModelViewMatrix(osg::QReflect_RefMatrixd  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_State::applyModelViewMatrix : parameter n.0 is NULL\n"<<endl;return;}
 _model->applyModelViewMatrix(p0->_model);

}
 void osg::QReflect_State::applyProjectionMatrix(osg::QReflect_RefMatrixd  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_State::applyProjectionMatrix : parameter n.0 is NULL\n"<<endl;return;}
 _model->applyProjectionMatrix(p0->_model);

}
 void osg::QReflect_State::applyShaderComposition(){
//params checking
 _model->applyShaderComposition();

}
 void osg::QReflect_State::applyShaderCompositionUniform(osg::QReflect_Uniform  *p0 , unsigned int  p1){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_State::applyShaderCompositionUniform : parameter n.0 is NULL\n"<<endl;return;}
 _model->applyShaderCompositionUniform(p0->_model ,p1);

}
 void osg::QReflect_State::bindElementBufferObject(osg::QReflect_GLBufferObject  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_State::bindElementBufferObject : parameter n.0 is NULL\n"<<endl;return;}
 _model->bindElementBufferObject(p0->_model);

}
 void osg::QReflect_State::bindPixelBufferObject(osg::QReflect_GLBufferObject  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_State::bindPixelBufferObject : parameter n.0 is NULL\n"<<endl;return;}
 _model->bindPixelBufferObject(p0->_model);

}
 void osg::QReflect_State::bindVertexBufferObject(osg::QReflect_GLBufferObject  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_State::bindVertexBufferObject : parameter n.0 is NULL\n"<<endl;return;}
 _model->bindVertexBufferObject(p0->_model);

}
 void osg::QReflect_State::captureCurrentState(osg::QReflect_StateSet  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_State::captureCurrentState : parameter n.0 is NULL\n"<<endl;return;}
 _model->captureCurrentState(*p0->_model);

}
 void osg::QReflect_State::decrementDynamicObjectCount(){
//params checking
 _model->decrementDynamicObjectCount();

}
 void osg::QReflect_State::dirtyAllAttributes(){
//params checking
 _model->dirtyAllAttributes();

}
 void osg::QReflect_State::dirtyAllModes(){
//params checking
 _model->dirtyAllModes();

}
 void osg::QReflect_State::dirtyAllVertexArrays(){
//params checking
 _model->dirtyAllVertexArrays();

}
 void osg::QReflect_State::dirtyColorPointer(){
//params checking
 _model->dirtyColorPointer();

}
 void osg::QReflect_State::dirtyFogCoordPointer(){
//params checking
 _model->dirtyFogCoordPointer();

}
 void osg::QReflect_State::dirtyNormalPointer(){
//params checking
 _model->dirtyNormalPointer();

}
 void osg::QReflect_State::dirtySecondaryColorPointer(){
//params checking
 _model->dirtySecondaryColorPointer();

}
 void osg::QReflect_State::dirtyTexCoordPointer( unsigned int  p0){
//params checking
 _model->dirtyTexCoordPointer(p0);

}
 void osg::QReflect_State::dirtyTexCoordPointersAboveAndIncluding( unsigned int  p0){
//params checking
 _model->dirtyTexCoordPointersAboveAndIncluding(p0);

}
 void osg::QReflect_State::dirtyVertexAttribPointer( unsigned int  p0){
//params checking
 _model->dirtyVertexAttribPointer(p0);

}
 void osg::QReflect_State::dirtyVertexAttribPointersAboveAndIncluding( unsigned int  p0){
//params checking
 _model->dirtyVertexAttribPointersAboveAndIncluding(p0);

}
 void osg::QReflect_State::dirtyVertexPointer(){
//params checking
 _model->dirtyVertexPointer();

}
 void osg::QReflect_State::disableAllVertexArrays(){
//params checking
 _model->disableAllVertexArrays();

}
 void osg::QReflect_State::disableColorPointer(){
//params checking
 _model->disableColorPointer();

}
 void osg::QReflect_State::disableFogCoordPointer(){
//params checking
 _model->disableFogCoordPointer();

}
 void osg::QReflect_State::disableNormalPointer(){
//params checking
 _model->disableNormalPointer();

}
 void osg::QReflect_State::disableSecondaryColorPointer(){
//params checking
 _model->disableSecondaryColorPointer();

}
 void osg::QReflect_State::disableTexCoordPointer( unsigned int  p0){
//params checking
 _model->disableTexCoordPointer(p0);

}
 void osg::QReflect_State::disableTexCoordPointersAboveAndIncluding( unsigned int  p0){
//params checking
 _model->disableTexCoordPointersAboveAndIncluding(p0);

}
 void osg::QReflect_State::disableVertexAttribPointer( unsigned int  p0){
//params checking
 _model->disableVertexAttribPointer(p0);

}
 void osg::QReflect_State::disableVertexAttribPointersAboveAndIncluding( unsigned int  p0){
//params checking
 _model->disableVertexAttribPointersAboveAndIncluding(p0);

}
 void osg::QReflect_State::disableVertexPointer(){
//params checking
 _model->disableVertexPointer();

}
 void osg::QReflect_State::drawQuads( GLint  p0 , GLsizei  p1 , GLsizei  p2){
//params checking
 _model->drawQuads(p0 ,p1 ,p2);

}
 void osg::QReflect_State::frameCompleted(){
//params checking
 _model->frameCompleted();

}
 void osg::QReflect_State::glDrawArraysInstanced( GLenum  p0 , GLint  p1 , GLsizei  p2 , GLsizei  p3){
//params checking
 _model->glDrawArraysInstanced(p0 ,p1 ,p2 ,p3);

}
 void osg::QReflect_State::glDrawElementsInstanced( GLenum  p0 , GLsizei  p1 , GLenum  p2 ,const  GLvoid  *p3 , GLsizei  p4){
//params checking
 _model->glDrawElementsInstanced(p0 ,p1 ,p2 ,p3 ,p4);

}
 void osg::QReflect_State::haveAppliedAttribute(osg::QReflect_StateAttribute  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_State::haveAppliedAttribute : parameter n.0 is NULL\n"<<endl;return;}
 _model->haveAppliedAttribute(p0->_model);

}
 void osg::QReflect_State::haveAppliedAttribute(osg::QReflect_StateAttribute::Type  p0 , unsigned int  p1){
//params checking
 _model->haveAppliedAttribute(static_cast<osg::StateAttribute::Type>(p0) ,p1);

}
 void osg::QReflect_State::haveAppliedMode( GLenum  p0 , unsigned int  p1){
//params checking
 _model->haveAppliedMode(p0 ,p1);

}
 void osg::QReflect_State::haveAppliedMode( GLenum  p0){
//params checking
 _model->haveAppliedMode(p0);

}
 void osg::QReflect_State::haveAppliedTextureAttribute( unsigned int  p0 ,osg::QReflect_StateAttribute  *p1){
//params checking
if(! p1) {std::cerr<<"PMOC: osg::QReflect_State::haveAppliedTextureAttribute : parameter n.1 is NULL\n"<<endl;return;}
 _model->haveAppliedTextureAttribute(p0 ,p1->_model);

}
 void osg::QReflect_State::haveAppliedTextureAttribute( unsigned int  p0 ,osg::QReflect_StateAttribute::Type  p1 , unsigned int  p2){
//params checking
 _model->haveAppliedTextureAttribute(p0 ,static_cast<osg::StateAttribute::Type>(p1) ,p2);

}
 void osg::QReflect_State::haveAppliedTextureMode( unsigned int  p0 , GLenum  p1 , unsigned int  p2){
//params checking
 _model->haveAppliedTextureMode(p0 ,p1 ,p2);

}
 void osg::QReflect_State::haveAppliedTextureMode( unsigned int  p0 , GLenum  p1){
//params checking
 _model->haveAppliedTextureMode(p0 ,p1);

}
 void osg::QReflect_State::initializeExtensionProcs(){
//params checking
 _model->initializeExtensionProcs();

}
 void osg::QReflect_State::insertStateSet( unsigned int  p0 ,osg::QReflect_StateSet  *p1){
//params checking
if(! p1) {std::cerr<<"PMOC: osg::QReflect_State::insertStateSet : parameter n.1 is NULL\n"<<endl;return;}
 _model->insertStateSet(p0 ,p1->_model);

}
 void osg::QReflect_State::lazyDisablingOfVertexAttributes(){
//params checking
 _model->lazyDisablingOfVertexAttributes();

}
 void osg::QReflect_State::popAllStateSets(){
//params checking
 _model->popAllStateSets();

}
 void osg::QReflect_State::popStateSet(){
//params checking
 _model->popStateSet();

}
 void osg::QReflect_State::popStateSetStackToSize( unsigned int  p0){
//params checking
 _model->popStateSetStackToSize(p0);

}
 void osg::QReflect_State::pushStateSet(osg::QReflect_StateSet  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_State::pushStateSet : parameter n.0 is NULL\n"<<endl;return;}
 _model->pushStateSet(p0->_model);

}
 void osg::QReflect_State::releaseGLObjects(){
//params checking
 _model->releaseGLObjects();

}
 void osg::QReflect_State::removeStateSet( unsigned int  p0){
//params checking
 _model->removeStateSet(p0);

}
 void osg::QReflect_State::reset(){
//params checking
 _model->reset();

}
 void osg::QReflect_State::resetVertexAttributeAlias( bool  p0 , unsigned int  p1){
//params checking
 _model->resetVertexAttributeAlias(p0 ,p1);

}
 void osg::QReflect_State::setAbortRenderingPtr( bool  *p0){
//params checking
 _model->setAbortRenderingPtr(p0);

}
 void osg::QReflect_State::setCheckForGLErrors(osg::QReflect_State::CheckForGLErrors  p0){
//params checking
 _model->setCheckForGLErrors(static_cast<osg::State::CheckForGLErrors>(p0));
emit CheckForGLErrorsChanged();

}
 void osg::QReflect_State::setColorAlias(osg::QReflect_VertexAttribAlias  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_State::setColorAlias : parameter n.0 is NULL\n"<<endl;return;}
 _model->setColorAlias(*p0->_model);

}
 void osg::QReflect_State::setColorPointer( GLint  p0 , GLenum  p1 , GLsizei  p2 ,const  GLvoid  *p3 , GLboolean  p4){
//params checking
 _model->setColorPointer(p0 ,p1 ,p2 ,p3 ,p4);

}
 void osg::QReflect_State::setColorPointer(osg::QReflect_Array  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_State::setColorPointer : parameter n.0 is NULL\n"<<endl;return;}
 _model->setColorPointer(p0->_model);

}
 void osg::QReflect_State::setContextID( unsigned int  p0){
//params checking
 _model->setContextID(p0);
emit ContextIDChanged();

}
 void osg::QReflect_State::setCurrentElementBufferObject(osg::QReflect_GLBufferObject  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_State::setCurrentElementBufferObject : parameter n.0 is NULL\n"<<endl;return;}
 _model->setCurrentElementBufferObject(p0->_model);

}
 void osg::QReflect_State::setCurrentPixelBufferObject(osg::QReflect_GLBufferObject  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_State::setCurrentPixelBufferObject : parameter n.0 is NULL\n"<<endl;return;}
 _model->setCurrentPixelBufferObject(p0->_model);

}
 void osg::QReflect_State::setCurrentVertexBufferObject(osg::QReflect_GLBufferObject  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_State::setCurrentVertexBufferObject : parameter n.0 is NULL\n"<<endl;return;}
 _model->setCurrentVertexBufferObject(p0->_model);

}
 void osg::QReflect_State::setDisplaySettings(osg::QReflect_DisplaySettings  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_State::setDisplaySettings : parameter n.0 is NULL\n"<<endl;return;}
 _model->setDisplaySettings(p0->_model);
emit DisplaySettingsChanged();

}
 void osg::QReflect_State::setDynamicObjectCount( unsigned int  p0 , bool  p1){
//params checking
 _model->setDynamicObjectCount(p0 ,p1);

}
 void osg::QReflect_State::setFogCoordAlias(osg::QReflect_VertexAttribAlias  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_State::setFogCoordAlias : parameter n.0 is NULL\n"<<endl;return;}
 _model->setFogCoordAlias(*p0->_model);

}
 void osg::QReflect_State::setFogCoordPointer( GLenum  p0 , GLsizei  p1 ,const  GLvoid  *p2 , GLboolean  p3){
//params checking
 _model->setFogCoordPointer(p0 ,p1 ,p2 ,p3);

}
 void osg::QReflect_State::setFogCoordPointer(osg::QReflect_Array  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_State::setFogCoordPointer : parameter n.0 is NULL\n"<<endl;return;}
 _model->setFogCoordPointer(p0->_model);

}
 void osg::QReflect_State::setFrameStamp(osg::QReflect_FrameStamp  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_State::setFrameStamp : parameter n.0 is NULL\n"<<endl;return;}
 _model->setFrameStamp(p0->_model);
emit FrameStampChanged();

}
 void osg::QReflect_State::setGlobalDefaultAttribute(osg::QReflect_StateAttribute  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_State::setGlobalDefaultAttribute : parameter n.0 is NULL\n"<<endl;return;}
 _model->setGlobalDefaultAttribute(p0->_model);

}
 void osg::QReflect_State::setGlobalDefaultModeValue( GLenum  p0 , bool  p1){
//params checking
 _model->setGlobalDefaultModeValue(p0 ,p1);

}
 void osg::QReflect_State::setGlobalDefaultTextureAttribute( unsigned int  p0 ,osg::QReflect_StateAttribute  *p1){
//params checking
if(! p1) {std::cerr<<"PMOC: osg::QReflect_State::setGlobalDefaultTextureAttribute : parameter n.1 is NULL\n"<<endl;return;}
 _model->setGlobalDefaultTextureAttribute(p0 ,p1->_model);

}
 void osg::QReflect_State::setGlobalDefaultTextureModeValue( unsigned int  p0 , GLenum  p1 , bool  p2){
//params checking
 _model->setGlobalDefaultTextureModeValue(p0 ,p1 ,p2);

}
 void osg::QReflect_State::setGraphicsContext(osg::QReflect_GraphicsContext  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_State::setGraphicsContext : parameter n.0 is NULL\n"<<endl;return;}
 _model->setGraphicsContext(p0->_model);
emit GraphicsContextChanged();

}
 void osg::QReflect_State::setGraphicsCostEstimator(osg::QReflect_GraphicsCostEstimator  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_State::setGraphicsCostEstimator : parameter n.0 is NULL\n"<<endl;return;}
 _model->setGraphicsCostEstimator(p0->_model);
emit GraphicsCostEstimatorChanged();

}
 void osg::QReflect_State::setInitialViewMatrix(osg::QReflect_RefMatrixd  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_State::setInitialViewMatrix : parameter n.0 is NULL\n"<<endl;return;}
 _model->setInitialViewMatrix(p0->_model);

}
 void osg::QReflect_State::setInterleavedArrays( GLenum  p0 , GLsizei  p1 ,const  GLvoid  *p2){
//params checking
 _model->setInterleavedArrays(p0 ,p1 ,p2);

}
 void osg::QReflect_State::setMaxBufferObjectPoolSize( unsigned int  p0){
//params checking
 _model->setMaxBufferObjectPoolSize(p0);
emit MaxBufferObjectPoolSizeChanged();

}
 void osg::QReflect_State::setMaxTexturePoolSize( unsigned int  p0){
//params checking
 _model->setMaxTexturePoolSize(p0);
emit MaxTexturePoolSizeChanged();

}
 void osg::QReflect_State::setModeValidity( GLenum  p0 , bool  p1){
//params checking
 _model->setModeValidity(p0 ,p1);

}
 void osg::QReflect_State::setNormalAlias(osg::QReflect_VertexAttribAlias  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_State::setNormalAlias : parameter n.0 is NULL\n"<<endl;return;}
 _model->setNormalAlias(*p0->_model);

}
 void osg::QReflect_State::setNormalPointer( GLenum  p0 , GLsizei  p1 ,const  GLvoid  *p2 , GLboolean  p3){
//params checking
 _model->setNormalPointer(p0 ,p1 ,p2 ,p3);

}
 void osg::QReflect_State::setNormalPointer(osg::QReflect_Array  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_State::setNormalPointer : parameter n.0 is NULL\n"<<endl;return;}
 _model->setNormalPointer(p0->_model);

}
 void osg::QReflect_State::setSecondaryColorAlias(osg::QReflect_VertexAttribAlias  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_State::setSecondaryColorAlias : parameter n.0 is NULL\n"<<endl;return;}
 _model->setSecondaryColorAlias(*p0->_model);

}
 void osg::QReflect_State::setSecondaryColorPointer( GLint  p0 , GLenum  p1 , GLsizei  p2 ,const  GLvoid  *p3 , GLboolean  p4){
//params checking
 _model->setSecondaryColorPointer(p0 ,p1 ,p2 ,p3 ,p4);

}
 void osg::QReflect_State::setSecondaryColorPointer(osg::QReflect_Array  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_State::setSecondaryColorPointer : parameter n.0 is NULL\n"<<endl;return;}
 _model->setSecondaryColorPointer(p0->_model);

}
 void osg::QReflect_State::setShaderComposer(osg::QReflect_ShaderComposer  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_State::setShaderComposer : parameter n.0 is NULL\n"<<endl;return;}
 _model->setShaderComposer(p0->_model);
emit ShaderComposerChanged();

}
 void osg::QReflect_State::setShaderCompositionEnabled( bool  p0){
//params checking
 _model->setShaderCompositionEnabled(p0);
emit ShaderCompositionEnabledChanged();

}
 void osg::QReflect_State::setTexCoordPointer( unsigned int  p0 , GLint  p1 , GLenum  p2 , GLsizei  p3 ,const  GLvoid  *p4 , GLboolean  p5){
//params checking
 _model->setTexCoordPointer(p0 ,p1 ,p2 ,p3 ,p4 ,p5);

}
 void osg::QReflect_State::setTexCoordPointer( unsigned int  p0 ,osg::QReflect_Array  *p1){
//params checking
if(! p1) {std::cerr<<"PMOC: osg::QReflect_State::setTexCoordPointer : parameter n.1 is NULL\n"<<endl;return;}
 _model->setTexCoordPointer(p0 ,p1->_model);

}
 void osg::QReflect_State::setTimestampBits( int  p0){
//params checking
 _model->setTimestampBits(p0);
emit TimestampBitsChanged();

}
 void osg::QReflect_State::setUseModelViewAndProjectionUniforms( bool  p0){
//params checking
 _model->setUseModelViewAndProjectionUniforms(p0);
emit UseModelViewAndProjectionUniformsChanged();

}
 void osg::QReflect_State::setUseVertexAttributeAliasing( bool  p0){
//params checking
 _model->setUseVertexAttributeAliasing(p0);
emit UseVertexAttributeAliasingChanged();

}
 void osg::QReflect_State::setVertexAlias(osg::QReflect_VertexAttribAlias  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_State::setVertexAlias : parameter n.0 is NULL\n"<<endl;return;}
 _model->setVertexAlias(*p0->_model);

}
 void osg::QReflect_State::setVertexAttribIPointer( unsigned int  p0 , GLint  p1 , GLenum  p2 , GLsizei  p3 ,const  GLvoid  *p4){
//params checking
 _model->setVertexAttribIPointer(p0 ,p1 ,p2 ,p3 ,p4);

}
 void osg::QReflect_State::setVertexAttribIPointer( unsigned int  p0 ,osg::QReflect_Array  *p1){
//params checking
if(! p1) {std::cerr<<"PMOC: osg::QReflect_State::setVertexAttribIPointer : parameter n.1 is NULL\n"<<endl;return;}
 _model->setVertexAttribIPointer(p0 ,p1->_model);

}
 void osg::QReflect_State::setVertexAttribLPointer( unsigned int  p0 , GLint  p1 , GLenum  p2 , GLsizei  p3 ,const  GLvoid  *p4){
//params checking
 _model->setVertexAttribLPointer(p0 ,p1 ,p2 ,p3 ,p4);

}
 void osg::QReflect_State::setVertexAttribLPointer( unsigned int  p0 ,osg::QReflect_Array  *p1){
//params checking
if(! p1) {std::cerr<<"PMOC: osg::QReflect_State::setVertexAttribLPointer : parameter n.1 is NULL\n"<<endl;return;}
 _model->setVertexAttribLPointer(p0 ,p1->_model);

}
 void osg::QReflect_State::setVertexAttribPointer( unsigned int  p0 , GLint  p1 , GLenum  p2 , GLboolean  p3 , GLsizei  p4 ,const  GLvoid  *p5){
//params checking
 _model->setVertexAttribPointer(p0 ,p1 ,p2 ,p3 ,p4 ,p5);

}
 void osg::QReflect_State::setVertexAttribPointer( unsigned int  p0 ,osg::QReflect_Array  *p1){
//params checking
if(! p1) {std::cerr<<"PMOC: osg::QReflect_State::setVertexAttribPointer : parameter n.1 is NULL\n"<<endl;return;}
 _model->setVertexAttribPointer(p0 ,p1->_model);

}
 void osg::QReflect_State::setVertexPointer( GLint  p0 , GLenum  p1 , GLsizei  p2 ,const  GLvoid  *p3 , GLboolean  p4){
//params checking
 _model->setVertexPointer(p0 ,p1 ,p2 ,p3 ,p4);

}
 void osg::QReflect_State::setVertexPointer(osg::QReflect_Array  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_State::setVertexPointer : parameter n.0 is NULL\n"<<endl;return;}
 _model->setVertexPointer(p0->_model);

}
 void osg::QReflect_State::unbindElementBufferObject(){
//params checking
 _model->unbindElementBufferObject();

}
 void osg::QReflect_State::unbindPixelBufferObject(){
//params checking
 _model->unbindPixelBufferObject();

}
 void osg::QReflect_State::unbindVertexBufferObject(){
//params checking
 _model->unbindVertexBufferObject();

}
 void osg::QReflect_State::updateModelViewAndProjectionMatrixUniforms(){
//params checking
 _model->updateModelViewAndProjectionMatrixUniforms();

}
osg::QReflect_DisplaySettings*osg::QReflect_State::getDisplaySettings()const{
//params checking
PMOCSAFEADDOBJECT(*_model->getDisplaySettings(),inst);
return inst.isValid()?((osg::QReflect_DisplaySettings * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_FrameStamp*osg::QReflect_State::getFrameStamp()const{
//params checking
PMOCSAFEADDOBJECT(*_model->getFrameStamp(),inst);
return inst.isValid()?((osg::QReflect_FrameStamp * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_FrameStamp*osg::QReflect_State::getFrameStamp(){
//params checking
PMOCSAFEADDOBJECT(*_model->getFrameStamp(),inst);
return inst.isValid()?((osg::QReflect_FrameStamp * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_GLBufferObject*osg::QReflect_State::getCurrentElementBufferObject(){
//params checking
PMOCSAFEADDOBJECT(*_model->getCurrentElementBufferObject(),inst);
return inst.isValid()?((osg::QReflect_GLBufferObject * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_GLBufferObject*osg::QReflect_State::getCurrentPixelBufferObject(){
//params checking
PMOCSAFEADDOBJECT(*_model->getCurrentPixelBufferObject(),inst);
return inst.isValid()?((osg::QReflect_GLBufferObject * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_GLBufferObject*osg::QReflect_State::getCurrentVertexBufferObject(){
//params checking
PMOCSAFEADDOBJECT(*_model->getCurrentVertexBufferObject(),inst);
return inst.isValid()?((osg::QReflect_GLBufferObject * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_GraphicsContext*osg::QReflect_State::getGraphicsContext()const{
//params checking
PMOCSAFEADDOBJECT(*_model->getGraphicsContext(),inst);
return inst.isValid()?((osg::QReflect_GraphicsContext * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_GraphicsContext*osg::QReflect_State::getGraphicsContext(){
//params checking
PMOCSAFEADDOBJECT(*_model->getGraphicsContext(),inst);
return inst.isValid()?((osg::QReflect_GraphicsContext * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_GraphicsCostEstimator*osg::QReflect_State::getGraphicsCostEstimator()const{
//params checking
PMOCSAFEADDOBJECT(*_model->getGraphicsCostEstimator(),inst);
return inst.isValid()?((osg::QReflect_GraphicsCostEstimator * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_GraphicsCostEstimator*osg::QReflect_State::getGraphicsCostEstimator(){
//params checking
PMOCSAFEADDOBJECT(*_model->getGraphicsCostEstimator(),inst);
return inst.isValid()?((osg::QReflect_GraphicsCostEstimator * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_ShaderComposer*osg::QReflect_State::getShaderComposer()const{
//params checking
PMOCSAFEADDOBJECT(*_model->getShaderComposer(),inst);
return inst.isValid()?((osg::QReflect_ShaderComposer * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_ShaderComposer*osg::QReflect_State::getShaderComposer(){
//params checking
PMOCSAFEADDOBJECT(*_model->getShaderComposer(),inst);
return inst.isValid()?((osg::QReflect_ShaderComposer * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_State::CheckForGLErrors  osg::QReflect_State::getCheckForGLErrors()const{
//params checking
osg::QReflect_State::CheckForGLErrors ret=static_cast<osg::QReflect_State::CheckForGLErrors>( _model->getCheckForGLErrors());return  ret;

}
osg::QReflect_StateAttribute*osg::QReflect_State::getGlobalDefaultAttribute(osg::QReflect_StateAttribute::Type  p0 , unsigned int  p1){
//params checking
PMOCSAFEADDOBJECT(*_model->getGlobalDefaultAttribute(static_cast<osg::StateAttribute::Type>(p0) ,p1),inst);
return inst.isValid()?((osg::QReflect_StateAttribute * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_StateAttribute*osg::QReflect_State::getGlobalDefaultTextureAttribute( unsigned int  p0 ,osg::QReflect_StateAttribute::Type  p1 , unsigned int  p2){
//params checking
PMOCSAFEADDOBJECT(*_model->getGlobalDefaultTextureAttribute(p0 ,static_cast<osg::StateAttribute::Type>(p1) ,p2),inst);
return inst.isValid()?((osg::QReflect_StateAttribute * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_StateAttribute*osg::QReflect_State::getLastAppliedAttribute(osg::QReflect_StateAttribute::Type  p0 , unsigned int  p1)const{
//params checking
PMOCSAFEADDOBJECT(*_model->getLastAppliedAttribute(static_cast<osg::StateAttribute::Type>(p0) ,p1),inst);
return inst.isValid()?((osg::QReflect_StateAttribute * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_StateAttribute*osg::QReflect_State::getLastAppliedTextureAttribute( unsigned int  p0 ,osg::QReflect_StateAttribute::Type  p1 , unsigned int  p2)const{
//params checking
PMOCSAFEADDOBJECT(*_model->getLastAppliedTextureAttribute(p0 ,static_cast<osg::StateAttribute::Type>(p1) ,p2),inst);
return inst.isValid()?((osg::QReflect_StateAttribute * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Uniform*osg::QReflect_State::getModelViewMatrixUniform(){
//params checking
PMOCSAFEADDOBJECT(*_model->getModelViewMatrixUniform(),inst);
return inst.isValid()?((osg::QReflect_Uniform * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Uniform*osg::QReflect_State::getModelViewProjectionMatrixUniform(){
//params checking
PMOCSAFEADDOBJECT(*_model->getModelViewProjectionMatrixUniform(),inst);
return inst.isValid()?((osg::QReflect_Uniform * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Uniform*osg::QReflect_State::getNormalMatrixUniform(){
//params checking
PMOCSAFEADDOBJECT(*_model->getNormalMatrixUniform(),inst);
return inst.isValid()?((osg::QReflect_Uniform * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Uniform*osg::QReflect_State::getProjectionMatrixUniform(){
//params checking
PMOCSAFEADDOBJECT(*_model->getProjectionMatrixUniform(),inst);
return inst.isValid()?((osg::QReflect_Uniform * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Viewport*osg::QReflect_State::getCurrentViewport()const{
//params checking
PMOCSAFEADDOBJECT(*_model->getCurrentViewport(),inst);
return inst.isValid()?((osg::QReflect_Viewport * )inst.model->createQQModel(&inst)):NULL;
}

///DefaultConstructor////////////////
osg::QReflect_State::QReflect_State(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::State*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_State::~QReflect_State( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_State::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_State::createInstance( ){
osg::ref_ptr<osg::State> osg_State_ptr	;
osg_State_ptr = new osg::State ()	;
Instance o(PMOCGETMETACLASS("osg::State"),(void*)osg_State_ptr.get()		,true);
_managedinstances.insert(osg_State_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_State::MetaQReflect_State():MetaQQuickClass( "osg::State"){
_typeid=&typeid(osg::State );
           qRegisterMetaType<osg::QMLState>();
           qRegisterMetaType<osg::QMLState*>("pmoc.osg.QMLState");
qmlRegisterType<osg::QReflect_State>("pmoc.osg",1,0,"QReflect_State");
           qmlRegisterType<osg::QMLState>("pmoc.osg",1,0,"QMLState");
};
const std::string osg::MetaQReflect_State::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_State::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_State::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_State::createQQModel(const Instance*i){ //return new MetaQReflect_State_QModel(i);}
QMLState *ret =new QMLState(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::Referenced *mother =dynamic_cast<osg::Referenced*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::Referenced");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::Referenced model for osg::Stateis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::Referenced");
if(!cl){std::cerr<<"osg::Referenced QQModel for osg::Stateis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_State_pmoc.cpp"
#endif
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/State_pmoc.hpp>
#include <customCode/osg/State_pmoc.hpp>
using namespace pmoc;

///DefaultConstructor////////////////
osg::QReflect_VertexAttribAlias::QReflect_VertexAttribAlias(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::VertexAttribAlias*>(i->ptr);
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_VertexAttribAlias::~QReflect_VertexAttribAlias( ){
 }
///update this according _model new state
void osg::QReflect_VertexAttribAlias::updateModel(){
}
Instance osg::MetaQReflect_VertexAttribAlias::createInstance( ){
osg::VertexAttribAlias* osg_VertexAttribAlias_ptr	;
osg_VertexAttribAlias_ptr= new osg::VertexAttribAlias()	;
Instance o(PMOCGETMETACLASS("osg::VertexAttribAlias"),(void*)osg_VertexAttribAlias_ptr	,true);
_managedinstances.insert(osg_VertexAttribAlias_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_VertexAttribAlias::MetaQReflect_VertexAttribAlias():MetaQQuickClass( "osg::VertexAttribAlias"){
_typeid=&typeid(osg::VertexAttribAlias );
           qRegisterMetaType<osg::QMLVertexAttribAlias>();
           qRegisterMetaType<osg::QMLVertexAttribAlias*>("pmoc.osg.QMLVertexAttribAlias");
qmlRegisterType<osg::QReflect_VertexAttribAlias>("pmoc.osg",1,0,"QReflect_VertexAttribAlias");
           qmlRegisterType<osg::QMLVertexAttribAlias>("pmoc.osg",1,0,"QMLVertexAttribAlias");
};
const std::string osg::MetaQReflect_VertexAttribAlias::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_VertexAttribAlias::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_VertexAttribAlias::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_VertexAttribAlias::createQQModel(const Instance*i){ //return new MetaQReflect_VertexAttribAlias_QModel(i);}
QMLVertexAttribAlias *ret =new QMLVertexAttribAlias(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_State_pmoc.cpp"
#endif





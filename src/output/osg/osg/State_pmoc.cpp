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
#include <customCode/osg/GraphicsCostEstimator_pmoc.hpp>
#include <customCode/osg/Matrixd_pmoc.hpp>
#include <customCode/osg/ShaderComposer_pmoc.hpp>
#include <customCode/osg/StateAttribute_pmoc.hpp>
#include <customCode/osg/StateSet_pmoc.hpp>
#include <customCode/osg/State_pmoc.hpp>
#include <customCode/osg/Uniform_pmoc.hpp>
#include <osg/DisplaySettings>
#include <osg/DisplaySettings_pmoc.hpp>
#include <osg/FrameStamp>
#include <osg/FrameStamp_pmoc.hpp>
#include <osg/GraphicsCostEstimator>
#include <osg/GraphicsCostEstimator_pmoc.hpp>
#include <osg/ShaderComposer>
#include <osg/ShaderComposer_pmoc.hpp>
using namespace pmoc;
 GLint  osg::QReflect_State::getAttribLocation(const  QString &p0)const{
return _model->getAttribLocation(std::string(p0.toStdString()));

}
 GLint  osg::QReflect_State::getMaxTextureCoords()const{
return _model->getMaxTextureCoords();

}
 GLint  osg::QReflect_State::getMaxTextureUnits()const{
return _model->getMaxTextureUnits();

}
 GLint  osg::QReflect_State::getUniformLocation( unsigned int p0)const{
return _model->getUniformLocation(p0);

}
 GLint  osg::QReflect_State::getUniformLocation(const  QString &p0)const{
return _model->getUniformLocation(std::string(p0.toStdString()));

}
 bool  osg::QReflect_State::applyAttribute(osg::QReflect_StateAttribute *p0){
return _model->applyAttribute(p0->_model);

}
 bool  osg::QReflect_State::applyMode( GLenum p0 , bool p1){
return _model->applyMode(p0 ,p1);

}
 bool  osg::QReflect_State::applyTextureAttribute( unsigned int p0 ,osg::QReflect_StateAttribute *p1){
return _model->applyTextureAttribute(p0 ,p1->_model);

}
 bool  osg::QReflect_State::applyTextureMode( unsigned int p0 , GLenum p1 , bool p2){
return _model->applyTextureMode(p0 ,p1 ,p2);

}
 bool  osg::QReflect_State::checkGLErrors( GLenum p0)const{
return _model->checkGLErrors(p0);

}
 bool  osg::QReflect_State::checkGLErrors(const  char *p0)const{
return _model->checkGLErrors(p0);

}
 bool  osg::QReflect_State::checkGLErrors(osg::QReflect_StateAttribute *p0)const{
return _model->checkGLErrors(p0->_model);

}
 bool  osg::QReflect_State::getAbortRendering()const{
return _model->getAbortRendering();

}
 bool  osg::QReflect_State::getGlobalDefaultModeValue( GLenum p0){
return _model->getGlobalDefaultModeValue(p0);

}
 bool  osg::QReflect_State::getGlobalDefaultTextureModeValue( unsigned int p0 , GLenum p1){
return _model->getGlobalDefaultTextureModeValue(p0 ,p1);

}
 bool  osg::QReflect_State::getLastAppliedMode( GLenum p0)const{
return _model->getLastAppliedMode(p0);

}
 bool  osg::QReflect_State::getLastAppliedTextureMode( unsigned int p0 , GLenum p1)const{
return _model->getLastAppliedTextureMode(p0 ,p1);

}
 bool  osg::QReflect_State::getModeValidity( GLenum p0){
return _model->getModeValidity(p0);

}
 bool  osg::QReflect_State::isFogCoordSupported()const{
return _model->isFogCoordSupported();

}
 bool  osg::QReflect_State::isSecondaryColorSupported()const{
return _model->isSecondaryColorSupported();

}
 bool  osg::QReflect_State::isVertexBufferObjectSupported()const{
return _model->isVertexBufferObjectSupported();

}
 bool  osg::QReflect_State::supportsShaderRequirement(const  QString &p0){
return _model->supportsShaderRequirement(std::string(p0.toStdString()));

}
 double  osg::QReflect_State::getGpuTime()const{
return _model->getGpuTime();

}
 unsigned int  osg::QReflect_State::getDynamicObjectCount()const{
return _model->getDynamicObjectCount();

}
 unsigned int  osg::QReflect_State::getStateSetStackSize(){
return _model->getStateSetStackSize();

}
 void osg::QReflect_State::Color( float p0 , float p1 , float p2 , float p3){
 _model->Color(p0 ,p1 ,p2 ,p3);

}
 void osg::QReflect_State::MultiTexCoord( unsigned int p0 , float p1 , float p2 , float p3 , float p4){
 _model->MultiTexCoord(p0 ,p1 ,p2 ,p3 ,p4);

}
 void osg::QReflect_State::Normal( float p0 , float p1 , float p2){
 _model->Normal(p0 ,p1 ,p2);

}
 void osg::QReflect_State::TexCoord( float p0 , float p1 , float p2 , float p3){
 _model->TexCoord(p0 ,p1 ,p2 ,p3);

}
 void osg::QReflect_State::VerteAttrib( unsigned int p0 , float p1 , float p2 , float p3 , float p4){
 _model->VerteAttrib(p0 ,p1 ,p2 ,p3 ,p4);

}
 void osg::QReflect_State::Vertex( float p0 , float p1 , float p2 , float p3){
 _model->Vertex(p0 ,p1 ,p2 ,p3);

}
 void osg::QReflect_State::apply(){
 _model->apply();

}
 void osg::QReflect_State::apply(osg::QReflect_StateSet *p0){
 _model->apply(p0->_model);

}
 void osg::QReflect_State::applyDisablingOfVertexAttributes(){
 _model->applyDisablingOfVertexAttributes();

}
 void osg::QReflect_State::applyModelViewAndProjectionUniformsIfRequired(){
 _model->applyModelViewAndProjectionUniformsIfRequired();

}
 void osg::QReflect_State::applyModelViewMatrix(osg::QReflect_Matrixd *p0){
 _model->applyModelViewMatrix(*p0->_model);

}
 void osg::QReflect_State::applyModelViewMatrix(osg::QReflect_RefMatrixd *p0){
 _model->applyModelViewMatrix(p0->_model);

}
 void osg::QReflect_State::applyProjectionMatrix(osg::QReflect_RefMatrixd *p0){
 _model->applyProjectionMatrix(p0->_model);

}
 void osg::QReflect_State::applyShaderComposition(){
 _model->applyShaderComposition();

}
 void osg::QReflect_State::applyShaderCompositionUniform(osg::QReflect_Uniform *p0 , unsigned int p1){
 _model->applyShaderCompositionUniform(p0->_model ,p1);

}
 void osg::QReflect_State::bindElementBufferObject(osg::QReflect_GLBufferObject *p0){
 _model->bindElementBufferObject(p0->_model);

}
 void osg::QReflect_State::bindPixelBufferObject(osg::QReflect_GLBufferObject *p0){
 _model->bindPixelBufferObject(p0->_model);

}
 void osg::QReflect_State::bindVertexBufferObject(osg::QReflect_GLBufferObject *p0){
 _model->bindVertexBufferObject(p0->_model);

}
 void osg::QReflect_State::captureCurrentState(osg::QReflect_StateSet *p0)const{
 _model->captureCurrentState(*p0->_model);

}
 void osg::QReflect_State::decrementDynamicObjectCount(){
 _model->decrementDynamicObjectCount();

}
 void osg::QReflect_State::dirtyAllAttributes(){
 _model->dirtyAllAttributes();

}
 void osg::QReflect_State::dirtyAllModes(){
 _model->dirtyAllModes();

}
 void osg::QReflect_State::dirtyAllVertexArrays(){
 _model->dirtyAllVertexArrays();

}
 void osg::QReflect_State::dirtyColorPointer(){
 _model->dirtyColorPointer();

}
 void osg::QReflect_State::dirtyFogCoordPointer(){
 _model->dirtyFogCoordPointer();

}
 void osg::QReflect_State::dirtyNormalPointer(){
 _model->dirtyNormalPointer();

}
 void osg::QReflect_State::dirtySecondaryColorPointer(){
 _model->dirtySecondaryColorPointer();

}
 void osg::QReflect_State::dirtyTexCoordPointer( unsigned int p0){
 _model->dirtyTexCoordPointer(p0);

}
 void osg::QReflect_State::dirtyTexCoordPointersAboveAndIncluding( unsigned int p0){
 _model->dirtyTexCoordPointersAboveAndIncluding(p0);

}
 void osg::QReflect_State::dirtyVertexAttribPointer( unsigned int p0){
 _model->dirtyVertexAttribPointer(p0);

}
 void osg::QReflect_State::dirtyVertexAttribPointersAboveAndIncluding( unsigned int p0){
 _model->dirtyVertexAttribPointersAboveAndIncluding(p0);

}
 void osg::QReflect_State::dirtyVertexPointer(){
 _model->dirtyVertexPointer();

}
 void osg::QReflect_State::disableAllVertexArrays(){
 _model->disableAllVertexArrays();

}
 void osg::QReflect_State::disableColorPointer(){
 _model->disableColorPointer();

}
 void osg::QReflect_State::disableFogCoordPointer(){
 _model->disableFogCoordPointer();

}
 void osg::QReflect_State::disableNormalPointer(){
 _model->disableNormalPointer();

}
 void osg::QReflect_State::disableSecondaryColorPointer(){
 _model->disableSecondaryColorPointer();

}
 void osg::QReflect_State::disableTexCoordPointer( unsigned int p0){
 _model->disableTexCoordPointer(p0);

}
 void osg::QReflect_State::disableTexCoordPointersAboveAndIncluding( unsigned int p0){
 _model->disableTexCoordPointersAboveAndIncluding(p0);

}
 void osg::QReflect_State::disableVertexAttribPointer( unsigned int p0){
 _model->disableVertexAttribPointer(p0);

}
 void osg::QReflect_State::disableVertexAttribPointersAboveAndIncluding( unsigned int p0){
 _model->disableVertexAttribPointersAboveAndIncluding(p0);

}
 void osg::QReflect_State::disableVertexPointer(){
 _model->disableVertexPointer();

}
 void osg::QReflect_State::drawQuads( GLint p0 , GLsizei p1 , GLsizei p2){
 _model->drawQuads(p0 ,p1 ,p2);

}
 void osg::QReflect_State::frameCompleted(){
 _model->frameCompleted();

}
 void osg::QReflect_State::glDrawArraysInstanced( GLenum p0 , GLint p1 , GLsizei p2 , GLsizei p3){
 _model->glDrawArraysInstanced(p0 ,p1 ,p2 ,p3);

}
 void osg::QReflect_State::glDrawElementsInstanced( GLenum p0 , GLsizei p1 , GLenum p2 ,const  GLvoid *p3 , GLsizei p4){
 _model->glDrawElementsInstanced(p0 ,p1 ,p2 ,p3 ,p4);

}
 void osg::QReflect_State::haveAppliedAttribute(osg::QReflect_StateAttribute *p0){
 _model->haveAppliedAttribute(p0->_model);

}
 void osg::QReflect_State::haveAppliedAttribute(osg::QReflect_StateAttribute::Type p0 , unsigned int p1){
 _model->haveAppliedAttribute(static_cast<osg::StateAttribute::Type>(p0) ,p1);

}
 void osg::QReflect_State::haveAppliedMode( GLenum p0 , unsigned int p1){
 _model->haveAppliedMode(p0 ,p1);

}
 void osg::QReflect_State::haveAppliedMode( GLenum p0){
 _model->haveAppliedMode(p0);

}
 void osg::QReflect_State::haveAppliedTextureAttribute( unsigned int p0 ,osg::QReflect_StateAttribute *p1){
 _model->haveAppliedTextureAttribute(p0 ,p1->_model);

}
 void osg::QReflect_State::haveAppliedTextureAttribute( unsigned int p0 ,osg::QReflect_StateAttribute::Type p1 , unsigned int p2){
 _model->haveAppliedTextureAttribute(p0 ,static_cast<osg::StateAttribute::Type>(p1) ,p2);

}
 void osg::QReflect_State::haveAppliedTextureMode( unsigned int p0 , GLenum p1 , unsigned int p2){
 _model->haveAppliedTextureMode(p0 ,p1 ,p2);

}
 void osg::QReflect_State::haveAppliedTextureMode( unsigned int p0 , GLenum p1){
 _model->haveAppliedTextureMode(p0 ,p1);

}
 void osg::QReflect_State::initializeExtensionProcs(){
 _model->initializeExtensionProcs();

}
 void osg::QReflect_State::insertStateSet( unsigned int p0 ,osg::QReflect_StateSet *p1){
 _model->insertStateSet(p0 ,p1->_model);

}
 void osg::QReflect_State::lazyDisablingOfVertexAttributes(){
 _model->lazyDisablingOfVertexAttributes();

}
 void osg::QReflect_State::popAllStateSets(){
 _model->popAllStateSets();

}
 void osg::QReflect_State::popStateSet(){
 _model->popStateSet();

}
 void osg::QReflect_State::popStateSetStackToSize( unsigned int p0){
 _model->popStateSetStackToSize(p0);

}
 void osg::QReflect_State::pushStateSet(osg::QReflect_StateSet *p0){
 _model->pushStateSet(p0->_model);

}
 void osg::QReflect_State::releaseGLObjects(){
 _model->releaseGLObjects();

}
 void osg::QReflect_State::removeStateSet( unsigned int p0){
 _model->removeStateSet(p0);

}
 void osg::QReflect_State::reset(){
 _model->reset();

}
 void osg::QReflect_State::resetVertexAttributeAlias( bool p0 , unsigned int p1){
 _model->resetVertexAttributeAlias(p0 ,p1);

}
 void osg::QReflect_State::setAbortRenderingPtr( bool *p0){
 _model->setAbortRenderingPtr(p0);

}
 void osg::QReflect_State::setCheckForGLErrors(osg::QReflect_State::CheckForGLErrors p0){
 _model->setCheckForGLErrors(static_cast<osg::State::CheckForGLErrors>(p0));

}
 void osg::QReflect_State::setColorAlias(osg::QReflect_VertexAttribAlias *p0){
 _model->setColorAlias(*p0->_model);

}
 void osg::QReflect_State::setColorPointer( GLint p0 , GLenum p1 , GLsizei p2 ,const  GLvoid *p3 , GLboolean p4){
 _model->setColorPointer(p0 ,p1 ,p2 ,p3 ,p4);

}
 void osg::QReflect_State::setColorPointer(osg::QReflect_Array *p0){
 _model->setColorPointer(p0->_model);

}
 void osg::QReflect_State::setCurrentElementBufferObject(osg::QReflect_GLBufferObject *p0){
 _model->setCurrentElementBufferObject(p0->_model);

}
 void osg::QReflect_State::setCurrentPixelBufferObject(osg::QReflect_GLBufferObject *p0){
 _model->setCurrentPixelBufferObject(p0->_model);

}
 void osg::QReflect_State::setCurrentVertexBufferObject(osg::QReflect_GLBufferObject *p0){
 _model->setCurrentVertexBufferObject(p0->_model);

}
 void osg::QReflect_State::setDynamicObjectCount( unsigned int p0 , bool p1){
 _model->setDynamicObjectCount(p0 ,p1);

}
 void osg::QReflect_State::setFogCoordAlias(osg::QReflect_VertexAttribAlias *p0){
 _model->setFogCoordAlias(*p0->_model);

}
 void osg::QReflect_State::setFogCoordPointer( GLenum p0 , GLsizei p1 ,const  GLvoid *p2 , GLboolean p3){
 _model->setFogCoordPointer(p0 ,p1 ,p2 ,p3);

}
 void osg::QReflect_State::setFogCoordPointer(osg::QReflect_Array *p0){
 _model->setFogCoordPointer(p0->_model);

}
 void osg::QReflect_State::setGlobalDefaultAttribute(osg::QReflect_StateAttribute *p0){
 _model->setGlobalDefaultAttribute(p0->_model);

}
 void osg::QReflect_State::setGlobalDefaultModeValue( GLenum p0 , bool p1){
 _model->setGlobalDefaultModeValue(p0 ,p1);

}
 void osg::QReflect_State::setGlobalDefaultTextureAttribute( unsigned int p0 ,osg::QReflect_StateAttribute *p1){
 _model->setGlobalDefaultTextureAttribute(p0 ,p1->_model);

}
 void osg::QReflect_State::setGlobalDefaultTextureModeValue( unsigned int p0 , GLenum p1 , bool p2){
 _model->setGlobalDefaultTextureModeValue(p0 ,p1 ,p2);

}
 void osg::QReflect_State::setInitialViewMatrix(osg::QReflect_RefMatrixd *p0){
 _model->setInitialViewMatrix(p0->_model);

}
 void osg::QReflect_State::setInterleavedArrays( GLenum p0 , GLsizei p1 ,const  GLvoid *p2){
 _model->setInterleavedArrays(p0 ,p1 ,p2);

}
 void osg::QReflect_State::setModeValidity( GLenum p0 , bool p1){
 _model->setModeValidity(p0 ,p1);

}
 void osg::QReflect_State::setNormalAlias(osg::QReflect_VertexAttribAlias *p0){
 _model->setNormalAlias(*p0->_model);

}
 void osg::QReflect_State::setNormalPointer( GLenum p0 , GLsizei p1 ,const  GLvoid *p2 , GLboolean p3){
 _model->setNormalPointer(p0 ,p1 ,p2 ,p3);

}
 void osg::QReflect_State::setNormalPointer(osg::QReflect_Array *p0){
 _model->setNormalPointer(p0->_model);

}
 void osg::QReflect_State::setSecondaryColorAlias(osg::QReflect_VertexAttribAlias *p0){
 _model->setSecondaryColorAlias(*p0->_model);

}
 void osg::QReflect_State::setSecondaryColorPointer( GLint p0 , GLenum p1 , GLsizei p2 ,const  GLvoid *p3 , GLboolean p4){
 _model->setSecondaryColorPointer(p0 ,p1 ,p2 ,p3 ,p4);

}
 void osg::QReflect_State::setSecondaryColorPointer(osg::QReflect_Array *p0){
 _model->setSecondaryColorPointer(p0->_model);

}
 void osg::QReflect_State::setTexCoordPointer( unsigned int p0 , GLint p1 , GLenum p2 , GLsizei p3 ,const  GLvoid *p4 , GLboolean p5){
 _model->setTexCoordPointer(p0 ,p1 ,p2 ,p3 ,p4 ,p5);

}
 void osg::QReflect_State::setTexCoordPointer( unsigned int p0 ,osg::QReflect_Array *p1){
 _model->setTexCoordPointer(p0 ,p1->_model);

}
 void osg::QReflect_State::setVertexAlias(osg::QReflect_VertexAttribAlias *p0){
 _model->setVertexAlias(*p0->_model);

}
 void osg::QReflect_State::setVertexAttribIPointer( unsigned int p0 , GLint p1 , GLenum p2 , GLsizei p3 ,const  GLvoid *p4){
 _model->setVertexAttribIPointer(p0 ,p1 ,p2 ,p3 ,p4);

}
 void osg::QReflect_State::setVertexAttribIPointer( unsigned int p0 ,osg::QReflect_Array *p1){
 _model->setVertexAttribIPointer(p0 ,p1->_model);

}
 void osg::QReflect_State::setVertexAttribLPointer( unsigned int p0 , GLint p1 , GLenum p2 , GLsizei p3 ,const  GLvoid *p4){
 _model->setVertexAttribLPointer(p0 ,p1 ,p2 ,p3 ,p4);

}
 void osg::QReflect_State::setVertexAttribLPointer( unsigned int p0 ,osg::QReflect_Array *p1){
 _model->setVertexAttribLPointer(p0 ,p1->_model);

}
 void osg::QReflect_State::setVertexAttribPointer( unsigned int p0 , GLint p1 , GLenum p2 , GLboolean p3 , GLsizei p4 ,const  GLvoid *p5){
 _model->setVertexAttribPointer(p0 ,p1 ,p2 ,p3 ,p4 ,p5);

}
 void osg::QReflect_State::setVertexAttribPointer( unsigned int p0 ,osg::QReflect_Array *p1){
 _model->setVertexAttribPointer(p0 ,p1->_model);

}
 void osg::QReflect_State::setVertexPointer( GLint p0 , GLenum p1 , GLsizei p2 ,const  GLvoid *p3 , GLboolean p4){
 _model->setVertexPointer(p0 ,p1 ,p2 ,p3 ,p4);

}
 void osg::QReflect_State::setVertexPointer(osg::QReflect_Array *p0){
 _model->setVertexPointer(p0->_model);

}
 void osg::QReflect_State::unbindElementBufferObject(){
 _model->unbindElementBufferObject();

}
 void osg::QReflect_State::unbindPixelBufferObject(){
 _model->unbindPixelBufferObject();

}
 void osg::QReflect_State::unbindVertexBufferObject(){
 _model->unbindVertexBufferObject();

}
 void osg::QReflect_State::updateModelViewAndProjectionMatrixUniforms(){
 _model->updateModelViewAndProjectionMatrixUniforms();

}
const bool osg::QReflect_State::getShaderCompositionEnabled()const{return _model->getShaderCompositionEnabled();}
const bool osg::QReflect_State::getUseModelViewAndProjectionUniforms()const{return _model->getUseModelViewAndProjectionUniforms();}
const bool osg::QReflect_State::getUseVertexAttributeAliasing()const{return _model->getUseVertexAttributeAliasing();}
const int osg::QReflect_State::getTimestampBits()const{return _model->getTimestampBits();}
const unsigned int osg::QReflect_State::getActiveTextureUnit()const{return _model->getActiveTextureUnit();}
const unsigned int osg::QReflect_State::getClientActiveTextureUnit()const{return _model->getClientActiveTextureUnit();}
const unsigned int osg::QReflect_State::getContextID()const{return _model->getContextID();}
const unsigned int osg::QReflect_State::getMaxBufferObjectPoolSize()const{return _model->getMaxBufferObjectPoolSize();}
const unsigned int osg::QReflect_State::getMaxTexturePoolSize()const{return _model->getMaxTexturePoolSize();}
osg::QReflect_DisplaySettings * osg::QReflect_State::getDisplaySettings()const{
PMOCSAFEADDOBJECT(*_model->getDisplaySettings(),inst);
return inst.isValid()?((osg::QReflect_DisplaySettings * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_FrameStamp * osg::QReflect_State::getFrameStamp()const{
PMOCSAFEADDOBJECT(*_model->getFrameStamp(),inst);
return inst.isValid()?((osg::QReflect_FrameStamp * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_GLBufferObject*osg::QReflect_State::getCurrentElementBufferObject(){
PMOCSAFEADDOBJECT(*_model->getCurrentElementBufferObject(),inst);
return inst.isValid()?((osg::QReflect_GLBufferObject * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_GLBufferObject*osg::QReflect_State::getCurrentPixelBufferObject(){
PMOCSAFEADDOBJECT(*_model->getCurrentPixelBufferObject(),inst);
return inst.isValid()?((osg::QReflect_GLBufferObject * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_GLBufferObject*osg::QReflect_State::getCurrentVertexBufferObject(){
PMOCSAFEADDOBJECT(*_model->getCurrentVertexBufferObject(),inst);
return inst.isValid()?((osg::QReflect_GLBufferObject * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_GraphicsCostEstimator * osg::QReflect_State::getGraphicsCostEstimator()const{
PMOCSAFEADDOBJECT(*_model->getGraphicsCostEstimator(),inst);
return inst.isValid()?((osg::QReflect_GraphicsCostEstimator * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_ShaderComposer * osg::QReflect_State::getShaderComposer()const{
PMOCSAFEADDOBJECT(*_model->getShaderComposer(),inst);
return inst.isValid()?((osg::QReflect_ShaderComposer * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_State::CheckForGLErrors  osg::QReflect_State::getCheckForGLErrors()const{
osg::QReflect_State::CheckForGLErrors ret=static_cast<osg::QReflect_State::CheckForGLErrors>( _model->getCheckForGLErrors());return  ret;

}
osg::QReflect_StateAttribute*osg::QReflect_State::getGlobalDefaultAttribute(osg::QReflect_StateAttribute::Type p0 , unsigned int p1){
PMOCSAFEADDOBJECT(*_model->getGlobalDefaultAttribute(static_cast<osg::StateAttribute::Type>(p0) ,p1),inst);
return inst.isValid()?((osg::QReflect_StateAttribute * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_StateAttribute*osg::QReflect_State::getGlobalDefaultTextureAttribute( unsigned int p0 ,osg::QReflect_StateAttribute::Type p1 , unsigned int p2){
PMOCSAFEADDOBJECT(*_model->getGlobalDefaultTextureAttribute(p0 ,static_cast<osg::StateAttribute::Type>(p1) ,p2),inst);
return inst.isValid()?((osg::QReflect_StateAttribute * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_StateAttribute*osg::QReflect_State::getLastAppliedAttribute(osg::QReflect_StateAttribute::Type p0 , unsigned int p1)const{
PMOCSAFEADDOBJECT(*_model->getLastAppliedAttribute(static_cast<osg::StateAttribute::Type>(p0) ,p1),inst);
return inst.isValid()?((osg::QReflect_StateAttribute * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_StateAttribute*osg::QReflect_State::getLastAppliedTextureAttribute( unsigned int p0 ,osg::QReflect_StateAttribute::Type p1 , unsigned int p2)const{
PMOCSAFEADDOBJECT(*_model->getLastAppliedTextureAttribute(p0 ,static_cast<osg::StateAttribute::Type>(p1) ,p2),inst);
return inst.isValid()?((osg::QReflect_StateAttribute * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Uniform*osg::QReflect_State::getModelViewMatrixUniform(){
PMOCSAFEADDOBJECT(*_model->getModelViewMatrixUniform(),inst);
return inst.isValid()?((osg::QReflect_Uniform * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Uniform*osg::QReflect_State::getModelViewProjectionMatrixUniform(){
PMOCSAFEADDOBJECT(*_model->getModelViewProjectionMatrixUniform(),inst);
return inst.isValid()?((osg::QReflect_Uniform * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Uniform*osg::QReflect_State::getNormalMatrixUniform(){
PMOCSAFEADDOBJECT(*_model->getNormalMatrixUniform(),inst);
return inst.isValid()?((osg::QReflect_Uniform * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Uniform*osg::QReflect_State::getProjectionMatrixUniform(){
PMOCSAFEADDOBJECT(*_model->getProjectionMatrixUniform(),inst);
return inst.isValid()?((osg::QReflect_Uniform * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Viewport*osg::QReflect_State::getCurrentViewport()const{
PMOCSAFEADDOBJECT(*_model->getCurrentViewport(),inst);
return inst.isValid()?((osg::QReflect_Viewport * )inst.model->createQQModel(&inst)):NULL;
}
void  osg::QReflect_State::setActiveTextureUnit(const unsigned int &par){_model->setActiveTextureUnit(par);emit ActiveTextureUnitChanged(par);}
void  osg::QReflect_State::setClientActiveTextureUnit(const unsigned int &par){_model->setClientActiveTextureUnit(par);emit ClientActiveTextureUnitChanged(par);}
void  osg::QReflect_State::setContextID(const unsigned int &par){_model->setContextID(par);emit ContextIDChanged(par);}
void  osg::QReflect_State::setMaxBufferObjectPoolSize(const unsigned int &par){_model->setMaxBufferObjectPoolSize(par);emit MaxBufferObjectPoolSizeChanged(par);}
void  osg::QReflect_State::setMaxTexturePoolSize(const unsigned int &par){_model->setMaxTexturePoolSize(par);emit MaxTexturePoolSizeChanged(par);}
void  osg::QReflect_State::setShaderCompositionEnabled(const bool &par){_model->setShaderCompositionEnabled(par);emit ShaderCompositionEnabledChanged(par);}
void  osg::QReflect_State::setTimestampBits(const int &par){_model->setTimestampBits(par);emit TimestampBitsChanged(par);}
void  osg::QReflect_State::setUseModelViewAndProjectionUniforms(const bool &par){_model->setUseModelViewAndProjectionUniforms(par);emit UseModelViewAndProjectionUniformsChanged(par);}
void  osg::QReflect_State::setUseVertexAttributeAliasing(const bool &par){_model->setUseVertexAttributeAliasing(par);emit UseVertexAttributeAliasingChanged(par);}
void osg::QReflect_State::pmoc_reverse_setDisplaySettings( osg::QReflect_DisplaySettings *par){_model->setDisplaySettings(NULL);
emit DisplaySettingsChanged(NULL);
}
void osg::QReflect_State::pmoc_reverse_setFrameStamp( osg::QReflect_FrameStamp *par){_model->setFrameStamp(NULL);
emit FrameStampChanged(NULL);
}
void osg::QReflect_State::pmoc_reverse_setGraphicsCostEstimator( osg::QReflect_GraphicsCostEstimator *par){_model->setGraphicsCostEstimator(NULL);
emit GraphicsCostEstimatorChanged(NULL);
}
void osg::QReflect_State::pmoc_reverse_setShaderComposer( osg::QReflect_ShaderComposer *par){_model->setShaderComposer(NULL);
emit ShaderComposerChanged(NULL);
}
void osg::QReflect_State::setDisplaySettings( osg::QReflect_DisplaySettings *par){_model->setDisplaySettings(par->_model);
emit DisplaySettingsChanged(par);
}
void osg::QReflect_State::setFrameStamp( osg::QReflect_FrameStamp *par){_model->setFrameStamp(par->_model);
emit FrameStampChanged(par);
}
void osg::QReflect_State::setGraphicsCostEstimator( osg::QReflect_GraphicsCostEstimator *par){_model->setGraphicsCostEstimator(par->_model);
emit GraphicsCostEstimatorChanged(par);
}
void osg::QReflect_State::setShaderComposer( osg::QReflect_ShaderComposer *par){_model->setShaderComposer(par->_model);
emit ShaderComposerChanged(par);
}

///DefaultConstructor////////////////
osg::QReflect_State::QReflect_State(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
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
_typeid=&typeid(osg::State );           qRegisterMetaType<QMLState>();
qmlRegisterType<QReflect_State>("pmoc.osg",1,0,"QReflect_State");
           qmlRegisterType<QMLState>("pmoc.osg",1,0,"QMLState");
       PMOCACTION("getDisplaySettings","setDisplaySettings","unsetDisplaySettings");
       PMOCACTION("getFrameStamp","setFrameStamp","unsetFrameStamp");
       PMOCACTION("getGraphicsCostEstimator","setGraphicsCostEstimator","unsetGraphicsCostEstimator");
       PMOCACTION("getShaderComposer","setShaderComposer","unsetShaderComposer");
};
const std::string osg::MetaQReflect_State::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_State::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_State::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_State::createQQModel(Instance*i){ //return new MetaQReflect_State_QModel(i);}
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
osg::QReflect_VertexAttribAlias::QReflect_VertexAttribAlias(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
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
_typeid=&typeid(osg::VertexAttribAlias );           qRegisterMetaType<QMLVertexAttribAlias>();
qmlRegisterType<QReflect_VertexAttribAlias>("pmoc.osg",1,0,"QReflect_VertexAttribAlias");
           qmlRegisterType<QMLVertexAttribAlias>("pmoc.osg",1,0,"QMLVertexAttribAlias");
};
const std::string osg::MetaQReflect_VertexAttribAlias::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_VertexAttribAlias::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_VertexAttribAlias::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_VertexAttribAlias::createQQModel(Instance*i){ //return new MetaQReflect_VertexAttribAlias_QModel(i);}
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



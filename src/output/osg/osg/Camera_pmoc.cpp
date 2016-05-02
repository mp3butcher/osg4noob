#include <osg/Camera>
//includes

#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/Camera_pmoc.hpp>
#include <customCode/osg/Camera_pmoc.hpp>
#include <customCode/osg/CullSettings_pmoc.hpp>
#include <customCode/osg/Transform_pmoc.hpp>
#include <customCode/osg/Camera_pmoc.hpp>
#include <customCode/osg/ColorMask_pmoc.hpp>
#include <customCode/osg/CullSettings_pmoc.hpp>
#include <customCode/osg/DisplaySettings_pmoc.hpp>
#include <customCode/osg/GraphicsContext_pmoc.hpp>
#include <customCode/osg/GraphicsThread_pmoc.hpp>
#include <customCode/osg/Image_pmoc.hpp>
#include <customCode/osg/Matrixd_pmoc.hpp>
#include <customCode/osg/Matrixf_pmoc.hpp>
#include <customCode/osg/NodeVisitor_pmoc.hpp>
#include <customCode/osg/Object_pmoc.hpp>
#include <customCode/osg/OperationThread_pmoc.hpp>
#include <customCode/osg/State_pmoc.hpp>
#include <customCode/osg/Stats_pmoc.hpp>
#include <customCode/osg/Texture_pmoc.hpp>
#include <customCode/osg/Vec3d_pmoc.hpp>
#include <customCode/osg/Vec3f_pmoc.hpp>
#include <customCode/osg/Vec4f_pmoc.hpp>
#include <customCode/osg/View_pmoc.hpp>
#include <customCode/osg/Viewport_pmoc.hpp>
using namespace pmoc;
 GLbitfield  osg::QReflect_Camera:: getClearMask()const{
//params checking
return _model->getClearMask();

}
 GLenum  osg::QReflect_Camera:: getDrawBuffer()const{
//params checking
return _model->getDrawBuffer();

}
 GLenum  osg::QReflect_Camera:: getReadBuffer()const{
//params checking
return _model->getReadBuffer();

}
 bool  osg::QReflect_Camera:: computeLocalToWorldMatrix(osg::QReflect_Matrixd  *p0 ,osg::QReflect_NodeVisitor  *p1)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Camera::computeLocalToWorldMatrix : parameter n.0 is NULL\n"<<endl;return -1;}
if(! p1) {std::cerr<<"PMOC: osg::QReflect_Camera::computeLocalToWorldMatrix : parameter n.1 is NULL\n"<<endl;return -1;}
return _model->computeLocalToWorldMatrix(*p0->_model ,p1->_model);

}
 bool  osg::QReflect_Camera:: computeWorldToLocalMatrix(osg::QReflect_Matrixd  *p0 ,osg::QReflect_NodeVisitor  *p1)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Camera::computeWorldToLocalMatrix : parameter n.0 is NULL\n"<<endl;return -1;}
if(! p1) {std::cerr<<"PMOC: osg::QReflect_Camera::computeWorldToLocalMatrix : parameter n.1 is NULL\n"<<endl;return -1;}
return _model->computeWorldToLocalMatrix(*p0->_model ,p1->_model);

}
 bool  osg::QReflect_Camera:: getAllowEventFocus()const{
//params checking
return _model->getAllowEventFocus();

}
 bool  osg::QReflect_Camera:: getProjectionMatrixAsFrustum( double  &p0 , double  &p1 , double  &p2 , double  &p3 , double  &p4 , double  &p5)const{
//params checking
return _model->getProjectionMatrixAsFrustum(p0 ,p1 ,p2 ,p3 ,p4 ,p5);

}
 bool  osg::QReflect_Camera:: getProjectionMatrixAsOrtho( double  &p0 , double  &p1 , double  &p2 , double  &p3 , double  &p4 , double  &p5)const{
//params checking
return _model->getProjectionMatrixAsOrtho(p0 ,p1 ,p2 ,p3 ,p4 ,p5);

}
 bool  osg::QReflect_Camera:: getProjectionMatrixAsPerspective( double  &p0 , double  &p1 , double  &p2 , double  &p3)const{
//params checking
return _model->getProjectionMatrixAsPerspective(p0 ,p1 ,p2 ,p3);

}
 bool  osg::QReflect_Camera:: isRenderToTextureCamera()const{
//params checking
return _model->isRenderToTextureCamera();

}
 double  osg::QReflect_Camera:: getClearDepth()const{
//params checking
return _model->getClearDepth();

}
 int  osg::QReflect_Camera:: getClearStencil()const{
//params checking
return _model->getClearStencil();

}
 int  osg::QReflect_Camera:: getImplicitBufferAttachmentRenderMask( bool  p0)const{
//params checking
return _model->getImplicitBufferAttachmentRenderMask(p0);

}
 int  osg::QReflect_Camera:: getImplicitBufferAttachmentResolveMask( bool  p0)const{
//params checking
return _model->getImplicitBufferAttachmentResolveMask(p0);

}
 int  osg::QReflect_Camera:: getRenderOrderNum()const{
//params checking
return _model->getRenderOrderNum();

}
 unsigned int  osg::QReflect_Camera:: getAttachmentMapModifiedCount()const{
//params checking
return _model->getAttachmentMapModifiedCount();

}
 void osg::QReflect_Camera::attach(osg::QReflect_Camera::BufferComponent  p0 , GLenum  p1){
//params checking
 _model->attach(static_cast<osg::Camera::BufferComponent>(p0) ,p1);

}
 void osg::QReflect_Camera::attach(osg::QReflect_Camera::BufferComponent  p0 ,osg::QReflect_Image  *p1 , unsigned int  p2 , unsigned int  p3){
//params checking
if(! p1) {std::cerr<<"PMOC: osg::QReflect_Camera::attach : parameter n.1 is NULL\n"<<endl;return;}
 _model->attach(static_cast<osg::Camera::BufferComponent>(p0) ,p1->_model ,p2 ,p3);

}
 void osg::QReflect_Camera::attach(osg::QReflect_Camera::BufferComponent  p0 ,osg::QReflect_Texture  *p1 , unsigned int  p2 , unsigned int  p3 , bool  p4 , unsigned int  p5 , unsigned int  p6){
//params checking
if(! p1) {std::cerr<<"PMOC: osg::QReflect_Camera::attach : parameter n.1 is NULL\n"<<endl;return;}
 _model->attach(static_cast<osg::Camera::BufferComponent>(p0) ,p1->_model ,p2 ,p3 ,p4 ,p5 ,p6);

}
 void osg::QReflect_Camera::createCameraThread(){
//params checking
 _model->createCameraThread();

}
 void osg::QReflect_Camera::detach(osg::QReflect_Camera::BufferComponent  p0){
//params checking
 _model->detach(static_cast<osg::Camera::BufferComponent>(p0));

}
 void osg::QReflect_Camera::dirtyAttachmentMap(){
//params checking
 _model->dirtyAttachmentMap();

}
 void osg::QReflect_Camera::getViewMatrixAsLookAt(osg::QReflect_Vec3d  *p0 ,osg::QReflect_Vec3d  *p1 ,osg::QReflect_Vec3d  *p2 , double  p3)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Camera::getViewMatrixAsLookAt : parameter n.0 is NULL\n"<<endl;return;}
if(! p1) {std::cerr<<"PMOC: osg::QReflect_Camera::getViewMatrixAsLookAt : parameter n.1 is NULL\n"<<endl;return;}
if(! p2) {std::cerr<<"PMOC: osg::QReflect_Camera::getViewMatrixAsLookAt : parameter n.2 is NULL\n"<<endl;return;}
 _model->getViewMatrixAsLookAt(*p0->_model ,*p1->_model ,*p2->_model ,p3);

}
 void osg::QReflect_Camera::getViewMatrixAsLookAt(osg::QReflect_Vec3f  *p0 ,osg::QReflect_Vec3f  *p1 ,osg::QReflect_Vec3f  *p2 , float  p3)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Camera::getViewMatrixAsLookAt : parameter n.0 is NULL\n"<<endl;return;}
if(! p1) {std::cerr<<"PMOC: osg::QReflect_Camera::getViewMatrixAsLookAt : parameter n.1 is NULL\n"<<endl;return;}
if(! p2) {std::cerr<<"PMOC: osg::QReflect_Camera::getViewMatrixAsLookAt : parameter n.2 is NULL\n"<<endl;return;}
 _model->getViewMatrixAsLookAt(*p0->_model ,*p1->_model ,*p2->_model ,p3);

}
 void osg::QReflect_Camera::inheritCullSettings(osg::QReflect_CullSettings  *p0 , unsigned int  p1){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Camera::inheritCullSettings : parameter n.0 is NULL\n"<<endl;return;}
 _model->inheritCullSettings(*p0->_model ,p1);

}
 void osg::QReflect_Camera::releaseGLObjects(osg::QReflect_State  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Camera::releaseGLObjects : parameter n.0 is NULL\n"<<endl;return;}
 _model->releaseGLObjects(p0->_model);

}
 void osg::QReflect_Camera::resize( int  p0 , int  p1 , int  p2){
//params checking
 _model->resize(p0 ,p1 ,p2);

}
 void osg::QReflect_Camera::resizeAttachments( int  p0 , int  p1){
//params checking
 _model->resizeAttachments(p0 ,p1);

}
 void osg::QReflect_Camera::resizeGLObjectBuffers( unsigned int  p0){
//params checking
 _model->resizeGLObjectBuffers(p0);

}
 void osg::QReflect_Camera::setAllowEventFocus( bool  p0){
//params checking
 _model->setAllowEventFocus(p0);
emit AllowEventFocusChanged();

}
 void osg::QReflect_Camera::setAttachmentMapModifiedCount( unsigned int  p0){
//params checking
 _model->setAttachmentMapModifiedCount(p0);
emit AttachmentMapModifiedCountChanged();

}
 void osg::QReflect_Camera::setCameraThread(osg::QReflect_OperationThread  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Camera::setCameraThread : parameter n.0 is NULL\n"<<endl;return;}
 _model->setCameraThread(p0->_model);
emit CameraThreadChanged();

}
 void osg::QReflect_Camera::setClearAccum(osg::QReflect_Vec4f  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Camera::setClearAccum : parameter n.0 is NULL\n"<<endl;return;}
 _model->setClearAccum(*p0->_model);

}
 void osg::QReflect_Camera::setClearColor(osg::QReflect_Vec4f  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Camera::setClearColor : parameter n.0 is NULL\n"<<endl;return;}
 _model->setClearColor(*p0->_model);

}
 void osg::QReflect_Camera::setClearDepth( double  p0){
//params checking
 _model->setClearDepth(p0);
emit ClearDepthChanged();

}
 void osg::QReflect_Camera::setClearMask( GLbitfield  p0){
//params checking
 _model->setClearMask(p0);
emit ClearMaskChanged();

}
 void osg::QReflect_Camera::setClearStencil( int  p0){
//params checking
 _model->setClearStencil(p0);
emit ClearStencilChanged();

}
 void osg::QReflect_Camera::setColorMask( bool  p0 , bool  p1 , bool  p2 , bool  p3){
//params checking
 _model->setColorMask(p0 ,p1 ,p2 ,p3);

}
 void osg::QReflect_Camera::setColorMask(osg::QReflect_ColorMask  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Camera::setColorMask : parameter n.0 is NULL\n"<<endl;return;}
 _model->setColorMask(p0->_model);

}
 void osg::QReflect_Camera::setDisplaySettings(osg::QReflect_DisplaySettings  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Camera::setDisplaySettings : parameter n.0 is NULL\n"<<endl;return;}
 _model->setDisplaySettings(p0->_model);
emit DisplaySettingsChanged();

}
 void osg::QReflect_Camera::setDrawBuffer( GLenum  p0){
//params checking
 _model->setDrawBuffer(p0);
emit DrawBufferChanged();

}
 void osg::QReflect_Camera::setGraphicsContext(osg::QReflect_GraphicsContext  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Camera::setGraphicsContext : parameter n.0 is NULL\n"<<endl;return;}
 _model->setGraphicsContext(p0->_model);
emit GraphicsContextChanged();

}
 void osg::QReflect_Camera::setImplicitBufferAttachmentMask( int  p0 , int  p1){
//params checking
 _model->setImplicitBufferAttachmentMask(p0 ,p1);

}
 void osg::QReflect_Camera::setImplicitBufferAttachmentRenderMask( int  p0){
//params checking
 _model->setImplicitBufferAttachmentRenderMask(p0);

}
 void osg::QReflect_Camera::setImplicitBufferAttachmentResolveMask( int  p0){
//params checking
 _model->setImplicitBufferAttachmentResolveMask(p0);

}
 void osg::QReflect_Camera::setProjectionMatrix(osg::QReflect_Matrixd  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Camera::setProjectionMatrix : parameter n.0 is NULL\n"<<endl;return;}
 _model->setProjectionMatrix(*p0->_model);

}
 void osg::QReflect_Camera::setProjectionMatrix(osg::QReflect_Matrixf  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Camera::setProjectionMatrix : parameter n.0 is NULL\n"<<endl;return;}
 _model->setProjectionMatrix(*p0->_model);

}
 void osg::QReflect_Camera::setProjectionMatrixAsFrustum( double  p0 , double  p1 , double  p2 , double  p3 , double  p4 , double  p5){
//params checking
 _model->setProjectionMatrixAsFrustum(p0 ,p1 ,p2 ,p3 ,p4 ,p5);

}
 void osg::QReflect_Camera::setProjectionMatrixAsOrtho( double  p0 , double  p1 , double  p2 , double  p3 , double  p4 , double  p5){
//params checking
 _model->setProjectionMatrixAsOrtho(p0 ,p1 ,p2 ,p3 ,p4 ,p5);

}
 void osg::QReflect_Camera::setProjectionMatrixAsOrtho2D( double  p0 , double  p1 , double  p2 , double  p3){
//params checking
 _model->setProjectionMatrixAsOrtho2D(p0 ,p1 ,p2 ,p3);

}
 void osg::QReflect_Camera::setProjectionMatrixAsPerspective( double  p0 , double  p1 , double  p2 , double  p3){
//params checking
 _model->setProjectionMatrixAsPerspective(p0 ,p1 ,p2 ,p3);

}
 void osg::QReflect_Camera::setProjectionResizePolicy(osg::QReflect_Camera::ProjectionResizePolicy  p0){
//params checking
 _model->setProjectionResizePolicy(static_cast<osg::Camera::ProjectionResizePolicy>(p0));
emit ProjectionResizePolicyChanged();

}
 void osg::QReflect_Camera::setReadBuffer( GLenum  p0){
//params checking
 _model->setReadBuffer(p0);
emit ReadBufferChanged();

}
 void osg::QReflect_Camera::setRenderOrder(osg::QReflect_Camera::RenderOrder  p0 , int  p1){
//params checking
 _model->setRenderOrder(static_cast<osg::Camera::RenderOrder>(p0) ,p1);

}
 void osg::QReflect_Camera::setRenderTargetImplementation(osg::QReflect_Camera::RenderTargetImplementation  p0 ,osg::QReflect_Camera::RenderTargetImplementation  p1){
//params checking
 _model->setRenderTargetImplementation(static_cast<osg::Camera::RenderTargetImplementation>(p0) ,static_cast<osg::Camera::RenderTargetImplementation>(p1));

}
 void osg::QReflect_Camera::setRenderTargetImplementation(osg::QReflect_Camera::RenderTargetImplementation  p0){
//params checking
 _model->setRenderTargetImplementation(static_cast<osg::Camera::RenderTargetImplementation>(p0));
emit RenderTargetImplementationChanged();

}
 void osg::QReflect_Camera::setRenderer(osg::QReflect_GraphicsOperation  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Camera::setRenderer : parameter n.0 is NULL\n"<<endl;return;}
 _model->setRenderer(p0->_model);
emit RendererChanged();

}
 void osg::QReflect_Camera::setRenderingCache(osg::QReflect_Object  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Camera::setRenderingCache : parameter n.0 is NULL\n"<<endl;return;}
 _model->setRenderingCache(p0->_model);
emit RenderingCacheChanged();

}
 void osg::QReflect_Camera::setStats(osg::QReflect_Stats  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Camera::setStats : parameter n.0 is NULL\n"<<endl;return;}
 _model->setStats(p0->_model);
emit StatsChanged();

}
 void osg::QReflect_Camera::setTransformOrder(osg::QReflect_Camera::TransformOrder  p0){
//params checking
 _model->setTransformOrder(static_cast<osg::Camera::TransformOrder>(p0));
emit TransformOrderChanged();

}
 void osg::QReflect_Camera::setView(osg::QReflect_View  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Camera::setView : parameter n.0 is NULL\n"<<endl;return;}
 _model->setView(p0->_model);
emit ViewChanged();

}
 void osg::QReflect_Camera::setViewMatrix(osg::QReflect_Matrixd  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Camera::setViewMatrix : parameter n.0 is NULL\n"<<endl;return;}
 _model->setViewMatrix(*p0->_model);

}
 void osg::QReflect_Camera::setViewMatrix(osg::QReflect_Matrixf  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Camera::setViewMatrix : parameter n.0 is NULL\n"<<endl;return;}
 _model->setViewMatrix(*p0->_model);

}
 void osg::QReflect_Camera::setViewMatrixAsLookAt(osg::QReflect_Vec3d  *p0 ,osg::QReflect_Vec3d  *p1 ,osg::QReflect_Vec3d  *p2){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Camera::setViewMatrixAsLookAt : parameter n.0 is NULL\n"<<endl;return;}
if(! p1) {std::cerr<<"PMOC: osg::QReflect_Camera::setViewMatrixAsLookAt : parameter n.1 is NULL\n"<<endl;return;}
if(! p2) {std::cerr<<"PMOC: osg::QReflect_Camera::setViewMatrixAsLookAt : parameter n.2 is NULL\n"<<endl;return;}
 _model->setViewMatrixAsLookAt(*p0->_model ,*p1->_model ,*p2->_model);

}
 void osg::QReflect_Camera::setViewport( int  p0 , int  p1 , int  p2 , int  p3){
//params checking
 _model->setViewport(p0 ,p1 ,p2 ,p3);

}
 void osg::QReflect_Camera::setViewport(osg::QReflect_Viewport  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Camera::setViewport : parameter n.0 is NULL\n"<<endl;return;}
 _model->setViewport(p0->_model);

}
osg::QReflect_Camera*osg::QReflect_Camera::asCamera()const{
//params checking
PMOCSAFEADDOBJECT(*_model->asCamera(),inst);
return inst.isValid()?((osg::QReflect_Camera * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Camera*osg::QReflect_Camera::asCamera(){
//params checking
PMOCSAFEADDOBJECT(*_model->asCamera(),inst);
return inst.isValid()?((osg::QReflect_Camera * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Camera::ProjectionResizePolicy  osg::QReflect_Camera::getProjectionResizePolicy()const{
//params checking
osg::QReflect_Camera::ProjectionResizePolicy ret=static_cast<osg::QReflect_Camera::ProjectionResizePolicy>( _model->getProjectionResizePolicy());return  ret;

}
osg::QReflect_Camera::RenderOrder  osg::QReflect_Camera::getRenderOrder()const{
//params checking
osg::QReflect_Camera::RenderOrder ret=static_cast<osg::QReflect_Camera::RenderOrder>( _model->getRenderOrder());return  ret;

}
osg::QReflect_Camera::RenderTargetImplementation  osg::QReflect_Camera::getRenderTargetFallback()const{
//params checking
osg::QReflect_Camera::RenderTargetImplementation ret=static_cast<osg::QReflect_Camera::RenderTargetImplementation>( _model->getRenderTargetFallback());return  ret;

}
osg::QReflect_Camera::RenderTargetImplementation  osg::QReflect_Camera::getRenderTargetImplementation()const{
//params checking
osg::QReflect_Camera::RenderTargetImplementation ret=static_cast<osg::QReflect_Camera::RenderTargetImplementation>( _model->getRenderTargetImplementation());return  ret;

}
osg::QReflect_Camera::TransformOrder  osg::QReflect_Camera::getTransformOrder()const{
//params checking
osg::QReflect_Camera::TransformOrder ret=static_cast<osg::QReflect_Camera::TransformOrder>( _model->getTransformOrder());return  ret;

}
osg::QReflect_ColorMask*osg::QReflect_Camera::getColorMask()const{
//params checking
PMOCSAFEADDOBJECT(*_model->getColorMask(),inst);
return inst.isValid()?((osg::QReflect_ColorMask * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_ColorMask*osg::QReflect_Camera::getColorMask(){
//params checking
PMOCSAFEADDOBJECT(*_model->getColorMask(),inst);
return inst.isValid()?((osg::QReflect_ColorMask * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_DisplaySettings*osg::QReflect_Camera::getDisplaySettings()const{
//params checking
PMOCSAFEADDOBJECT(*_model->getDisplaySettings(),inst);
return inst.isValid()?((osg::QReflect_DisplaySettings * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_DisplaySettings*osg::QReflect_Camera::getDisplaySettings(){
//params checking
PMOCSAFEADDOBJECT(*_model->getDisplaySettings(),inst);
return inst.isValid()?((osg::QReflect_DisplaySettings * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_GraphicsContext*osg::QReflect_Camera::getGraphicsContext()const{
//params checking
PMOCSAFEADDOBJECT(*_model->getGraphicsContext(),inst);
return inst.isValid()?((osg::QReflect_GraphicsContext * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_GraphicsContext*osg::QReflect_Camera::getGraphicsContext(){
//params checking
PMOCSAFEADDOBJECT(*_model->getGraphicsContext(),inst);
return inst.isValid()?((osg::QReflect_GraphicsContext * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_GraphicsOperation*osg::QReflect_Camera::getRenderer()const{
//params checking
PMOCSAFEADDOBJECT(*_model->getRenderer(),inst);
return inst.isValid()?((osg::QReflect_GraphicsOperation * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_GraphicsOperation*osg::QReflect_Camera::getRenderer(){
//params checking
PMOCSAFEADDOBJECT(*_model->getRenderer(),inst);
return inst.isValid()?((osg::QReflect_GraphicsOperation * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Object*osg::QReflect_Camera::getRenderingCache()const{
//params checking
PMOCSAFEADDOBJECT(*_model->getRenderingCache(),inst);
return inst.isValid()?((osg::QReflect_Object * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Object*osg::QReflect_Camera::getRenderingCache(){
//params checking
PMOCSAFEADDOBJECT(*_model->getRenderingCache(),inst);
return inst.isValid()?((osg::QReflect_Object * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_OperationThread*osg::QReflect_Camera::getCameraThread()const{
//params checking
PMOCSAFEADDOBJECT(*_model->getCameraThread(),inst);
return inst.isValid()?((osg::QReflect_OperationThread * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_OperationThread*osg::QReflect_Camera::getCameraThread(){
//params checking
PMOCSAFEADDOBJECT(*_model->getCameraThread(),inst);
return inst.isValid()?((osg::QReflect_OperationThread * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Stats*osg::QReflect_Camera::getStats()const{
//params checking
PMOCSAFEADDOBJECT(*_model->getStats(),inst);
return inst.isValid()?((osg::QReflect_Stats * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Stats*osg::QReflect_Camera::getStats(){
//params checking
PMOCSAFEADDOBJECT(*_model->getStats(),inst);
return inst.isValid()?((osg::QReflect_Stats * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_View*osg::QReflect_Camera::getView()const{
//params checking
PMOCSAFEADDOBJECT(*_model->getView(),inst);
return inst.isValid()?((osg::QReflect_View * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_View*osg::QReflect_Camera::getView(){
//params checking
PMOCSAFEADDOBJECT(*_model->getView(),inst);
return inst.isValid()?((osg::QReflect_View * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Viewport*osg::QReflect_Camera::getViewport()const{
//params checking
PMOCSAFEADDOBJECT(*_model->getViewport(),inst);
return inst.isValid()?((osg::QReflect_Viewport * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Viewport*osg::QReflect_Camera::getViewport(){
//params checking
PMOCSAFEADDOBJECT(*_model->getViewport(),inst);
return inst.isValid()?((osg::QReflect_Viewport * )inst.model->createQQModel(&inst)):NULL;
}

///DefaultConstructor////////////////
osg::QReflect_Camera::QReflect_Camera(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::Camera*>(i->ptr);
    _parentboxes[0]=0;
    _parentboxes[1]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_Camera::~QReflect_Camera( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
	if(_parentboxes[1])
delete _parentboxes[1];
}
///update this according _model new state
void osg::QReflect_Camera::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
	if(_parentboxes[1])
_parentboxes[1]->updateModel();
}
Instance osg::MetaQReflect_Camera::createInstance( ){
osg::ref_ptr<osg::Camera> osg_Camera_ptr	;
osg_Camera_ptr = new osg::Camera ()	;
Instance o(PMOCGETMETACLASS("osg::Camera"),(void*)osg_Camera_ptr.get()		,true);
_managedinstances.insert(osg_Camera_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_Camera::MetaQReflect_Camera():MetaQQuickClass( "osg::Camera"){
_typeid=&typeid(osg::Camera );
           qRegisterMetaType<osg::QMLCamera>();
           qRegisterMetaType<osg::QMLCamera*>("pmoc.osg.QMLCamera");
qmlRegisterType<osg::QReflect_Camera>("pmoc.osg",1,0,"QReflect_Camera");
           qmlRegisterType<osg::QMLCamera>("pmoc.osg",1,0,"QMLCamera");
};
const std::string osg::MetaQReflect_Camera::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_Camera::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_Camera::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_Camera::createQQModel(const Instance*i){ //return new MetaQReflect_Camera_QModel(i);}
QMLCamera *ret =new QMLCamera(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::CullSettings *mother =dynamic_cast<osg::CullSettings*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::CullSettings");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::CullSettings model for osg::Camerais invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::CullSettings");
if(!cl){std::cerr<<"osg::CullSettings QQModel for osg::Camerais not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
{
osg::Transform *mother =dynamic_cast<osg::Transform*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::Transform");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::Transform model for osg::Camerais invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::Transform");
if(!cl){std::cerr<<"osg::Transform QQModel for osg::Camerais not found"<<std::endl;return ret;}
ret->_parentboxes[1]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Camera_pmoc.cpp"
#endif
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/Camera_pmoc.hpp>
#include <customCode/osg/Camera_pmoc.hpp>
using namespace pmoc;

///DefaultConstructor////////////////
osg::QReflect_CameraRenderOrderSortOp::QReflect_CameraRenderOrderSortOp(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::CameraRenderOrderSortOp*>(i->ptr);
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_CameraRenderOrderSortOp::~QReflect_CameraRenderOrderSortOp( ){
 }
///update this according _model new state
void osg::QReflect_CameraRenderOrderSortOp::updateModel(){
}
Instance osg::MetaQReflect_CameraRenderOrderSortOp::createInstance( ){
std::cerr<<"osg::CameraRenderOrderSortOp is not instanciable"<<std::endl;return Instance();


}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_CameraRenderOrderSortOp::MetaQReflect_CameraRenderOrderSortOp():MetaQQuickClass( "osg::CameraRenderOrderSortOp"){
_typeid=&typeid(osg::CameraRenderOrderSortOp );
           qRegisterMetaType<osg::QMLCameraRenderOrderSortOp>();
           qRegisterMetaType<osg::QMLCameraRenderOrderSortOp*>("pmoc.osg.QMLCameraRenderOrderSortOp");
qmlRegisterType<osg::QReflect_CameraRenderOrderSortOp>("pmoc.osg",1,0,"QReflect_CameraRenderOrderSortOp");
           qmlRegisterType<osg::QMLCameraRenderOrderSortOp>("pmoc.osg",1,0,"QMLCameraRenderOrderSortOp");
};
const std::string osg::MetaQReflect_CameraRenderOrderSortOp::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_CameraRenderOrderSortOp::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_CameraRenderOrderSortOp::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_CameraRenderOrderSortOp::createQQModel(const Instance*i){ //return new MetaQReflect_CameraRenderOrderSortOp_QModel(i);}
QMLCameraRenderOrderSortOp *ret =new QMLCameraRenderOrderSortOp(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Camera_pmoc.cpp"
#endif





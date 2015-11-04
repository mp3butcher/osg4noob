#include <osg/Camera>
//includes
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/Camera_pmoc.hpp>
#include <customCode/osg/Camera_pmoc.hpp>
#include <customCode/osg/CullSettings_pmoc.hpp>
#include <customCode/osg/Transform_pmoc.hpp>
#include <customCode/osg/ColorMask_pmoc.hpp>
#include <customCode/osg/CullSettings_pmoc.hpp>
#include <customCode/osg/DisplaySettings_pmoc.hpp>
#include <customCode/osg/GraphicsContext_pmoc.hpp>
#include <customCode/osg/GraphicsThread_pmoc.hpp>
#include <customCode/osg/Image_pmoc.hpp>
#include <customCode/osg/Matrixd_pmoc.hpp>
#include <customCode/osg/Matrixf_pmoc.hpp>
#include <customCode/osg/Object_pmoc.hpp>
#include <customCode/osg/OperationThread_pmoc.hpp>
#include <customCode/osg/State_pmoc.hpp>
#include <customCode/osg/Stats_pmoc.hpp>
#include <customCode/osg/Texture_pmoc.hpp>
#include <customCode/osg/Vec3d_pmoc.hpp>
#include <customCode/osg/Vec4f_pmoc.hpp>
#include <customCode/osg/Viewport_pmoc.hpp>
#include <osg/DisplaySettings>
#include <osg/DisplaySettings_pmoc.hpp>
#include <osg/GraphicsContext>
#include <osg/GraphicsContext_pmoc.hpp>
#include <osg/GraphicsThread>
#include <osg/GraphicsThread_pmoc.hpp>
#include <osg/Object>
#include <osg/Object_pmoc.hpp>
#include <osg/OperationThread>
#include <osg/OperationThread_pmoc.hpp>
#include <osg/Stats>
#include <osg/Stats_pmoc.hpp>
using namespace pmoc;
 bool  osg::QReflect_Camera::isRenderToTextureCamera()const{
return _model->isRenderToTextureCamera();

}
 int  osg::QReflect_Camera::getImplicitBufferAttachmentRenderMask( bool p0)const{
return _model->getImplicitBufferAttachmentRenderMask(p0);

}
 int  osg::QReflect_Camera::getImplicitBufferAttachmentResolveMask( bool p0)const{
return _model->getImplicitBufferAttachmentResolveMask(p0);

}
 int  osg::QReflect_Camera::getRenderOrderNum()const{
return _model->getRenderOrderNum();

}
 void osg::QReflect_Camera::attach(osg::QReflect_Camera::BufferComponent p0 ,osg::QReflect_Image *p1 , unsigned int p2 , unsigned int p3){
 _model->attach(static_cast<osg::Camera::BufferComponent>(p0) ,p1->_model ,p2 ,p3);

}
 void osg::QReflect_Camera::attach(osg::QReflect_Camera::BufferComponent p0 ,osg::QReflect_Texture *p1 , unsigned int p2 , unsigned int p3 , bool p4 , unsigned int p5 , unsigned int p6){
 _model->attach(static_cast<osg::Camera::BufferComponent>(p0) ,p1->_model ,p2 ,p3 ,p4 ,p5 ,p6);

}
 void osg::QReflect_Camera::createCameraThread(){
 _model->createCameraThread();

}
 void osg::QReflect_Camera::detach(osg::QReflect_Camera::BufferComponent p0){
 _model->detach(static_cast<osg::Camera::BufferComponent>(p0));

}
 void osg::QReflect_Camera::dirtyAttachmentMap(){
 _model->dirtyAttachmentMap();

}
 void osg::QReflect_Camera::inheritCullSettings(osg::QReflect_CullSettings *p0 , unsigned int p1){
 _model->inheritCullSettings(*p0->_model ,p1);

}
 void osg::QReflect_Camera::releaseGLObjects(osg::QReflect_State *p0)const{
 _model->releaseGLObjects(p0->_model);

}
 void osg::QReflect_Camera::resize( int p0 , int p1 , int p2){
 _model->resize(p0 ,p1 ,p2);

}
 void osg::QReflect_Camera::resizeAttachments( int p0 , int p1){
 _model->resizeAttachments(p0 ,p1);

}
 void osg::QReflect_Camera::resizeGLObjectBuffers( unsigned int p0){
 _model->resizeGLObjectBuffers(p0);

}
 void osg::QReflect_Camera::setClearAccum(osg::QReflect_Vec4f *p0){
 _model->setClearAccum(*p0->_model);

}
 void osg::QReflect_Camera::setClearColor(osg::QReflect_Vec4f *p0){
 _model->setClearColor(*p0->_model);

}
 void osg::QReflect_Camera::setColorMask( bool p0 , bool p1 , bool p2 , bool p3){
 _model->setColorMask(p0 ,p1 ,p2 ,p3);

}
 void osg::QReflect_Camera::setColorMask(osg::QReflect_ColorMask *p0){
 _model->setColorMask(p0->_model);

}
 void osg::QReflect_Camera::setImplicitBufferAttachmentMask( int p0 , int p1){
 _model->setImplicitBufferAttachmentMask(p0 ,p1);

}
 void osg::QReflect_Camera::setImplicitBufferAttachmentRenderMask( int p0){
 _model->setImplicitBufferAttachmentRenderMask(p0);

}
 void osg::QReflect_Camera::setImplicitBufferAttachmentResolveMask( int p0){
 _model->setImplicitBufferAttachmentResolveMask(p0);

}
 void osg::QReflect_Camera::setProjectionMatrix(osg::QReflect_Matrixd *p0){
 _model->setProjectionMatrix(*p0->_model);

}
 void osg::QReflect_Camera::setProjectionMatrix(osg::QReflect_Matrixf *p0){
 _model->setProjectionMatrix(*p0->_model);

}
 void osg::QReflect_Camera::setProjectionMatrixAsFrustum( double p0 , double p1 , double p2 , double p3 , double p4 , double p5){
 _model->setProjectionMatrixAsFrustum(p0 ,p1 ,p2 ,p3 ,p4 ,p5);

}
 void osg::QReflect_Camera::setProjectionMatrixAsOrtho( double p0 , double p1 , double p2 , double p3 , double p4 , double p5){
 _model->setProjectionMatrixAsOrtho(p0 ,p1 ,p2 ,p3 ,p4 ,p5);

}
 void osg::QReflect_Camera::setProjectionMatrixAsOrtho2D( double p0 , double p1 , double p2 , double p3){
 _model->setProjectionMatrixAsOrtho2D(p0 ,p1 ,p2 ,p3);

}
 void osg::QReflect_Camera::setProjectionMatrixAsPerspective( double p0 , double p1 , double p2 , double p3){
 _model->setProjectionMatrixAsPerspective(p0 ,p1 ,p2 ,p3);

}
 void osg::QReflect_Camera::setProjectionResizePolicy(osg::QReflect_Camera::ProjectionResizePolicy p0){
 _model->setProjectionResizePolicy(static_cast<osg::Camera::ProjectionResizePolicy>(p0));

}
 void osg::QReflect_Camera::setRenderOrder(osg::QReflect_Camera::RenderOrder p0 , int p1){
 _model->setRenderOrder(static_cast<osg::Camera::RenderOrder>(p0) ,p1);

}
 void osg::QReflect_Camera::setRenderTargetImplementation(osg::QReflect_Camera::RenderTargetImplementation p0 ,osg::QReflect_Camera::RenderTargetImplementation p1){
 _model->setRenderTargetImplementation(static_cast<osg::Camera::RenderTargetImplementation>(p0) ,static_cast<osg::Camera::RenderTargetImplementation>(p1));

}
 void osg::QReflect_Camera::setRenderTargetImplementation(osg::QReflect_Camera::RenderTargetImplementation p0){
 _model->setRenderTargetImplementation(static_cast<osg::Camera::RenderTargetImplementation>(p0));

}
 void osg::QReflect_Camera::setTransformOrder(osg::QReflect_Camera::TransformOrder p0){
 _model->setTransformOrder(static_cast<osg::Camera::TransformOrder>(p0));

}
 void osg::QReflect_Camera::setViewMatrix(osg::QReflect_Matrixd *p0){
 _model->setViewMatrix(*p0->_model);

}
 void osg::QReflect_Camera::setViewMatrix(osg::QReflect_Matrixf *p0){
 _model->setViewMatrix(*p0->_model);

}
 void osg::QReflect_Camera::setViewMatrixAsLookAt(osg::QReflect_Vec3d *p0 ,osg::QReflect_Vec3d *p1 ,osg::QReflect_Vec3d *p2){
 _model->setViewMatrixAsLookAt(*p0->_model ,*p1->_model ,*p2->_model);

}
 void osg::QReflect_Camera::setViewport( int p0 , int p1 , int p2 , int p3){
 _model->setViewport(p0 ,p1 ,p2 ,p3);

}
 void osg::QReflect_Camera::setViewport(osg::QReflect_Viewport *p0){
 _model->setViewport(p0->_model);

}
const bool osg::QReflect_Camera::getAllowEventFocus()const{return _model->getAllowEventFocus();}
const double osg::QReflect_Camera::getClearDepth()const{return _model->getClearDepth();}
const int osg::QReflect_Camera::getClearStencil()const{return _model->getClearStencil();}
const unsigned int osg::QReflect_Camera::getAttachmentMapModifiedCount()const{return _model->getAttachmentMapModifiedCount();}
osg::QReflect_Camera*osg::QReflect_Camera::asCamera()const{
PMOCSAFEADDOBJECT(*_model->asCamera(),inst);
return inst.isValid()?((osg::QReflect_Camera * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Camera*osg::QReflect_Camera::asCamera(){
PMOCSAFEADDOBJECT(*_model->asCamera(),inst);
return inst.isValid()?((osg::QReflect_Camera * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Camera::ProjectionResizePolicy  osg::QReflect_Camera::getProjectionResizePolicy()const{
osg::QReflect_Camera::ProjectionResizePolicy ret=static_cast<osg::QReflect_Camera::ProjectionResizePolicy>( _model->getProjectionResizePolicy());return  ret;

}
osg::QReflect_Camera::RenderOrder  osg::QReflect_Camera::getRenderOrder()const{
osg::QReflect_Camera::RenderOrder ret=static_cast<osg::QReflect_Camera::RenderOrder>( _model->getRenderOrder());return  ret;

}
osg::QReflect_Camera::RenderTargetImplementation  osg::QReflect_Camera::getRenderTargetFallback()const{
osg::QReflect_Camera::RenderTargetImplementation ret=static_cast<osg::QReflect_Camera::RenderTargetImplementation>( _model->getRenderTargetFallback());return  ret;

}
osg::QReflect_Camera::RenderTargetImplementation  osg::QReflect_Camera::getRenderTargetImplementation()const{
osg::QReflect_Camera::RenderTargetImplementation ret=static_cast<osg::QReflect_Camera::RenderTargetImplementation>( _model->getRenderTargetImplementation());return  ret;

}
osg::QReflect_Camera::TransformOrder  osg::QReflect_Camera::getTransformOrder()const{
osg::QReflect_Camera::TransformOrder ret=static_cast<osg::QReflect_Camera::TransformOrder>( _model->getTransformOrder());return  ret;

}
osg::QReflect_ColorMask*osg::QReflect_Camera::getColorMask()const{
PMOCSAFEADDOBJECT(*_model->getColorMask(),inst);
return inst.isValid()?((osg::QReflect_ColorMask * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_ColorMask*osg::QReflect_Camera::getColorMask(){
PMOCSAFEADDOBJECT(*_model->getColorMask(),inst);
return inst.isValid()?((osg::QReflect_ColorMask * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_DisplaySettings * osg::QReflect_Camera::getDisplaySettings()const{
PMOCSAFEADDOBJECT(*_model->getDisplaySettings(),inst);
return inst.isValid()?((osg::QReflect_DisplaySettings * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_GraphicsContext * osg::QReflect_Camera::getGraphicsContext()const{
PMOCSAFEADDOBJECT(*_model->getGraphicsContext(),inst);
return inst.isValid()?((osg::QReflect_GraphicsContext * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_GraphicsOperation * osg::QReflect_Camera::getRenderer()const{
PMOCSAFEADDOBJECT(*_model->getRenderer(),inst);
return inst.isValid()?((osg::QReflect_GraphicsOperation * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Object * osg::QReflect_Camera::getRenderingCache()const{
PMOCSAFEADDOBJECT(*_model->getRenderingCache(),inst);
return inst.isValid()?((osg::QReflect_Object * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_OperationThread * osg::QReflect_Camera::getCameraThread()const{
PMOCSAFEADDOBJECT(*_model->getCameraThread(),inst);
return inst.isValid()?((osg::QReflect_OperationThread * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Stats * osg::QReflect_Camera::getStats()const{
PMOCSAFEADDOBJECT(*_model->getStats(),inst);
return inst.isValid()?((osg::QReflect_Stats * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Viewport*osg::QReflect_Camera::getViewport()const{
PMOCSAFEADDOBJECT(*_model->getViewport(),inst);
return inst.isValid()?((osg::QReflect_Viewport * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Viewport*osg::QReflect_Camera::getViewport(){
PMOCSAFEADDOBJECT(*_model->getViewport(),inst);
return inst.isValid()?((osg::QReflect_Viewport * )inst.model->createQQModel(&inst)):NULL;
}
void  osg::QReflect_Camera::setAllowEventFocus(const bool &par){_model->setAllowEventFocus(par);emit AllowEventFocusChanged(par);}
void  osg::QReflect_Camera::setAttachmentMapModifiedCount(const unsigned int &par){_model->setAttachmentMapModifiedCount(par);emit AttachmentMapModifiedCountChanged(par);}
void  osg::QReflect_Camera::setClearDepth(const double &par){_model->setClearDepth(par);emit ClearDepthChanged(par);}
void  osg::QReflect_Camera::setClearStencil(const int &par){_model->setClearStencil(par);emit ClearStencilChanged(par);}
void osg::QReflect_Camera::pmoc_reverse_setCameraThread( osg::QReflect_OperationThread *par){_model->setCameraThread(NULL);
emit CameraThreadChanged(NULL);
}
void osg::QReflect_Camera::pmoc_reverse_setDisplaySettings( osg::QReflect_DisplaySettings *par){_model->setDisplaySettings(NULL);
emit DisplaySettingsChanged(NULL);
}
void osg::QReflect_Camera::pmoc_reverse_setGraphicsContext( osg::QReflect_GraphicsContext *par){_model->setGraphicsContext(NULL);
emit GraphicsContextChanged(NULL);
}
void osg::QReflect_Camera::pmoc_reverse_setRenderer( osg::QReflect_GraphicsOperation *par){_model->setRenderer(NULL);
emit RendererChanged(NULL);
}
void osg::QReflect_Camera::pmoc_reverse_setRenderingCache( osg::QReflect_Object *par){_model->setRenderingCache(NULL);
emit RenderingCacheChanged(NULL);
}
void osg::QReflect_Camera::pmoc_reverse_setStats( osg::QReflect_Stats *par){_model->setStats(NULL);
emit StatsChanged(NULL);
}
void osg::QReflect_Camera::setCameraThread( osg::QReflect_OperationThread *par){_model->setCameraThread(par->_model);
emit CameraThreadChanged(par);
}
void osg::QReflect_Camera::setDisplaySettings( osg::QReflect_DisplaySettings *par){_model->setDisplaySettings(par->_model);
emit DisplaySettingsChanged(par);
}
void osg::QReflect_Camera::setGraphicsContext( osg::QReflect_GraphicsContext *par){_model->setGraphicsContext(par->_model);
emit GraphicsContextChanged(par);
}
void osg::QReflect_Camera::setRenderer( osg::QReflect_GraphicsOperation *par){_model->setRenderer(par->_model);
emit RendererChanged(par);
}
void osg::QReflect_Camera::setRenderingCache( osg::QReflect_Object *par){_model->setRenderingCache(par->_model);
emit RenderingCacheChanged(par);
}
void osg::QReflect_Camera::setStats( osg::QReflect_Stats *par){_model->setStats(par->_model);
emit StatsChanged(par);
}

///DefaultConstructor////////////////
osg::QReflect_Camera::QReflect_Camera(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
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
_typeid=&typeid(osg::Camera );           qRegisterMetaType<QMLCamera>();
qmlRegisterType<QReflect_Camera>("pmoc.osg",1,0,"QReflect_Camera");
           qmlRegisterType<QMLCamera>("pmoc.osg",1,0,"QMLCamera");
       PMOCACTION("getCameraThread","setCameraThread","unsetCameraThread");
       PMOCACTION("getDisplaySettings","setDisplaySettings","unsetDisplaySettings");
       PMOCACTION("getGraphicsContext","setGraphicsContext","unsetGraphicsContext");
       PMOCACTION("getRenderer","setRenderer","unsetRenderer");
       PMOCACTION("getRenderingCache","setRenderingCache","unsetRenderingCache");
       PMOCACTION("getStats","setStats","unsetStats");
};
const std::string osg::MetaQReflect_Camera::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_Camera::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_Camera::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_Camera::createQQModel(Instance*i){ //return new MetaQReflect_Camera_QModel(i);}
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
osg::QReflect_CameraRenderOrderSortOp::QReflect_CameraRenderOrderSortOp(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
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
_typeid=&typeid(osg::CameraRenderOrderSortOp );           qRegisterMetaType<QMLCameraRenderOrderSortOp>();
qmlRegisterType<QReflect_CameraRenderOrderSortOp>("pmoc.osg",1,0,"QReflect_CameraRenderOrderSortOp");
           qmlRegisterType<QMLCameraRenderOrderSortOp>("pmoc.osg",1,0,"QMLCameraRenderOrderSortOp");
};
const std::string osg::MetaQReflect_CameraRenderOrderSortOp::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_CameraRenderOrderSortOp::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_CameraRenderOrderSortOp::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_CameraRenderOrderSortOp::createQQModel(Instance*i){ //return new MetaQReflect_CameraRenderOrderSortOp_QModel(i);}
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




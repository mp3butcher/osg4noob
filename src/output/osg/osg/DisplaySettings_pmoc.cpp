#include <osg/DisplaySettings>
//includes

#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/DisplaySettings_pmoc.hpp>
#include <customCode/osg/DisplaySettings_pmoc.hpp>
#include <customCode/osg/Referenced_pmoc.hpp>
#include <customCode/osg/ArgumentParser_pmoc.hpp>
#include <customCode/osg/DisplaySettings_pmoc.hpp>
using namespace pmoc;
 bool  osg::QReflect_DisplaySettings:: getAccumBuffer()const{
//params checking
return _model->getAccumBuffer();

}
 bool  osg::QReflect_DisplaySettings:: getAlphaBuffer()const{
//params checking
return _model->getAlphaBuffer();

}
 bool  osg::QReflect_DisplaySettings:: getCompileContextsHint()const{
//params checking
return _model->getCompileContextsHint();

}
 bool  osg::QReflect_DisplaySettings:: getDepthBuffer()const{
//params checking
return _model->getDepthBuffer();

}
 bool  osg::QReflect_DisplaySettings:: getDoubleBuffer()const{
//params checking
return _model->getDoubleBuffer();

}
 bool  osg::QReflect_DisplaySettings:: getKeystoneHint()const{
//params checking
return _model->getKeystoneHint();

}
 bool  osg::QReflect_DisplaySettings:: getMultiSamples()const{
//params checking
return _model->getMultiSamples();

}
 bool  osg::QReflect_DisplaySettings:: getRGB()const{
//params checking
return _model->getRGB();

}
 bool  osg::QReflect_DisplaySettings:: getSerializeDrawDispatch()const{
//params checking
return _model->getSerializeDrawDispatch();

}
 bool  osg::QReflect_DisplaySettings:: getSplitStereoAutoAdjustAspectRatio()const{
//params checking
return _model->getSplitStereoAutoAdjustAspectRatio();

}
 bool  osg::QReflect_DisplaySettings:: getStencilBuffer()const{
//params checking
return _model->getStencilBuffer();

}
 bool  osg::QReflect_DisplaySettings:: getStereo()const{
//params checking
return _model->getStereo();

}
 bool  osg::QReflect_DisplaySettings:: getUseSceneViewForStereoHint()const{
//params checking
return _model->getUseSceneViewForStereoHint();

}
 float  osg::QReflect_DisplaySettings:: getEyeSeparation()const{
//params checking
return _model->getEyeSeparation();

}
 float  osg::QReflect_DisplaySettings:: getScreenDistance()const{
//params checking
return _model->getScreenDistance();

}
 float  osg::QReflect_DisplaySettings:: getScreenHeight()const{
//params checking
return _model->getScreenHeight();

}
 float  osg::QReflect_DisplaySettings:: getScreenWidth()const{
//params checking
return _model->getScreenWidth();

}
 int  osg::QReflect_DisplaySettings:: getImplicitBufferAttachmentRenderMask()const{
//params checking
return _model->getImplicitBufferAttachmentRenderMask();

}
 int  osg::QReflect_DisplaySettings:: getImplicitBufferAttachmentResolveMask()const{
//params checking
return _model->getImplicitBufferAttachmentResolveMask();

}
 int  osg::QReflect_DisplaySettings:: getNvOptimusEnablement()const{
//params checking
return _model->getNvOptimusEnablement();

}
 int  osg::QReflect_DisplaySettings:: getSplitStereoHorizontalSeparation()const{
//params checking
return _model->getSplitStereoHorizontalSeparation();

}
 int  osg::QReflect_DisplaySettings:: getSplitStereoVerticalSeparation()const{
//params checking
return _model->getSplitStereoVerticalSeparation();

}
 unsigned int  osg::QReflect_DisplaySettings:: getGLContextFlags()const{
//params checking
return _model->getGLContextFlags();

}
 unsigned int  osg::QReflect_DisplaySettings:: getGLContextProfileMask()const{
//params checking
return _model->getGLContextProfileMask();

}
 unsigned int  osg::QReflect_DisplaySettings:: getMaxBufferObjectPoolSize()const{
//params checking
return _model->getMaxBufferObjectPoolSize();

}
 unsigned int  osg::QReflect_DisplaySettings:: getMaxNumberOfGraphicsContexts()const{
//params checking
return _model->getMaxNumberOfGraphicsContexts();

}
 unsigned int  osg::QReflect_DisplaySettings:: getMaxTexturePoolSize()const{
//params checking
return _model->getMaxTexturePoolSize();

}
 unsigned int  osg::QReflect_DisplaySettings:: getMinimumNumAccumAlphaBits()const{
//params checking
return _model->getMinimumNumAccumAlphaBits();

}
 unsigned int  osg::QReflect_DisplaySettings:: getMinimumNumAccumBlueBits()const{
//params checking
return _model->getMinimumNumAccumBlueBits();

}
 unsigned int  osg::QReflect_DisplaySettings:: getMinimumNumAccumGreenBits()const{
//params checking
return _model->getMinimumNumAccumGreenBits();

}
 unsigned int  osg::QReflect_DisplaySettings:: getMinimumNumAccumRedBits()const{
//params checking
return _model->getMinimumNumAccumRedBits();

}
 unsigned int  osg::QReflect_DisplaySettings:: getMinimumNumAlphaBits()const{
//params checking
return _model->getMinimumNumAlphaBits();

}
 unsigned int  osg::QReflect_DisplaySettings:: getMinimumNumStencilBits()const{
//params checking
return _model->getMinimumNumStencilBits();

}
 unsigned int  osg::QReflect_DisplaySettings:: getNumMultiSamples()const{
//params checking
return _model->getNumMultiSamples();

}
 unsigned int  osg::QReflect_DisplaySettings:: getNumOfDatabaseThreadsHint()const{
//params checking
return _model->getNumOfDatabaseThreadsHint();

}
 unsigned int  osg::QReflect_DisplaySettings:: getNumOfHttpDatabaseThreadsHint()const{
//params checking
return _model->getNumOfHttpDatabaseThreadsHint();

}
 unsigned int  osg::QReflect_DisplaySettings:: getSyncSwapBuffers()const{
//params checking
return _model->getSyncSwapBuffers();

}
 void osg::QReflect_DisplaySettings::merge(osg::QReflect_DisplaySettings  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_DisplaySettings::merge : parameter n.0 is NULL\n"<<endl;return;}
 _model->merge(*p0->_model);

}
 void osg::QReflect_DisplaySettings::readCommandLine(osg::QReflect_ArgumentParser  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_DisplaySettings::readCommandLine : parameter n.0 is NULL\n"<<endl;return;}
 _model->readCommandLine(*p0->_model);

}
 void osg::QReflect_DisplaySettings::readEnvironmentalVariables(){
//params checking
 _model->readEnvironmentalVariables();

}
 void osg::QReflect_DisplaySettings::setApplication(const  QString  &p0){
//params checking
 _model->setApplication(std::string(p0.toStdString()));
emit ApplicationChanged();

}
 void osg::QReflect_DisplaySettings::setCompileContextsHint( bool  p0){
//params checking
 _model->setCompileContextsHint(p0);
emit CompileContextsHintChanged();

}
 void osg::QReflect_DisplaySettings::setDefaults(){
//params checking
 _model->setDefaults();

}
 void osg::QReflect_DisplaySettings::setDepthBuffer( bool  p0){
//params checking
 _model->setDepthBuffer(p0);
emit DepthBufferChanged();

}
 void osg::QReflect_DisplaySettings::setDisplaySettings(osg::QReflect_DisplaySettings  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_DisplaySettings::setDisplaySettings : parameter n.0 is NULL\n"<<endl;return;}
 _model->setDisplaySettings(*p0->_model);

}
 void osg::QReflect_DisplaySettings::setDisplayType(osg::QReflect_DisplaySettings::DisplayType  p0){
//params checking
 _model->setDisplayType(static_cast<osg::DisplaySettings::DisplayType>(p0));
emit DisplayTypeChanged();

}
 void osg::QReflect_DisplaySettings::setDoubleBuffer( bool  p0){
//params checking
 _model->setDoubleBuffer(p0);
emit DoubleBufferChanged();

}
 void osg::QReflect_DisplaySettings::setEyeSeparation( float  p0){
//params checking
 _model->setEyeSeparation(p0);
emit EyeSeparationChanged();

}
 void osg::QReflect_DisplaySettings::setGLContextFlags( unsigned int  p0){
//params checking
 _model->setGLContextFlags(p0);
emit GLContextFlagsChanged();

}
 void osg::QReflect_DisplaySettings::setGLContextProfileMask( unsigned int  p0){
//params checking
 _model->setGLContextProfileMask(p0);
emit GLContextProfileMaskChanged();

}
 void osg::QReflect_DisplaySettings::setGLContextVersion(const  QString  &p0){
//params checking
 _model->setGLContextVersion(std::string(p0.toStdString()));

}
 void osg::QReflect_DisplaySettings::setImplicitBufferAttachmentMask( int  p0 , int  p1){
//params checking
 _model->setImplicitBufferAttachmentMask(p0 ,p1);

}
 void osg::QReflect_DisplaySettings::setImplicitBufferAttachmentRenderMask( int  p0){
//params checking
 _model->setImplicitBufferAttachmentRenderMask(p0);
emit ImplicitBufferAttachmentRenderMaskChanged();

}
 void osg::QReflect_DisplaySettings::setImplicitBufferAttachmentResolveMask( int  p0){
//params checking
 _model->setImplicitBufferAttachmentResolveMask(p0);
emit ImplicitBufferAttachmentResolveMaskChanged();

}
 void osg::QReflect_DisplaySettings::setKeystoneHint( bool  p0){
//params checking
 _model->setKeystoneHint(p0);
emit KeystoneHintChanged();

}
 void osg::QReflect_DisplaySettings::setMaxBufferObjectPoolSize( unsigned int  p0){
//params checking
 _model->setMaxBufferObjectPoolSize(p0);
emit MaxBufferObjectPoolSizeChanged();

}
 void osg::QReflect_DisplaySettings::setMaxNumberOfGraphicsContexts( unsigned int  p0){
//params checking
 _model->setMaxNumberOfGraphicsContexts(p0);
emit MaxNumberOfGraphicsContextsChanged();

}
 void osg::QReflect_DisplaySettings::setMaxTexturePoolSize( unsigned int  p0){
//params checking
 _model->setMaxTexturePoolSize(p0);
emit MaxTexturePoolSizeChanged();

}
 void osg::QReflect_DisplaySettings::setMinimumNumAccumBits( unsigned int  p0 , unsigned int  p1 , unsigned int  p2 , unsigned int  p3){
//params checking
 _model->setMinimumNumAccumBits(p0 ,p1 ,p2 ,p3);

}
 void osg::QReflect_DisplaySettings::setMinimumNumAlphaBits( unsigned int  p0){
//params checking
 _model->setMinimumNumAlphaBits(p0);
emit MinimumNumAlphaBitsChanged();

}
 void osg::QReflect_DisplaySettings::setMinimumNumStencilBits( unsigned int  p0){
//params checking
 _model->setMinimumNumStencilBits(p0);
emit MinimumNumStencilBitsChanged();

}
 void osg::QReflect_DisplaySettings::setNumMultiSamples( unsigned int  p0){
//params checking
 _model->setNumMultiSamples(p0);
emit NumMultiSamplesChanged();

}
 void osg::QReflect_DisplaySettings::setNumOfDatabaseThreadsHint( unsigned int  p0){
//params checking
 _model->setNumOfDatabaseThreadsHint(p0);
emit NumOfDatabaseThreadsHintChanged();

}
 void osg::QReflect_DisplaySettings::setNumOfHttpDatabaseThreadsHint( unsigned int  p0){
//params checking
 _model->setNumOfHttpDatabaseThreadsHint(p0);
emit NumOfHttpDatabaseThreadsHintChanged();

}
 void osg::QReflect_DisplaySettings::setNvOptimusEnablement( int  p0){
//params checking
 _model->setNvOptimusEnablement(p0);
emit NvOptimusEnablementChanged();

}
 void osg::QReflect_DisplaySettings::setOSXMenubarBehavior(osg::QReflect_DisplaySettings::OSXMenubarBehavior  p0){
//params checking
 _model->setOSXMenubarBehavior(static_cast<osg::DisplaySettings::OSXMenubarBehavior>(p0));
emit OSXMenubarBehaviorChanged();

}
 void osg::QReflect_DisplaySettings::setRGB( bool  p0){
//params checking
 _model->setRGB(p0);
emit RGBChanged();

}
 void osg::QReflect_DisplaySettings::setScreenDistance( float  p0){
//params checking
 _model->setScreenDistance(p0);
emit ScreenDistanceChanged();

}
 void osg::QReflect_DisplaySettings::setScreenHeight( float  p0){
//params checking
 _model->setScreenHeight(p0);
emit ScreenHeightChanged();

}
 void osg::QReflect_DisplaySettings::setScreenWidth( float  p0){
//params checking
 _model->setScreenWidth(p0);
emit ScreenWidthChanged();

}
 void osg::QReflect_DisplaySettings::setSerializeDrawDispatch( bool  p0){
//params checking
 _model->setSerializeDrawDispatch(p0);
emit SerializeDrawDispatchChanged();

}
 void osg::QReflect_DisplaySettings::setSplitStereoAutoAdjustAspectRatio( bool  p0){
//params checking
 _model->setSplitStereoAutoAdjustAspectRatio(p0);
emit SplitStereoAutoAdjustAspectRatioChanged();

}
 void osg::QReflect_DisplaySettings::setSplitStereoHorizontalEyeMapping(osg::QReflect_DisplaySettings::SplitStereoHorizontalEyeMapping  p0){
//params checking
 _model->setSplitStereoHorizontalEyeMapping(static_cast<osg::DisplaySettings::SplitStereoHorizontalEyeMapping>(p0));
emit SplitStereoHorizontalEyeMappingChanged();

}
 void osg::QReflect_DisplaySettings::setSplitStereoHorizontalSeparation( int  p0){
//params checking
 _model->setSplitStereoHorizontalSeparation(p0);
emit SplitStereoHorizontalSeparationChanged();

}
 void osg::QReflect_DisplaySettings::setSplitStereoVerticalEyeMapping(osg::QReflect_DisplaySettings::SplitStereoVerticalEyeMapping  p0){
//params checking
 _model->setSplitStereoVerticalEyeMapping(static_cast<osg::DisplaySettings::SplitStereoVerticalEyeMapping>(p0));
emit SplitStereoVerticalEyeMappingChanged();

}
 void osg::QReflect_DisplaySettings::setSplitStereoVerticalSeparation( int  p0){
//params checking
 _model->setSplitStereoVerticalSeparation(p0);
emit SplitStereoVerticalSeparationChanged();

}
 void osg::QReflect_DisplaySettings::setStereo( bool  p0){
//params checking
 _model->setStereo(p0);
emit StereoChanged();

}
 void osg::QReflect_DisplaySettings::setStereoMode(osg::QReflect_DisplaySettings::StereoMode  p0){
//params checking
 _model->setStereoMode(static_cast<osg::DisplaySettings::StereoMode>(p0));
emit StereoModeChanged();

}
 void osg::QReflect_DisplaySettings::setSwapMethod(osg::QReflect_DisplaySettings::SwapMethod  p0){
//params checking
 _model->setSwapMethod(static_cast<osg::DisplaySettings::SwapMethod>(p0));
emit SwapMethodChanged();

}
 void osg::QReflect_DisplaySettings::setSyncSwapBuffers( unsigned int  p0){
//params checking
 _model->setSyncSwapBuffers(p0);
emit SyncSwapBuffersChanged();

}
 void osg::QReflect_DisplaySettings::setUseSceneViewForStereoHint( bool  p0){
//params checking
 _model->setUseSceneViewForStereoHint(p0);
emit UseSceneViewForStereoHintChanged();

}
QString  osg::QReflect_DisplaySettings::getApplication(){
//params checking
QString ret(_model->getApplication().c_str());return ret;

}
QString  osg::QReflect_DisplaySettings::getGLContextVersion()const{
//params checking
QString ret(_model->getGLContextVersion().c_str());return ret;

}
osg::QReflect_DisplaySettings::DisplayType  osg::QReflect_DisplaySettings::getDisplayType()const{
//params checking
osg::QReflect_DisplaySettings::DisplayType ret=static_cast<osg::QReflect_DisplaySettings::DisplayType>( _model->getDisplayType());return  ret;

}
osg::QReflect_DisplaySettings::OSXMenubarBehavior  osg::QReflect_DisplaySettings::getOSXMenubarBehavior()const{
//params checking
osg::QReflect_DisplaySettings::OSXMenubarBehavior ret=static_cast<osg::QReflect_DisplaySettings::OSXMenubarBehavior>( _model->getOSXMenubarBehavior());return  ret;

}
osg::QReflect_DisplaySettings::SplitStereoHorizontalEyeMapping  osg::QReflect_DisplaySettings::getSplitStereoHorizontalEyeMapping()const{
//params checking
osg::QReflect_DisplaySettings::SplitStereoHorizontalEyeMapping ret=static_cast<osg::QReflect_DisplaySettings::SplitStereoHorizontalEyeMapping>( _model->getSplitStereoHorizontalEyeMapping());return  ret;

}
osg::QReflect_DisplaySettings::SplitStereoVerticalEyeMapping  osg::QReflect_DisplaySettings::getSplitStereoVerticalEyeMapping()const{
//params checking
osg::QReflect_DisplaySettings::SplitStereoVerticalEyeMapping ret=static_cast<osg::QReflect_DisplaySettings::SplitStereoVerticalEyeMapping>( _model->getSplitStereoVerticalEyeMapping());return  ret;

}
osg::QReflect_DisplaySettings::StereoMode  osg::QReflect_DisplaySettings::getStereoMode()const{
//params checking
osg::QReflect_DisplaySettings::StereoMode ret=static_cast<osg::QReflect_DisplaySettings::StereoMode>( _model->getStereoMode());return  ret;

}
osg::QReflect_DisplaySettings::SwapMethod  osg::QReflect_DisplaySettings::getSwapMethod(){
//params checking
osg::QReflect_DisplaySettings::SwapMethod ret=static_cast<osg::QReflect_DisplaySettings::SwapMethod>( _model->getSwapMethod());return  ret;

}

///DefaultConstructor////////////////
osg::QReflect_DisplaySettings::QReflect_DisplaySettings(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::DisplaySettings*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_DisplaySettings::~QReflect_DisplaySettings( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_DisplaySettings::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_DisplaySettings::createInstance( ){
osg::ref_ptr<osg::DisplaySettings> osg_DisplaySettings_ptr	;
osg_DisplaySettings_ptr = new osg::DisplaySettings ()	;
Instance o(PMOCGETMETACLASS("osg::DisplaySettings"),(void*)osg_DisplaySettings_ptr.get()		,true);
_managedinstances.insert(osg_DisplaySettings_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_DisplaySettings::MetaQReflect_DisplaySettings():MetaQQuickClass( "osg::DisplaySettings"){
_typeid=&typeid(osg::DisplaySettings );
           qRegisterMetaType<osg::QMLDisplaySettings>();
           qRegisterMetaType<osg::QMLDisplaySettings*>("pmoc.osg.QMLDisplaySettings");
qmlRegisterType<osg::QReflect_DisplaySettings>("pmoc.osg",1,0,"QReflect_DisplaySettings");
           qmlRegisterType<osg::QMLDisplaySettings>("pmoc.osg",1,0,"QMLDisplaySettings");
};
const std::string osg::MetaQReflect_DisplaySettings::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_DisplaySettings::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_DisplaySettings::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_DisplaySettings::createQQModel(const Instance*i){ //return new MetaQReflect_DisplaySettings_QModel(i);}
QMLDisplaySettings *ret =new QMLDisplaySettings(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::Referenced *mother =dynamic_cast<osg::Referenced*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::Referenced");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::Referenced model for osg::DisplaySettingsis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::Referenced");
if(!cl){std::cerr<<"osg::Referenced QQModel for osg::DisplaySettingsis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_DisplaySettings_pmoc.cpp"
#endif





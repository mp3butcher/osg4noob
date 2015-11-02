#include <osg/DisplaySettings>
//includes
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/DisplaySettings_pmoc.hpp>
#include <customCode/osg/DisplaySettings_pmoc.hpp>
#include <customCode/osg/Referenced_pmoc.hpp>
#include <customCode/osg/DisplaySettings_pmoc.hpp>
using namespace pmoc;
 bool  osg::QReflect_DisplaySettings::getAccumBuffer()const{
return _model->getAccumBuffer();

}
 bool  osg::QReflect_DisplaySettings::getAlphaBuffer()const{
return _model->getAlphaBuffer();

}
 bool  osg::QReflect_DisplaySettings::getMultiSamples()const{
return _model->getMultiSamples();

}
 bool  osg::QReflect_DisplaySettings::getStencilBuffer()const{
return _model->getStencilBuffer();

}
 int  osg::QReflect_DisplaySettings::getImplicitBufferAttachmentRenderMask()const{
return _model->getImplicitBufferAttachmentRenderMask();

}
 int  osg::QReflect_DisplaySettings::getImplicitBufferAttachmentResolveMask()const{
return _model->getImplicitBufferAttachmentResolveMask();

}
 unsigned int  osg::QReflect_DisplaySettings::getMinimumNumAccumAlphaBits()const{
return _model->getMinimumNumAccumAlphaBits();

}
 unsigned int  osg::QReflect_DisplaySettings::getMinimumNumAccumBlueBits()const{
return _model->getMinimumNumAccumBlueBits();

}
 unsigned int  osg::QReflect_DisplaySettings::getMinimumNumAccumGreenBits()const{
return _model->getMinimumNumAccumGreenBits();

}
 unsigned int  osg::QReflect_DisplaySettings::getMinimumNumAccumRedBits()const{
return _model->getMinimumNumAccumRedBits();

}
 void osg::QReflect_DisplaySettings::merge(osg::QReflect_DisplaySettings *p0){
 _model->merge(*p0->_model);

}
 void osg::QReflect_DisplaySettings::readEnvironmentalVariables(){
 _model->readEnvironmentalVariables();

}
 void osg::QReflect_DisplaySettings::setDefaults(){
 _model->setDefaults();

}
 void osg::QReflect_DisplaySettings::setDisplaySettings(osg::QReflect_DisplaySettings *p0){
 _model->setDisplaySettings(*p0->_model);

}
 void osg::QReflect_DisplaySettings::setDisplayType(osg::QReflect_DisplaySettings::DisplayType p0){
 _model->setDisplayType(static_cast<osg::DisplaySettings::DisplayType>(p0));

}
 void osg::QReflect_DisplaySettings::setGLContextVersion(const  QString &p0){
 _model->setGLContextVersion(std::string(p0.toStdString()));

}
 void osg::QReflect_DisplaySettings::setImplicitBufferAttachmentMask( int p0 , int p1){
 _model->setImplicitBufferAttachmentMask(p0 ,p1);

}
 void osg::QReflect_DisplaySettings::setImplicitBufferAttachmentRenderMask( int p0){
 _model->setImplicitBufferAttachmentRenderMask(p0);

}
 void osg::QReflect_DisplaySettings::setImplicitBufferAttachmentResolveMask( int p0){
 _model->setImplicitBufferAttachmentResolveMask(p0);

}
 void osg::QReflect_DisplaySettings::setMinimumNumAccumBits( unsigned int p0 , unsigned int p1 , unsigned int p2 , unsigned int p3){
 _model->setMinimumNumAccumBits(p0 ,p1 ,p2 ,p3);

}
 void osg::QReflect_DisplaySettings::setOSXMenubarBehavior(osg::QReflect_DisplaySettings::OSXMenubarBehavior p0){
 _model->setOSXMenubarBehavior(static_cast<osg::DisplaySettings::OSXMenubarBehavior>(p0));

}
 void osg::QReflect_DisplaySettings::setSplitStereoHorizontalEyeMapping(osg::QReflect_DisplaySettings::SplitStereoHorizontalEyeMapping p0){
 _model->setSplitStereoHorizontalEyeMapping(static_cast<osg::DisplaySettings::SplitStereoHorizontalEyeMapping>(p0));

}
 void osg::QReflect_DisplaySettings::setSplitStereoVerticalEyeMapping(osg::QReflect_DisplaySettings::SplitStereoVerticalEyeMapping p0){
 _model->setSplitStereoVerticalEyeMapping(static_cast<osg::DisplaySettings::SplitStereoVerticalEyeMapping>(p0));

}
 void osg::QReflect_DisplaySettings::setStereoMode(osg::QReflect_DisplaySettings::StereoMode p0){
 _model->setStereoMode(static_cast<osg::DisplaySettings::StereoMode>(p0));

}
 void osg::QReflect_DisplaySettings::setSwapMethod(osg::QReflect_DisplaySettings::SwapMethod p0){
 _model->setSwapMethod(static_cast<osg::DisplaySettings::SwapMethod>(p0));

}
QString  osg::QReflect_DisplaySettings::getGLContextVersion()const{
QString ret(_model->getGLContextVersion().c_str());return ret;

}
const QString osg::QReflect_DisplaySettings::getApplication()const{return QString(_model->getApplication().c_str());}
const bool osg::QReflect_DisplaySettings::getCompileContextsHint()const{return _model->getCompileContextsHint();}
const bool osg::QReflect_DisplaySettings::getDepthBuffer()const{return _model->getDepthBuffer();}
const bool osg::QReflect_DisplaySettings::getDoubleBuffer()const{return _model->getDoubleBuffer();}
const bool osg::QReflect_DisplaySettings::getKeystoneHint()const{return _model->getKeystoneHint();}
const bool osg::QReflect_DisplaySettings::getRGB()const{return _model->getRGB();}
const bool osg::QReflect_DisplaySettings::getSerializeDrawDispatch()const{return _model->getSerializeDrawDispatch();}
const bool osg::QReflect_DisplaySettings::getSplitStereoAutoAdjustAspectRatio()const{return _model->getSplitStereoAutoAdjustAspectRatio();}
const bool osg::QReflect_DisplaySettings::getStereo()const{return _model->getStereo();}
const bool osg::QReflect_DisplaySettings::getUseSceneViewForStereoHint()const{return _model->getUseSceneViewForStereoHint();}
const float osg::QReflect_DisplaySettings::getEyeSeparation()const{return _model->getEyeSeparation();}
const float osg::QReflect_DisplaySettings::getScreenDistance()const{return _model->getScreenDistance();}
const float osg::QReflect_DisplaySettings::getScreenHeight()const{return _model->getScreenHeight();}
const float osg::QReflect_DisplaySettings::getScreenWidth()const{return _model->getScreenWidth();}
const int osg::QReflect_DisplaySettings::getNvOptimusEnablement()const{return _model->getNvOptimusEnablement();}
const int osg::QReflect_DisplaySettings::getSplitStereoHorizontalSeparation()const{return _model->getSplitStereoHorizontalSeparation();}
const int osg::QReflect_DisplaySettings::getSplitStereoVerticalSeparation()const{return _model->getSplitStereoVerticalSeparation();}
const unsigned int osg::QReflect_DisplaySettings::getGLContextFlags()const{return _model->getGLContextFlags();}
const unsigned int osg::QReflect_DisplaySettings::getGLContextProfileMask()const{return _model->getGLContextProfileMask();}
const unsigned int osg::QReflect_DisplaySettings::getMaxBufferObjectPoolSize()const{return _model->getMaxBufferObjectPoolSize();}
const unsigned int osg::QReflect_DisplaySettings::getMaxNumberOfGraphicsContexts()const{return _model->getMaxNumberOfGraphicsContexts();}
const unsigned int osg::QReflect_DisplaySettings::getMaxTexturePoolSize()const{return _model->getMaxTexturePoolSize();}
const unsigned int osg::QReflect_DisplaySettings::getMinimumNumAlphaBits()const{return _model->getMinimumNumAlphaBits();}
const unsigned int osg::QReflect_DisplaySettings::getMinimumNumStencilBits()const{return _model->getMinimumNumStencilBits();}
const unsigned int osg::QReflect_DisplaySettings::getNumMultiSamples()const{return _model->getNumMultiSamples();}
const unsigned int osg::QReflect_DisplaySettings::getNumOfDatabaseThreadsHint()const{return _model->getNumOfDatabaseThreadsHint();}
const unsigned int osg::QReflect_DisplaySettings::getNumOfHttpDatabaseThreadsHint()const{return _model->getNumOfHttpDatabaseThreadsHint();}
const unsigned int osg::QReflect_DisplaySettings::getSyncSwapBuffers()const{return _model->getSyncSwapBuffers();}
osg::QReflect_DisplaySettings::DisplayType  osg::QReflect_DisplaySettings::getDisplayType()const{
osg::QReflect_DisplaySettings::DisplayType ret=static_cast<osg::QReflect_DisplaySettings::DisplayType>( _model->getDisplayType());return  ret;

}
osg::QReflect_DisplaySettings::OSXMenubarBehavior  osg::QReflect_DisplaySettings::getOSXMenubarBehavior()const{
osg::QReflect_DisplaySettings::OSXMenubarBehavior ret=static_cast<osg::QReflect_DisplaySettings::OSXMenubarBehavior>( _model->getOSXMenubarBehavior());return  ret;

}
osg::QReflect_DisplaySettings::SplitStereoHorizontalEyeMapping  osg::QReflect_DisplaySettings::getSplitStereoHorizontalEyeMapping()const{
osg::QReflect_DisplaySettings::SplitStereoHorizontalEyeMapping ret=static_cast<osg::QReflect_DisplaySettings::SplitStereoHorizontalEyeMapping>( _model->getSplitStereoHorizontalEyeMapping());return  ret;

}
osg::QReflect_DisplaySettings::SplitStereoVerticalEyeMapping  osg::QReflect_DisplaySettings::getSplitStereoVerticalEyeMapping()const{
osg::QReflect_DisplaySettings::SplitStereoVerticalEyeMapping ret=static_cast<osg::QReflect_DisplaySettings::SplitStereoVerticalEyeMapping>( _model->getSplitStereoVerticalEyeMapping());return  ret;

}
osg::QReflect_DisplaySettings::StereoMode  osg::QReflect_DisplaySettings::getStereoMode()const{
osg::QReflect_DisplaySettings::StereoMode ret=static_cast<osg::QReflect_DisplaySettings::StereoMode>( _model->getStereoMode());return  ret;

}
osg::QReflect_DisplaySettings::SwapMethod  osg::QReflect_DisplaySettings::getSwapMethod(){
osg::QReflect_DisplaySettings::SwapMethod ret=static_cast<osg::QReflect_DisplaySettings::SwapMethod>( _model->getSwapMethod());return  ret;

}
void  osg::QReflect_DisplaySettings::setCompileContextsHint(const bool &par){_model->setCompileContextsHint(par);emit CompileContextsHintChanged(par);}
void  osg::QReflect_DisplaySettings::setDepthBuffer(const bool &par){_model->setDepthBuffer(par);emit DepthBufferChanged(par);}
void  osg::QReflect_DisplaySettings::setDoubleBuffer(const bool &par){_model->setDoubleBuffer(par);emit DoubleBufferChanged(par);}
void  osg::QReflect_DisplaySettings::setEyeSeparation(const float &par){_model->setEyeSeparation(par);emit EyeSeparationChanged(par);}
void  osg::QReflect_DisplaySettings::setGLContextFlags(const unsigned int &par){_model->setGLContextFlags(par);emit GLContextFlagsChanged(par);}
void  osg::QReflect_DisplaySettings::setGLContextProfileMask(const unsigned int &par){_model->setGLContextProfileMask(par);emit GLContextProfileMaskChanged(par);}
void  osg::QReflect_DisplaySettings::setKeystoneHint(const bool &par){_model->setKeystoneHint(par);emit KeystoneHintChanged(par);}
void  osg::QReflect_DisplaySettings::setMaxBufferObjectPoolSize(const unsigned int &par){_model->setMaxBufferObjectPoolSize(par);emit MaxBufferObjectPoolSizeChanged(par);}
void  osg::QReflect_DisplaySettings::setMaxNumberOfGraphicsContexts(const unsigned int &par){_model->setMaxNumberOfGraphicsContexts(par);emit MaxNumberOfGraphicsContextsChanged(par);}
void  osg::QReflect_DisplaySettings::setMaxTexturePoolSize(const unsigned int &par){_model->setMaxTexturePoolSize(par);emit MaxTexturePoolSizeChanged(par);}
void  osg::QReflect_DisplaySettings::setMinimumNumAlphaBits(const unsigned int &par){_model->setMinimumNumAlphaBits(par);emit MinimumNumAlphaBitsChanged(par);}
void  osg::QReflect_DisplaySettings::setMinimumNumStencilBits(const unsigned int &par){_model->setMinimumNumStencilBits(par);emit MinimumNumStencilBitsChanged(par);}
void  osg::QReflect_DisplaySettings::setNumMultiSamples(const unsigned int &par){_model->setNumMultiSamples(par);emit NumMultiSamplesChanged(par);}
void  osg::QReflect_DisplaySettings::setNumOfDatabaseThreadsHint(const unsigned int &par){_model->setNumOfDatabaseThreadsHint(par);emit NumOfDatabaseThreadsHintChanged(par);}
void  osg::QReflect_DisplaySettings::setNumOfHttpDatabaseThreadsHint(const unsigned int &par){_model->setNumOfHttpDatabaseThreadsHint(par);emit NumOfHttpDatabaseThreadsHintChanged(par);}
void  osg::QReflect_DisplaySettings::setNvOptimusEnablement(const int &par){_model->setNvOptimusEnablement(par);emit NvOptimusEnablementChanged(par);}
void  osg::QReflect_DisplaySettings::setRGB(const bool &par){_model->setRGB(par);emit RGBChanged(par);}
void  osg::QReflect_DisplaySettings::setScreenDistance(const float &par){_model->setScreenDistance(par);emit ScreenDistanceChanged(par);}
void  osg::QReflect_DisplaySettings::setScreenHeight(const float &par){_model->setScreenHeight(par);emit ScreenHeightChanged(par);}
void  osg::QReflect_DisplaySettings::setScreenWidth(const float &par){_model->setScreenWidth(par);emit ScreenWidthChanged(par);}
void  osg::QReflect_DisplaySettings::setSerializeDrawDispatch(const bool &par){_model->setSerializeDrawDispatch(par);emit SerializeDrawDispatchChanged(par);}
void  osg::QReflect_DisplaySettings::setSplitStereoAutoAdjustAspectRatio(const bool &par){_model->setSplitStereoAutoAdjustAspectRatio(par);emit SplitStereoAutoAdjustAspectRatioChanged(par);}
void  osg::QReflect_DisplaySettings::setSplitStereoHorizontalSeparation(const int &par){_model->setSplitStereoHorizontalSeparation(par);emit SplitStereoHorizontalSeparationChanged(par);}
void  osg::QReflect_DisplaySettings::setSplitStereoVerticalSeparation(const int &par){_model->setSplitStereoVerticalSeparation(par);emit SplitStereoVerticalSeparationChanged(par);}
void  osg::QReflect_DisplaySettings::setStereo(const bool &par){_model->setStereo(par);emit StereoChanged(par);}
void  osg::QReflect_DisplaySettings::setSyncSwapBuffers(const unsigned int &par){_model->setSyncSwapBuffers(par);emit SyncSwapBuffersChanged(par);}
void  osg::QReflect_DisplaySettings::setUseSceneViewForStereoHint(const bool &par){_model->setUseSceneViewForStereoHint(par);emit UseSceneViewForStereoHintChanged(par);}
void osg::QReflect_DisplaySettings::setApplication(const QString &par){_model->setApplication(par.toStdString());emit ApplicationChanged(par);}

///DefaultConstructor////////////////
osg::QReflect_DisplaySettings::QReflect_DisplaySettings(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
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
_typeid=&typeid(osg::DisplaySettings );           qRegisterMetaType<QMLDisplaySettings>();
qmlRegisterType<QReflect_DisplaySettings>("pmoc.osg",1,0,"QReflect_DisplaySettings");
           qmlRegisterType<QMLDisplaySettings>("pmoc.osg",1,0,"QMLDisplaySettings");
};
const std::string osg::MetaQReflect_DisplaySettings::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_DisplaySettings::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_DisplaySettings::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_DisplaySettings::createQQModel(Instance*i){ //return new MetaQReflect_DisplaySettings_QModel(i);}
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



#include <osg/CullSettings>
//includes

#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/CullSettings_pmoc.hpp>
#include <customCode/osg/CullSettings_pmoc.hpp>
#include <customCode/osg/ArgumentParser_pmoc.hpp>
#include <customCode/osg/CullSettings_pmoc.hpp>
using namespace pmoc;
 bool  osg::QReflect_CullSettings:: getDepthSortImpostorSprites()const{
//params checking
return _model->getDepthSortImpostorSprites();

}
 bool  osg::QReflect_CullSettings:: getImpostorsActive()const{
//params checking
return _model->getImpostorsActive();

}
 double  osg::QReflect_CullSettings:: getNearFarRatio()const{
//params checking
return _model->getNearFarRatio();

}
 float  osg::QReflect_CullSettings:: getImpostorPixelErrorThreshold()const{
//params checking
return _model->getImpostorPixelErrorThreshold();

}
 float  osg::QReflect_CullSettings:: getLODScale()const{
//params checking
return _model->getLODScale();

}
 float  osg::QReflect_CullSettings:: getSmallFeatureCullingPixelSize()const{
//params checking
return _model->getSmallFeatureCullingPixelSize();

}
 int  osg::QReflect_CullSettings:: getCullingMode()const{
//params checking
return _model->getCullingMode();

}
 int  osg::QReflect_CullSettings:: getInheritanceMask()const{
//params checking
return _model->getInheritanceMask();

}
 int  osg::QReflect_CullSettings:: getNumberOfFrameToKeepImpostorSprites()const{
//params checking
return _model->getNumberOfFrameToKeepImpostorSprites();

}
 unsigned int  osg::QReflect_CullSettings:: getCullMask()const{
//params checking
return _model->getCullMask();

}
 unsigned int  osg::QReflect_CullSettings:: getCullMaskLeft()const{
//params checking
return _model->getCullMaskLeft();

}
 unsigned int  osg::QReflect_CullSettings:: getCullMaskRight()const{
//params checking
return _model->getCullMaskRight();

}
 void osg::QReflect_CullSettings::applyMaskAction( unsigned int  p0){
//params checking
 _model->applyMaskAction(p0);

}
 void osg::QReflect_CullSettings::inheritCullSettings(osg::QReflect_CullSettings  *p0 , unsigned int  p1){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_CullSettings::inheritCullSettings : parameter n.0 is NULL\n"<<endl;return;}
 _model->inheritCullSettings(*p0->_model ,p1);

}
 void osg::QReflect_CullSettings::inheritCullSettings(osg::QReflect_CullSettings  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_CullSettings::inheritCullSettings : parameter n.0 is NULL\n"<<endl;return;}
 _model->inheritCullSettings(*p0->_model);

}
 void osg::QReflect_CullSettings::readCommandLine(osg::QReflect_ArgumentParser  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_CullSettings::readCommandLine : parameter n.0 is NULL\n"<<endl;return;}
 _model->readCommandLine(*p0->_model);

}
 void osg::QReflect_CullSettings::readEnvironmentalVariables(){
//params checking
 _model->readEnvironmentalVariables();

}
 void osg::QReflect_CullSettings::setComputeNearFarMode(osg::QReflect_CullSettings::ComputeNearFarMode  p0){
//params checking
 _model->setComputeNearFarMode(static_cast<osg::CullSettings::ComputeNearFarMode>(p0));
emit ComputeNearFarModeChanged();

}
 void osg::QReflect_CullSettings::setCullMask( unsigned int  p0){
//params checking
 _model->setCullMask(p0);
emit CullMaskChanged();

}
 void osg::QReflect_CullSettings::setCullMaskLeft( unsigned int  p0){
//params checking
 _model->setCullMaskLeft(p0);
emit CullMaskLeftChanged();

}
 void osg::QReflect_CullSettings::setCullMaskRight( unsigned int  p0){
//params checking
 _model->setCullMaskRight(p0);
emit CullMaskRightChanged();

}
 void osg::QReflect_CullSettings::setCullSettings(osg::QReflect_CullSettings  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_CullSettings::setCullSettings : parameter n.0 is NULL\n"<<endl;return;}
 _model->setCullSettings(*p0->_model);

}
 void osg::QReflect_CullSettings::setCullingMode( int  p0){
//params checking
 _model->setCullingMode(p0);
emit CullingModeChanged();

}
 void osg::QReflect_CullSettings::setDefaults(){
//params checking
 _model->setDefaults();

}
 void osg::QReflect_CullSettings::setDepthSortImpostorSprites( bool  p0){
//params checking
 _model->setDepthSortImpostorSprites(p0);
emit DepthSortImpostorSpritesChanged();

}
 void osg::QReflect_CullSettings::setImpostorPixelErrorThreshold( float  p0){
//params checking
 _model->setImpostorPixelErrorThreshold(p0);
emit ImpostorPixelErrorThresholdChanged();

}
 void osg::QReflect_CullSettings::setImpostorsActive( bool  p0){
//params checking
 _model->setImpostorsActive(p0);
emit ImpostorsActiveChanged();

}
 void osg::QReflect_CullSettings::setInheritanceMask( int  p0){
//params checking
 _model->setInheritanceMask(p0);
emit InheritanceMaskChanged();

}
 void osg::QReflect_CullSettings::setInheritanceMaskActionOnAttributeSetting(osg::QReflect_CullSettings::InheritanceMaskActionOnAttributeSetting  p0){
//params checking
 _model->setInheritanceMaskActionOnAttributeSetting(static_cast<osg::CullSettings::InheritanceMaskActionOnAttributeSetting>(p0));
emit InheritanceMaskActionOnAttributeSettingChanged();

}
 void osg::QReflect_CullSettings::setLODScale( float  p0){
//params checking
 _model->setLODScale(p0);
emit LODScaleChanged();

}
 void osg::QReflect_CullSettings::setNearFarRatio( double  p0){
//params checking
 _model->setNearFarRatio(p0);
emit NearFarRatioChanged();

}
 void osg::QReflect_CullSettings::setNumberOfFrameToKeepImpostorSprites( int  p0){
//params checking
 _model->setNumberOfFrameToKeepImpostorSprites(p0);
emit NumberOfFrameToKeepImpostorSpritesChanged();

}
 void osg::QReflect_CullSettings::setSmallFeatureCullingPixelSize( float  p0){
//params checking
 _model->setSmallFeatureCullingPixelSize(p0);
emit SmallFeatureCullingPixelSizeChanged();

}
osg::QReflect_CullSettings::ComputeNearFarMode  osg::QReflect_CullSettings::getComputeNearFarMode()const{
//params checking
osg::QReflect_CullSettings::ComputeNearFarMode ret=static_cast<osg::QReflect_CullSettings::ComputeNearFarMode>( _model->getComputeNearFarMode());return  ret;

}
osg::QReflect_CullSettings::InheritanceMaskActionOnAttributeSetting  osg::QReflect_CullSettings::getInheritanceMaskActionOnAttributeSetting()const{
//params checking
osg::QReflect_CullSettings::InheritanceMaskActionOnAttributeSetting ret=static_cast<osg::QReflect_CullSettings::InheritanceMaskActionOnAttributeSetting>( _model->getInheritanceMaskActionOnAttributeSetting());return  ret;

}

///DefaultConstructor////////////////
osg::QReflect_CullSettings::QReflect_CullSettings(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::CullSettings*>(i->ptr);
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_CullSettings::~QReflect_CullSettings( ){
 }
///update this according _model new state
void osg::QReflect_CullSettings::updateModel(){
}
Instance osg::MetaQReflect_CullSettings::createInstance( ){
osg::CullSettings* osg_CullSettings_ptr	;
osg_CullSettings_ptr= new osg::CullSettings()	;
Instance o(PMOCGETMETACLASS("osg::CullSettings"),(void*)osg_CullSettings_ptr	,true);
_managedinstances.insert(osg_CullSettings_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_CullSettings::MetaQReflect_CullSettings():MetaQQuickClass( "osg::CullSettings"){
_typeid=&typeid(osg::CullSettings );
           qRegisterMetaType<osg::QMLCullSettings>();
           qRegisterMetaType<osg::QMLCullSettings*>("pmoc.osg.QMLCullSettings");
qmlRegisterType<osg::QReflect_CullSettings>("pmoc.osg",1,0,"QReflect_CullSettings");
           qmlRegisterType<osg::QMLCullSettings>("pmoc.osg",1,0,"QMLCullSettings");
};
const std::string osg::MetaQReflect_CullSettings::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_CullSettings::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_CullSettings::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_CullSettings::createQQModel(const Instance*i){ //return new MetaQReflect_CullSettings_QModel(i);}
QMLCullSettings *ret =new QMLCullSettings(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_CullSettings_pmoc.cpp"
#endif





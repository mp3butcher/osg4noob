#include <osg/CullSettings>
//includes
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/CullSettings_pmoc.hpp>
#include <customCode/osg/CullSettings_pmoc.hpp>
#include <customCode/osg/CullSettings_pmoc.hpp>
using namespace pmoc;
 int  osg::QReflect_CullSettings::getCullingMode()const{
return _model->getCullingMode();

}
 int  osg::QReflect_CullSettings::getInheritanceMask()const{
return _model->getInheritanceMask();

}
 unsigned int  osg::QReflect_CullSettings::getCullMask()const{
return _model->getCullMask();

}
 unsigned int  osg::QReflect_CullSettings::getCullMaskLeft()const{
return _model->getCullMaskLeft();

}
 unsigned int  osg::QReflect_CullSettings::getCullMaskRight()const{
return _model->getCullMaskRight();

}
 void osg::QReflect_CullSettings::applyMaskAction( unsigned int p0){
 _model->applyMaskAction(p0);

}
 void osg::QReflect_CullSettings::inheritCullSettings(osg::QReflect_CullSettings *p0 , unsigned int p1){
 _model->inheritCullSettings(*p0->_model ,p1);

}
 void osg::QReflect_CullSettings::inheritCullSettings(osg::QReflect_CullSettings *p0){
 _model->inheritCullSettings(*p0->_model);

}
 void osg::QReflect_CullSettings::readEnvironmentalVariables(){
 _model->readEnvironmentalVariables();

}
 void osg::QReflect_CullSettings::setComputeNearFarMode(osg::QReflect_CullSettings::ComputeNearFarMode p0){
 _model->setComputeNearFarMode(static_cast<osg::CullSettings::ComputeNearFarMode>(p0));

}
 void osg::QReflect_CullSettings::setCullMask( unsigned int p0){
 _model->setCullMask(p0);

}
 void osg::QReflect_CullSettings::setCullMaskLeft( unsigned int p0){
 _model->setCullMaskLeft(p0);

}
 void osg::QReflect_CullSettings::setCullMaskRight( unsigned int p0){
 _model->setCullMaskRight(p0);

}
 void osg::QReflect_CullSettings::setCullSettings(osg::QReflect_CullSettings *p0){
 _model->setCullSettings(*p0->_model);

}
 void osg::QReflect_CullSettings::setCullingMode( int p0){
 _model->setCullingMode(p0);

}
 void osg::QReflect_CullSettings::setDefaults(){
 _model->setDefaults();

}
 void osg::QReflect_CullSettings::setInheritanceMask( int p0){
 _model->setInheritanceMask(p0);

}
 void osg::QReflect_CullSettings::setInheritanceMaskActionOnAttributeSetting(osg::QReflect_CullSettings::InheritanceMaskActionOnAttributeSetting p0){
 _model->setInheritanceMaskActionOnAttributeSetting(static_cast<osg::CullSettings::InheritanceMaskActionOnAttributeSetting>(p0));

}
const bool osg::QReflect_CullSettings::getDepthSortImpostorSprites()const{return _model->getDepthSortImpostorSprites();}
const bool osg::QReflect_CullSettings::getImpostorsActive()const{return _model->getImpostorsActive();}
const double osg::QReflect_CullSettings::getNearFarRatio()const{return _model->getNearFarRatio();}
const float osg::QReflect_CullSettings::getImpostorPixelErrorThreshold()const{return _model->getImpostorPixelErrorThreshold();}
const float osg::QReflect_CullSettings::getLODScale()const{return _model->getLODScale();}
const float osg::QReflect_CullSettings::getSmallFeatureCullingPixelSize()const{return _model->getSmallFeatureCullingPixelSize();}
const int osg::QReflect_CullSettings::getNumberOfFrameToKeepImpostorSprites()const{return _model->getNumberOfFrameToKeepImpostorSprites();}
osg::QReflect_CullSettings::ComputeNearFarMode  osg::QReflect_CullSettings::getComputeNearFarMode()const{
osg::QReflect_CullSettings::ComputeNearFarMode ret=static_cast<osg::QReflect_CullSettings::ComputeNearFarMode>( _model->getComputeNearFarMode());return  ret;

}
osg::QReflect_CullSettings::InheritanceMaskActionOnAttributeSetting  osg::QReflect_CullSettings::getInheritanceMaskActionOnAttributeSetting()const{
osg::QReflect_CullSettings::InheritanceMaskActionOnAttributeSetting ret=static_cast<osg::QReflect_CullSettings::InheritanceMaskActionOnAttributeSetting>( _model->getInheritanceMaskActionOnAttributeSetting());return  ret;

}
void  osg::QReflect_CullSettings::setDepthSortImpostorSprites(const bool &par){_model->setDepthSortImpostorSprites(par);emit DepthSortImpostorSpritesChanged(par);}
void  osg::QReflect_CullSettings::setImpostorPixelErrorThreshold(const float &par){_model->setImpostorPixelErrorThreshold(par);emit ImpostorPixelErrorThresholdChanged(par);}
void  osg::QReflect_CullSettings::setImpostorsActive(const bool &par){_model->setImpostorsActive(par);emit ImpostorsActiveChanged(par);}
void  osg::QReflect_CullSettings::setLODScale(const float &par){_model->setLODScale(par);emit LODScaleChanged(par);}
void  osg::QReflect_CullSettings::setNearFarRatio(const double &par){_model->setNearFarRatio(par);emit NearFarRatioChanged(par);}
void  osg::QReflect_CullSettings::setNumberOfFrameToKeepImpostorSprites(const int &par){_model->setNumberOfFrameToKeepImpostorSprites(par);emit NumberOfFrameToKeepImpostorSpritesChanged(par);}
void  osg::QReflect_CullSettings::setSmallFeatureCullingPixelSize(const float &par){_model->setSmallFeatureCullingPixelSize(par);emit SmallFeatureCullingPixelSizeChanged(par);}

///DefaultConstructor////////////////
osg::QReflect_CullSettings::QReflect_CullSettings(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
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
_typeid=&typeid(osg::CullSettings );           qRegisterMetaType<QMLCullSettings>();
qmlRegisterType<QReflect_CullSettings>("pmoc.osg",1,0,"QReflect_CullSettings");
           qmlRegisterType<QMLCullSettings>("pmoc.osg",1,0,"QMLCullSettings");
};
const std::string osg::MetaQReflect_CullSettings::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_CullSettings::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_CullSettings::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_CullSettings::createQQModel(Instance*i){ //return new MetaQReflect_CullSettings_QModel(i);}
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




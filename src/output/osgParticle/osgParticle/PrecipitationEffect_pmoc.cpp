#include <osgParticle/PrecipitationEffect>
//includes


#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osgParticle/PrecipitationEffect_pmoc.hpp>
#include <customCode/osgParticle/PrecipitationEffect_pmoc.hpp>
#include <customCode/osg/Node_pmoc.hpp>
#include <customCode/osg/Fog_pmoc.hpp>
#include <customCode/osg/Geometry_pmoc.hpp>
#include <customCode/osg/NodeVisitor_pmoc.hpp>
#include <customCode/osg/Object_pmoc.hpp>
#include <customCode/osg/StateSet_pmoc.hpp>
#include <customCode/osg/Vec3f_pmoc.hpp>
#include <customCode/osg/Vec4f_pmoc.hpp>
using namespace pmoc;
 bool  osgParticle::QReflect_PrecipitationEffect:: getUseFarLineSegments()const{
//params checking
return _model->getUseFarLineSegments();

}
 bool  osgParticle::QReflect_PrecipitationEffect:: isSameKindAs(osg::QReflect_Object  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osgParticle::QReflect_PrecipitationEffect::isSameKindAs : parameter n.0 is NULL\n"<<endl;return -1;}
return _model->isSameKindAs(p0->_model);

}
 float  osgParticle::QReflect_PrecipitationEffect:: getFarTransition()const{
//params checking
return _model->getFarTransition();

}
 float  osgParticle::QReflect_PrecipitationEffect:: getMaximumParticleDensity()const{
//params checking
return _model->getMaximumParticleDensity();

}
 float  osgParticle::QReflect_PrecipitationEffect:: getNearTransition()const{
//params checking
return _model->getNearTransition();

}
 float  osgParticle::QReflect_PrecipitationEffect:: getParticleSize()const{
//params checking
return _model->getParticleSize();

}
 float  osgParticle::QReflect_PrecipitationEffect:: getParticleSpeed()const{
//params checking
return _model->getParticleSpeed();

}
 void osgParticle::QReflect_PrecipitationEffect::accept(osg::QReflect_NodeVisitor  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osgParticle::QReflect_PrecipitationEffect::accept : parameter n.0 is NULL\n"<<endl;return;}
 _model->accept(*p0->_model);

}
 void osgParticle::QReflect_PrecipitationEffect::rain( float  p0){
//params checking
 _model->rain(p0);

}
 void osgParticle::QReflect_PrecipitationEffect::setCellSize(osg::QReflect_Vec3f  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osgParticle::QReflect_PrecipitationEffect::setCellSize : parameter n.0 is NULL\n"<<endl;return;}
 _model->setCellSize(*p0->_model);

}
 void osgParticle::QReflect_PrecipitationEffect::setFarTransition( float  p0){
//params checking
 _model->setFarTransition(p0);
emit FarTransitionChanged();

}
 void osgParticle::QReflect_PrecipitationEffect::setFog(osg::QReflect_Fog  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osgParticle::QReflect_PrecipitationEffect::setFog : parameter n.0 is NULL\n"<<endl;return;}
 _model->setFog(p0->_model);
emit FogChanged();

}
 void osgParticle::QReflect_PrecipitationEffect::setMaximumParticleDensity( float  p0){
//params checking
 _model->setMaximumParticleDensity(p0);
emit MaximumParticleDensityChanged();

}
 void osgParticle::QReflect_PrecipitationEffect::setNearTransition( float  p0){
//params checking
 _model->setNearTransition(p0);
emit NearTransitionChanged();

}
 void osgParticle::QReflect_PrecipitationEffect::setParticleColor(osg::QReflect_Vec4f  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osgParticle::QReflect_PrecipitationEffect::setParticleColor : parameter n.0 is NULL\n"<<endl;return;}
 _model->setParticleColor(*p0->_model);

}
 void osgParticle::QReflect_PrecipitationEffect::setParticleSize( float  p0){
//params checking
 _model->setParticleSize(p0);
emit ParticleSizeChanged();

}
 void osgParticle::QReflect_PrecipitationEffect::setParticleSpeed( float  p0){
//params checking
 _model->setParticleSpeed(p0);
emit ParticleSpeedChanged();

}
 void osgParticle::QReflect_PrecipitationEffect::setPosition(osg::QReflect_Vec3f  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osgParticle::QReflect_PrecipitationEffect::setPosition : parameter n.0 is NULL\n"<<endl;return;}
 _model->setPosition(*p0->_model);

}
 void osgParticle::QReflect_PrecipitationEffect::setUseFarLineSegments( bool  p0){
//params checking
 _model->setUseFarLineSegments(p0);
emit UseFarLineSegmentsChanged();

}
 void osgParticle::QReflect_PrecipitationEffect::setWind(osg::QReflect_Vec3f  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osgParticle::QReflect_PrecipitationEffect::setWind : parameter n.0 is NULL\n"<<endl;return;}
 _model->setWind(*p0->_model);

}
 void osgParticle::QReflect_PrecipitationEffect::snow( float  p0){
//params checking
 _model->snow(p0);

}
 void osgParticle::QReflect_PrecipitationEffect::traverse(osg::QReflect_NodeVisitor  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osgParticle::QReflect_PrecipitationEffect::traverse : parameter n.0 is NULL\n"<<endl;return;}
 _model->traverse(*p0->_model);

}
const  char*  osgParticle::QReflect_PrecipitationEffect:: className()const{
//params checking
return _model->className();

}
const  char*  osgParticle::QReflect_PrecipitationEffect:: libraryName()const{
//params checking
return _model->libraryName();

}
osg::QReflect_Fog*osgParticle::QReflect_PrecipitationEffect::getFog()const{
//params checking
PMOCSAFEADDOBJECT(*_model->getFog(),inst);
return inst.isValid()?((osg::QReflect_Fog * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Fog*osgParticle::QReflect_PrecipitationEffect::getFog(){
//params checking
PMOCSAFEADDOBJECT(*_model->getFog(),inst);
return inst.isValid()?((osg::QReflect_Fog * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Geometry*osgParticle::QReflect_PrecipitationEffect::getLineGeometry(){
//params checking
PMOCSAFEADDOBJECT(*_model->getLineGeometry(),inst);
return inst.isValid()?((osg::QReflect_Geometry * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Geometry*osgParticle::QReflect_PrecipitationEffect::getPointGeometry(){
//params checking
PMOCSAFEADDOBJECT(*_model->getPointGeometry(),inst);
return inst.isValid()?((osg::QReflect_Geometry * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Geometry*osgParticle::QReflect_PrecipitationEffect::getQuadGeometry(){
//params checking
PMOCSAFEADDOBJECT(*_model->getQuadGeometry(),inst);
return inst.isValid()?((osg::QReflect_Geometry * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_StateSet*osgParticle::QReflect_PrecipitationEffect::getLineStateSet(){
//params checking
PMOCSAFEADDOBJECT(*_model->getLineStateSet(),inst);
return inst.isValid()?((osg::QReflect_StateSet * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_StateSet*osgParticle::QReflect_PrecipitationEffect::getPointStateSet(){
//params checking
PMOCSAFEADDOBJECT(*_model->getPointStateSet(),inst);
return inst.isValid()?((osg::QReflect_StateSet * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_StateSet*osgParticle::QReflect_PrecipitationEffect::getQuadStateSet(){
//params checking
PMOCSAFEADDOBJECT(*_model->getQuadStateSet(),inst);
return inst.isValid()?((osg::QReflect_StateSet * )inst.model->createQQModel(&inst)):NULL;
}

///DefaultConstructor////////////////
osgParticle::QReflect_PrecipitationEffect::QReflect_PrecipitationEffect(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osgParticle::PrecipitationEffect*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osgParticle::QReflect_PrecipitationEffect::~QReflect_PrecipitationEffect( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osgParticle::QReflect_PrecipitationEffect::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osgParticle::MetaQReflect_PrecipitationEffect::createInstance( ){
osg::ref_ptr<osgParticle::PrecipitationEffect> osgParticle_PrecipitationEffect_ptr	;
osgParticle_PrecipitationEffect_ptr = new osgParticle::PrecipitationEffect ()	;
Instance o(PMOCGETMETACLASS("osgParticle::PrecipitationEffect"),(void*)osgParticle_PrecipitationEffect_ptr.get()		,true);
_managedinstances.insert(osgParticle_PrecipitationEffect_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osgParticle::MetaQReflect_PrecipitationEffect::MetaQReflect_PrecipitationEffect():MetaQQuickClass( "osgParticle::PrecipitationEffect"){
_typeid=&typeid(osgParticle::PrecipitationEffect );
           qRegisterMetaType<osgParticle::QMLPrecipitationEffect>();
           qRegisterMetaType<osgParticle::QMLPrecipitationEffect*>("pmoc.osgParticle.QMLPrecipitationEffect");
qmlRegisterType<osgParticle::QReflect_PrecipitationEffect>("pmoc.osgParticle",1,0,"QReflect_PrecipitationEffect");
           qmlRegisterType<osgParticle::QMLPrecipitationEffect>("pmoc.osgParticle",1,0,"QMLPrecipitationEffect");
};
const std::string osgParticle::MetaQReflect_PrecipitationEffect::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osgParticle::MetaQReflect_PrecipitationEffect::PREcompoQML()const{return std::string("");}
const std::string osgParticle::MetaQReflect_PrecipitationEffect::POSTcompoQML()const{return std::string("");}
QQModel* osgParticle::MetaQReflect_PrecipitationEffect::createQQModel(const Instance*i){ //return new MetaQReflect_PrecipitationEffect_QModel(i);}
QMLPrecipitationEffect *ret =new QMLPrecipitationEffect(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::Node *mother =dynamic_cast<osg::Node*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::Node");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::Node model for osgParticle::PrecipitationEffectis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::Node");
if(!cl){std::cerr<<"osg::Node QQModel for osgParticle::PrecipitationEffectis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_PrecipitationEffect_pmoc.cpp"
#endif





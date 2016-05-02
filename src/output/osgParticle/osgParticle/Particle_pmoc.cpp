#include <osgParticle/Particle>
//includes


#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osgParticle/Particle_pmoc.hpp>
#include <customCode/osgParticle/Particle_pmoc.hpp>
#include <customCode/osg/Drawable_pmoc.hpp>
#include <customCode/osg/GLBeginEndAdapter_pmoc.hpp>
#include <customCode/osg/Matrixd_pmoc.hpp>
#include <customCode/osg/RenderInfo_pmoc.hpp>
#include <customCode/osg/Vec3f_pmoc.hpp>
#include <customCode/osgParticle/Interpolator_pmoc.hpp>
#include <customCode/osgParticle/ParticleSystem_pmoc.hpp>
#include <customCode/osgParticle/Particle_pmoc.hpp>
using namespace pmoc;
 bool  osgParticle::QReflect_Particle:: isAlive()const{
//params checking
return _model->isAlive();

}
 bool  osgParticle::QReflect_Particle:: operator<(osgParticle::QReflect_Particle  &p0)const{
//params checking
return _model->operator<(*p0._model);

}
 bool  osgParticle::QReflect_Particle:: update( double  p0 , bool  p1){
//params checking
return _model->update(p0 ,p1);

}
 double  osgParticle::QReflect_Particle:: getAge()const{
//params checking
return _model->getAge();

}
 double  osgParticle::QReflect_Particle:: getDepth()const{
//params checking
return _model->getDepth();

}
 double  osgParticle::QReflect_Particle:: getLifeTime()const{
//params checking
return _model->getLifeTime();

}
 float  osgParticle::QReflect_Particle:: getCurrentAlpha()const{
//params checking
return _model->getCurrentAlpha();

}
 float  osgParticle::QReflect_Particle:: getCurrentSize()const{
//params checking
return _model->getCurrentSize();

}
 float  osgParticle::QReflect_Particle:: getMass()const{
//params checking
return _model->getMass();

}
 float  osgParticle::QReflect_Particle:: getMassInv()const{
//params checking
return _model->getMassInv();

}
 float  osgParticle::QReflect_Particle:: getRadius()const{
//params checking
return _model->getRadius();

}
 float  osgParticle::QReflect_Particle:: getSTexCoord()const{
//params checking
return _model->getSTexCoord();

}
 float  osgParticle::QReflect_Particle:: getTTexCoord()const{
//params checking
return _model->getTTexCoord();

}
 int  osgParticle::QReflect_Particle:: getEndTile()const{
//params checking
return _model->getEndTile();

}
 int  osgParticle::QReflect_Particle:: getNextParticle()const{
//params checking
return _model->getNextParticle();

}
 int  osgParticle::QReflect_Particle:: getNumTiles()const{
//params checking
return _model->getNumTiles();

}
 int  osgParticle::QReflect_Particle:: getPreviousParticle()const{
//params checking
return _model->getPreviousParticle();

}
 int  osgParticle::QReflect_Particle:: getStartTile()const{
//params checking
return _model->getStartTile();

}
 int  osgParticle::QReflect_Particle:: getTileS()const{
//params checking
return _model->getTileS();

}
 int  osgParticle::QReflect_Particle:: getTileT()const{
//params checking
return _model->getTileT();

}
 void osgParticle::QReflect_Particle::addAngularVelocity(osg::QReflect_Vec3f  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osgParticle::QReflect_Particle::addAngularVelocity : parameter n.0 is NULL\n"<<endl;return;}
 _model->addAngularVelocity(*p0->_model);

}
 void osgParticle::QReflect_Particle::addVelocity(osg::QReflect_Vec3f  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osgParticle::QReflect_Particle::addVelocity : parameter n.0 is NULL\n"<<endl;return;}
 _model->addVelocity(*p0->_model);

}
 void osgParticle::QReflect_Particle::beginRender(osg::QReflect_GLBeginEndAdapter  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osgParticle::QReflect_Particle::beginRender : parameter n.0 is NULL\n"<<endl;return;}
 _model->beginRender(p0->_model);

}
 void osgParticle::QReflect_Particle::endRender(osg::QReflect_GLBeginEndAdapter  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osgParticle::QReflect_Particle::endRender : parameter n.0 is NULL\n"<<endl;return;}
 _model->endRender(p0->_model);

}
 void osgParticle::QReflect_Particle::kill(){
//params checking
 _model->kill();

}
 void osgParticle::QReflect_Particle::render(osg::QReflect_GLBeginEndAdapter  *p0 ,osg::QReflect_Vec3f  *p1 ,osg::QReflect_Vec3f  *p2 ,osg::QReflect_Vec3f  *p3 , float  p4)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osgParticle::QReflect_Particle::render : parameter n.0 is NULL\n"<<endl;return;}
if(! p1) {std::cerr<<"PMOC: osgParticle::QReflect_Particle::render : parameter n.1 is NULL\n"<<endl;return;}
if(! p2) {std::cerr<<"PMOC: osgParticle::QReflect_Particle::render : parameter n.2 is NULL\n"<<endl;return;}
if(! p3) {std::cerr<<"PMOC: osgParticle::QReflect_Particle::render : parameter n.3 is NULL\n"<<endl;return;}
 _model->render(p0->_model ,*p1->_model ,*p2->_model ,*p3->_model ,p4);

}
 void osgParticle::QReflect_Particle::render(osg::QReflect_RenderInfo  *p0 ,osg::QReflect_Vec3f  *p1 ,osg::QReflect_Vec3f  *p2)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osgParticle::QReflect_Particle::render : parameter n.0 is NULL\n"<<endl;return;}
if(! p1) {std::cerr<<"PMOC: osgParticle::QReflect_Particle::render : parameter n.1 is NULL\n"<<endl;return;}
if(! p2) {std::cerr<<"PMOC: osgParticle::QReflect_Particle::render : parameter n.2 is NULL\n"<<endl;return;}
 _model->render(*p0->_model ,*p1->_model ,*p2->_model);

}
 void osgParticle::QReflect_Particle::setAlphaInterpolator(osgParticle::QReflect_Interpolator  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osgParticle::QReflect_Particle::setAlphaInterpolator : parameter n.0 is NULL\n"<<endl;return;}
 _model->setAlphaInterpolator(p0->_model);
emit AlphaInterpolatorChanged();

}
 void osgParticle::QReflect_Particle::setAngle(osg::QReflect_Vec3f  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osgParticle::QReflect_Particle::setAngle : parameter n.0 is NULL\n"<<endl;return;}
 _model->setAngle(*p0->_model);

}
 void osgParticle::QReflect_Particle::setAngularVelocity(osg::QReflect_Vec3f  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osgParticle::QReflect_Particle::setAngularVelocity : parameter n.0 is NULL\n"<<endl;return;}
 _model->setAngularVelocity(*p0->_model);

}
 void osgParticle::QReflect_Particle::setColorInterpolator(osgParticle::QReflect_Interpolator  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osgParticle::QReflect_Particle::setColorInterpolator : parameter n.0 is NULL\n"<<endl;return;}
 _model->setColorInterpolator(p0->_model);
emit ColorInterpolatorChanged();

}
 void osgParticle::QReflect_Particle::setDepth( double  p0){
//params checking
 _model->setDepth(p0);
emit DepthChanged();

}
 void osgParticle::QReflect_Particle::setDrawable(osg::QReflect_Drawable  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osgParticle::QReflect_Particle::setDrawable : parameter n.0 is NULL\n"<<endl;return;}
 _model->setDrawable(p0->_model);
emit DrawableChanged();

}
 void osgParticle::QReflect_Particle::setLifeTime( double  p0){
//params checking
 _model->setLifeTime(p0);
emit LifeTimeChanged();

}
 void osgParticle::QReflect_Particle::setMass( float  p0){
//params checking
 _model->setMass(p0);
emit MassChanged();

}
 void osgParticle::QReflect_Particle::setNextParticle( int  p0){
//params checking
 _model->setNextParticle(p0);
emit NextParticleChanged();

}
 void osgParticle::QReflect_Particle::setPosition(osg::QReflect_Vec3f  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osgParticle::QReflect_Particle::setPosition : parameter n.0 is NULL\n"<<endl;return;}
 _model->setPosition(*p0->_model);

}
 void osgParticle::QReflect_Particle::setPreviousParticle( int  p0){
//params checking
 _model->setPreviousParticle(p0);
emit PreviousParticleChanged();

}
 void osgParticle::QReflect_Particle::setRadius( float  p0){
//params checking
 _model->setRadius(p0);
emit RadiusChanged();

}
 void osgParticle::QReflect_Particle::setShape(osgParticle::QReflect_Particle::Shape  p0){
//params checking
 _model->setShape(static_cast<osgParticle::Particle::Shape>(p0));
emit ShapeChanged();

}
 void osgParticle::QReflect_Particle::setSizeInterpolator(osgParticle::QReflect_Interpolator  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osgParticle::QReflect_Particle::setSizeInterpolator : parameter n.0 is NULL\n"<<endl;return;}
 _model->setSizeInterpolator(p0->_model);
emit SizeInterpolatorChanged();

}
 void osgParticle::QReflect_Particle::setTextureTile( int  p0 , int  p1 , int  p2){
//params checking
 _model->setTextureTile(p0 ,p1 ,p2);

}
 void osgParticle::QReflect_Particle::setTextureTileRange( int  p0 , int  p1 , int  p2 , int  p3){
//params checking
 _model->setTextureTileRange(p0 ,p1 ,p2 ,p3);

}
 void osgParticle::QReflect_Particle::setUpTexCoordsAsPartOfConnectedParticleSystem(osgParticle::QReflect_ParticleSystem  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osgParticle::QReflect_Particle::setUpTexCoordsAsPartOfConnectedParticleSystem : parameter n.0 is NULL\n"<<endl;return;}
 _model->setUpTexCoordsAsPartOfConnectedParticleSystem(p0->_model);

}
 void osgParticle::QReflect_Particle::setVelocity(osg::QReflect_Vec3f  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osgParticle::QReflect_Particle::setVelocity : parameter n.0 is NULL\n"<<endl;return;}
 _model->setVelocity(*p0->_model);

}
 void osgParticle::QReflect_Particle::transformAngleVelocity(osg::QReflect_Matrixd  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osgParticle::QReflect_Particle::transformAngleVelocity : parameter n.0 is NULL\n"<<endl;return;}
 _model->transformAngleVelocity(*p0->_model);

}
 void osgParticle::QReflect_Particle::transformPositionVelocity(osg::QReflect_Matrixd  *p0 ,osg::QReflect_Matrixd  *p1 , float  p2){
//params checking
if(! p0) {std::cerr<<"PMOC: osgParticle::QReflect_Particle::transformPositionVelocity : parameter n.0 is NULL\n"<<endl;return;}
if(! p1) {std::cerr<<"PMOC: osgParticle::QReflect_Particle::transformPositionVelocity : parameter n.1 is NULL\n"<<endl;return;}
 _model->transformPositionVelocity(*p0->_model ,*p1->_model ,p2);

}
 void osgParticle::QReflect_Particle::transformPositionVelocity(osg::QReflect_Matrixd  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osgParticle::QReflect_Particle::transformPositionVelocity : parameter n.0 is NULL\n"<<endl;return;}
 _model->transformPositionVelocity(*p0->_model);

}
osg::QReflect_Drawable*osgParticle::QReflect_Particle::getDrawable()const{
//params checking
PMOCSAFEADDOBJECT(*_model->getDrawable(),inst);
return inst.isValid()?((osg::QReflect_Drawable * )inst.model->createQQModel(&inst)):NULL;
}
osgParticle::QReflect_Interpolator*osgParticle::QReflect_Particle::getAlphaInterpolator()const{
//params checking
PMOCSAFEADDOBJECT(*_model->getAlphaInterpolator(),inst);
return inst.isValid()?((osgParticle::QReflect_Interpolator * )inst.model->createQQModel(&inst)):NULL;
}
osgParticle::QReflect_Interpolator*osgParticle::QReflect_Particle::getColorInterpolator()const{
//params checking
PMOCSAFEADDOBJECT(*_model->getColorInterpolator(),inst);
return inst.isValid()?((osgParticle::QReflect_Interpolator * )inst.model->createQQModel(&inst)):NULL;
}
osgParticle::QReflect_Interpolator*osgParticle::QReflect_Particle::getSizeInterpolator()const{
//params checking
PMOCSAFEADDOBJECT(*_model->getSizeInterpolator(),inst);
return inst.isValid()?((osgParticle::QReflect_Interpolator * )inst.model->createQQModel(&inst)):NULL;
}
osgParticle::QReflect_Particle::Shape  osgParticle::QReflect_Particle::getShape()const{
//params checking
osgParticle::QReflect_Particle::Shape ret=static_cast<osgParticle::QReflect_Particle::Shape>( _model->getShape());return  ret;

}

///DefaultConstructor////////////////
osgParticle::QReflect_Particle::QReflect_Particle(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osgParticle::Particle*>(i->ptr);
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osgParticle::QReflect_Particle::~QReflect_Particle( ){
 }
///update this according _model new state
void osgParticle::QReflect_Particle::updateModel(){
}
Instance osgParticle::MetaQReflect_Particle::createInstance( ){
osgParticle::Particle* osgParticle_Particle_ptr	;
osgParticle_Particle_ptr= new osgParticle::Particle()	;
Instance o(PMOCGETMETACLASS("osgParticle::Particle"),(void*)osgParticle_Particle_ptr	,true);
_managedinstances.insert(osgParticle_Particle_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osgParticle::MetaQReflect_Particle::MetaQReflect_Particle():MetaQQuickClass( "osgParticle::Particle"){
_typeid=&typeid(osgParticle::Particle );
           qRegisterMetaType<osgParticle::QMLParticle>();
           qRegisterMetaType<osgParticle::QMLParticle*>("pmoc.osgParticle.QMLParticle");
qmlRegisterType<osgParticle::QReflect_Particle>("pmoc.osgParticle",1,0,"QReflect_Particle");
           qmlRegisterType<osgParticle::QMLParticle>("pmoc.osgParticle",1,0,"QMLParticle");
};
const std::string osgParticle::MetaQReflect_Particle::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osgParticle::MetaQReflect_Particle::PREcompoQML()const{return std::string("");}
const std::string osgParticle::MetaQReflect_Particle::POSTcompoQML()const{return std::string("");}
QQModel* osgParticle::MetaQReflect_Particle::createQQModel(const Instance*i){ //return new MetaQReflect_Particle_QModel(i);}
QMLParticle *ret =new QMLParticle(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Particle_pmoc.cpp"
#endif





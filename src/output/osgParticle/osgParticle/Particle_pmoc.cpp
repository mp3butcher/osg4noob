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
#include <customCode/osg/Vec3f_pmoc.hpp>
#include <customCode/osgParticle/Interpolator_pmoc.hpp>
#include <osg/Drawable>
#include <osg/Drawable_pmoc.hpp>
#include <osgParticle/Interpolator>
#include <osgParticle/Interpolator_pmoc.hpp>
using namespace pmoc;
 bool  osgParticle::QReflect_Particle::isAlive()const{
return _model->isAlive();

}
 bool  osgParticle::QReflect_Particle::update( double p0 , bool p1){
return _model->update(p0 ,p1);

}
 double  osgParticle::QReflect_Particle::getAge()const{
return _model->getAge();

}
 float  osgParticle::QReflect_Particle::getCurrentAlpha()const{
return _model->getCurrentAlpha();

}
 float  osgParticle::QReflect_Particle::getCurrentSize()const{
return _model->getCurrentSize();

}
 float  osgParticle::QReflect_Particle::getMassInv()const{
return _model->getMassInv();

}
 float  osgParticle::QReflect_Particle::getSTexCoord()const{
return _model->getSTexCoord();

}
 float  osgParticle::QReflect_Particle::getTTexCoord()const{
return _model->getTTexCoord();

}
 int  osgParticle::QReflect_Particle::getEndTile()const{
return _model->getEndTile();

}
 int  osgParticle::QReflect_Particle::getNumTiles()const{
return _model->getNumTiles();

}
 int  osgParticle::QReflect_Particle::getStartTile()const{
return _model->getStartTile();

}
 int  osgParticle::QReflect_Particle::getTileS()const{
return _model->getTileS();

}
 int  osgParticle::QReflect_Particle::getTileT()const{
return _model->getTileT();

}
 void osgParticle::QReflect_Particle::addAngularVelocity(osg::QReflect_Vec3f *p0){
 _model->addAngularVelocity(*p0->_model);

}
 void osgParticle::QReflect_Particle::addVelocity(osg::QReflect_Vec3f *p0){
 _model->addVelocity(*p0->_model);

}
 void osgParticle::QReflect_Particle::beginRender(osg::QReflect_GLBeginEndAdapter *p0)const{
 _model->beginRender(p0->_model);

}
 void osgParticle::QReflect_Particle::endRender(osg::QReflect_GLBeginEndAdapter *p0)const{
 _model->endRender(p0->_model);

}
 void osgParticle::QReflect_Particle::kill(){
 _model->kill();

}
 void osgParticle::QReflect_Particle::render(osg::QReflect_GLBeginEndAdapter *p0 ,osg::QReflect_Vec3f *p1 ,osg::QReflect_Vec3f *p2 ,osg::QReflect_Vec3f *p3 , float p4)const{
 _model->render(p0->_model ,*p1->_model ,*p2->_model ,*p3->_model ,p4);

}
 void osgParticle::QReflect_Particle::setAngle(osg::QReflect_Vec3f *p0){
 _model->setAngle(*p0->_model);

}
 void osgParticle::QReflect_Particle::setAngularVelocity(osg::QReflect_Vec3f *p0){
 _model->setAngularVelocity(*p0->_model);

}
 void osgParticle::QReflect_Particle::setPosition(osg::QReflect_Vec3f *p0){
 _model->setPosition(*p0->_model);

}
 void osgParticle::QReflect_Particle::setShape(osgParticle::QReflect_Particle::Shape p0){
 _model->setShape(static_cast<osgParticle::Particle::Shape>(p0));

}
 void osgParticle::QReflect_Particle::setTextureTile( int p0 , int p1 , int p2){
 _model->setTextureTile(p0 ,p1 ,p2);

}
 void osgParticle::QReflect_Particle::setTextureTileRange( int p0 , int p1 , int p2 , int p3){
 _model->setTextureTileRange(p0 ,p1 ,p2 ,p3);

}
 void osgParticle::QReflect_Particle::setVelocity(osg::QReflect_Vec3f *p0){
 _model->setVelocity(*p0->_model);

}
 void osgParticle::QReflect_Particle::transformAngleVelocity(osg::QReflect_Matrixd *p0){
 _model->transformAngleVelocity(*p0->_model);

}
 void osgParticle::QReflect_Particle::transformPositionVelocity(osg::QReflect_Matrixd *p0 ,osg::QReflect_Matrixd *p1 , float p2){
 _model->transformPositionVelocity(*p0->_model ,*p1->_model ,p2);

}
 void osgParticle::QReflect_Particle::transformPositionVelocity(osg::QReflect_Matrixd *p0){
 _model->transformPositionVelocity(*p0->_model);

}
const double osgParticle::QReflect_Particle::getDepth()const{return _model->getDepth();}
const double osgParticle::QReflect_Particle::getLifeTime()const{return _model->getLifeTime();}
const float osgParticle::QReflect_Particle::getMass()const{return _model->getMass();}
const float osgParticle::QReflect_Particle::getRadius()const{return _model->getRadius();}
const int osgParticle::QReflect_Particle::getNextParticle()const{return _model->getNextParticle();}
const int osgParticle::QReflect_Particle::getPreviousParticle()const{return _model->getPreviousParticle();}
osg::QReflect_Drawable * osgParticle::QReflect_Particle::getDrawable()const{
PMOCSAFEADDOBJECT(*_model->getDrawable(),inst);
return inst.isValid()?((osg::QReflect_Drawable * )inst.model->createQQModel(&inst)):NULL;
}
osgParticle::QReflect_Interpolator * osgParticle::QReflect_Particle::getAlphaInterpolator()const{
PMOCSAFEADDOBJECT(*_model->getAlphaInterpolator(),inst);
return inst.isValid()?((osgParticle::QReflect_Interpolator * )inst.model->createQQModel(&inst)):NULL;
}
osgParticle::QReflect_Interpolator * osgParticle::QReflect_Particle::getColorInterpolator()const{
PMOCSAFEADDOBJECT(*_model->getColorInterpolator(),inst);
return inst.isValid()?((osgParticle::QReflect_Interpolator * )inst.model->createQQModel(&inst)):NULL;
}
osgParticle::QReflect_Interpolator * osgParticle::QReflect_Particle::getSizeInterpolator()const{
PMOCSAFEADDOBJECT(*_model->getSizeInterpolator(),inst);
return inst.isValid()?((osgParticle::QReflect_Interpolator * )inst.model->createQQModel(&inst)):NULL;
}
osgParticle::QReflect_Particle::Shape  osgParticle::QReflect_Particle::getShape()const{
osgParticle::QReflect_Particle::Shape ret=static_cast<osgParticle::QReflect_Particle::Shape>( _model->getShape());return  ret;

}
void  osgParticle::QReflect_Particle::setDepth(const double &par){_model->setDepth(par);emit DepthChanged(par);}
void  osgParticle::QReflect_Particle::setLifeTime(const double &par){_model->setLifeTime(par);emit LifeTimeChanged(par);}
void  osgParticle::QReflect_Particle::setMass(const float &par){_model->setMass(par);emit MassChanged(par);}
void  osgParticle::QReflect_Particle::setNextParticle(const int &par){_model->setNextParticle(par);emit NextParticleChanged(par);}
void  osgParticle::QReflect_Particle::setPreviousParticle(const int &par){_model->setPreviousParticle(par);emit PreviousParticleChanged(par);}
void  osgParticle::QReflect_Particle::setRadius(const float &par){_model->setRadius(par);emit RadiusChanged(par);}
void osgParticle::QReflect_Particle::pmoc_reverse_setAlphaInterpolator( osgParticle::QReflect_Interpolator *par){_model->setAlphaInterpolator(NULL);
emit AlphaInterpolatorChanged(NULL);
}
void osgParticle::QReflect_Particle::pmoc_reverse_setColorInterpolator( osgParticle::QReflect_Interpolator *par){_model->setColorInterpolator(NULL);
emit ColorInterpolatorChanged(NULL);
}
void osgParticle::QReflect_Particle::pmoc_reverse_setDrawable( osg::QReflect_Drawable *par){_model->setDrawable(NULL);
emit DrawableChanged(NULL);
}
void osgParticle::QReflect_Particle::pmoc_reverse_setSizeInterpolator( osgParticle::QReflect_Interpolator *par){_model->setSizeInterpolator(NULL);
emit SizeInterpolatorChanged(NULL);
}
void osgParticle::QReflect_Particle::setAlphaInterpolator( osgParticle::QReflect_Interpolator *par){_model->setAlphaInterpolator(par->_model);
emit AlphaInterpolatorChanged(par);
}
void osgParticle::QReflect_Particle::setColorInterpolator( osgParticle::QReflect_Interpolator *par){_model->setColorInterpolator(par->_model);
emit ColorInterpolatorChanged(par);
}
void osgParticle::QReflect_Particle::setDrawable( osg::QReflect_Drawable *par){_model->setDrawable(par->_model);
emit DrawableChanged(par);
}
void osgParticle::QReflect_Particle::setSizeInterpolator( osgParticle::QReflect_Interpolator *par){_model->setSizeInterpolator(par->_model);
emit SizeInterpolatorChanged(par);
}

///DefaultConstructor////////////////
osgParticle::QReflect_Particle::QReflect_Particle(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
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
_typeid=&typeid(osgParticle::Particle );           qRegisterMetaType<QMLParticle>();
qmlRegisterType<QReflect_Particle>("pmoc.osgParticle",1,0,"QReflect_Particle");
           qmlRegisterType<QMLParticle>("pmoc.osgParticle",1,0,"QMLParticle");
       PMOCACTION("getAlphaInterpolator","setAlphaInterpolator","unsetAlphaInterpolator");
       PMOCACTION("getColorInterpolator","setColorInterpolator","unsetColorInterpolator");
       PMOCACTION("getDrawable","setDrawable","unsetDrawable");
       PMOCACTION("getSizeInterpolator","setSizeInterpolator","unsetSizeInterpolator");
};
const std::string osgParticle::MetaQReflect_Particle::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osgParticle::MetaQReflect_Particle::PREcompoQML()const{return std::string("");}
const std::string osgParticle::MetaQReflect_Particle::POSTcompoQML()const{return std::string("");}
QQModel* osgParticle::MetaQReflect_Particle::createQQModel(Instance*i){ //return new MetaQReflect_Particle_QModel(i);}
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





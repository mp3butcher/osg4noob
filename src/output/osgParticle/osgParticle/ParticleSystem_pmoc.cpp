#include <osgParticle/ParticleSystem>
//includes


#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osgParticle/ParticleSystem_pmoc.hpp>
#include <customCode/osgParticle/ParticleSystem_pmoc.hpp>
#include <customCode/osg/Drawable_pmoc.hpp>
#include <customCode/osg/NodeVisitor_pmoc.hpp>
#include <customCode/osg/RenderInfo_pmoc.hpp>
#include <customCode/osg/Vec3f_pmoc.hpp>
#include <customCode/osgParticle/Particle_pmoc.hpp>
using namespace pmoc;
 bool  osgParticle::QReflect_ParticleSystem:: areAllParticlesDead()const{
//params checking
return _model->areAllParticlesDead();

}
 bool  osgParticle::QReflect_ParticleSystem:: getDoublePassRendering()const{
//params checking
return _model->getDoublePassRendering();

}
 bool  osgParticle::QReflect_ParticleSystem:: getFreezeOnCull()const{
//params checking
return _model->getFreezeOnCull();

}
 bool  osgParticle::QReflect_ParticleSystem:: getFrozen()const{
//params checking
return _model->getFrozen();

}
 bool  osgParticle::QReflect_ParticleSystem:: getUseShaders()const{
//params checking
return _model->getUseShaders();

}
 bool  osgParticle::QReflect_ParticleSystem:: getUseVertexArray()const{
//params checking
return _model->getUseVertexArray();

}
 bool  osgParticle::QReflect_ParticleSystem:: isFrozen()const{
//params checking
return _model->isFrozen();

}
 double  osgParticle::QReflect_ParticleSystem:: getVisibilityDistance()const{
//params checking
return _model->getVisibilityDistance();

}
 double&  osgParticle::QReflect_ParticleSystem:: getDeltaTime( double  p0){
//params checking
return _model->getDeltaTime(p0);

}
 int  osgParticle::QReflect_ParticleSystem:: getLevelOfDetail()const{
//params checking
return _model->getLevelOfDetail();

}
 int  osgParticle::QReflect_ParticleSystem:: numDeadParticles()const{
//params checking
return _model->numDeadParticles();

}
 int  osgParticle::QReflect_ParticleSystem:: numParticles()const{
//params checking
return _model->numParticles();

}
 unsigned int  osgParticle::QReflect_ParticleSystem:: getLastFrameNumber()const{
//params checking
return _model->getLastFrameNumber();

}
 void osgParticle::QReflect_ParticleSystem::destroyParticle( int  p0){
//params checking
 _model->destroyParticle(p0);

}
 void osgParticle::QReflect_ParticleSystem::drawImplementation(osg::QReflect_RenderInfo  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osgParticle::QReflect_ParticleSystem::drawImplementation : parameter n.0 is NULL\n"<<endl;return;}
 _model->drawImplementation(*p0->_model);

}
 void osgParticle::QReflect_ParticleSystem::reuseParticle( int  p0){
//params checking
 _model->reuseParticle(p0);

}
 void osgParticle::QReflect_ParticleSystem::setAlignVectorX(osg::QReflect_Vec3f  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osgParticle::QReflect_ParticleSystem::setAlignVectorX : parameter n.0 is NULL\n"<<endl;return;}
 _model->setAlignVectorX(*p0->_model);

}
 void osgParticle::QReflect_ParticleSystem::setAlignVectorY(osg::QReflect_Vec3f  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osgParticle::QReflect_ParticleSystem::setAlignVectorY : parameter n.0 is NULL\n"<<endl;return;}
 _model->setAlignVectorY(*p0->_model);

}
 void osgParticle::QReflect_ParticleSystem::setAlignVectors(osg::QReflect_Vec3f  *p0 ,osg::QReflect_Vec3f  *p1){
//params checking
if(! p0) {std::cerr<<"PMOC: osgParticle::QReflect_ParticleSystem::setAlignVectors : parameter n.0 is NULL\n"<<endl;return;}
if(! p1) {std::cerr<<"PMOC: osgParticle::QReflect_ParticleSystem::setAlignVectors : parameter n.1 is NULL\n"<<endl;return;}
 _model->setAlignVectors(*p0->_model ,*p1->_model);

}
 void osgParticle::QReflect_ParticleSystem::setDefaultAttributes(const  QString  &p0 , bool  p1 , bool  p2 , int  p3){
//params checking
 _model->setDefaultAttributes(std::string(p0.toStdString()) ,p1 ,p2 ,p3);

}
 void osgParticle::QReflect_ParticleSystem::setDefaultAttributesUsingShaders(const  QString  &p0 , bool  p1 , int  p2){
//params checking
 _model->setDefaultAttributesUsingShaders(std::string(p0.toStdString()) ,p1 ,p2);

}
 void osgParticle::QReflect_ParticleSystem::setDefaultParticleTemplate(osgParticle::QReflect_Particle  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osgParticle::QReflect_ParticleSystem::setDefaultParticleTemplate : parameter n.0 is NULL\n"<<endl;return;}
 _model->setDefaultParticleTemplate(*p0->_model);

}
 void osgParticle::QReflect_ParticleSystem::setDoublePassRendering( bool  p0){
//params checking
 _model->setDoublePassRendering(p0);
emit DoublePassRenderingChanged();

}
 void osgParticle::QReflect_ParticleSystem::setFreezeOnCull( bool  p0){
//params checking
 _model->setFreezeOnCull(p0);
emit FreezeOnCullChanged();

}
 void osgParticle::QReflect_ParticleSystem::setFrozen( bool  p0){
//params checking
 _model->setFrozen(p0);
emit FrozenChanged();

}
 void osgParticle::QReflect_ParticleSystem::setLevelOfDetail( int  p0){
//params checking
 _model->setLevelOfDetail(p0);
emit LevelOfDetailChanged();

}
 void osgParticle::QReflect_ParticleSystem::setParticleAlignment(osgParticle::QReflect_ParticleSystem::Alignment  p0){
//params checking
 _model->setParticleAlignment(static_cast<osgParticle::ParticleSystem::Alignment>(p0));
emit ParticleAlignmentChanged();

}
 void osgParticle::QReflect_ParticleSystem::setParticleScaleReferenceFrame(osgParticle::QReflect_ParticleSystem::ParticleScaleReferenceFrame  p0){
//params checking
 _model->setParticleScaleReferenceFrame(static_cast<osgParticle::ParticleSystem::ParticleScaleReferenceFrame>(p0));
emit ParticleScaleReferenceFrameChanged();

}
 void osgParticle::QReflect_ParticleSystem::setSortMode(osgParticle::QReflect_ParticleSystem::SortMode  p0){
//params checking
 _model->setSortMode(static_cast<osgParticle::ParticleSystem::SortMode>(p0));
emit SortModeChanged();

}
 void osgParticle::QReflect_ParticleSystem::setUseShaders( bool  p0){
//params checking
 _model->setUseShaders(p0);
emit UseShadersChanged();

}
 void osgParticle::QReflect_ParticleSystem::setUseVertexArray( bool  p0){
//params checking
 _model->setUseVertexArray(p0);
emit UseVertexArrayChanged();

}
 void osgParticle::QReflect_ParticleSystem::setVisibilityDistance( double  p0){
//params checking
 _model->setVisibilityDistance(p0);
emit VisibilityDistanceChanged();

}
 void osgParticle::QReflect_ParticleSystem::update( double  p0 ,osg::QReflect_NodeVisitor  *p1){
//params checking
if(! p1) {std::cerr<<"PMOC: osgParticle::QReflect_ParticleSystem::update : parameter n.1 is NULL\n"<<endl;return;}
 _model->update(p0 ,*p1->_model);

}
osgParticle::QReflect_Particle*osgParticle::QReflect_ParticleSystem::createParticle(osgParticle::QReflect_Particle  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osgParticle::QReflect_ParticleSystem::createParticle : parameter n.0 is NULL\n"<<endl;;}
PMOCSAFEADDOBJECT(*_model->createParticle(p0->_model),inst);
return inst.isValid()?((osgParticle::QReflect_Particle * )inst.model->createQQModel(&inst)):NULL;
}
osgParticle::QReflect_Particle*osgParticle::QReflect_ParticleSystem::getParticle( int  p0)const{
//params checking
PMOCSAFEADDOBJECT(*_model->getParticle(p0),inst);
return inst.isValid()?((osgParticle::QReflect_Particle * )inst.model->createQQModel(&inst)):NULL;
}
osgParticle::QReflect_Particle*osgParticle::QReflect_ParticleSystem::getParticle( int  p0){
//params checking
PMOCSAFEADDOBJECT(*_model->getParticle(p0),inst);
return inst.isValid()?((osgParticle::QReflect_Particle * )inst.model->createQQModel(&inst)):NULL;
}
osgParticle::QReflect_ParticleSystem::Alignment  osgParticle::QReflect_ParticleSystem::getParticleAlignment()const{
//params checking
osgParticle::QReflect_ParticleSystem::Alignment ret=static_cast<osgParticle::QReflect_ParticleSystem::Alignment>( _model->getParticleAlignment());return  ret;

}
osgParticle::QReflect_ParticleSystem::ParticleScaleReferenceFrame  osgParticle::QReflect_ParticleSystem::getParticleScaleReferenceFrame()const{
//params checking
osgParticle::QReflect_ParticleSystem::ParticleScaleReferenceFrame ret=static_cast<osgParticle::QReflect_ParticleSystem::ParticleScaleReferenceFrame>( _model->getParticleScaleReferenceFrame());return  ret;

}
osgParticle::QReflect_ParticleSystem::SortMode  osgParticle::QReflect_ParticleSystem::getSortMode()const{
//params checking
osgParticle::QReflect_ParticleSystem::SortMode ret=static_cast<osgParticle::QReflect_ParticleSystem::SortMode>( _model->getSortMode());return  ret;

}

///DefaultConstructor////////////////
osgParticle::QReflect_ParticleSystem::QReflect_ParticleSystem(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osgParticle::ParticleSystem*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osgParticle::QReflect_ParticleSystem::~QReflect_ParticleSystem( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osgParticle::QReflect_ParticleSystem::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osgParticle::MetaQReflect_ParticleSystem::createInstance( ){
osg::ref_ptr<osgParticle::ParticleSystem> osgParticle_ParticleSystem_ptr	;
osgParticle_ParticleSystem_ptr = new osgParticle::ParticleSystem ()	;
Instance o(PMOCGETMETACLASS("osgParticle::ParticleSystem"),(void*)osgParticle_ParticleSystem_ptr.get()		,true);
_managedinstances.insert(osgParticle_ParticleSystem_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osgParticle::MetaQReflect_ParticleSystem::MetaQReflect_ParticleSystem():MetaQQuickClass( "osgParticle::ParticleSystem"){
_typeid=&typeid(osgParticle::ParticleSystem );
           qRegisterMetaType<osgParticle::QMLParticleSystem>();
           qRegisterMetaType<osgParticle::QMLParticleSystem*>("pmoc.osgParticle.QMLParticleSystem");
qmlRegisterType<osgParticle::QReflect_ParticleSystem>("pmoc.osgParticle",1,0,"QReflect_ParticleSystem");
           qmlRegisterType<osgParticle::QMLParticleSystem>("pmoc.osgParticle",1,0,"QMLParticleSystem");
};
const std::string osgParticle::MetaQReflect_ParticleSystem::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osgParticle::MetaQReflect_ParticleSystem::PREcompoQML()const{return std::string("");}
const std::string osgParticle::MetaQReflect_ParticleSystem::POSTcompoQML()const{return std::string("");}
QQModel* osgParticle::MetaQReflect_ParticleSystem::createQQModel(const Instance*i){ //return new MetaQReflect_ParticleSystem_QModel(i);}
QMLParticleSystem *ret =new QMLParticleSystem(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::Drawable *mother =dynamic_cast<osg::Drawable*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::Drawable");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::Drawable model for osgParticle::ParticleSystemis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::Drawable");
if(!cl){std::cerr<<"osg::Drawable QQModel for osgParticle::ParticleSystemis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_ParticleSystem_pmoc.cpp"
#endif





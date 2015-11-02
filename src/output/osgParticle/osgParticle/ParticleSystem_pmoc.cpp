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
 bool  osgParticle::QReflect_ParticleSystem::areAllParticlesDead()const{
return _model->areAllParticlesDead();

}
 bool  osgParticle::QReflect_ParticleSystem::isFrozen()const{
return _model->isFrozen();

}
 double&  osgParticle::QReflect_ParticleSystem::getDeltaTime( double p0){
return _model->getDeltaTime(p0);

}
 int  osgParticle::QReflect_ParticleSystem::numDeadParticles()const{
return _model->numDeadParticles();

}
 int  osgParticle::QReflect_ParticleSystem::numParticles()const{
return _model->numParticles();

}
 unsigned int  osgParticle::QReflect_ParticleSystem::getLastFrameNumber()const{
return _model->getLastFrameNumber();

}
 void osgParticle::QReflect_ParticleSystem::destroyParticle( int p0){
 _model->destroyParticle(p0);

}
 void osgParticle::QReflect_ParticleSystem::drawImplementation(osg::QReflect_RenderInfo *p0)const{
 _model->drawImplementation(*p0->_model);

}
 void osgParticle::QReflect_ParticleSystem::reuseParticle( int p0){
 _model->reuseParticle(p0);

}
 void osgParticle::QReflect_ParticleSystem::setAlignVectorX(osg::QReflect_Vec3f *p0){
 _model->setAlignVectorX(*p0->_model);

}
 void osgParticle::QReflect_ParticleSystem::setAlignVectorY(osg::QReflect_Vec3f *p0){
 _model->setAlignVectorY(*p0->_model);

}
 void osgParticle::QReflect_ParticleSystem::setAlignVectors(osg::QReflect_Vec3f *p0 ,osg::QReflect_Vec3f *p1){
 _model->setAlignVectors(*p0->_model ,*p1->_model);

}
 void osgParticle::QReflect_ParticleSystem::setDefaultAttributes(const  QString &p0 , bool p1 , bool p2 , int p3){
 _model->setDefaultAttributes(std::string(p0.toStdString()) ,p1 ,p2 ,p3);

}
 void osgParticle::QReflect_ParticleSystem::setDefaultAttributesUsingShaders(const  QString &p0 , bool p1 , int p2){
 _model->setDefaultAttributesUsingShaders(std::string(p0.toStdString()) ,p1 ,p2);

}
 void osgParticle::QReflect_ParticleSystem::setDefaultParticleTemplate(osgParticle::QReflect_Particle *p0){
 _model->setDefaultParticleTemplate(*p0->_model);

}
 void osgParticle::QReflect_ParticleSystem::setParticleAlignment(osgParticle::QReflect_ParticleSystem::Alignment p0){
 _model->setParticleAlignment(static_cast<osgParticle::ParticleSystem::Alignment>(p0));

}
 void osgParticle::QReflect_ParticleSystem::setParticleScaleReferenceFrame(osgParticle::QReflect_ParticleSystem::ParticleScaleReferenceFrame p0){
 _model->setParticleScaleReferenceFrame(static_cast<osgParticle::ParticleSystem::ParticleScaleReferenceFrame>(p0));

}
 void osgParticle::QReflect_ParticleSystem::setSortMode(osgParticle::QReflect_ParticleSystem::SortMode p0){
 _model->setSortMode(static_cast<osgParticle::ParticleSystem::SortMode>(p0));

}
 void osgParticle::QReflect_ParticleSystem::update( double p0 ,osg::QReflect_NodeVisitor *p1){
 _model->update(p0 ,*p1->_model);

}
const bool osgParticle::QReflect_ParticleSystem::getDoublePassRendering()const{return _model->getDoublePassRendering();}
const bool osgParticle::QReflect_ParticleSystem::getFreezeOnCull()const{return _model->getFreezeOnCull();}
const bool osgParticle::QReflect_ParticleSystem::getFrozen()const{return _model->getFrozen();}
const bool osgParticle::QReflect_ParticleSystem::getUseShaders()const{return _model->getUseShaders();}
const bool osgParticle::QReflect_ParticleSystem::getUseVertexArray()const{return _model->getUseVertexArray();}
const double osgParticle::QReflect_ParticleSystem::getVisibilityDistance()const{return _model->getVisibilityDistance();}
const int osgParticle::QReflect_ParticleSystem::getLevelOfDetail()const{return _model->getLevelOfDetail();}
osgParticle::QReflect_Particle*osgParticle::QReflect_ParticleSystem::createParticle(osgParticle::QReflect_Particle *p0){
PMOCSAFEADDOBJECT(*_model->createParticle(p0->_model),inst);
return inst.isValid()?((osgParticle::QReflect_Particle * )inst.model->createQQModel(&inst)):NULL;
}
osgParticle::QReflect_Particle*osgParticle::QReflect_ParticleSystem::getParticle( int p0)const{
PMOCSAFEADDOBJECT(*_model->getParticle(p0),inst);
return inst.isValid()?((osgParticle::QReflect_Particle * )inst.model->createQQModel(&inst)):NULL;
}
osgParticle::QReflect_Particle*osgParticle::QReflect_ParticleSystem::getParticle( int p0){
PMOCSAFEADDOBJECT(*_model->getParticle(p0),inst);
return inst.isValid()?((osgParticle::QReflect_Particle * )inst.model->createQQModel(&inst)):NULL;
}
osgParticle::QReflect_ParticleSystem::Alignment  osgParticle::QReflect_ParticleSystem::getParticleAlignment()const{
osgParticle::QReflect_ParticleSystem::Alignment ret=static_cast<osgParticle::QReflect_ParticleSystem::Alignment>( _model->getParticleAlignment());return  ret;

}
osgParticle::QReflect_ParticleSystem::ParticleScaleReferenceFrame  osgParticle::QReflect_ParticleSystem::getParticleScaleReferenceFrame()const{
osgParticle::QReflect_ParticleSystem::ParticleScaleReferenceFrame ret=static_cast<osgParticle::QReflect_ParticleSystem::ParticleScaleReferenceFrame>( _model->getParticleScaleReferenceFrame());return  ret;

}
osgParticle::QReflect_ParticleSystem::SortMode  osgParticle::QReflect_ParticleSystem::getSortMode()const{
osgParticle::QReflect_ParticleSystem::SortMode ret=static_cast<osgParticle::QReflect_ParticleSystem::SortMode>( _model->getSortMode());return  ret;

}
void  osgParticle::QReflect_ParticleSystem::setDoublePassRendering(const bool &par){_model->setDoublePassRendering(par);emit DoublePassRenderingChanged(par);}
void  osgParticle::QReflect_ParticleSystem::setFreezeOnCull(const bool &par){_model->setFreezeOnCull(par);emit FreezeOnCullChanged(par);}
void  osgParticle::QReflect_ParticleSystem::setFrozen(const bool &par){_model->setFrozen(par);emit FrozenChanged(par);}
void  osgParticle::QReflect_ParticleSystem::setLevelOfDetail(const int &par){_model->setLevelOfDetail(par);emit LevelOfDetailChanged(par);}
void  osgParticle::QReflect_ParticleSystem::setUseShaders(const bool &par){_model->setUseShaders(par);emit UseShadersChanged(par);}
void  osgParticle::QReflect_ParticleSystem::setUseVertexArray(const bool &par){_model->setUseVertexArray(par);emit UseVertexArrayChanged(par);}
void  osgParticle::QReflect_ParticleSystem::setVisibilityDistance(const double &par){_model->setVisibilityDistance(par);emit VisibilityDistanceChanged(par);}

///DefaultConstructor////////////////
osgParticle::QReflect_ParticleSystem::QReflect_ParticleSystem(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
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
_typeid=&typeid(osgParticle::ParticleSystem );           qRegisterMetaType<QMLParticleSystem>();
qmlRegisterType<QReflect_ParticleSystem>("pmoc.osgParticle",1,0,"QReflect_ParticleSystem");
           qmlRegisterType<QMLParticleSystem>("pmoc.osgParticle",1,0,"QMLParticleSystem");
};
const std::string osgParticle::MetaQReflect_ParticleSystem::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osgParticle::MetaQReflect_ParticleSystem::PREcompoQML()const{return std::string("");}
const std::string osgParticle::MetaQReflect_ParticleSystem::POSTcompoQML()const{return std::string("");}
QQModel* osgParticle::MetaQReflect_ParticleSystem::createQQModel(Instance*i){ //return new MetaQReflect_ParticleSystem_QModel(i);}
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





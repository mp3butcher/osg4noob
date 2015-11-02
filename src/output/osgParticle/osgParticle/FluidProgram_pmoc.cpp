#include <osgParticle/FluidProgram>
//includes

#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osgParticle/FluidProgram_pmoc.hpp>
#include <customCode/osgParticle/FluidProgram_pmoc.hpp>
#include <customCode/osgParticle/Program_pmoc.hpp>
#include <customCode/osg/Vec3f_pmoc.hpp>
using namespace pmoc;
 void osgParticle::QReflect_FluidProgram::setAcceleration(osg::QReflect_Vec3f *p0){
 _model->setAcceleration(*p0->_model);

}
 void osgParticle::QReflect_FluidProgram::setFluidToAir(){
 _model->setFluidToAir();

}
 void osgParticle::QReflect_FluidProgram::setFluidToWater(){
 _model->setFluidToWater();

}
 void osgParticle::QReflect_FluidProgram::setToGravity( float p0){
 _model->setToGravity(p0);

}
 void osgParticle::QReflect_FluidProgram::setWind(osg::QReflect_Vec3f *p0){
 _model->setWind(*p0->_model);

}
const float osgParticle::QReflect_FluidProgram::getFluidDensity()const{return _model->getFluidDensity();}
const float osgParticle::QReflect_FluidProgram::getFluidViscosity()const{return _model->getFluidViscosity();}
void  osgParticle::QReflect_FluidProgram::setFluidDensity(const float &par){_model->setFluidDensity(par);emit FluidDensityChanged(par);}
void  osgParticle::QReflect_FluidProgram::setFluidViscosity(const float &par){_model->setFluidViscosity(par);emit FluidViscosityChanged(par);}

///DefaultConstructor////////////////
osgParticle::QReflect_FluidProgram::QReflect_FluidProgram(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osgParticle::FluidProgram*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osgParticle::QReflect_FluidProgram::~QReflect_FluidProgram( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osgParticle::QReflect_FluidProgram::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osgParticle::MetaQReflect_FluidProgram::createInstance( ){
osg::ref_ptr<osgParticle::FluidProgram> osgParticle_FluidProgram_ptr	;
osgParticle_FluidProgram_ptr = new osgParticle::FluidProgram ()	;
Instance o(PMOCGETMETACLASS("osgParticle::FluidProgram"),(void*)osgParticle_FluidProgram_ptr.get()		,true);
_managedinstances.insert(osgParticle_FluidProgram_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osgParticle::MetaQReflect_FluidProgram::MetaQReflect_FluidProgram():MetaQQuickClass( "osgParticle::FluidProgram"){
_typeid=&typeid(osgParticle::FluidProgram );           qRegisterMetaType<QMLFluidProgram>();
qmlRegisterType<QReflect_FluidProgram>("pmoc.osgParticle",1,0,"QReflect_FluidProgram");
           qmlRegisterType<QMLFluidProgram>("pmoc.osgParticle",1,0,"QMLFluidProgram");
};
const std::string osgParticle::MetaQReflect_FluidProgram::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osgParticle::MetaQReflect_FluidProgram::PREcompoQML()const{return std::string("");}
const std::string osgParticle::MetaQReflect_FluidProgram::POSTcompoQML()const{return std::string("");}
QQModel* osgParticle::MetaQReflect_FluidProgram::createQQModel(Instance*i){ //return new MetaQReflect_FluidProgram_QModel(i);}
QMLFluidProgram *ret =new QMLFluidProgram(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osgParticle::Program *mother =dynamic_cast<osgParticle::Program*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osgParticle::Program");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osgParticle::Program model for osgParticle::FluidProgramis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osgParticle::Program");
if(!cl){std::cerr<<"osgParticle::Program QQModel for osgParticle::FluidProgramis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_FluidProgram_pmoc.cpp"
#endif





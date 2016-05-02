#include <osgParticle/LinearInterpolator>
//includes


#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osgParticle/LinearInterpolator_pmoc.hpp>
#include <customCode/osgParticle/LinearInterpolator_pmoc.hpp>
#include <customCode/osgParticle/Interpolator_pmoc.hpp>
using namespace pmoc;
 float  osgParticle::QReflect_LinearInterpolator:: interpolate( float  p0 , float  p1 , float  p2)const{
//params checking
return _model->interpolate(p0 ,p1 ,p2);

}

///DefaultConstructor////////////////
osgParticle::QReflect_LinearInterpolator::QReflect_LinearInterpolator(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osgParticle::LinearInterpolator*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osgParticle::QReflect_LinearInterpolator::~QReflect_LinearInterpolator( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osgParticle::QReflect_LinearInterpolator::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osgParticle::MetaQReflect_LinearInterpolator::createInstance( ){
osg::ref_ptr<osgParticle::LinearInterpolator> osgParticle_LinearInterpolator_ptr	;
osgParticle_LinearInterpolator_ptr = new osgParticle::LinearInterpolator ()	;
Instance o(PMOCGETMETACLASS("osgParticle::LinearInterpolator"),(void*)osgParticle_LinearInterpolator_ptr.get()		,true);
_managedinstances.insert(osgParticle_LinearInterpolator_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osgParticle::MetaQReflect_LinearInterpolator::MetaQReflect_LinearInterpolator():MetaQQuickClass( "osgParticle::LinearInterpolator"){
_typeid=&typeid(osgParticle::LinearInterpolator );
           qRegisterMetaType<osgParticle::QMLLinearInterpolator>();
           qRegisterMetaType<osgParticle::QMLLinearInterpolator*>("pmoc.osgParticle.QMLLinearInterpolator");
qmlRegisterType<osgParticle::QReflect_LinearInterpolator>("pmoc.osgParticle",1,0,"QReflect_LinearInterpolator");
           qmlRegisterType<osgParticle::QMLLinearInterpolator>("pmoc.osgParticle",1,0,"QMLLinearInterpolator");
};
const std::string osgParticle::MetaQReflect_LinearInterpolator::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osgParticle::MetaQReflect_LinearInterpolator::PREcompoQML()const{return std::string("");}
const std::string osgParticle::MetaQReflect_LinearInterpolator::POSTcompoQML()const{return std::string("");}
QQModel* osgParticle::MetaQReflect_LinearInterpolator::createQQModel(const Instance*i){ //return new MetaQReflect_LinearInterpolator_QModel(i);}
QMLLinearInterpolator *ret =new QMLLinearInterpolator(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osgParticle::Interpolator *mother =dynamic_cast<osgParticle::Interpolator*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osgParticle::Interpolator");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osgParticle::Interpolator model for osgParticle::LinearInterpolatoris invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osgParticle::Interpolator");
if(!cl){std::cerr<<"osgParticle::Interpolator QQModel for osgParticle::LinearInterpolatoris not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_LinearInterpolator_pmoc.cpp"
#endif





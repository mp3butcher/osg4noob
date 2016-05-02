#include <osg/CullingSet>
//includes

#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/CullingSet_pmoc.hpp>
#include <customCode/osg/CullingSet_pmoc.hpp>
#include <customCode/osg/Referenced_pmoc.hpp>
#include <customCode/osg/CullingSet_pmoc.hpp>
#include <customCode/osg/Matrixd_pmoc.hpp>
#include <customCode/osg/Polytope_pmoc.hpp>
#include <customCode/osg/ShadowVolumeOccluder_pmoc.hpp>
#include <customCode/osg/StateSet_pmoc.hpp>
#include <customCode/osg/Vec3f_pmoc.hpp>
#include <customCode/osg/Vec4f_pmoc.hpp>
using namespace pmoc;
 float  osg::QReflect_CullingSet:: clampedPixelSize(osg::QReflect_Vec3f  *p0 , float  p1)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_CullingSet::clampedPixelSize : parameter n.0 is NULL\n"<<endl;return -1;}
return _model->clampedPixelSize(*p0->_model ,p1);

}
 float  osg::QReflect_CullingSet:: getSmallFeatureCullingPixelSize()const{
//params checking
return _model->getSmallFeatureCullingPixelSize();

}
 float  osg::QReflect_CullingSet:: pixelSize(osg::QReflect_Vec3f  *p0 , float  p1)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_CullingSet::pixelSize : parameter n.0 is NULL\n"<<endl;return -1;}
return _model->pixelSize(*p0->_model ,p1);

}
 float&  osg::QReflect_CullingSet:: getSmallFeatureCullingPixelSize(){
//params checking
return _model->getSmallFeatureCullingPixelSize();

}
 int  osg::QReflect_CullingSet:: getCullingMask()const{
//params checking
return _model->getCullingMask();

}
 void osg::QReflect_CullingSet::addOccluder(osg::QReflect_ShadowVolumeOccluder  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_CullingSet::addOccluder : parameter n.0 is NULL\n"<<endl;return;}
 _model->addOccluder(*p0->_model);

}
 void osg::QReflect_CullingSet::addStateFrustum(osg::QReflect_StateSet  *p0 ,osg::QReflect_Polytope  *p1){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_CullingSet::addStateFrustum : parameter n.0 is NULL\n"<<endl;return;}
if(! p1) {std::cerr<<"PMOC: osg::QReflect_CullingSet::addStateFrustum : parameter n.1 is NULL\n"<<endl;return;}
 _model->addStateFrustum(p0->_model ,*p1->_model);

}
 void osg::QReflect_CullingSet::popCurrentMask(){
//params checking
 _model->popCurrentMask();

}
 void osg::QReflect_CullingSet::pushCurrentMask(){
//params checking
 _model->pushCurrentMask();

}
 void osg::QReflect_CullingSet::resetCullingMask(){
//params checking
 _model->resetCullingMask();

}
 void osg::QReflect_CullingSet::set(osg::QReflect_CullingSet  *p0 ,osg::QReflect_Matrixd  *p1 ,osg::QReflect_Vec4f  *p2){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_CullingSet::set : parameter n.0 is NULL\n"<<endl;return;}
if(! p1) {std::cerr<<"PMOC: osg::QReflect_CullingSet::set : parameter n.1 is NULL\n"<<endl;return;}
if(! p2) {std::cerr<<"PMOC: osg::QReflect_CullingSet::set : parameter n.2 is NULL\n"<<endl;return;}
 _model->set(*p0->_model ,*p1->_model ,*p2->_model);

}
 void osg::QReflect_CullingSet::set(osg::QReflect_CullingSet  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_CullingSet::set : parameter n.0 is NULL\n"<<endl;return;}
 _model->set(*p0->_model);

}
 void osg::QReflect_CullingSet::setCullingMask( int  p0){
//params checking
 _model->setCullingMask(p0);
emit CullingMaskChanged();

}
 void osg::QReflect_CullingSet::setFrustum(osg::QReflect_Polytope  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_CullingSet::setFrustum : parameter n.0 is NULL\n"<<endl;return;}
 _model->setFrustum(*p0->_model);

}
 void osg::QReflect_CullingSet::setPixelSizeVector(osg::QReflect_Vec4f  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_CullingSet::setPixelSizeVector : parameter n.0 is NULL\n"<<endl;return;}
 _model->setPixelSizeVector(*p0->_model);

}
 void osg::QReflect_CullingSet::setSmallFeatureCullingPixelSize( float  p0){
//params checking
 _model->setSmallFeatureCullingPixelSize(p0);
emit SmallFeatureCullingPixelSizeChanged();

}

///DefaultConstructor////////////////
osg::QReflect_CullingSet::QReflect_CullingSet(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::CullingSet*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_CullingSet::~QReflect_CullingSet( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_CullingSet::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_CullingSet::createInstance( ){
osg::ref_ptr<osg::CullingSet> osg_CullingSet_ptr	;
osg_CullingSet_ptr = new osg::CullingSet ()	;
Instance o(PMOCGETMETACLASS("osg::CullingSet"),(void*)osg_CullingSet_ptr.get()		,true);
_managedinstances.insert(osg_CullingSet_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_CullingSet::MetaQReflect_CullingSet():MetaQQuickClass( "osg::CullingSet"){
_typeid=&typeid(osg::CullingSet );
           qRegisterMetaType<osg::QMLCullingSet>();
           qRegisterMetaType<osg::QMLCullingSet*>("pmoc.osg.QMLCullingSet");
qmlRegisterType<osg::QReflect_CullingSet>("pmoc.osg",1,0,"QReflect_CullingSet");
           qmlRegisterType<osg::QMLCullingSet>("pmoc.osg",1,0,"QMLCullingSet");
};
const std::string osg::MetaQReflect_CullingSet::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_CullingSet::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_CullingSet::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_CullingSet::createQQModel(const Instance*i){ //return new MetaQReflect_CullingSet_QModel(i);}
QMLCullingSet *ret =new QMLCullingSet(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::Referenced *mother =dynamic_cast<osg::Referenced*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::Referenced");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::Referenced model for osg::CullingSetis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::Referenced");
if(!cl){std::cerr<<"osg::Referenced QQModel for osg::CullingSetis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_CullingSet_pmoc.cpp"
#endif





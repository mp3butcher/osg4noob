#include <osgParticle/Interpolator>
//includes

#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osgParticle/Interpolator_pmoc.hpp>
#include <customCode/osgParticle/Interpolator_pmoc.hpp>
#include <customCode/osg/Object_pmoc.hpp>
#include <customCode/osg/Object_pmoc.hpp>
using namespace pmoc;
 bool  osgParticle::QReflect_Interpolator::isSameKindAs(osg::QReflect_Object *p0)const{
return _model->isSameKindAs(p0->_model);

}
const  char*  osgParticle::QReflect_Interpolator::className()const{
return _model->className();

}
const  char*  osgParticle::QReflect_Interpolator::libraryName()const{
return _model->libraryName();

}

///DefaultConstructor////////////////
osgParticle::QReflect_Interpolator::QReflect_Interpolator(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osgParticle::Interpolator*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osgParticle::QReflect_Interpolator::~QReflect_Interpolator( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osgParticle::QReflect_Interpolator::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osgParticle::MetaQReflect_Interpolator::createInstance( ){
std::cerr<<"osgParticle::Interpolator is not instanciable"<<std::endl;return Instance();


}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osgParticle::MetaQReflect_Interpolator::MetaQReflect_Interpolator():MetaQQuickClass( "osgParticle::Interpolator"){
_typeid=&typeid(osgParticle::Interpolator );           qRegisterMetaType<QMLInterpolator>();
qmlRegisterType<QReflect_Interpolator>("pmoc.osgParticle",1,0,"QReflect_Interpolator");
           qmlRegisterType<QMLInterpolator>("pmoc.osgParticle",1,0,"QMLInterpolator");
};
const std::string osgParticle::MetaQReflect_Interpolator::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osgParticle::MetaQReflect_Interpolator::PREcompoQML()const{return std::string("");}
const std::string osgParticle::MetaQReflect_Interpolator::POSTcompoQML()const{return std::string("");}
QQModel* osgParticle::MetaQReflect_Interpolator::createQQModel(Instance*i){ //return new MetaQReflect_Interpolator_QModel(i);}
QMLInterpolator *ret =new QMLInterpolator(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::Object *mother =dynamic_cast<osg::Object*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::Object");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::Object model for osgParticle::Interpolatoris invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::Object");
if(!cl){std::cerr<<"osg::Object QQModel for osgParticle::Interpolatoris not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Interpolator_pmoc.cpp"
#endif



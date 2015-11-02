#include <osg/ShadowVolumeOccluder>
//includes
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/ShadowVolumeOccluder_pmoc.hpp>
#include <customCode/osg/ShadowVolumeOccluder_pmoc.hpp>
#include <customCode/osg/Matrixd_pmoc.hpp>
using namespace pmoc;
 bool  osg::QReflect_ShadowVolumeOccluder::matchProjectionMatrix(osg::QReflect_Matrixd *p0)const{
return _model->matchProjectionMatrix(*p0->_model);

}
 float  osg::QReflect_ShadowVolumeOccluder::getVolume()const{
return _model->getVolume();

}
 void osg::QReflect_ShadowVolumeOccluder::disableResultMasks(){
 _model->disableResultMasks();

}
 void osg::QReflect_ShadowVolumeOccluder::popCurrentMask(){
 _model->popCurrentMask();

}
 void osg::QReflect_ShadowVolumeOccluder::pushCurrentMask(){
 _model->pushCurrentMask();

}
 void osg::QReflect_ShadowVolumeOccluder::transformProvidingInverse(osg::QReflect_Matrixd *p0){
 _model->transformProvidingInverse(*p0->_model);

}

///DefaultConstructor////////////////
osg::QReflect_ShadowVolumeOccluder::QReflect_ShadowVolumeOccluder(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::ShadowVolumeOccluder*>(i->ptr);
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_ShadowVolumeOccluder::~QReflect_ShadowVolumeOccluder( ){
 }
///update this according _model new state
void osg::QReflect_ShadowVolumeOccluder::updateModel(){
}
Instance osg::MetaQReflect_ShadowVolumeOccluder::createInstance( ){
osg::ShadowVolumeOccluder* osg_ShadowVolumeOccluder_ptr	;
osg_ShadowVolumeOccluder_ptr= new osg::ShadowVolumeOccluder()	;
Instance o(PMOCGETMETACLASS("osg::ShadowVolumeOccluder"),(void*)osg_ShadowVolumeOccluder_ptr	,true);
_managedinstances.insert(osg_ShadowVolumeOccluder_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_ShadowVolumeOccluder::MetaQReflect_ShadowVolumeOccluder():MetaQQuickClass( "osg::ShadowVolumeOccluder"){
_typeid=&typeid(osg::ShadowVolumeOccluder );           qRegisterMetaType<QMLShadowVolumeOccluder>();
qmlRegisterType<QReflect_ShadowVolumeOccluder>("pmoc.osg",1,0,"QReflect_ShadowVolumeOccluder");
           qmlRegisterType<QMLShadowVolumeOccluder>("pmoc.osg",1,0,"QMLShadowVolumeOccluder");
};
const std::string osg::MetaQReflect_ShadowVolumeOccluder::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_ShadowVolumeOccluder::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_ShadowVolumeOccluder::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_ShadowVolumeOccluder::createQQModel(Instance*i){ //return new MetaQReflect_ShadowVolumeOccluder_QModel(i);}
QMLShadowVolumeOccluder *ret =new QMLShadowVolumeOccluder(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_ShadowVolumeOccluder_pmoc.cpp"
#endif




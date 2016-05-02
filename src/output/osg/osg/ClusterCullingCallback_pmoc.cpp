#include <osg/ClusterCullingCallback>
//includes

#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/ClusterCullingCallback_pmoc.hpp>
#include <customCode/osg/ClusterCullingCallback_pmoc.hpp>
#include <customCode/osg/Callback_pmoc.hpp>
#include <customCode/osg/Drawable_pmoc.hpp>
#include <customCode/osg/Matrixd_pmoc.hpp>
#include <customCode/osg/NodeVisitor_pmoc.hpp>
#include <customCode/osg/Node_pmoc.hpp>
#include <customCode/osg/Object_pmoc.hpp>
#include <customCode/osg/State_pmoc.hpp>
#include <customCode/osg/Vec3f_pmoc.hpp>
using namespace pmoc;
 bool  osg::QReflect_ClusterCullingCallback:: cull(osg::QReflect_NodeVisitor  *p0 ,osg::QReflect_Drawable  *p1 ,osg::QReflect_State  *p2)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_ClusterCullingCallback::cull : parameter n.0 is NULL\n"<<endl;return -1;}
if(! p1) {std::cerr<<"PMOC: osg::QReflect_ClusterCullingCallback::cull : parameter n.1 is NULL\n"<<endl;return -1;}
if(! p2) {std::cerr<<"PMOC: osg::QReflect_ClusterCullingCallback::cull : parameter n.2 is NULL\n"<<endl;return -1;}
return _model->cull(p0->_model ,p1->_model ,p2->_model);

}
 bool  osg::QReflect_ClusterCullingCallback:: run(osg::QReflect_Object  *p0 ,osg::QReflect_Object  *p1){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_ClusterCullingCallback::run : parameter n.0 is NULL\n"<<endl;return -1;}
if(! p1) {std::cerr<<"PMOC: osg::QReflect_ClusterCullingCallback::run : parameter n.1 is NULL\n"<<endl;return -1;}
return _model->run(p0->_model ,p1->_model);

}
 float  osg::QReflect_ClusterCullingCallback:: getDeviation()const{
//params checking
return _model->getDeviation();

}
 float  osg::QReflect_ClusterCullingCallback:: getRadius()const{
//params checking
return _model->getRadius();

}
 void osg::QReflect_ClusterCullingCallback::computeFrom(osg::QReflect_Drawable  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_ClusterCullingCallback::computeFrom : parameter n.0 is NULL\n"<<endl;return;}
 _model->computeFrom(p0->_model);

}
 void osg::QReflect_ClusterCullingCallback::operator()(osg::QReflect_Node  *p0 ,osg::QReflect_NodeVisitor  *p1){
//params checking
 _model->operator()(p0->_model ,p1->_model);

}
 void osg::QReflect_ClusterCullingCallback::set(osg::QReflect_Vec3f  *p0 ,osg::QReflect_Vec3f  *p1 , float  p2 , float  p3){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_ClusterCullingCallback::set : parameter n.0 is NULL\n"<<endl;return;}
if(! p1) {std::cerr<<"PMOC: osg::QReflect_ClusterCullingCallback::set : parameter n.1 is NULL\n"<<endl;return;}
 _model->set(*p0->_model ,*p1->_model ,p2 ,p3);

}
 void osg::QReflect_ClusterCullingCallback::setControlPoint(osg::QReflect_Vec3f  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_ClusterCullingCallback::setControlPoint : parameter n.0 is NULL\n"<<endl;return;}
 _model->setControlPoint(*p0->_model);

}
 void osg::QReflect_ClusterCullingCallback::setDeviation( float  p0){
//params checking
 _model->setDeviation(p0);
emit DeviationChanged();

}
 void osg::QReflect_ClusterCullingCallback::setNormal(osg::QReflect_Vec3f  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_ClusterCullingCallback::setNormal : parameter n.0 is NULL\n"<<endl;return;}
 _model->setNormal(*p0->_model);

}
 void osg::QReflect_ClusterCullingCallback::setRadius( float  p0){
//params checking
 _model->setRadius(p0);
emit RadiusChanged();

}
 void osg::QReflect_ClusterCullingCallback::transform(osg::QReflect_Matrixd  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_ClusterCullingCallback::transform : parameter n.0 is NULL\n"<<endl;return;}
 _model->transform(*p0->_model);

}

///DefaultConstructor////////////////
osg::QReflect_ClusterCullingCallback::QReflect_ClusterCullingCallback(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =dynamic_cast<osg::ClusterCullingCallback*>(reinterpret_cast<osg::Referenced*>(i->ptr));
 if(!_model)  _model =dynamic_cast<osg::ClusterCullingCallback*>(reinterpret_cast<osg::Object*>(i->ptr));
 if(!_model)  _model =dynamic_cast<osg::ClusterCullingCallback*>(reinterpret_cast<osg::Drawable::CullCallback*>(i->ptr));
 if(!_model)  _model =reinterpret_cast<osg::ClusterCullingCallback*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_ClusterCullingCallback::~QReflect_ClusterCullingCallback( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_ClusterCullingCallback::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_ClusterCullingCallback::createInstance( ){
osg::ref_ptr<osg::ClusterCullingCallback> osg_ClusterCullingCallback_ptr	;
osg_ClusterCullingCallback_ptr = new osg::ClusterCullingCallback ()	;
Instance o(PMOCGETMETACLASS("osg::ClusterCullingCallback"),(void*)dynamic_cast<osg::Drawable::CullCallback*>( osg_ClusterCullingCallback_ptr.get()		),true);
_managedinstances.insert(osg_ClusterCullingCallback_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_ClusterCullingCallback::MetaQReflect_ClusterCullingCallback():MetaQQuickClass( "osg::ClusterCullingCallback"){
_typeid=&typeid(osg::ClusterCullingCallback );
           qRegisterMetaType<osg::QMLClusterCullingCallback>();
           qRegisterMetaType<osg::QMLClusterCullingCallback*>("pmoc.osg.QMLClusterCullingCallback");
qmlRegisterType<osg::QReflect_ClusterCullingCallback>("pmoc.osg",1,0,"QReflect_ClusterCullingCallback");
           qmlRegisterType<osg::QMLClusterCullingCallback>("pmoc.osg",1,0,"QMLClusterCullingCallback");
};
const std::string osg::MetaQReflect_ClusterCullingCallback::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_ClusterCullingCallback::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_ClusterCullingCallback::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_ClusterCullingCallback::createQQModel(const Instance*i){ //return new MetaQReflect_ClusterCullingCallback_QModel(i);}
QMLClusterCullingCallback *ret =new QMLClusterCullingCallback(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::NodeCallback *mother =dynamic_cast<osg::NodeCallback*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::NodeCallback");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::NodeCallback model for osg::ClusterCullingCallbackis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::NodeCallback");
if(!cl){std::cerr<<"osg::NodeCallback QQModel for osg::ClusterCullingCallbackis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_ClusterCullingCallback_pmoc.cpp"
#endif





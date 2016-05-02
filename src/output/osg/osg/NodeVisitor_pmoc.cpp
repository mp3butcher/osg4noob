#include <osg/NodeVisitor>
//includes

#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/NodeVisitor_pmoc.hpp>
#include <customCode/osg/NodeVisitor_pmoc.hpp>
#include <customCode/osg/Node_pmoc.hpp>
using namespace pmoc;
 void osg::QReflect_NodeAcceptOp::operator()(osg::QReflect_Node  *p0){
//params checking
 _model->operator()(p0->_model);

}

///DefaultConstructor////////////////
osg::QReflect_NodeAcceptOp::QReflect_NodeAcceptOp(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::NodeAcceptOp*>(i->ptr);
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_NodeAcceptOp::~QReflect_NodeAcceptOp( ){
 }
///update this according _model new state
void osg::QReflect_NodeAcceptOp::updateModel(){
}
Instance osg::MetaQReflect_NodeAcceptOp::createInstance( ){
std::cerr<<"osg::NodeAcceptOp is not instanciable"<<std::endl;return Instance();


}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_NodeAcceptOp::MetaQReflect_NodeAcceptOp():MetaQQuickClass( "osg::NodeAcceptOp"){
_typeid=&typeid(osg::NodeAcceptOp );
           qRegisterMetaType<osg::QMLNodeAcceptOp>();
           qRegisterMetaType<osg::QMLNodeAcceptOp*>("pmoc.osg.QMLNodeAcceptOp");
qmlRegisterType<osg::QReflect_NodeAcceptOp>("pmoc.osg",1,0,"QReflect_NodeAcceptOp");
           qmlRegisterType<osg::QMLNodeAcceptOp>("pmoc.osg",1,0,"QMLNodeAcceptOp");
};
const std::string osg::MetaQReflect_NodeAcceptOp::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_NodeAcceptOp::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_NodeAcceptOp::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_NodeAcceptOp::createQQModel(const Instance*i){ //return new MetaQReflect_NodeAcceptOp_QModel(i);}
QMLNodeAcceptOp *ret =new QMLNodeAcceptOp(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_NodeVisitor_pmoc.cpp"
#endif
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/NodeVisitor_pmoc.hpp>
#include <customCode/osg/NodeVisitor_pmoc.hpp>
#include <customCode/osg/Object_pmoc.hpp>
#include <customCode/osg/Billboard_pmoc.hpp>
#include <customCode/osg/CameraView_pmoc.hpp>
#include <customCode/osg/Camera_pmoc.hpp>
#include <customCode/osg/ClearNode_pmoc.hpp>
#include <customCode/osg/ClipNode_pmoc.hpp>
#include <customCode/osg/CoordinateSystemNode_pmoc.hpp>
#include <customCode/osg/Drawable_pmoc.hpp>
#include <customCode/osg/FrameStamp_pmoc.hpp>
#include <customCode/osg/Geode_pmoc.hpp>
#include <customCode/osg/Geometry_pmoc.hpp>
#include <customCode/osg/Group_pmoc.hpp>
#include <customCode/osg/LOD_pmoc.hpp>
#include <customCode/osg/LightSource_pmoc.hpp>
#include <customCode/osg/MatrixTransform_pmoc.hpp>
#include <customCode/osg/NodeVisitor_pmoc.hpp>
#include <customCode/osg/Node_pmoc.hpp>
#include <customCode/osg/OccluderNode_pmoc.hpp>
#include <customCode/osg/OcclusionQueryNode_pmoc.hpp>
#include <customCode/osg/PagedLOD_pmoc.hpp>
#include <customCode/osg/PositionAttitudeTransform_pmoc.hpp>
#include <customCode/osg/Projection_pmoc.hpp>
#include <customCode/osg/ProxyNode_pmoc.hpp>
#include <customCode/osg/Sequence_pmoc.hpp>
#include <customCode/osg/Switch_pmoc.hpp>
#include <customCode/osg/TexGenNode_pmoc.hpp>
#include <customCode/osg/Transform_pmoc.hpp>
#include <customCode/osg/Vec3f_pmoc.hpp>
using namespace pmoc;
 bool  osg::QReflect_NodeVisitor:: validNodeMask(osg::QReflect_Node  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_NodeVisitor::validNodeMask : parameter n.0 is NULL\n"<<endl;return -1;}
return _model->validNodeMask(*p0->_model);

}
 float  osg::QReflect_NodeVisitor:: getDistanceFromEyePoint(osg::QReflect_Vec3f  *p0 , bool  p1)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_NodeVisitor::getDistanceFromEyePoint : parameter n.0 is NULL\n"<<endl;return -1;}
return _model->getDistanceFromEyePoint(*p0->_model ,p1);

}
 float  osg::QReflect_NodeVisitor:: getDistanceToEyePoint(osg::QReflect_Vec3f  *p0 , bool  p1)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_NodeVisitor::getDistanceToEyePoint : parameter n.0 is NULL\n"<<endl;return -1;}
return _model->getDistanceToEyePoint(*p0->_model ,p1);

}
 float  osg::QReflect_NodeVisitor:: getDistanceToViewPoint(osg::QReflect_Vec3f  *p0 , bool  p1)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_NodeVisitor::getDistanceToViewPoint : parameter n.0 is NULL\n"<<endl;return -1;}
return _model->getDistanceToViewPoint(*p0->_model ,p1);

}
 unsigned int  osg::QReflect_NodeVisitor:: getNodeMaskOverride()const{
//params checking
return _model->getNodeMaskOverride();

}
 unsigned int  osg::QReflect_NodeVisitor:: getTraversalMask()const{
//params checking
return _model->getTraversalMask();

}
 unsigned int  osg::QReflect_NodeVisitor:: getTraversalNumber()const{
//params checking
return _model->getTraversalNumber();

}
 void osg::QReflect_NodeVisitor::apply(osg::QReflect_Billboard  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_NodeVisitor::apply : parameter n.0 is NULL\n"<<endl;return;}
 _model->apply(*p0->_model);

}
 void osg::QReflect_NodeVisitor::apply(osg::QReflect_Camera  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_NodeVisitor::apply : parameter n.0 is NULL\n"<<endl;return;}
 _model->apply(*p0->_model);

}
 void osg::QReflect_NodeVisitor::apply(osg::QReflect_CameraView  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_NodeVisitor::apply : parameter n.0 is NULL\n"<<endl;return;}
 _model->apply(*p0->_model);

}
 void osg::QReflect_NodeVisitor::apply(osg::QReflect_ClearNode  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_NodeVisitor::apply : parameter n.0 is NULL\n"<<endl;return;}
 _model->apply(*p0->_model);

}
 void osg::QReflect_NodeVisitor::apply(osg::QReflect_ClipNode  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_NodeVisitor::apply : parameter n.0 is NULL\n"<<endl;return;}
 _model->apply(*p0->_model);

}
 void osg::QReflect_NodeVisitor::apply(osg::QReflect_CoordinateSystemNode  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_NodeVisitor::apply : parameter n.0 is NULL\n"<<endl;return;}
 _model->apply(*p0->_model);

}
 void osg::QReflect_NodeVisitor::apply(osg::QReflect_Drawable  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_NodeVisitor::apply : parameter n.0 is NULL\n"<<endl;return;}
 _model->apply(*p0->_model);

}
 void osg::QReflect_NodeVisitor::apply(osg::QReflect_Geode  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_NodeVisitor::apply : parameter n.0 is NULL\n"<<endl;return;}
 _model->apply(*p0->_model);

}
 void osg::QReflect_NodeVisitor::apply(osg::QReflect_Geometry  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_NodeVisitor::apply : parameter n.0 is NULL\n"<<endl;return;}
 _model->apply(*p0->_model);

}
 void osg::QReflect_NodeVisitor::apply(osg::QReflect_Group  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_NodeVisitor::apply : parameter n.0 is NULL\n"<<endl;return;}
 _model->apply(*p0->_model);

}
 void osg::QReflect_NodeVisitor::apply(osg::QReflect_LOD  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_NodeVisitor::apply : parameter n.0 is NULL\n"<<endl;return;}
 _model->apply(*p0->_model);

}
 void osg::QReflect_NodeVisitor::apply(osg::QReflect_LightSource  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_NodeVisitor::apply : parameter n.0 is NULL\n"<<endl;return;}
 _model->apply(*p0->_model);

}
 void osg::QReflect_NodeVisitor::apply(osg::QReflect_MatrixTransform  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_NodeVisitor::apply : parameter n.0 is NULL\n"<<endl;return;}
 _model->apply(*p0->_model);

}
 void osg::QReflect_NodeVisitor::apply(osg::QReflect_Node  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_NodeVisitor::apply : parameter n.0 is NULL\n"<<endl;return;}
 _model->apply(*p0->_model);

}
 void osg::QReflect_NodeVisitor::apply(osg::QReflect_OccluderNode  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_NodeVisitor::apply : parameter n.0 is NULL\n"<<endl;return;}
 _model->apply(*p0->_model);

}
 void osg::QReflect_NodeVisitor::apply(osg::QReflect_OcclusionQueryNode  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_NodeVisitor::apply : parameter n.0 is NULL\n"<<endl;return;}
 _model->apply(*p0->_model);

}
 void osg::QReflect_NodeVisitor::apply(osg::QReflect_PagedLOD  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_NodeVisitor::apply : parameter n.0 is NULL\n"<<endl;return;}
 _model->apply(*p0->_model);

}
 void osg::QReflect_NodeVisitor::apply(osg::QReflect_PositionAttitudeTransform  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_NodeVisitor::apply : parameter n.0 is NULL\n"<<endl;return;}
 _model->apply(*p0->_model);

}
 void osg::QReflect_NodeVisitor::apply(osg::QReflect_Projection  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_NodeVisitor::apply : parameter n.0 is NULL\n"<<endl;return;}
 _model->apply(*p0->_model);

}
 void osg::QReflect_NodeVisitor::apply(osg::QReflect_ProxyNode  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_NodeVisitor::apply : parameter n.0 is NULL\n"<<endl;return;}
 _model->apply(*p0->_model);

}
 void osg::QReflect_NodeVisitor::apply(osg::QReflect_Sequence  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_NodeVisitor::apply : parameter n.0 is NULL\n"<<endl;return;}
 _model->apply(*p0->_model);

}
 void osg::QReflect_NodeVisitor::apply(osg::QReflect_Switch  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_NodeVisitor::apply : parameter n.0 is NULL\n"<<endl;return;}
 _model->apply(*p0->_model);

}
 void osg::QReflect_NodeVisitor::apply(osg::QReflect_TexGenNode  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_NodeVisitor::apply : parameter n.0 is NULL\n"<<endl;return;}
 _model->apply(*p0->_model);

}
 void osg::QReflect_NodeVisitor::apply(osg::QReflect_Transform  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_NodeVisitor::apply : parameter n.0 is NULL\n"<<endl;return;}
 _model->apply(*p0->_model);

}
 void osg::QReflect_NodeVisitor::popFromNodePath(){
//params checking
 _model->popFromNodePath();

}
 void osg::QReflect_NodeVisitor::pushOntoNodePath(osg::QReflect_Node  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_NodeVisitor::pushOntoNodePath : parameter n.0 is NULL\n"<<endl;return;}
 _model->pushOntoNodePath(p0->_model);

}
 void osg::QReflect_NodeVisitor::reset(){
//params checking
 _model->reset();

}
 void osg::QReflect_NodeVisitor::setFrameStamp(osg::QReflect_FrameStamp  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_NodeVisitor::setFrameStamp : parameter n.0 is NULL\n"<<endl;return;}
 _model->setFrameStamp(p0->_model);
emit FrameStampChanged();

}
 void osg::QReflect_NodeVisitor::setNodeMaskOverride( unsigned int  p0){
//params checking
 _model->setNodeMaskOverride(p0);
emit NodeMaskOverrideChanged();

}
 void osg::QReflect_NodeVisitor::setTraversalMask( unsigned int  p0){
//params checking
 _model->setTraversalMask(p0);
emit TraversalMaskChanged();

}
 void osg::QReflect_NodeVisitor::setTraversalMode(osg::QReflect_NodeVisitor::TraversalMode  p0){
//params checking
 _model->setTraversalMode(static_cast<osg::NodeVisitor::TraversalMode>(p0));
emit TraversalModeChanged();

}
 void osg::QReflect_NodeVisitor::setTraversalNumber( unsigned int  p0){
//params checking
 _model->setTraversalNumber(p0);
emit TraversalNumberChanged();

}
 void osg::QReflect_NodeVisitor::setVisitorType(osg::QReflect_NodeVisitor::VisitorType  p0){
//params checking
 _model->setVisitorType(static_cast<osg::NodeVisitor::VisitorType>(p0));
emit VisitorTypeChanged();

}
 void osg::QReflect_NodeVisitor::traverse(osg::QReflect_Node  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_NodeVisitor::traverse : parameter n.0 is NULL\n"<<endl;return;}
 _model->traverse(*p0->_model);

}
osg::QReflect_FrameStamp*osg::QReflect_NodeVisitor::getFrameStamp()const{
//params checking
PMOCSAFEADDOBJECT(*_model->getFrameStamp(),inst);
return inst.isValid()?((osg::QReflect_FrameStamp * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_NodeVisitor*osg::QReflect_NodeVisitor::asNodeVisitor()const{
//params checking
PMOCSAFEADDOBJECT(*_model->asNodeVisitor(),inst);
return inst.isValid()?((osg::QReflect_NodeVisitor * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_NodeVisitor*osg::QReflect_NodeVisitor::asNodeVisitor(){
//params checking
PMOCSAFEADDOBJECT(*_model->asNodeVisitor(),inst);
return inst.isValid()?((osg::QReflect_NodeVisitor * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_NodeVisitor::TraversalMode  osg::QReflect_NodeVisitor::getTraversalMode()const{
//params checking
osg::QReflect_NodeVisitor::TraversalMode ret=static_cast<osg::QReflect_NodeVisitor::TraversalMode>( _model->getTraversalMode());return  ret;

}
osg::QReflect_NodeVisitor::VisitorType  osg::QReflect_NodeVisitor::getVisitorType()const{
//params checking
osg::QReflect_NodeVisitor::VisitorType ret=static_cast<osg::QReflect_NodeVisitor::VisitorType>( _model->getVisitorType());return  ret;

}

///DefaultConstructor////////////////
osg::QReflect_NodeVisitor::QReflect_NodeVisitor(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =dynamic_cast<osg::NodeVisitor*>(reinterpret_cast<osg::Referenced*>(i->ptr));
 if(!_model)  _model =dynamic_cast<osg::NodeVisitor*>(reinterpret_cast<osg::Object*>(i->ptr));
 if(!_model)  _model =reinterpret_cast<osg::NodeVisitor*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_NodeVisitor::~QReflect_NodeVisitor( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_NodeVisitor::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_NodeVisitor::createInstance( ){
osg::ref_ptr<osg::NodeVisitor> osg_NodeVisitor_ptr	;
osg_NodeVisitor_ptr = new osg::NodeVisitor ()	;
Instance o(PMOCGETMETACLASS("osg::NodeVisitor"),(void*)dynamic_cast<osg::Object*>( osg_NodeVisitor_ptr.get()		),true);
_managedinstances.insert(osg_NodeVisitor_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_NodeVisitor::MetaQReflect_NodeVisitor():MetaQQuickClass( "osg::NodeVisitor"){
_typeid=&typeid(osg::NodeVisitor );
           qRegisterMetaType<osg::QMLNodeVisitor>();
           qRegisterMetaType<osg::QMLNodeVisitor*>("pmoc.osg.QMLNodeVisitor");
qmlRegisterType<osg::QReflect_NodeVisitor>("pmoc.osg",1,0,"QReflect_NodeVisitor");
           qmlRegisterType<osg::QMLNodeVisitor>("pmoc.osg",1,0,"QMLNodeVisitor");
};
const std::string osg::MetaQReflect_NodeVisitor::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_NodeVisitor::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_NodeVisitor::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_NodeVisitor::createQQModel(const Instance*i){ //return new MetaQReflect_NodeVisitor_QModel(i);}
QMLNodeVisitor *ret =new QMLNodeVisitor(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::Object *mother =dynamic_cast<osg::Object*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::Object");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::Object model for osg::NodeVisitoris invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::Object");
if(!cl){std::cerr<<"osg::Object QQModel for osg::NodeVisitoris not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_NodeVisitor_pmoc.cpp"
#endif





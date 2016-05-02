#include <osg/Node>
//includes

#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/Node_pmoc.hpp>
#include <customCode/osg/Node_pmoc.hpp>
#include <customCode/osg/Object_pmoc.hpp>
#include <customCode/osg/Callback_pmoc.hpp>
#include <customCode/osg/Camera_pmoc.hpp>
#include <customCode/osg/CopyOp_pmoc.hpp>
#include <customCode/osg/Drawable_pmoc.hpp>
#include <customCode/osg/Geode_pmoc.hpp>
#include <customCode/osg/Geometry_pmoc.hpp>
#include <customCode/osg/Group_pmoc.hpp>
#include <customCode/osg/NodeVisitor_pmoc.hpp>
#include <customCode/osg/Node_pmoc.hpp>
#include <customCode/osg/Object_pmoc.hpp>
#include <customCode/osg/StateSet_pmoc.hpp>
#include <customCode/osg/State_pmoc.hpp>
#include <customCode/osg/Switch_pmoc.hpp>
#include <customCode/osg/Transform_pmoc.hpp>
using namespace pmoc;
 bool  osg::QReflect_Node:: containsOccluderNodes()const{
//params checking
return _model->containsOccluderNodes();

}
 bool  osg::QReflect_Node:: getCullingActive()const{
//params checking
return _model->getCullingActive();

}
 bool  osg::QReflect_Node:: isCullingActive()const{
//params checking
return _model->isCullingActive();

}
 bool  osg::QReflect_Node:: isSameKindAs(osg::QReflect_Object  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Node::isSameKindAs : parameter n.0 is NULL\n"<<endl;return -1;}
return _model->isSameKindAs(p0->_model);

}
 unsigned int  osg::QReflect_Node:: getNodeMask()const{
//params checking
return _model->getNodeMask();

}
 unsigned int  osg::QReflect_Node:: getNumChildrenRequiringEventTraversal()const{
//params checking
return _model->getNumChildrenRequiringEventTraversal();

}
 unsigned int  osg::QReflect_Node:: getNumChildrenRequiringUpdateTraversal()const{
//params checking
return _model->getNumChildrenRequiringUpdateTraversal();

}
 unsigned int  osg::QReflect_Node:: getNumChildrenWithCullingDisabled()const{
//params checking
return _model->getNumChildrenWithCullingDisabled();

}
 unsigned int  osg::QReflect_Node:: getNumChildrenWithOccluderNodes()const{
//params checking
return _model->getNumChildrenWithOccluderNodes();

}
 unsigned int  osg::QReflect_Node:: getNumDescriptions()const{
//params checking
return _model->getNumDescriptions();

}
 unsigned int  osg::QReflect_Node:: getNumParents()const{
//params checking
return _model->getNumParents();

}
 void osg::QReflect_Node::accept(osg::QReflect_NodeVisitor  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Node::accept : parameter n.0 is NULL\n"<<endl;return;}
 _model->accept(*p0->_model);

}
 void osg::QReflect_Node::addCullCallback(osg::QReflect_Callback  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Node::addCullCallback : parameter n.0 is NULL\n"<<endl;return;}
 _model->addCullCallback(p0->_model);
emit CullCallbackCollectionChanged();

}
 void osg::QReflect_Node::addDescription(const  QString  &p0){
//params checking
 _model->addDescription(std::string(p0.toStdString()));

}
 void osg::QReflect_Node::addEventCallback(osg::QReflect_Callback  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Node::addEventCallback : parameter n.0 is NULL\n"<<endl;return;}
 _model->addEventCallback(p0->_model);
emit EventCallbackCollectionChanged();

}
 void osg::QReflect_Node::addUpdateCallback(osg::QReflect_Callback  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Node::addUpdateCallback : parameter n.0 is NULL\n"<<endl;return;}
 _model->addUpdateCallback(p0->_model);
emit UpdateCallbackCollectionChanged();

}
 void osg::QReflect_Node::ascend(osg::QReflect_NodeVisitor  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Node::ascend : parameter n.0 is NULL\n"<<endl;return;}
 _model->ascend(*p0->_model);

}
 void osg::QReflect_Node::dirtyBound(){
//params checking
 _model->dirtyBound();

}
 void osg::QReflect_Node::releaseGLObjects(osg::QReflect_State  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Node::releaseGLObjects : parameter n.0 is NULL\n"<<endl;return;}
 _model->releaseGLObjects(p0->_model);

}
 void osg::QReflect_Node::removeCullCallback(osg::QReflect_Callback  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Node::removeCullCallback : parameter n.0 is NULL\n"<<endl;return;}
 _model->removeCullCallback(p0->_model);
emit CullCallbackCollectionChanged();

}
 void osg::QReflect_Node::removeEventCallback(osg::QReflect_Callback  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Node::removeEventCallback : parameter n.0 is NULL\n"<<endl;return;}
 _model->removeEventCallback(p0->_model);
emit EventCallbackCollectionChanged();

}
 void osg::QReflect_Node::removeUpdateCallback(osg::QReflect_Callback  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Node::removeUpdateCallback : parameter n.0 is NULL\n"<<endl;return;}
 _model->removeUpdateCallback(p0->_model);
emit UpdateCallbackCollectionChanged();

}
 void osg::QReflect_Node::resizeGLObjectBuffers( unsigned int  p0){
//params checking
 _model->resizeGLObjectBuffers(p0);

}
 void osg::QReflect_Node::setCullCallback(osg::QReflect_Callback  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Node::setCullCallback : parameter n.0 is NULL\n"<<endl;return;}
 _model->setCullCallback(p0->_model);
emit CullCallbackChanged();

}
 void osg::QReflect_Node::setCullingActive( bool  p0){
//params checking
 _model->setCullingActive(p0);
emit CullingActiveChanged();

}
 void osg::QReflect_Node::setEventCallback(osg::QReflect_Callback  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Node::setEventCallback : parameter n.0 is NULL\n"<<endl;return;}
 _model->setEventCallback(p0->_model);
emit EventCallbackChanged();

}
 void osg::QReflect_Node::setNodeMask( unsigned int  p0){
//params checking
 _model->setNodeMask(p0);
emit NodeMaskChanged();

}
 void osg::QReflect_Node::setStateSet(osg::QReflect_StateSet  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Node::setStateSet : parameter n.0 is NULL\n"<<endl;return;}
 _model->setStateSet(p0->_model);
emit StateSetChanged();

}
 void osg::QReflect_Node::setThreadSafeRefUnref( bool  p0){
//params checking
 _model->setThreadSafeRefUnref(p0);

}
 void osg::QReflect_Node::setUpdateCallback(osg::QReflect_Callback  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Node::setUpdateCallback : parameter n.0 is NULL\n"<<endl;return;}
 _model->setUpdateCallback(p0->_model);
emit UpdateCallbackChanged();

}
 void osg::QReflect_Node::traverse(osg::QReflect_NodeVisitor  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Node::traverse : parameter n.0 is NULL\n"<<endl;return;}
 _model->traverse(*p0->_model);

}
QString  osg::QReflect_Node::getDescription( unsigned int  p0)const{
//params checking
QString ret(_model->getDescription(p0).c_str());return ret;

}
QString  osg::QReflect_Node::getDescription( unsigned int  p0){
//params checking
QString ret(_model->getDescription(p0).c_str());return ret;

}
const  char*  osg::QReflect_Node:: className()const{
//params checking
return _model->className();

}
const  char*  osg::QReflect_Node:: libraryName()const{
//params checking
return _model->libraryName();

}
osg::QReflect_Callback*osg::QReflect_Node::getCullCallback()const{
//params checking
PMOCSAFEADDOBJECT(*_model->getCullCallback(),inst);
return inst.isValid()?((osg::QReflect_Callback * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Callback*osg::QReflect_Node::getCullCallback(){
//params checking
PMOCSAFEADDOBJECT(*_model->getCullCallback(),inst);
return inst.isValid()?((osg::QReflect_Callback * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Callback*osg::QReflect_Node::getEventCallback()const{
//params checking
PMOCSAFEADDOBJECT(*_model->getEventCallback(),inst);
return inst.isValid()?((osg::QReflect_Callback * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Callback*osg::QReflect_Node::getEventCallback(){
//params checking
PMOCSAFEADDOBJECT(*_model->getEventCallback(),inst);
return inst.isValid()?((osg::QReflect_Callback * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Callback*osg::QReflect_Node::getUpdateCallback()const{
//params checking
PMOCSAFEADDOBJECT(*_model->getUpdateCallback(),inst);
return inst.isValid()?((osg::QReflect_Callback * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Callback*osg::QReflect_Node::getUpdateCallback(){
//params checking
PMOCSAFEADDOBJECT(*_model->getUpdateCallback(),inst);
return inst.isValid()?((osg::QReflect_Callback * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Camera*osg::QReflect_Node::asCamera()const{
//params checking
PMOCSAFEADDOBJECT(*_model->asCamera(),inst);
return inst.isValid()?((osg::QReflect_Camera * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Camera*osg::QReflect_Node::asCamera(){
//params checking
PMOCSAFEADDOBJECT(*_model->asCamera(),inst);
return inst.isValid()?((osg::QReflect_Camera * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Drawable*osg::QReflect_Node::asDrawable()const{
//params checking
PMOCSAFEADDOBJECT(*_model->asDrawable(),inst);
return inst.isValid()?((osg::QReflect_Drawable * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Drawable*osg::QReflect_Node::asDrawable(){
//params checking
PMOCSAFEADDOBJECT(*_model->asDrawable(),inst);
return inst.isValid()?((osg::QReflect_Drawable * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Geode*osg::QReflect_Node::asGeode()const{
//params checking
PMOCSAFEADDOBJECT(*_model->asGeode(),inst);
return inst.isValid()?((osg::QReflect_Geode * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Geode*osg::QReflect_Node::asGeode(){
//params checking
PMOCSAFEADDOBJECT(*_model->asGeode(),inst);
return inst.isValid()?((osg::QReflect_Geode * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Geometry*osg::QReflect_Node::asGeometry()const{
//params checking
PMOCSAFEADDOBJECT(*_model->asGeometry(),inst);
return inst.isValid()?((osg::QReflect_Geometry * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Geometry*osg::QReflect_Node::asGeometry(){
//params checking
PMOCSAFEADDOBJECT(*_model->asGeometry(),inst);
return inst.isValid()?((osg::QReflect_Geometry * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Group*osg::QReflect_Node::asGroup()const{
//params checking
PMOCSAFEADDOBJECT(*_model->asGroup(),inst);
return inst.isValid()?((osg::QReflect_Group * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Group*osg::QReflect_Node::asGroup(){
//params checking
PMOCSAFEADDOBJECT(*_model->asGroup(),inst);
return inst.isValid()?((osg::QReflect_Group * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Group*osg::QReflect_Node::getParent( unsigned int  p0)const{
//params checking
PMOCSAFEADDOBJECT(*_model->getParent(p0),inst);
return inst.isValid()?((osg::QReflect_Group * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Group*osg::QReflect_Node::getParent( unsigned int  p0){
//params checking
PMOCSAFEADDOBJECT(*_model->getParent(p0),inst);
return inst.isValid()?((osg::QReflect_Group * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Node*osg::QReflect_Node::asNode()const{
//params checking
PMOCSAFEADDOBJECT(*_model->asNode(),inst);
return inst.isValid()?((osg::QReflect_Node * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Node*osg::QReflect_Node::asNode(){
//params checking
PMOCSAFEADDOBJECT(*_model->asNode(),inst);
return inst.isValid()?((osg::QReflect_Node * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Object*osg::QReflect_Node::clone(osg::QReflect_CopyOp  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Node::clone : parameter n.0 is NULL\n"<<endl;;}
PMOCSAFEADDOBJECT(*_model->clone(*p0->_model),inst);
return inst.isValid()?((osg::QReflect_Object * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Object*osg::QReflect_Node::cloneType()const{
//params checking
PMOCSAFEADDOBJECT(*_model->cloneType(),inst);
return inst.isValid()?((osg::QReflect_Object * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_StateSet*osg::QReflect_Node::getOrCreateStateSet(){
//params checking
PMOCSAFEADDOBJECT(*_model->getOrCreateStateSet(),inst);
return inst.isValid()?((osg::QReflect_StateSet * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_StateSet*osg::QReflect_Node::getStateSet()const{
//params checking
PMOCSAFEADDOBJECT(*_model->getStateSet(),inst);
return inst.isValid()?((osg::QReflect_StateSet * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_StateSet*osg::QReflect_Node::getStateSet(){
//params checking
PMOCSAFEADDOBJECT(*_model->getStateSet(),inst);
return inst.isValid()?((osg::QReflect_StateSet * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Switch*osg::QReflect_Node::asSwitch()const{
//params checking
PMOCSAFEADDOBJECT(*_model->asSwitch(),inst);
return inst.isValid()?((osg::QReflect_Switch * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Switch*osg::QReflect_Node::asSwitch(){
//params checking
PMOCSAFEADDOBJECT(*_model->asSwitch(),inst);
return inst.isValid()?((osg::QReflect_Switch * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Transform*osg::QReflect_Node::asTransform()const{
//params checking
PMOCSAFEADDOBJECT(*_model->asTransform(),inst);
return inst.isValid()?((osg::QReflect_Transform * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Transform*osg::QReflect_Node::asTransform(){
//params checking
PMOCSAFEADDOBJECT(*_model->asTransform(),inst);
return inst.isValid()?((osg::QReflect_Transform * )inst.model->createQQModel(&inst)):NULL;
}

///DefaultConstructor////////////////
osg::QReflect_Node::QReflect_Node(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::Node*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_Node::~QReflect_Node( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_Node::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_Node::createInstance( ){
osg::ref_ptr<osg::Node> osg_Node_ptr	;
osg_Node_ptr = new osg::Node ()	;
Instance o(PMOCGETMETACLASS("osg::Node"),(void*)osg_Node_ptr.get()		,true);
_managedinstances.insert(osg_Node_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_Node::MetaQReflect_Node():MetaQQuickClass( "osg::Node"){
_typeid=&typeid(osg::Node );
           qRegisterMetaType<osg::QMLNode>();
           qRegisterMetaType<osg::QMLNode*>("pmoc.osg.QMLNode");
qmlRegisterType<osg::QReflect_Node>("pmoc.osg",1,0,"QReflect_Node");
           qmlRegisterType<osg::QMLNode>("pmoc.osg",1,0,"QMLNode");
};
const std::string osg::MetaQReflect_Node::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_Node::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_Node::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_Node::createQQModel(const Instance*i){ //return new MetaQReflect_Node_QModel(i);}
QMLNode *ret =new QMLNode(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::Object *mother =dynamic_cast<osg::Object*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::Object");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::Object model for osg::Nodeis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::Object");
if(!cl){std::cerr<<"osg::Object QQModel for osg::Nodeis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Node_pmoc.cpp"
#endif





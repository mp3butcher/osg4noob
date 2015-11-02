#include <osg/Node>
//includes
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/Node_pmoc.hpp>
#include <customCode/osg/Node_pmoc.hpp>
#include <customCode/osg/Object_pmoc.hpp>
#include <customCode/osg/Callback_pmoc.hpp>
#include <customCode/osg/CopyOp_pmoc.hpp>
#include <customCode/osg/Object_pmoc.hpp>
#include <customCode/osg/StateSet_pmoc.hpp>
#include <osg/Callback>
#include <osg/Callback_pmoc.hpp>
#include <osg/StateSet>
#include <osg/StateSet_pmoc.hpp>
using namespace pmoc;
 bool  osg::QReflect_Node::containsOccluderNodes()const{
return _model->containsOccluderNodes();

}
 bool  osg::QReflect_Node::isCullingActive()const{
return _model->isCullingActive();

}
 bool  osg::QReflect_Node::isSameKindAs(osg::QReflect_Object *p0)const{
return _model->isSameKindAs(p0->_model);

}
 unsigned int  osg::QReflect_Node::getNodeMask()const{
return _model->getNodeMask();

}
 unsigned int  osg::QReflect_Node::getNumChildrenRequiringEventTraversal()const{
return _model->getNumChildrenRequiringEventTraversal();

}
 unsigned int  osg::QReflect_Node::getNumChildrenRequiringUpdateTraversal()const{
return _model->getNumChildrenRequiringUpdateTraversal();

}
 unsigned int  osg::QReflect_Node::getNumChildrenWithCullingDisabled()const{
return _model->getNumChildrenWithCullingDisabled();

}
 unsigned int  osg::QReflect_Node::getNumChildrenWithOccluderNodes()const{
return _model->getNumChildrenWithOccluderNodes();

}
 unsigned int  osg::QReflect_Node::getNumDescriptions()const{
return _model->getNumDescriptions();

}
 unsigned int  osg::QReflect_Node::getNumParents()const{
return _model->getNumParents();

}
 void osg::QReflect_Node::addDescription(const  QString &p0){
 _model->addDescription(std::string(p0.toStdString()));

}
 void osg::QReflect_Node::dirtyBound(){
 _model->dirtyBound();

}
 void osg::QReflect_Node::resizeGLObjectBuffers( unsigned int p0){
 _model->resizeGLObjectBuffers(p0);

}
 void osg::QReflect_Node::setNodeMask( unsigned int p0){
 _model->setNodeMask(p0);

}
 void osg::QReflect_Node::setThreadSafeRefUnref( bool p0){
 _model->setThreadSafeRefUnref(p0);

}
QString  osg::QReflect_Node::getDescription( unsigned int p0)const{
QString ret(_model->getDescription(p0).c_str());return ret;

}
QString  osg::QReflect_Node::getDescription( unsigned int p0){
QString ret(_model->getDescription(p0).c_str());return ret;

}
const  char*  osg::QReflect_Node::className()const{
return _model->className();

}
const  char*  osg::QReflect_Node::libraryName()const{
return _model->libraryName();

}
const bool osg::QReflect_Node::getCullingActive()const{return _model->getCullingActive();}
osg::QReflect_Callback * osg::QReflect_Node::getCullCallback()const{
PMOCSAFEADDOBJECT(*_model->getCullCallback(),inst);
return inst.isValid()?((osg::QReflect_Callback * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Callback * osg::QReflect_Node::getEventCallback()const{
PMOCSAFEADDOBJECT(*_model->getEventCallback(),inst);
return inst.isValid()?((osg::QReflect_Callback * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Callback * osg::QReflect_Node::getUpdateCallback()const{
PMOCSAFEADDOBJECT(*_model->getUpdateCallback(),inst);
return inst.isValid()?((osg::QReflect_Callback * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Node*osg::QReflect_Node::asNode()const{
PMOCSAFEADDOBJECT(*_model->asNode(),inst);
return inst.isValid()?((osg::QReflect_Node * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Node*osg::QReflect_Node::asNode(){
PMOCSAFEADDOBJECT(*_model->asNode(),inst);
return inst.isValid()?((osg::QReflect_Node * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Object*osg::QReflect_Node::clone(osg::QReflect_CopyOp *p0)const{
PMOCSAFEADDOBJECT(*_model->clone(*p0->_model),inst);
return inst.isValid()?((osg::QReflect_Object * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Object*osg::QReflect_Node::cloneType()const{
PMOCSAFEADDOBJECT(*_model->cloneType(),inst);
return inst.isValid()?((osg::QReflect_Object * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_StateSet * osg::QReflect_Node::getStateSet()const{
PMOCSAFEADDOBJECT(*_model->getStateSet(),inst);
return inst.isValid()?((osg::QReflect_StateSet * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_StateSet*osg::QReflect_Node::getOrCreateStateSet(){
PMOCSAFEADDOBJECT(*_model->getOrCreateStateSet(),inst);
return inst.isValid()?((osg::QReflect_StateSet * )inst.model->createQQModel(&inst)):NULL;
}
void   osg::QReflect_Node::addCullCallback( osg::QReflect_Callback *par){
_model->addCullCallback(par->_model);
}
void   osg::QReflect_Node::addEventCallback( osg::QReflect_Callback *par){
_model->addEventCallback(par->_model);
}
void   osg::QReflect_Node::addUpdateCallback( osg::QReflect_Callback *par){
_model->addUpdateCallback(par->_model);
}
void   osg::QReflect_Node::pmoc_reverse_addCullCallback( osg::QReflect_Callback *par){
_model->removeCullCallback(par->_model);
emit CullCallbackCollectionChanged();
}
void   osg::QReflect_Node::pmoc_reverse_addEventCallback( osg::QReflect_Callback *par){
_model->removeEventCallback(par->_model);
emit EventCallbackCollectionChanged();
}
void   osg::QReflect_Node::pmoc_reverse_addUpdateCallback( osg::QReflect_Callback *par){
_model->removeUpdateCallback(par->_model);
emit UpdateCallbackCollectionChanged();
}
void  osg::QReflect_Node::setCullingActive(const bool &par){_model->setCullingActive(par);emit CullingActiveChanged(par);}
void osg::QReflect_Node::pmoc_reverse_setCullCallback( osg::QReflect_Callback *par){_model->setCullCallback(NULL);
emit CullCallbackChanged(NULL);
}
void osg::QReflect_Node::pmoc_reverse_setEventCallback( osg::QReflect_Callback *par){_model->setEventCallback(NULL);
emit EventCallbackChanged(NULL);
}
void osg::QReflect_Node::pmoc_reverse_setStateSet( osg::QReflect_StateSet *par){_model->setStateSet(NULL);
emit StateSetChanged(NULL);
}
void osg::QReflect_Node::pmoc_reverse_setUpdateCallback( osg::QReflect_Callback *par){_model->setUpdateCallback(NULL);
emit UpdateCallbackChanged(NULL);
}
void osg::QReflect_Node::setCullCallback( osg::QReflect_Callback *par){_model->setCullCallback(par->_model);
emit CullCallbackChanged(par);
}
void osg::QReflect_Node::setEventCallback( osg::QReflect_Callback *par){_model->setEventCallback(par->_model);
emit EventCallbackChanged(par);
}
void osg::QReflect_Node::setStateSet( osg::QReflect_StateSet *par){_model->setStateSet(par->_model);
emit StateSetChanged(par);
}
void osg::QReflect_Node::setUpdateCallback( osg::QReflect_Callback *par){_model->setUpdateCallback(par->_model);
emit UpdateCallbackChanged(par);
}

///DefaultConstructor////////////////
osg::QReflect_Node::QReflect_Node(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
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
_typeid=&typeid(osg::Node );           qRegisterMetaType<QMLNode>();
qmlRegisterType<QReflect_Node>("pmoc.osg",1,0,"QReflect_Node");
           qmlRegisterType<QMLNode>("pmoc.osg",1,0,"QMLNode");
       PMOCACTION("getCullCallback","addCullCallback","removeCullCallback");
       PMOCACTION("getCullCallback","setCullCallback","unsetCullCallback");
       PMOCACTION("getEventCallback","addEventCallback","removeEventCallback");
       PMOCACTION("getEventCallback","setEventCallback","unsetEventCallback");
       PMOCACTION("getStateSet","setStateSet","unsetStateSet");
       PMOCACTION("getUpdateCallback","addUpdateCallback","removeUpdateCallback");
       PMOCACTION("getUpdateCallback","setUpdateCallback","unsetUpdateCallback");
};
const std::string osg::MetaQReflect_Node::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_Node::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_Node::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_Node::createQQModel(Instance*i){ //return new MetaQReflect_Node_QModel(i);}
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




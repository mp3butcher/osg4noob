#include <osg/Group>
//includes

#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/Group_pmoc.hpp>
#include <customCode/osg/Group_pmoc.hpp>
#include <customCode/osg/Node_pmoc.hpp>
#include <customCode/osg/Group_pmoc.hpp>
#include <customCode/osg/NodeVisitor_pmoc.hpp>
#include <customCode/osg/Node_pmoc.hpp>
#include <customCode/osg/State_pmoc.hpp>
using namespace pmoc;
 bool  osg::QReflect_Group:: addChild(osg::QReflect_Node  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Group::addChild : parameter n.0 is NULL\n"<<endl;return -1;}
emit ChildCollectionChanged();
return _model->addChild(p0->_model);

}
 bool  osg::QReflect_Group:: containsNode(osg::QReflect_Node  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Group::containsNode : parameter n.0 is NULL\n"<<endl;return -1;}
return _model->containsNode(p0->_model);

}
 bool  osg::QReflect_Group:: insertChild( unsigned int  p0 ,osg::QReflect_Node  *p1){
//params checking
if(! p1) {std::cerr<<"PMOC: osg::QReflect_Group::insertChild : parameter n.1 is NULL\n"<<endl;return -1;}
return _model->insertChild(p0 ,p1->_model);

}
 bool  osg::QReflect_Group:: removeChild( unsigned int  p0 , unsigned int  p1){
//params checking
return _model->removeChild(p0 ,p1);

}
 bool  osg::QReflect_Group:: removeChild(osg::QReflect_Node  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Group::removeChild : parameter n.0 is NULL\n"<<endl;return -1;}
emit ChildCollectionChanged();
return _model->removeChild(p0->_model);

}
 bool  osg::QReflect_Group:: removeChildren( unsigned int  p0 , unsigned int  p1){
//params checking
return _model->removeChildren(p0 ,p1);

}
 bool  osg::QReflect_Group:: replaceChild(osg::QReflect_Node  *p0 ,osg::QReflect_Node  *p1){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Group::replaceChild : parameter n.0 is NULL\n"<<endl;return -1;}
if(! p1) {std::cerr<<"PMOC: osg::QReflect_Group::replaceChild : parameter n.1 is NULL\n"<<endl;return -1;}
return _model->replaceChild(p0->_model ,p1->_model);

}
 bool  osg::QReflect_Group:: setChild( unsigned int  p0 ,osg::QReflect_Node  *p1){
//params checking
if(! p1) {std::cerr<<"PMOC: osg::QReflect_Group::setChild : parameter n.1 is NULL\n"<<endl;return -1;}
return _model->setChild(p0 ,p1->_model);

}
 unsigned int  osg::QReflect_Group:: getChildIndex(osg::QReflect_Node  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Group::getChildIndex : parameter n.0 is NULL\n"<<endl;return -1;}
return _model->getChildIndex(p0->_model);

}
 unsigned int  osg::QReflect_Group:: getNumChildren()const{
//params checking
return _model->getNumChildren();

}
 void osg::QReflect_Group::releaseGLObjects(osg::QReflect_State  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Group::releaseGLObjects : parameter n.0 is NULL\n"<<endl;return;}
 _model->releaseGLObjects(p0->_model);

}
 void osg::QReflect_Group::resizeGLObjectBuffers( unsigned int  p0){
//params checking
 _model->resizeGLObjectBuffers(p0);

}
 void osg::QReflect_Group::setThreadSafeRefUnref( bool  p0){
//params checking
 _model->setThreadSafeRefUnref(p0);

}
 void osg::QReflect_Group::traverse(osg::QReflect_NodeVisitor  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Group::traverse : parameter n.0 is NULL\n"<<endl;return;}
 _model->traverse(*p0->_model);

}
osg::QReflect_Group*osg::QReflect_Group::asGroup()const{
//params checking
PMOCSAFEADDOBJECT(*_model->asGroup(),inst);
return inst.isValid()?((osg::QReflect_Group * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Group*osg::QReflect_Group::asGroup(){
//params checking
PMOCSAFEADDOBJECT(*_model->asGroup(),inst);
return inst.isValid()?((osg::QReflect_Group * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Node*osg::QReflect_Group::getChild( unsigned int  p0)const{
//params checking
PMOCSAFEADDOBJECT(*_model->getChild(p0),inst);
return inst.isValid()?((osg::QReflect_Node * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Node*osg::QReflect_Group::getChild( unsigned int  p0){
//params checking
PMOCSAFEADDOBJECT(*_model->getChild(p0),inst);
return inst.isValid()?((osg::QReflect_Node * )inst.model->createQQModel(&inst)):NULL;
}

///DefaultConstructor////////////////
osg::QReflect_Group::QReflect_Group(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::Group*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_Group::~QReflect_Group( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_Group::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_Group::createInstance( ){
osg::ref_ptr<osg::Group> osg_Group_ptr	;
osg_Group_ptr = new osg::Group ()	;
Instance o(PMOCGETMETACLASS("osg::Group"),(void*)osg_Group_ptr.get()		,true);
_managedinstances.insert(osg_Group_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_Group::MetaQReflect_Group():MetaQQuickClass( "osg::Group"){
_typeid=&typeid(osg::Group );
           qRegisterMetaType<osg::QMLGroup>();
           qRegisterMetaType<osg::QMLGroup*>("pmoc.osg.QMLGroup");
qmlRegisterType<osg::QReflect_Group>("pmoc.osg",1,0,"QReflect_Group");
           qmlRegisterType<osg::QMLGroup>("pmoc.osg",1,0,"QMLGroup");
};
const std::string osg::MetaQReflect_Group::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_Group::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_Group::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_Group::createQQModel(const Instance*i){ //return new MetaQReflect_Group_QModel(i);}
QMLGroup *ret =new QMLGroup(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::Node *mother =dynamic_cast<osg::Node*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::Node");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::Node model for osg::Groupis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::Node");
if(!cl){std::cerr<<"osg::Node QQModel for osg::Groupis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Group_pmoc.cpp"
#endif





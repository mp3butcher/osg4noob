#include <osg/Switch>
//includes

#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/Switch_pmoc.hpp>
#include <customCode/osg/Switch_pmoc.hpp>
#include <customCode/osg/Group_pmoc.hpp>
#include <customCode/osg/NodeVisitor_pmoc.hpp>
#include <customCode/osg/Node_pmoc.hpp>
#include <customCode/osg/Switch_pmoc.hpp>
using namespace pmoc;
 bool  osg::QReflect_Switch:: addChild(osg::QReflect_Node  *p0 , bool  p1){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Switch::addChild : parameter n.0 is NULL\n"<<endl;return -1;}
return _model->addChild(p0->_model ,p1);

}
 bool  osg::QReflect_Switch:: addChild(osg::QReflect_Node  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Switch::addChild : parameter n.0 is NULL\n"<<endl;return -1;}
return _model->addChild(p0->_model);

}
 bool  osg::QReflect_Switch:: getChildValue(osg::QReflect_Node  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Switch::getChildValue : parameter n.0 is NULL\n"<<endl;return -1;}
return _model->getChildValue(p0->_model);

}
 bool  osg::QReflect_Switch:: getNewChildDefaultValue()const{
//params checking
return _model->getNewChildDefaultValue();

}
 bool  osg::QReflect_Switch:: getValue( unsigned int  p0)const{
//params checking
return _model->getValue(p0);

}
 bool  osg::QReflect_Switch:: insertChild( unsigned int  p0 ,osg::QReflect_Node  *p1 , bool  p2){
//params checking
if(! p1) {std::cerr<<"PMOC: osg::QReflect_Switch::insertChild : parameter n.1 is NULL\n"<<endl;return -1;}
return _model->insertChild(p0 ,p1->_model ,p2);

}
 bool  osg::QReflect_Switch:: insertChild( unsigned int  p0 ,osg::QReflect_Node  *p1){
//params checking
if(! p1) {std::cerr<<"PMOC: osg::QReflect_Switch::insertChild : parameter n.1 is NULL\n"<<endl;return -1;}
return _model->insertChild(p0 ,p1->_model);

}
 bool  osg::QReflect_Switch:: removeChildren( unsigned int  p0 , unsigned int  p1){
//params checking
return _model->removeChildren(p0 ,p1);

}
 bool  osg::QReflect_Switch:: setAllChildrenOff(){
//params checking
return _model->setAllChildrenOff();

}
 bool  osg::QReflect_Switch:: setAllChildrenOn(){
//params checking
return _model->setAllChildrenOn();

}
 bool  osg::QReflect_Switch:: setSingleChildOn( unsigned int  p0){
//params checking
return _model->setSingleChildOn(p0);

}
 void osg::QReflect_Switch::setChildValue(osg::QReflect_Node  *p0 , bool  p1){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Switch::setChildValue : parameter n.0 is NULL\n"<<endl;return;}
 _model->setChildValue(p0->_model ,p1);

}
 void osg::QReflect_Switch::setNewChildDefaultValue( bool  p0){
//params checking
 _model->setNewChildDefaultValue(p0);
emit NewChildDefaultValueChanged();

}
 void osg::QReflect_Switch::setValue( unsigned int  p0 , bool  p1){
//params checking
 _model->setValue(p0 ,p1);

}
 void osg::QReflect_Switch::traverse(osg::QReflect_NodeVisitor  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Switch::traverse : parameter n.0 is NULL\n"<<endl;return;}
 _model->traverse(*p0->_model);

}
osg::QReflect_Switch*osg::QReflect_Switch::asSwitch()const{
//params checking
PMOCSAFEADDOBJECT(*_model->asSwitch(),inst);
return inst.isValid()?((osg::QReflect_Switch * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Switch*osg::QReflect_Switch::asSwitch(){
//params checking
PMOCSAFEADDOBJECT(*_model->asSwitch(),inst);
return inst.isValid()?((osg::QReflect_Switch * )inst.model->createQQModel(&inst)):NULL;
}

///DefaultConstructor////////////////
osg::QReflect_Switch::QReflect_Switch(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::Switch*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_Switch::~QReflect_Switch( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_Switch::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_Switch::createInstance( ){
osg::ref_ptr<osg::Switch> osg_Switch_ptr	;
osg_Switch_ptr = new osg::Switch ()	;
Instance o(PMOCGETMETACLASS("osg::Switch"),(void*)osg_Switch_ptr.get()		,true);
_managedinstances.insert(osg_Switch_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_Switch::MetaQReflect_Switch():MetaQQuickClass( "osg::Switch"){
_typeid=&typeid(osg::Switch );
           qRegisterMetaType<osg::QMLSwitch>();
           qRegisterMetaType<osg::QMLSwitch*>("pmoc.osg.QMLSwitch");
qmlRegisterType<osg::QReflect_Switch>("pmoc.osg",1,0,"QReflect_Switch");
           qmlRegisterType<osg::QMLSwitch>("pmoc.osg",1,0,"QMLSwitch");
};
const std::string osg::MetaQReflect_Switch::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_Switch::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_Switch::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_Switch::createQQModel(const Instance*i){ //return new MetaQReflect_Switch_QModel(i);}
QMLSwitch *ret =new QMLSwitch(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::Group *mother =dynamic_cast<osg::Group*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::Group");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::Group model for osg::Switchis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::Group");
if(!cl){std::cerr<<"osg::Group QQModel for osg::Switchis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Switch_pmoc.cpp"
#endif





#include <osg/NodeVisitor>
//includes
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/NodeVisitor_pmoc.hpp>
#include <customCode/osg/NodeVisitor_pmoc.hpp>
using namespace pmoc;

///DefaultConstructor////////////////
osg::QReflect_NodeAcceptOp::QReflect_NodeAcceptOp(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
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
_typeid=&typeid(osg::NodeAcceptOp );           qRegisterMetaType<QMLNodeAcceptOp>();
qmlRegisterType<QReflect_NodeAcceptOp>("pmoc.osg",1,0,"QReflect_NodeAcceptOp");
           qmlRegisterType<QMLNodeAcceptOp>("pmoc.osg",1,0,"QMLNodeAcceptOp");
};
const std::string osg::MetaQReflect_NodeAcceptOp::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_NodeAcceptOp::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_NodeAcceptOp::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_NodeAcceptOp::createQQModel(Instance*i){ //return new MetaQReflect_NodeAcceptOp_QModel(i);}
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
#include <customCode/osg/FrameStamp_pmoc.hpp>
#include <customCode/osg/Node_pmoc.hpp>
#include <customCode/osg/Vec3f_pmoc.hpp>
#include <osg/FrameStamp>
#include <osg/FrameStamp_pmoc.hpp>
using namespace pmoc;
 bool  osg::QReflect_NodeVisitor::validNodeMask(osg::QReflect_Node *p0)const{
return _model->validNodeMask(*p0->_model);

}
 float  osg::QReflect_NodeVisitor::getDistanceFromEyePoint(osg::QReflect_Vec3f *p0 , bool p1)const{
return _model->getDistanceFromEyePoint(*p0->_model ,p1);

}
 float  osg::QReflect_NodeVisitor::getDistanceToEyePoint(osg::QReflect_Vec3f *p0 , bool p1)const{
return _model->getDistanceToEyePoint(*p0->_model ,p1);

}
 float  osg::QReflect_NodeVisitor::getDistanceToViewPoint(osg::QReflect_Vec3f *p0 , bool p1)const{
return _model->getDistanceToViewPoint(*p0->_model ,p1);

}
 unsigned int  osg::QReflect_NodeVisitor::getNodeMaskOverride()const{
return _model->getNodeMaskOverride();

}
 unsigned int  osg::QReflect_NodeVisitor::getTraversalMask()const{
return _model->getTraversalMask();

}
 void osg::QReflect_NodeVisitor::popFromNodePath(){
 _model->popFromNodePath();

}
 void osg::QReflect_NodeVisitor::pushOntoNodePath(osg::QReflect_Node *p0){
 _model->pushOntoNodePath(p0->_model);

}
 void osg::QReflect_NodeVisitor::reset(){
 _model->reset();

}
 void osg::QReflect_NodeVisitor::setNodeMaskOverride( unsigned int p0){
 _model->setNodeMaskOverride(p0);

}
 void osg::QReflect_NodeVisitor::setTraversalMask( unsigned int p0){
 _model->setTraversalMask(p0);

}
 void osg::QReflect_NodeVisitor::setTraversalMode(osg::QReflect_NodeVisitor::TraversalMode p0){
 _model->setTraversalMode(static_cast<osg::NodeVisitor::TraversalMode>(p0));

}
 void osg::QReflect_NodeVisitor::setVisitorType(osg::QReflect_NodeVisitor::VisitorType p0){
 _model->setVisitorType(static_cast<osg::NodeVisitor::VisitorType>(p0));

}
const unsigned int osg::QReflect_NodeVisitor::getTraversalNumber()const{return _model->getTraversalNumber();}
osg::QReflect_FrameStamp * osg::QReflect_NodeVisitor::getFrameStamp()const{
PMOCSAFEADDOBJECT(*_model->getFrameStamp(),inst);
return inst.isValid()?((osg::QReflect_FrameStamp * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_NodeVisitor*osg::QReflect_NodeVisitor::asNodeVisitor()const{
PMOCSAFEADDOBJECT(*_model->asNodeVisitor(),inst);
return inst.isValid()?((osg::QReflect_NodeVisitor * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_NodeVisitor*osg::QReflect_NodeVisitor::asNodeVisitor(){
PMOCSAFEADDOBJECT(*_model->asNodeVisitor(),inst);
return inst.isValid()?((osg::QReflect_NodeVisitor * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_NodeVisitor::TraversalMode  osg::QReflect_NodeVisitor::getTraversalMode()const{
osg::QReflect_NodeVisitor::TraversalMode ret=static_cast<osg::QReflect_NodeVisitor::TraversalMode>( _model->getTraversalMode());return  ret;

}
osg::QReflect_NodeVisitor::VisitorType  osg::QReflect_NodeVisitor::getVisitorType()const{
osg::QReflect_NodeVisitor::VisitorType ret=static_cast<osg::QReflect_NodeVisitor::VisitorType>( _model->getVisitorType());return  ret;

}
void  osg::QReflect_NodeVisitor::setTraversalNumber(const unsigned int &par){_model->setTraversalNumber(par);emit TraversalNumberChanged(par);}
void osg::QReflect_NodeVisitor::pmoc_reverse_setFrameStamp( osg::QReflect_FrameStamp *par){_model->setFrameStamp(NULL);
emit FrameStampChanged(NULL);
}
void osg::QReflect_NodeVisitor::setFrameStamp( osg::QReflect_FrameStamp *par){_model->setFrameStamp(par->_model);
emit FrameStampChanged(par);
}

///DefaultConstructor////////////////
osg::QReflect_NodeVisitor::QReflect_NodeVisitor(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
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
_typeid=&typeid(osg::NodeVisitor );           qRegisterMetaType<QMLNodeVisitor>();
qmlRegisterType<QReflect_NodeVisitor>("pmoc.osg",1,0,"QReflect_NodeVisitor");
           qmlRegisterType<QMLNodeVisitor>("pmoc.osg",1,0,"QMLNodeVisitor");
       PMOCACTION("getFrameStamp","setFrameStamp","unsetFrameStamp");
};
const std::string osg::MetaQReflect_NodeVisitor::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_NodeVisitor::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_NodeVisitor::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_NodeVisitor::createQQModel(Instance*i){ //return new MetaQReflect_NodeVisitor_QModel(i);}
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




#include <osg/OcclusionQueryNode>
//includes

#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/OcclusionQueryNode_pmoc.hpp>
#include <customCode/osg/OcclusionQueryNode_pmoc.hpp>
#include <customCode/osg/Group_pmoc.hpp>
#include <customCode/osg/Camera_pmoc.hpp>
#include <customCode/osg/NodeVisitor_pmoc.hpp>
#include <customCode/osg/OcclusionQueryNode_pmoc.hpp>
#include <customCode/osg/StateSet_pmoc.hpp>
#include <customCode/osg/State_pmoc.hpp>
using namespace pmoc;
 bool  osg::QReflect_OcclusionQueryNode:: getDebugDisplay()const{
//params checking
return _model->getDebugDisplay();

}
 bool  osg::QReflect_OcclusionQueryNode:: getPassed()const{
//params checking
return _model->getPassed();

}
 bool  osg::QReflect_OcclusionQueryNode:: getPassed(osg::QReflect_Camera  *p0 ,osg::QReflect_NodeVisitor  *p1){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_OcclusionQueryNode::getPassed : parameter n.0 is NULL\n"<<endl;return -1;}
if(! p1) {std::cerr<<"PMOC: osg::QReflect_OcclusionQueryNode::getPassed : parameter n.1 is NULL\n"<<endl;return -1;}
return _model->getPassed(p0->_model ,*p1->_model);

}
 bool  osg::QReflect_OcclusionQueryNode:: getQueriesEnabled()const{
//params checking
return _model->getQueriesEnabled();

}
 unsigned int  osg::QReflect_OcclusionQueryNode:: getQueryFrameCount()const{
//params checking
return _model->getQueryFrameCount();

}
 unsigned int  osg::QReflect_OcclusionQueryNode:: getVisibilityThreshold()const{
//params checking
return _model->getVisibilityThreshold();

}
 void osg::QReflect_OcclusionQueryNode::discardDeletedQueryObjects( unsigned int  p0){
//params checking
 _model->discardDeletedQueryObjects(p0);

}
 void osg::QReflect_OcclusionQueryNode::flushDeletedQueryObjects( unsigned int  p0 , double  p1 , double  &p2){
//params checking
 _model->flushDeletedQueryObjects(p0 ,p1 ,p2);

}
 void osg::QReflect_OcclusionQueryNode::releaseGLObjects(osg::QReflect_State  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_OcclusionQueryNode::releaseGLObjects : parameter n.0 is NULL\n"<<endl;return;}
 _model->releaseGLObjects(p0->_model);

}
 void osg::QReflect_OcclusionQueryNode::setDebugDisplay( bool  p0){
//params checking
 _model->setDebugDisplay(p0);
emit DebugDisplayChanged();

}
 void osg::QReflect_OcclusionQueryNode::setDebugStateSet(osg::QReflect_StateSet  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_OcclusionQueryNode::setDebugStateSet : parameter n.0 is NULL\n"<<endl;return;}
 _model->setDebugStateSet(p0->_model);
emit DebugStateSetChanged();

}
 void osg::QReflect_OcclusionQueryNode::setQueriesEnabled( bool  p0){
//params checking
 _model->setQueriesEnabled(p0);
emit QueriesEnabledChanged();

}
 void osg::QReflect_OcclusionQueryNode::setQueryFrameCount( unsigned int  p0){
//params checking
 _model->setQueryFrameCount(p0);
emit QueryFrameCountChanged();

}
 void osg::QReflect_OcclusionQueryNode::setQueryStateSet(osg::QReflect_StateSet  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_OcclusionQueryNode::setQueryStateSet : parameter n.0 is NULL\n"<<endl;return;}
 _model->setQueryStateSet(p0->_model);
emit QueryStateSetChanged();

}
 void osg::QReflect_OcclusionQueryNode::setVisibilityThreshold( unsigned int  p0){
//params checking
 _model->setVisibilityThreshold(p0);
emit VisibilityThresholdChanged();

}
 void osg::QReflect_OcclusionQueryNode::traverseDebug(osg::QReflect_NodeVisitor  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_OcclusionQueryNode::traverseDebug : parameter n.0 is NULL\n"<<endl;return;}
 _model->traverseDebug(*p0->_model);

}
 void osg::QReflect_OcclusionQueryNode::traverseQuery(osg::QReflect_Camera  *p0 ,osg::QReflect_NodeVisitor  *p1){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_OcclusionQueryNode::traverseQuery : parameter n.0 is NULL\n"<<endl;return;}
if(! p1) {std::cerr<<"PMOC: osg::QReflect_OcclusionQueryNode::traverseQuery : parameter n.1 is NULL\n"<<endl;return;}
 _model->traverseQuery(p0->_model ,*p1->_model);

}
osg::QReflect_QueryGeometry*osg::QReflect_OcclusionQueryNode::getQueryGeometry()const{
//params checking
PMOCSAFEADDOBJECT(*_model->getQueryGeometry(),inst);
return inst.isValid()?((osg::QReflect_QueryGeometry * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_QueryGeometry*osg::QReflect_OcclusionQueryNode::getQueryGeometry(){
//params checking
PMOCSAFEADDOBJECT(*_model->getQueryGeometry(),inst);
return inst.isValid()?((osg::QReflect_QueryGeometry * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_StateSet*osg::QReflect_OcclusionQueryNode::getDebugStateSet()const{
//params checking
PMOCSAFEADDOBJECT(*_model->getDebugStateSet(),inst);
return inst.isValid()?((osg::QReflect_StateSet * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_StateSet*osg::QReflect_OcclusionQueryNode::getDebugStateSet(){
//params checking
PMOCSAFEADDOBJECT(*_model->getDebugStateSet(),inst);
return inst.isValid()?((osg::QReflect_StateSet * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_StateSet*osg::QReflect_OcclusionQueryNode::getQueryStateSet()const{
//params checking
PMOCSAFEADDOBJECT(*_model->getQueryStateSet(),inst);
return inst.isValid()?((osg::QReflect_StateSet * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_StateSet*osg::QReflect_OcclusionQueryNode::getQueryStateSet(){
//params checking
PMOCSAFEADDOBJECT(*_model->getQueryStateSet(),inst);
return inst.isValid()?((osg::QReflect_StateSet * )inst.model->createQQModel(&inst)):NULL;
}

///DefaultConstructor////////////////
osg::QReflect_OcclusionQueryNode::QReflect_OcclusionQueryNode(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::OcclusionQueryNode*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_OcclusionQueryNode::~QReflect_OcclusionQueryNode( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_OcclusionQueryNode::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_OcclusionQueryNode::createInstance( ){
osg::ref_ptr<osg::OcclusionQueryNode> osg_OcclusionQueryNode_ptr	;
osg_OcclusionQueryNode_ptr = new osg::OcclusionQueryNode ()	;
Instance o(PMOCGETMETACLASS("osg::OcclusionQueryNode"),(void*)osg_OcclusionQueryNode_ptr.get()		,true);
_managedinstances.insert(osg_OcclusionQueryNode_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_OcclusionQueryNode::MetaQReflect_OcclusionQueryNode():MetaQQuickClass( "osg::OcclusionQueryNode"){
_typeid=&typeid(osg::OcclusionQueryNode );
           qRegisterMetaType<osg::QMLOcclusionQueryNode>();
           qRegisterMetaType<osg::QMLOcclusionQueryNode*>("pmoc.osg.QMLOcclusionQueryNode");
qmlRegisterType<osg::QReflect_OcclusionQueryNode>("pmoc.osg",1,0,"QReflect_OcclusionQueryNode");
           qmlRegisterType<osg::QMLOcclusionQueryNode>("pmoc.osg",1,0,"QMLOcclusionQueryNode");
};
const std::string osg::MetaQReflect_OcclusionQueryNode::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_OcclusionQueryNode::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_OcclusionQueryNode::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_OcclusionQueryNode::createQQModel(const Instance*i){ //return new MetaQReflect_OcclusionQueryNode_QModel(i);}
QMLOcclusionQueryNode *ret =new QMLOcclusionQueryNode(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::Group *mother =dynamic_cast<osg::Group*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::Group");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::Group model for osg::OcclusionQueryNodeis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::Group");
if(!cl){std::cerr<<"osg::Group QQModel for osg::OcclusionQueryNodeis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_OcclusionQueryNode_pmoc.cpp"
#endif
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/OcclusionQueryNode_pmoc.hpp>
#include <customCode/osg/OcclusionQueryNode_pmoc.hpp>
#include <customCode/osg/Geometry_pmoc.hpp>
#include <customCode/osg/Camera_pmoc.hpp>
#include <customCode/osg/RenderInfo_pmoc.hpp>
#include <customCode/osg/State_pmoc.hpp>
using namespace pmoc;
 unsigned int  osg::QReflect_QueryGeometry:: getNumPixels(osg::QReflect_Camera  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_QueryGeometry::getNumPixels : parameter n.0 is NULL\n"<<endl;return -1;}
return _model->getNumPixels(p0->_model);

}
 void osg::QReflect_QueryGeometry::deleteQueryObject( unsigned int  p0 , GLuint  p1){
//params checking
 _model->deleteQueryObject(p0 ,p1);

}
 void osg::QReflect_QueryGeometry::discardDeletedQueryObjects( unsigned int  p0){
//params checking
 _model->discardDeletedQueryObjects(p0);

}
 void osg::QReflect_QueryGeometry::drawImplementation(osg::QReflect_RenderInfo  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_QueryGeometry::drawImplementation : parameter n.0 is NULL\n"<<endl;return;}
 _model->drawImplementation(*p0->_model);

}
 void osg::QReflect_QueryGeometry::flushDeletedQueryObjects( unsigned int  p0 , double  p1 , double  &p2){
//params checking
 _model->flushDeletedQueryObjects(p0 ,p1 ,p2);

}
 void osg::QReflect_QueryGeometry::releaseGLObjects(osg::QReflect_State  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_QueryGeometry::releaseGLObjects : parameter n.0 is NULL\n"<<endl;return;}
 _model->releaseGLObjects(p0->_model);

}
 void osg::QReflect_QueryGeometry::reset(){
//params checking
 _model->reset();

}

///DefaultConstructor////////////////
osg::QReflect_QueryGeometry::QReflect_QueryGeometry(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::QueryGeometry*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_QueryGeometry::~QReflect_QueryGeometry( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_QueryGeometry::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_QueryGeometry::createInstance( ){
osg::ref_ptr<osg::QueryGeometry> osg_QueryGeometry_ptr	;
osg_QueryGeometry_ptr = new osg::QueryGeometry ()	;
Instance o(PMOCGETMETACLASS("osg::QueryGeometry"),(void*)osg_QueryGeometry_ptr.get()		,true);
_managedinstances.insert(osg_QueryGeometry_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_QueryGeometry::MetaQReflect_QueryGeometry():MetaQQuickClass( "osg::QueryGeometry"){
_typeid=&typeid(osg::QueryGeometry );
           qRegisterMetaType<osg::QMLQueryGeometry>();
           qRegisterMetaType<osg::QMLQueryGeometry*>("pmoc.osg.QMLQueryGeometry");
qmlRegisterType<osg::QReflect_QueryGeometry>("pmoc.osg",1,0,"QReflect_QueryGeometry");
           qmlRegisterType<osg::QMLQueryGeometry>("pmoc.osg",1,0,"QMLQueryGeometry");
};
const std::string osg::MetaQReflect_QueryGeometry::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_QueryGeometry::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_QueryGeometry::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_QueryGeometry::createQQModel(const Instance*i){ //return new MetaQReflect_QueryGeometry_QModel(i);}
QMLQueryGeometry *ret =new QMLQueryGeometry(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::Geometry *mother =dynamic_cast<osg::Geometry*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::Geometry");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::Geometry model for osg::QueryGeometryis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::Geometry");
if(!cl){std::cerr<<"osg::Geometry QQModel for osg::QueryGeometryis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_OcclusionQueryNode_pmoc.cpp"
#endif
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/OcclusionQueryNode_pmoc.hpp>
#include <customCode/osg/OcclusionQueryNode_pmoc.hpp>
#include <customCode/osg/Referenced_pmoc.hpp>
using namespace pmoc;

///DefaultConstructor////////////////
osg::QReflect_TestResult::QReflect_TestResult(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::TestResult*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_TestResult::~QReflect_TestResult( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_TestResult::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_TestResult::createInstance( ){
osg::ref_ptr<osg::TestResult> osg_TestResult_ptr	;
osg_TestResult_ptr = new osg::TestResult ()	;
Instance o(PMOCGETMETACLASS("osg::TestResult"),(void*)osg_TestResult_ptr.get()		,true);
_managedinstances.insert(osg_TestResult_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_TestResult::MetaQReflect_TestResult():MetaQQuickClass( "osg::TestResult"){
_typeid=&typeid(osg::TestResult );
           qRegisterMetaType<osg::QMLTestResult>();
           qRegisterMetaType<osg::QMLTestResult*>("pmoc.osg.QMLTestResult");
qmlRegisterType<osg::QReflect_TestResult>("pmoc.osg",1,0,"QReflect_TestResult");
           qmlRegisterType<osg::QMLTestResult>("pmoc.osg",1,0,"QMLTestResult");
};
const std::string osg::MetaQReflect_TestResult::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_TestResult::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_TestResult::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_TestResult::createQQModel(const Instance*i){ //return new MetaQReflect_TestResult_QModel(i);}
QMLTestResult *ret =new QMLTestResult(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::Referenced *mother =dynamic_cast<osg::Referenced*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::Referenced");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::Referenced model for osg::TestResultis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::Referenced");
if(!cl){std::cerr<<"osg::Referenced QQModel for osg::TestResultis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_OcclusionQueryNode_pmoc.cpp"
#endif





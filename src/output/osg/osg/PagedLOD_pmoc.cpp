#include <osg/PagedLOD>
//includes

#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/PagedLOD_pmoc.hpp>
#include <customCode/osg/PagedLOD_pmoc.hpp>
#include <customCode/osg/LOD_pmoc.hpp>
#include <customCode/osg/NodeVisitor_pmoc.hpp>
#include <customCode/osg/Node_pmoc.hpp>
#include <customCode/osg/Referenced_pmoc.hpp>
using namespace pmoc;
 bool  osg::QReflect_PagedLOD:: addChild(osg::QReflect_Node  *p0 , float  p1 , float  p2 ,const  QString  &p3 , float  p4 , float  p5){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_PagedLOD::addChild : parameter n.0 is NULL\n"<<endl;return -1;}
return _model->addChild(p0->_model ,p1 ,p2 ,std::string(p3.toStdString()) ,p4 ,p5);

}
 bool  osg::QReflect_PagedLOD:: addChild(osg::QReflect_Node  *p0 , float  p1 , float  p2){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_PagedLOD::addChild : parameter n.0 is NULL\n"<<endl;return -1;}
return _model->addChild(p0->_model ,p1 ,p2);

}
 bool  osg::QReflect_PagedLOD:: addChild(osg::QReflect_Node  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_PagedLOD::addChild : parameter n.0 is NULL\n"<<endl;return -1;}
return _model->addChild(p0->_model);

}
 bool  osg::QReflect_PagedLOD:: getDisableExternalChildrenPaging()const{
//params checking
return _model->getDisableExternalChildrenPaging();

}
 bool  osg::QReflect_PagedLOD:: removeChildren( unsigned int  p0 , unsigned int  p1){
//params checking
return _model->removeChildren(p0 ,p1);

}
 double  osg::QReflect_PagedLOD:: getMinimumExpiryTime( unsigned int  p0)const{
//params checking
return _model->getMinimumExpiryTime(p0);

}
 double  osg::QReflect_PagedLOD:: getTimeStamp( unsigned int  p0)const{
//params checking
return _model->getTimeStamp(p0);

}
 float  osg::QReflect_PagedLOD:: getPriorityOffset( unsigned int  p0)const{
//params checking
return _model->getPriorityOffset(p0);

}
 float  osg::QReflect_PagedLOD:: getPriorityScale( unsigned int  p0)const{
//params checking
return _model->getPriorityScale(p0);

}
 unsigned int  osg::QReflect_PagedLOD:: getFrameNumberOfLastTraversal()const{
//params checking
return _model->getFrameNumberOfLastTraversal();

}
 unsigned int  osg::QReflect_PagedLOD:: getMinimumExpiryFrames( unsigned int  p0)const{
//params checking
return _model->getMinimumExpiryFrames(p0);

}
 unsigned int  osg::QReflect_PagedLOD:: getNumChildrenThatCannotBeExpired()const{
//params checking
return _model->getNumChildrenThatCannotBeExpired();

}
 unsigned int  osg::QReflect_PagedLOD:: getNumFileNames()const{
//params checking
return _model->getNumFileNames();

}
 unsigned int  osg::QReflect_PagedLOD:: getNumFrameNumbers()const{
//params checking
return _model->getNumFrameNumbers();

}
 unsigned int  osg::QReflect_PagedLOD:: getNumMinimumExpiryFrames()const{
//params checking
return _model->getNumMinimumExpiryFrames();

}
 unsigned int  osg::QReflect_PagedLOD:: getNumMinimumExpiryTimes()const{
//params checking
return _model->getNumMinimumExpiryTimes();

}
 unsigned int  osg::QReflect_PagedLOD:: getNumPriorityOffsets()const{
//params checking
return _model->getNumPriorityOffsets();

}
 unsigned int  osg::QReflect_PagedLOD:: getNumPriorityScales()const{
//params checking
return _model->getNumPriorityScales();

}
 unsigned int  osg::QReflect_PagedLOD:: getNumTimeStamps()const{
//params checking
return _model->getNumTimeStamps();

}
 void osg::QReflect_PagedLOD::setDatabaseOptions(osg::QReflect_Referenced  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_PagedLOD::setDatabaseOptions : parameter n.0 is NULL\n"<<endl;return;}
 _model->setDatabaseOptions(p0->_model);
emit DatabaseOptionsChanged();

}
 void osg::QReflect_PagedLOD::setDatabasePath(const  QString  &p0){
//params checking
 _model->setDatabasePath(std::string(p0.toStdString()));
emit DatabasePathChanged();

}
 void osg::QReflect_PagedLOD::setDisableExternalChildrenPaging( bool  p0){
//params checking
 _model->setDisableExternalChildrenPaging(p0);
emit DisableExternalChildrenPagingChanged();

}
 void osg::QReflect_PagedLOD::setFileName( unsigned int  p0 ,const  QString  &p1){
//params checking
 _model->setFileName(p0 ,std::string(p1.toStdString()));

}
 void osg::QReflect_PagedLOD::setFrameNumber( unsigned int  p0 , unsigned int  p1){
//params checking
 _model->setFrameNumber(p0 ,p1);

}
 void osg::QReflect_PagedLOD::setFrameNumberOfLastTraversal( unsigned int  p0){
//params checking
 _model->setFrameNumberOfLastTraversal(p0);
emit FrameNumberOfLastTraversalChanged();

}
 void osg::QReflect_PagedLOD::setMinimumExpiryFrames( unsigned int  p0 , unsigned int  p1){
//params checking
 _model->setMinimumExpiryFrames(p0 ,p1);

}
 void osg::QReflect_PagedLOD::setMinimumExpiryTime( unsigned int  p0 , double  p1){
//params checking
 _model->setMinimumExpiryTime(p0 ,p1);

}
 void osg::QReflect_PagedLOD::setNumChildrenThatCannotBeExpired( unsigned int  p0){
//params checking
 _model->setNumChildrenThatCannotBeExpired(p0);
emit NumChildrenThatCannotBeExpiredChanged();

}
 void osg::QReflect_PagedLOD::setPriorityOffset( unsigned int  p0 , float  p1){
//params checking
 _model->setPriorityOffset(p0 ,p1);

}
 void osg::QReflect_PagedLOD::setPriorityScale( unsigned int  p0 , float  p1){
//params checking
 _model->setPriorityScale(p0 ,p1);

}
 void osg::QReflect_PagedLOD::setTimeStamp( unsigned int  p0 , double  p1){
//params checking
 _model->setTimeStamp(p0 ,p1);

}
 void osg::QReflect_PagedLOD::traverse(osg::QReflect_NodeVisitor  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_PagedLOD::traverse : parameter n.0 is NULL\n"<<endl;return;}
 _model->traverse(*p0->_model);

}
QString  osg::QReflect_PagedLOD::getDatabasePath()const{
//params checking
QString ret(_model->getDatabasePath().c_str());return ret;

}
QString  osg::QReflect_PagedLOD::getFileName( unsigned int  p0)const{
//params checking
QString ret(_model->getFileName(p0).c_str());return ret;

}
osg::QReflect_Referenced*osg::QReflect_PagedLOD::getDatabaseOptions()const{
//params checking
PMOCSAFEADDOBJECT(*_model->getDatabaseOptions(),inst);
return inst.isValid()?((osg::QReflect_Referenced * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Referenced*osg::QReflect_PagedLOD::getDatabaseOptions(){
//params checking
PMOCSAFEADDOBJECT(*_model->getDatabaseOptions(),inst);
return inst.isValid()?((osg::QReflect_Referenced * )inst.model->createQQModel(&inst)):NULL;
}

///DefaultConstructor////////////////
osg::QReflect_PagedLOD::QReflect_PagedLOD(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::PagedLOD*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_PagedLOD::~QReflect_PagedLOD( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_PagedLOD::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_PagedLOD::createInstance( ){
osg::ref_ptr<osg::PagedLOD> osg_PagedLOD_ptr	;
osg_PagedLOD_ptr = new osg::PagedLOD ()	;
Instance o(PMOCGETMETACLASS("osg::PagedLOD"),(void*)osg_PagedLOD_ptr.get()		,true);
_managedinstances.insert(osg_PagedLOD_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_PagedLOD::MetaQReflect_PagedLOD():MetaQQuickClass( "osg::PagedLOD"){
_typeid=&typeid(osg::PagedLOD );
           qRegisterMetaType<osg::QMLPagedLOD>();
           qRegisterMetaType<osg::QMLPagedLOD*>("pmoc.osg.QMLPagedLOD");
qmlRegisterType<osg::QReflect_PagedLOD>("pmoc.osg",1,0,"QReflect_PagedLOD");
           qmlRegisterType<osg::QMLPagedLOD>("pmoc.osg",1,0,"QMLPagedLOD");
};
const std::string osg::MetaQReflect_PagedLOD::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_PagedLOD::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_PagedLOD::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_PagedLOD::createQQModel(const Instance*i){ //return new MetaQReflect_PagedLOD_QModel(i);}
QMLPagedLOD *ret =new QMLPagedLOD(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::LOD *mother =dynamic_cast<osg::LOD*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::LOD");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::LOD model for osg::PagedLODis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::LOD");
if(!cl){std::cerr<<"osg::LOD QQModel for osg::PagedLODis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_PagedLOD_pmoc.cpp"
#endif





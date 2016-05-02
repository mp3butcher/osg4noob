#include <osg/Sequence>
//includes

#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/Sequence_pmoc.hpp>
#include <customCode/osg/Sequence_pmoc.hpp>
#include <customCode/osg/Group_pmoc.hpp>
#include <customCode/osg/NodeVisitor_pmoc.hpp>
#include <customCode/osg/Node_pmoc.hpp>
using namespace pmoc;
 bool  osg::QReflect_Sequence:: addChild(osg::QReflect_Node  *p0 , double  p1){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Sequence::addChild : parameter n.0 is NULL\n"<<endl;return -1;}
return _model->addChild(p0->_model ,p1);

}
 bool  osg::QReflect_Sequence:: addChild(osg::QReflect_Node  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Sequence::addChild : parameter n.0 is NULL\n"<<endl;return -1;}
emit ChildCollectionChanged();
return _model->addChild(p0->_model);

}
 bool  osg::QReflect_Sequence:: getClearOnStop()const{
//params checking
return _model->getClearOnStop();

}
 bool  osg::QReflect_Sequence:: getSync()const{
//params checking
return _model->getSync();

}
 bool  osg::QReflect_Sequence:: insertChild( unsigned int  p0 ,osg::QReflect_Node  *p1 , double  p2){
//params checking
if(! p1) {std::cerr<<"PMOC: osg::QReflect_Sequence::insertChild : parameter n.1 is NULL\n"<<endl;return -1;}
return _model->insertChild(p0 ,p1->_model ,p2);

}
 bool  osg::QReflect_Sequence:: insertChild( unsigned int  p0 ,osg::QReflect_Node  *p1){
//params checking
if(! p1) {std::cerr<<"PMOC: osg::QReflect_Sequence::insertChild : parameter n.1 is NULL\n"<<endl;return -1;}
return _model->insertChild(p0 ,p1->_model);

}
 bool  osg::QReflect_Sequence:: removeChild(osg::QReflect_Node  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Sequence::removeChild : parameter n.0 is NULL\n"<<endl;return -1;}
emit ChildCollectionChanged();
return _model->removeChild(p0->_model);

}
 bool  osg::QReflect_Sequence:: removeChildren( unsigned int  p0 , unsigned int  p1){
//params checking
return _model->removeChildren(p0 ,p1);

}
 double  osg::QReflect_Sequence:: getDefaultTime()const{
//params checking
return _model->getDefaultTime();

}
 double  osg::QReflect_Sequence:: getLastFrameTime()const{
//params checking
return _model->getLastFrameTime();

}
 double  osg::QReflect_Sequence:: getTime( unsigned int  p0)const{
//params checking
return _model->getTime(p0);

}
 float  osg::QReflect_Sequence:: getSpeed()const{
//params checking
return _model->getSpeed();

}
 int  osg::QReflect_Sequence:: getBegin()const{
//params checking
return _model->getBegin();

}
 int  osg::QReflect_Sequence:: getEnd()const{
//params checking
return _model->getEnd();

}
 int  osg::QReflect_Sequence:: getNumRepeats()const{
//params checking
return _model->getNumRepeats();

}
 int  osg::QReflect_Sequence:: getValue()const{
//params checking
return _model->getValue();

}
 unsigned int  osg::QReflect_Sequence:: getNumFrames()const{
//params checking
return _model->getNumFrames();

}
 void osg::QReflect_Sequence::getDuration( float  &p0 , int  &p1)const{
//params checking
 _model->getDuration(p0 ,p1);

}
 void osg::QReflect_Sequence::setBegin( int  p0){
//params checking
 _model->setBegin(p0);
emit BeginChanged();

}
 void osg::QReflect_Sequence::setClearOnStop( bool  p0){
//params checking
 _model->setClearOnStop(p0);
emit ClearOnStopChanged();

}
 void osg::QReflect_Sequence::setDefaultTime( double  p0){
//params checking
 _model->setDefaultTime(p0);
emit DefaultTimeChanged();

}
 void osg::QReflect_Sequence::setDuration( float  p0 , int  p1){
//params checking
 _model->setDuration(p0 ,p1);

}
 void osg::QReflect_Sequence::setEnd( int  p0){
//params checking
 _model->setEnd(p0);
emit EndChanged();

}
 void osg::QReflect_Sequence::setInterval(osg::QReflect_Sequence::LoopMode  p0 , int  p1 , int  p2){
//params checking
 _model->setInterval(static_cast<osg::Sequence::LoopMode>(p0) ,p1 ,p2);

}
 void osg::QReflect_Sequence::setLastFrameTime( double  p0){
//params checking
 _model->setLastFrameTime(p0);
emit LastFrameTimeChanged();

}
 void osg::QReflect_Sequence::setLoopMode(osg::QReflect_Sequence::LoopMode  p0){
//params checking
 _model->setLoopMode(static_cast<osg::Sequence::LoopMode>(p0));
emit LoopModeChanged();

}
 void osg::QReflect_Sequence::setMode(osg::QReflect_Sequence::SequenceMode  p0){
//params checking
 _model->setMode(static_cast<osg::Sequence::SequenceMode>(p0));
emit ModeChanged();

}
 void osg::QReflect_Sequence::setNumRepeats( int  p0){
//params checking
 _model->setNumRepeats(p0);
emit NumRepeatsChanged();

}
 void osg::QReflect_Sequence::setSpeed( float  p0){
//params checking
 _model->setSpeed(p0);
emit SpeedChanged();

}
 void osg::QReflect_Sequence::setSync( bool  p0){
//params checking
 _model->setSync(p0);
emit SyncChanged();

}
 void osg::QReflect_Sequence::setTime( unsigned int  p0 , double  p1){
//params checking
 _model->setTime(p0 ,p1);

}
 void osg::QReflect_Sequence::setValue( int  p0){
//params checking
 _model->setValue(p0);
emit ValueChanged();

}
 void osg::QReflect_Sequence::traverse(osg::QReflect_NodeVisitor  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Sequence::traverse : parameter n.0 is NULL\n"<<endl;return;}
 _model->traverse(*p0->_model);

}
osg::QReflect_Sequence::LoopMode  osg::QReflect_Sequence::getLoopMode()const{
//params checking
osg::QReflect_Sequence::LoopMode ret=static_cast<osg::QReflect_Sequence::LoopMode>( _model->getLoopMode());return  ret;

}
osg::QReflect_Sequence::SequenceMode  osg::QReflect_Sequence::getMode()const{
//params checking
osg::QReflect_Sequence::SequenceMode ret=static_cast<osg::QReflect_Sequence::SequenceMode>( _model->getMode());return  ret;

}

///DefaultConstructor////////////////
osg::QReflect_Sequence::QReflect_Sequence(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::Sequence*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_Sequence::~QReflect_Sequence( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_Sequence::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_Sequence::createInstance( ){
osg::ref_ptr<osg::Sequence> osg_Sequence_ptr	;
osg_Sequence_ptr = new osg::Sequence ()	;
Instance o(PMOCGETMETACLASS("osg::Sequence"),(void*)osg_Sequence_ptr.get()		,true);
_managedinstances.insert(osg_Sequence_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_Sequence::MetaQReflect_Sequence():MetaQQuickClass( "osg::Sequence"){
_typeid=&typeid(osg::Sequence );
           qRegisterMetaType<osg::QMLSequence>();
           qRegisterMetaType<osg::QMLSequence*>("pmoc.osg.QMLSequence");
qmlRegisterType<osg::QReflect_Sequence>("pmoc.osg",1,0,"QReflect_Sequence");
           qmlRegisterType<osg::QMLSequence>("pmoc.osg",1,0,"QMLSequence");
};
const std::string osg::MetaQReflect_Sequence::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_Sequence::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_Sequence::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_Sequence::createQQModel(const Instance*i){ //return new MetaQReflect_Sequence_QModel(i);}
QMLSequence *ret =new QMLSequence(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::Group *mother =dynamic_cast<osg::Group*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::Group");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::Group model for osg::Sequenceis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::Group");
if(!cl){std::cerr<<"osg::Group QQModel for osg::Sequenceis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Sequence_pmoc.cpp"
#endif





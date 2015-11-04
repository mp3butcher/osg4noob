#include <osg/Sequence>
//includes
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/Sequence_pmoc.hpp>
#include <customCode/osg/Sequence_pmoc.hpp>
#include <customCode/osg/Group_pmoc.hpp>
#include <customCode/osg/Node_pmoc.hpp>
#include <osg/Node>
using namespace pmoc;
 bool  osg::QReflect_Sequence::addChild(osg::QReflect_Node *p0 , double p1){
return _model->addChild(p0->_model ,p1);

}
 bool  osg::QReflect_Sequence::insertChild( unsigned int p0 ,osg::QReflect_Node *p1 , double p2){
return _model->insertChild(p0 ,p1->_model ,p2);

}
 bool  osg::QReflect_Sequence::insertChild( unsigned int p0 ,osg::QReflect_Node *p1){
return _model->insertChild(p0 ,p1->_model);

}
 bool  osg::QReflect_Sequence::removeChildren( unsigned int p0 , unsigned int p1){
return _model->removeChildren(p0 ,p1);

}
 double  osg::QReflect_Sequence::getTime( unsigned int p0)const{
return _model->getTime(p0);

}
 unsigned int  osg::QReflect_Sequence::getNumFrames()const{
return _model->getNumFrames();

}
 void osg::QReflect_Sequence::setDuration( float p0 , int p1){
 _model->setDuration(p0 ,p1);

}
 void osg::QReflect_Sequence::setInterval(osg::QReflect_Sequence::LoopMode p0 , int p1 , int p2){
 _model->setInterval(static_cast<osg::Sequence::LoopMode>(p0) ,p1 ,p2);

}
 void osg::QReflect_Sequence::setLoopMode(osg::QReflect_Sequence::LoopMode p0){
 _model->setLoopMode(static_cast<osg::Sequence::LoopMode>(p0));

}
 void osg::QReflect_Sequence::setMode(osg::QReflect_Sequence::SequenceMode p0){
 _model->setMode(static_cast<osg::Sequence::SequenceMode>(p0));

}
 void osg::QReflect_Sequence::setTime( unsigned int p0 , double p1){
 _model->setTime(p0 ,p1);

}
const bool osg::QReflect_Sequence::getClearOnStop()const{return _model->getClearOnStop();}
const bool osg::QReflect_Sequence::getSync()const{return _model->getSync();}
const double osg::QReflect_Sequence::getDefaultTime()const{return _model->getDefaultTime();}
const double osg::QReflect_Sequence::getLastFrameTime()const{return _model->getLastFrameTime();}
const float osg::QReflect_Sequence::getSpeed()const{return _model->getSpeed();}
const int osg::QReflect_Sequence::getBegin()const{return _model->getBegin();}
const int osg::QReflect_Sequence::getEnd()const{return _model->getEnd();}
const int osg::QReflect_Sequence::getNumRepeats()const{return _model->getNumRepeats();}
const int osg::QReflect_Sequence::getValue()const{return _model->getValue();}
osg::QReflect_Sequence::LoopMode  osg::QReflect_Sequence::getLoopMode()const{
osg::QReflect_Sequence::LoopMode ret=static_cast<osg::QReflect_Sequence::LoopMode>( _model->getLoopMode());return  ret;

}
osg::QReflect_Sequence::SequenceMode  osg::QReflect_Sequence::getMode()const{
osg::QReflect_Sequence::SequenceMode ret=static_cast<osg::QReflect_Sequence::SequenceMode>( _model->getMode());return  ret;

}
void   osg::QReflect_Sequence::addChild( osg::QReflect_Node *par){
_model->addChild(par->_model);
}
void   osg::QReflect_Sequence::pmoc_reverse_addChild( osg::QReflect_Node *par){
_model->removeChild(par->_model);
emit ChildCollectionChanged();
}
void  osg::QReflect_Sequence::setBegin(const int &par){_model->setBegin(par);emit BeginChanged(par);}
void  osg::QReflect_Sequence::setClearOnStop(const bool &par){_model->setClearOnStop(par);emit ClearOnStopChanged(par);}
void  osg::QReflect_Sequence::setDefaultTime(const double &par){_model->setDefaultTime(par);emit DefaultTimeChanged(par);}
void  osg::QReflect_Sequence::setEnd(const int &par){_model->setEnd(par);emit EndChanged(par);}
void  osg::QReflect_Sequence::setLastFrameTime(const double &par){_model->setLastFrameTime(par);emit LastFrameTimeChanged(par);}
void  osg::QReflect_Sequence::setNumRepeats(const int &par){_model->setNumRepeats(par);emit NumRepeatsChanged(par);}
void  osg::QReflect_Sequence::setSpeed(const float &par){_model->setSpeed(par);emit SpeedChanged(par);}
void  osg::QReflect_Sequence::setSync(const bool &par){_model->setSync(par);emit SyncChanged(par);}
void  osg::QReflect_Sequence::setValue(const int &par){_model->setValue(par);emit ValueChanged(par);}

///DefaultConstructor////////////////
osg::QReflect_Sequence::QReflect_Sequence(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
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
_typeid=&typeid(osg::Sequence );           qRegisterMetaType<QMLSequence>();
qmlRegisterType<QReflect_Sequence>("pmoc.osg",1,0,"QReflect_Sequence");
           qmlRegisterType<QMLSequence>("pmoc.osg",1,0,"QMLSequence");
       PMOCACTION("getChild","addChild","removeChild");
};
const std::string osg::MetaQReflect_Sequence::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_Sequence::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_Sequence::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_Sequence::createQQModel(Instance*i){ //return new MetaQReflect_Sequence_QModel(i);}
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




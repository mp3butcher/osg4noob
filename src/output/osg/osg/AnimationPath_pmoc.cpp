#include <osg/AnimationPath>
//includes
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/AnimationPath_pmoc.hpp>
#include <customCode/osg/AnimationPath_pmoc.hpp>
#include <customCode/osg/Object_pmoc.hpp>
#include <customCode/osg/Matrixd_pmoc.hpp>
#include <customCode/osg/Matrixf_pmoc.hpp>
using namespace pmoc;
 bool  osg::QReflect_AnimationPath::empty()const{
return _model->empty();

}
 bool  osg::QReflect_AnimationPath::getInverse( double p0 ,osg::QReflect_Matrixd *p1)const{
return _model->getInverse(p0 ,*p1->_model);

}
 bool  osg::QReflect_AnimationPath::getInverse( double p0 ,osg::QReflect_Matrixf *p1)const{
return _model->getInverse(p0 ,*p1->_model);

}
 bool  osg::QReflect_AnimationPath::getMatrix( double p0 ,osg::QReflect_Matrixd *p1)const{
return _model->getMatrix(p0 ,*p1->_model);

}
 bool  osg::QReflect_AnimationPath::getMatrix( double p0 ,osg::QReflect_Matrixf *p1)const{
return _model->getMatrix(p0 ,*p1->_model);

}
 double  osg::QReflect_AnimationPath::getFirstTime()const{
return _model->getFirstTime();

}
 double  osg::QReflect_AnimationPath::getLastTime()const{
return _model->getLastTime();

}
 double  osg::QReflect_AnimationPath::getPeriod()const{
return _model->getPeriod();

}
 void osg::QReflect_AnimationPath::clear(){
 _model->clear();

}
 void osg::QReflect_AnimationPath::setLoopMode(osg::QReflect_AnimationPath::LoopMode p0){
 _model->setLoopMode(static_cast<osg::AnimationPath::LoopMode>(p0));

}
osg::QReflect_AnimationPath::LoopMode  osg::QReflect_AnimationPath::getLoopMode()const{
osg::QReflect_AnimationPath::LoopMode ret=static_cast<osg::QReflect_AnimationPath::LoopMode>( _model->getLoopMode());return  ret;

}

///DefaultConstructor////////////////
osg::QReflect_AnimationPath::QReflect_AnimationPath(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =dynamic_cast<osg::AnimationPath*>(reinterpret_cast<osg::Referenced*>(i->ptr));
 if(!_model)  _model =dynamic_cast<osg::AnimationPath*>(reinterpret_cast<osg::Object*>(i->ptr));
 if(!_model)  _model =reinterpret_cast<osg::AnimationPath*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_AnimationPath::~QReflect_AnimationPath( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_AnimationPath::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_AnimationPath::createInstance( ){
osg::ref_ptr<osg::AnimationPath> osg_AnimationPath_ptr	;
osg_AnimationPath_ptr = new osg::AnimationPath ()	;
Instance o(PMOCGETMETACLASS("osg::AnimationPath"),(void*)dynamic_cast<osg::Object*>( osg_AnimationPath_ptr.get()		),true);
_managedinstances.insert(osg_AnimationPath_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_AnimationPath::MetaQReflect_AnimationPath():MetaQQuickClass( "osg::AnimationPath"){
_typeid=&typeid(osg::AnimationPath );           qRegisterMetaType<QMLAnimationPath>();
qmlRegisterType<QReflect_AnimationPath>("pmoc.osg",1,0,"QReflect_AnimationPath");
           qmlRegisterType<QMLAnimationPath>("pmoc.osg",1,0,"QMLAnimationPath");
};
const std::string osg::MetaQReflect_AnimationPath::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_AnimationPath::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_AnimationPath::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_AnimationPath::createQQModel(Instance*i){ //return new MetaQReflect_AnimationPath_QModel(i);}
QMLAnimationPath *ret =new QMLAnimationPath(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::Object *mother =dynamic_cast<osg::Object*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::Object");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::Object model for osg::AnimationPathis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::Object");
if(!cl){std::cerr<<"osg::Object QQModel for osg::AnimationPathis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_AnimationPath_pmoc.cpp"
#endif
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/AnimationPath_pmoc.hpp>
#include <customCode/osg/AnimationPath_pmoc.hpp>
#include <customCode/osg/Callback_pmoc.hpp>
#include <customCode/osg/AnimationPath_pmoc.hpp>
#include <customCode/osg/Vec3d_pmoc.hpp>
#include <osg/AnimationPath>
#include <osg/AnimationPath_pmoc.hpp>
using namespace pmoc;
 double  osg::QReflect_AnimationPathCallback::getAnimationTime()const{
return _model->getAnimationTime();

}
 void osg::QReflect_AnimationPathCallback::reset(){
 _model->reset();

}
 void osg::QReflect_AnimationPathCallback::setPivotPoint(osg::QReflect_Vec3d *p0){
 _model->setPivotPoint(*p0->_model);

}
const bool osg::QReflect_AnimationPathCallback::getPause()const{return _model->getPause();}
const bool osg::QReflect_AnimationPathCallback::getUseInverseMatrix()const{return _model->getUseInverseMatrix();}
const double osg::QReflect_AnimationPathCallback::getTimeMultiplier()const{return _model->getTimeMultiplier();}
const double osg::QReflect_AnimationPathCallback::getTimeOffset()const{return _model->getTimeOffset();}
osg::QReflect_AnimationPath * osg::QReflect_AnimationPathCallback::getAnimationPath()const{
PMOCSAFEADDOBJECT(*_model->getAnimationPath(),inst);
return inst.isValid()?((osg::QReflect_AnimationPath * )inst.model->createQQModel(&inst)):NULL;
}
void  osg::QReflect_AnimationPathCallback::setPause(const bool &par){_model->setPause(par);emit PauseChanged(par);}
void  osg::QReflect_AnimationPathCallback::setTimeMultiplier(const double &par){_model->setTimeMultiplier(par);emit TimeMultiplierChanged(par);}
void  osg::QReflect_AnimationPathCallback::setTimeOffset(const double &par){_model->setTimeOffset(par);emit TimeOffsetChanged(par);}
void  osg::QReflect_AnimationPathCallback::setUseInverseMatrix(const bool &par){_model->setUseInverseMatrix(par);emit UseInverseMatrixChanged(par);}
void osg::QReflect_AnimationPathCallback::pmoc_reverse_setAnimationPath( osg::QReflect_AnimationPath *par){_model->setAnimationPath(NULL);
emit AnimationPathChanged(NULL);
}
void osg::QReflect_AnimationPathCallback::setAnimationPath( osg::QReflect_AnimationPath *par){_model->setAnimationPath(par->_model);
emit AnimationPathChanged(par);
}

///DefaultConstructor////////////////
osg::QReflect_AnimationPathCallback::QReflect_AnimationPathCallback(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =dynamic_cast<osg::AnimationPathCallback*>(reinterpret_cast<osg::Referenced*>(i->ptr));
 if(!_model)  _model =dynamic_cast<osg::AnimationPathCallback*>(reinterpret_cast<osg::Object*>(i->ptr));
 if(!_model)  _model =reinterpret_cast<osg::AnimationPathCallback*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_AnimationPathCallback::~QReflect_AnimationPathCallback( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_AnimationPathCallback::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_AnimationPathCallback::createInstance( ){
osg::ref_ptr<osg::AnimationPathCallback> osg_AnimationPathCallback_ptr	;
osg_AnimationPathCallback_ptr = new osg::AnimationPathCallback ()	;
Instance o(PMOCGETMETACLASS("osg::AnimationPathCallback"),(void*)dynamic_cast<osg::Object*>( osg_AnimationPathCallback_ptr.get()		),true);
_managedinstances.insert(osg_AnimationPathCallback_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_AnimationPathCallback::MetaQReflect_AnimationPathCallback():MetaQQuickClass( "osg::AnimationPathCallback"){
_typeid=&typeid(osg::AnimationPathCallback );           qRegisterMetaType<QMLAnimationPathCallback>();
qmlRegisterType<QReflect_AnimationPathCallback>("pmoc.osg",1,0,"QReflect_AnimationPathCallback");
           qmlRegisterType<QMLAnimationPathCallback>("pmoc.osg",1,0,"QMLAnimationPathCallback");
       PMOCACTION("getAnimationPath","setAnimationPath","unsetAnimationPath");
};
const std::string osg::MetaQReflect_AnimationPathCallback::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_AnimationPathCallback::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_AnimationPathCallback::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_AnimationPathCallback::createQQModel(Instance*i){ //return new MetaQReflect_AnimationPathCallback_QModel(i);}
QMLAnimationPathCallback *ret =new QMLAnimationPathCallback(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::NodeCallback *mother =dynamic_cast<osg::NodeCallback*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::NodeCallback");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::NodeCallback model for osg::AnimationPathCallbackis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::NodeCallback");
if(!cl){std::cerr<<"osg::NodeCallback QQModel for osg::AnimationPathCallbackis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_AnimationPath_pmoc.cpp"
#endif



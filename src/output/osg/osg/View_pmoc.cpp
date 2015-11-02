#include <osg/View>
//includes
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/View_pmoc.hpp>
#include <customCode/osg/View_pmoc.hpp>
#include <customCode/osg/Object_pmoc.hpp>
#include <customCode/osg/Camera_pmoc.hpp>
#include <customCode/osg/FrameStamp_pmoc.hpp>
#include <customCode/osg/Light_pmoc.hpp>
#include <customCode/osg/Matrixd_pmoc.hpp>
#include <customCode/osg/Stats_pmoc.hpp>
#include <customCode/osg/View_pmoc.hpp>
#include <osg/Camera>
#include <osg/Camera_pmoc.hpp>
#include <osg/FrameStamp>
#include <osg/FrameStamp_pmoc.hpp>
#include <osg/Light>
#include <osg/Light_pmoc.hpp>
#include <osg/Stats>
#include <osg/Stats_pmoc.hpp>
using namespace pmoc;
 bool  osg::QReflect_View::addSlave(osg::QReflect_Camera *p0 , bool p1){
return _model->addSlave(p0->_model ,p1);

}
 bool  osg::QReflect_View::addSlave(osg::QReflect_Camera *p0 ,osg::QReflect_Matrixd *p1 ,osg::QReflect_Matrixd *p2 , bool p3){
return _model->addSlave(p0->_model ,*p1->_model ,*p2->_model ,p3);

}
 bool  osg::QReflect_View::removeSlave( unsigned int p0){
return _model->removeSlave(p0);

}
 unsigned int  osg::QReflect_View::findSlaveIndexForCamera(osg::QReflect_Camera *p0)const{
return _model->findSlaveIndexForCamera(p0->_model);

}
 unsigned int  osg::QReflect_View::getNumSlaves()const{
return _model->getNumSlaves();

}
 void osg::QReflect_View::setLightingMode(osg::QReflect_View::LightingMode p0){
 _model->setLightingMode(static_cast<osg::View::LightingMode>(p0));

}
 void osg::QReflect_View::take(osg::QReflect_View *p0){
 _model->take(*p0->_model);

}
 void osg::QReflect_View::updateSlaves(){
 _model->updateSlaves();

}
osg::QReflect_Camera * osg::QReflect_View::getCamera()const{
PMOCSAFEADDOBJECT(*_model->getCamera(),inst);
return inst.isValid()?((osg::QReflect_Camera * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_FrameStamp * osg::QReflect_View::getFrameStamp()const{
PMOCSAFEADDOBJECT(*_model->getFrameStamp(),inst);
return inst.isValid()?((osg::QReflect_FrameStamp * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Light * osg::QReflect_View::getLight()const{
PMOCSAFEADDOBJECT(*_model->getLight(),inst);
return inst.isValid()?((osg::QReflect_Light * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Stats * osg::QReflect_View::getStats()const{
PMOCSAFEADDOBJECT(*_model->getStats(),inst);
return inst.isValid()?((osg::QReflect_Stats * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_View::LightingMode  osg::QReflect_View::getLightingMode()const{
osg::QReflect_View::LightingMode ret=static_cast<osg::QReflect_View::LightingMode>( _model->getLightingMode());return  ret;

}
void osg::QReflect_View::pmoc_reverse_setCamera( osg::QReflect_Camera *par){_model->setCamera(NULL);
emit CameraChanged(NULL);
}
void osg::QReflect_View::pmoc_reverse_setFrameStamp( osg::QReflect_FrameStamp *par){_model->setFrameStamp(NULL);
emit FrameStampChanged(NULL);
}
void osg::QReflect_View::pmoc_reverse_setLight( osg::QReflect_Light *par){_model->setLight(NULL);
emit LightChanged(NULL);
}
void osg::QReflect_View::pmoc_reverse_setStats( osg::QReflect_Stats *par){_model->setStats(NULL);
emit StatsChanged(NULL);
}
void osg::QReflect_View::setCamera( osg::QReflect_Camera *par){_model->setCamera(par->_model);
emit CameraChanged(par);
}
void osg::QReflect_View::setFrameStamp( osg::QReflect_FrameStamp *par){_model->setFrameStamp(par->_model);
emit FrameStampChanged(par);
}
void osg::QReflect_View::setLight( osg::QReflect_Light *par){_model->setLight(par->_model);
emit LightChanged(par);
}
void osg::QReflect_View::setStats( osg::QReflect_Stats *par){_model->setStats(par->_model);
emit StatsChanged(par);
}

///DefaultConstructor////////////////
osg::QReflect_View::QReflect_View(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =dynamic_cast<osg::View*>(reinterpret_cast<osg::Referenced*>(i->ptr));
 if(!_model)  _model =dynamic_cast<osg::View*>(reinterpret_cast<osg::Object*>(i->ptr));
 if(!_model)  _model =reinterpret_cast<osg::View*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_View::~QReflect_View( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_View::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_View::createInstance( ){
osg::ref_ptr<osg::View> osg_View_ptr	;
osg_View_ptr = new osg::View ()	;
Instance o(PMOCGETMETACLASS("osg::View"),(void*)dynamic_cast<osg::Object*>( osg_View_ptr.get()		),true);
_managedinstances.insert(osg_View_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_View::MetaQReflect_View():MetaQQuickClass( "osg::View"){
_typeid=&typeid(osg::View );           qRegisterMetaType<QMLView>();
qmlRegisterType<QReflect_View>("pmoc.osg",1,0,"QReflect_View");
           qmlRegisterType<QMLView>("pmoc.osg",1,0,"QMLView");
       PMOCACTION("getCamera","setCamera","unsetCamera");
       PMOCACTION("getFrameStamp","setFrameStamp","unsetFrameStamp");
       PMOCACTION("getLight","setLight","unsetLight");
       PMOCACTION("getStats","setStats","unsetStats");
};
const std::string osg::MetaQReflect_View::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_View::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_View::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_View::createQQModel(Instance*i){ //return new MetaQReflect_View_QModel(i);}
QMLView *ret =new QMLView(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::Object *mother =dynamic_cast<osg::Object*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::Object");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::Object model for osg::Viewis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::Object");
if(!cl){std::cerr<<"osg::Object QQModel for osg::Viewis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_View_pmoc.cpp"
#endif




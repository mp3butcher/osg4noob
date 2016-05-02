#include <osg/LightSource>
//includes

#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/LightSource_pmoc.hpp>
#include <customCode/osg/LightSource_pmoc.hpp>
#include <customCode/osg/Group_pmoc.hpp>
#include <customCode/osg/Light_pmoc.hpp>
#include <customCode/osg/StateSet_pmoc.hpp>
using namespace pmoc;
 void osg::QReflect_LightSource::setLight(osg::QReflect_Light  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_LightSource::setLight : parameter n.0 is NULL\n"<<endl;return;}
 _model->setLight(p0->_model);
emit LightChanged();

}
 void osg::QReflect_LightSource::setLocalStateSetModes( unsigned int  p0){
//params checking
 _model->setLocalStateSetModes(p0);

}
 void osg::QReflect_LightSource::setReferenceFrame(osg::QReflect_LightSource::ReferenceFrame  p0){
//params checking
 _model->setReferenceFrame(static_cast<osg::LightSource::ReferenceFrame>(p0));
emit ReferenceFrameChanged();

}
 void osg::QReflect_LightSource::setStateSetModes(osg::QReflect_StateSet  *p0 , unsigned int  p1)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_LightSource::setStateSetModes : parameter n.0 is NULL\n"<<endl;return;}
 _model->setStateSetModes(*p0->_model ,p1);

}
 void osg::QReflect_LightSource::setThreadSafeRefUnref( bool  p0){
//params checking
 _model->setThreadSafeRefUnref(p0);

}
osg::QReflect_Light*osg::QReflect_LightSource::getLight()const{
//params checking
PMOCSAFEADDOBJECT(*_model->getLight(),inst);
return inst.isValid()?((osg::QReflect_Light * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Light*osg::QReflect_LightSource::getLight(){
//params checking
PMOCSAFEADDOBJECT(*_model->getLight(),inst);
return inst.isValid()?((osg::QReflect_Light * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_LightSource::ReferenceFrame  osg::QReflect_LightSource::getReferenceFrame()const{
//params checking
osg::QReflect_LightSource::ReferenceFrame ret=static_cast<osg::QReflect_LightSource::ReferenceFrame>( _model->getReferenceFrame());return  ret;

}

///DefaultConstructor////////////////
osg::QReflect_LightSource::QReflect_LightSource(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::LightSource*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_LightSource::~QReflect_LightSource( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_LightSource::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_LightSource::createInstance( ){
osg::ref_ptr<osg::LightSource> osg_LightSource_ptr	;
osg_LightSource_ptr = new osg::LightSource ()	;
Instance o(PMOCGETMETACLASS("osg::LightSource"),(void*)osg_LightSource_ptr.get()		,true);
_managedinstances.insert(osg_LightSource_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_LightSource::MetaQReflect_LightSource():MetaQQuickClass( "osg::LightSource"){
_typeid=&typeid(osg::LightSource );
           qRegisterMetaType<osg::QMLLightSource>();
           qRegisterMetaType<osg::QMLLightSource*>("pmoc.osg.QMLLightSource");
qmlRegisterType<osg::QReflect_LightSource>("pmoc.osg",1,0,"QReflect_LightSource");
           qmlRegisterType<osg::QMLLightSource>("pmoc.osg",1,0,"QMLLightSource");
};
const std::string osg::MetaQReflect_LightSource::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_LightSource::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_LightSource::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_LightSource::createQQModel(const Instance*i){ //return new MetaQReflect_LightSource_QModel(i);}
QMLLightSource *ret =new QMLLightSource(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::Group *mother =dynamic_cast<osg::Group*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::Group");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::Group model for osg::LightSourceis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::Group");
if(!cl){std::cerr<<"osg::Group QQModel for osg::LightSourceis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_LightSource_pmoc.cpp"
#endif





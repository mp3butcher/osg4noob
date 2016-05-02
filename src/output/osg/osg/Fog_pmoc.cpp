#include <osg/Fog>
//includes

#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/Fog_pmoc.hpp>
#include <customCode/osg/Fog_pmoc.hpp>
#include <customCode/osg/StateAttribute_pmoc.hpp>
#include <customCode/osg/StateAttribute_pmoc.hpp>
#include <customCode/osg/State_pmoc.hpp>
#include <customCode/osg/Vec4f_pmoc.hpp>
using namespace pmoc;
 GLint  osg::QReflect_Fog:: getFogCoordinateSource()const{
//params checking
return _model->getFogCoordinateSource();

}
 bool  osg::QReflect_Fog:: getUseRadialFog()const{
//params checking
return _model->getUseRadialFog();

}
 float  osg::QReflect_Fog:: getDensity()const{
//params checking
return _model->getDensity();

}
 float  osg::QReflect_Fog:: getEnd()const{
//params checking
return _model->getEnd();

}
 float  osg::QReflect_Fog:: getStart()const{
//params checking
return _model->getStart();

}
 int  osg::QReflect_Fog:: compare(osg::QReflect_StateAttribute  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Fog::compare : parameter n.0 is NULL\n"<<endl;return -1;}
return _model->compare(*p0->_model);

}
 void osg::QReflect_Fog::apply(osg::QReflect_State  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Fog::apply : parameter n.0 is NULL\n"<<endl;return;}
 _model->apply(*p0->_model);

}
 void osg::QReflect_Fog::setColor(osg::QReflect_Vec4f  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Fog::setColor : parameter n.0 is NULL\n"<<endl;return;}
 _model->setColor(*p0->_model);

}
 void osg::QReflect_Fog::setDensity( float  p0){
//params checking
 _model->setDensity(p0);
emit DensityChanged();

}
 void osg::QReflect_Fog::setEnd( float  p0){
//params checking
 _model->setEnd(p0);
emit EndChanged();

}
 void osg::QReflect_Fog::setFogCoordinateSource( GLint  p0){
//params checking
 _model->setFogCoordinateSource(p0);
emit FogCoordinateSourceChanged();

}
 void osg::QReflect_Fog::setMode(osg::QReflect_Fog::Mode  p0){
//params checking
 _model->setMode(static_cast<osg::Fog::Mode>(p0));
emit ModeChanged();

}
 void osg::QReflect_Fog::setStart( float  p0){
//params checking
 _model->setStart(p0);
emit StartChanged();

}
 void osg::QReflect_Fog::setUseRadialFog( bool  p0){
//params checking
 _model->setUseRadialFog(p0);
emit UseRadialFogChanged();

}
osg::QReflect_Fog::Mode  osg::QReflect_Fog::getMode()const{
//params checking
osg::QReflect_Fog::Mode ret=static_cast<osg::QReflect_Fog::Mode>( _model->getMode());return  ret;

}

///DefaultConstructor////////////////
osg::QReflect_Fog::QReflect_Fog(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::Fog*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_Fog::~QReflect_Fog( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_Fog::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_Fog::createInstance( ){
osg::ref_ptr<osg::Fog> osg_Fog_ptr	;
osg_Fog_ptr = new osg::Fog ()	;
Instance o(PMOCGETMETACLASS("osg::Fog"),(void*)osg_Fog_ptr.get()		,true);
_managedinstances.insert(osg_Fog_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_Fog::MetaQReflect_Fog():MetaQQuickClass( "osg::Fog"){
_typeid=&typeid(osg::Fog );
           qRegisterMetaType<osg::QMLFog>();
           qRegisterMetaType<osg::QMLFog*>("pmoc.osg.QMLFog");
qmlRegisterType<osg::QReflect_Fog>("pmoc.osg",1,0,"QReflect_Fog");
           qmlRegisterType<osg::QMLFog>("pmoc.osg",1,0,"QMLFog");
};
const std::string osg::MetaQReflect_Fog::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_Fog::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_Fog::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_Fog::createQQModel(const Instance*i){ //return new MetaQReflect_Fog_QModel(i);}
QMLFog *ret =new QMLFog(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::StateAttribute *mother =dynamic_cast<osg::StateAttribute*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::StateAttribute");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::StateAttribute model for osg::Fogis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::StateAttribute");
if(!cl){std::cerr<<"osg::StateAttribute QQModel for osg::Fogis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Fog_pmoc.cpp"
#endif





#include <osg/PolygonOffset>
//includes

#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/PolygonOffset_pmoc.hpp>
#include <customCode/osg/PolygonOffset_pmoc.hpp>
#include <customCode/osg/StateAttribute_pmoc.hpp>
#include <customCode/osg/StateAttribute_pmoc.hpp>
#include <customCode/osg/State_pmoc.hpp>
using namespace pmoc;
 bool  osg::QReflect_PolygonOffset:: areFactorAndUnitsMultipliersSet(){
//params checking
return _model->areFactorAndUnitsMultipliersSet();

}
 float  osg::QReflect_PolygonOffset:: getFactor()const{
//params checking
return _model->getFactor();

}
 float  osg::QReflect_PolygonOffset:: getFactorMultiplier(){
//params checking
return _model->getFactorMultiplier();

}
 float  osg::QReflect_PolygonOffset:: getUnits()const{
//params checking
return _model->getUnits();

}
 float  osg::QReflect_PolygonOffset:: getUnitsMultiplier(){
//params checking
return _model->getUnitsMultiplier();

}
 int  osg::QReflect_PolygonOffset:: compare(osg::QReflect_StateAttribute  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_PolygonOffset::compare : parameter n.0 is NULL\n"<<endl;return -1;}
return _model->compare(*p0->_model);

}
 void osg::QReflect_PolygonOffset::apply(osg::QReflect_State  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_PolygonOffset::apply : parameter n.0 is NULL\n"<<endl;return;}
 _model->apply(*p0->_model);

}
 void osg::QReflect_PolygonOffset::setFactor( float  p0){
//params checking
 _model->setFactor(p0);
emit FactorChanged();

}
 void osg::QReflect_PolygonOffset::setFactorAndUnitsMultipliersUsingBestGuessForDriver(){
//params checking
 _model->setFactorAndUnitsMultipliersUsingBestGuessForDriver();

}
 void osg::QReflect_PolygonOffset::setFactorMultiplier( float  p0){
//params checking
 _model->setFactorMultiplier(p0);
emit FactorMultiplierChanged();

}
 void osg::QReflect_PolygonOffset::setUnits( float  p0){
//params checking
 _model->setUnits(p0);
emit UnitsChanged();

}
 void osg::QReflect_PolygonOffset::setUnitsMultiplier( float  p0){
//params checking
 _model->setUnitsMultiplier(p0);
emit UnitsMultiplierChanged();

}

///DefaultConstructor////////////////
osg::QReflect_PolygonOffset::QReflect_PolygonOffset(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::PolygonOffset*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_PolygonOffset::~QReflect_PolygonOffset( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_PolygonOffset::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_PolygonOffset::createInstance( ){
osg::ref_ptr<osg::PolygonOffset> osg_PolygonOffset_ptr	;
osg_PolygonOffset_ptr = new osg::PolygonOffset ()	;
Instance o(PMOCGETMETACLASS("osg::PolygonOffset"),(void*)osg_PolygonOffset_ptr.get()		,true);
_managedinstances.insert(osg_PolygonOffset_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_PolygonOffset::MetaQReflect_PolygonOffset():MetaQQuickClass( "osg::PolygonOffset"){
_typeid=&typeid(osg::PolygonOffset );
           qRegisterMetaType<osg::QMLPolygonOffset>();
           qRegisterMetaType<osg::QMLPolygonOffset*>("pmoc.osg.QMLPolygonOffset");
qmlRegisterType<osg::QReflect_PolygonOffset>("pmoc.osg",1,0,"QReflect_PolygonOffset");
           qmlRegisterType<osg::QMLPolygonOffset>("pmoc.osg",1,0,"QMLPolygonOffset");
};
const std::string osg::MetaQReflect_PolygonOffset::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_PolygonOffset::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_PolygonOffset::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_PolygonOffset::createQQModel(const Instance*i){ //return new MetaQReflect_PolygonOffset_QModel(i);}
QMLPolygonOffset *ret =new QMLPolygonOffset(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::StateAttribute *mother =dynamic_cast<osg::StateAttribute*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::StateAttribute");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::StateAttribute model for osg::PolygonOffsetis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::StateAttribute");
if(!cl){std::cerr<<"osg::StateAttribute QQModel for osg::PolygonOffsetis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_PolygonOffset_pmoc.cpp"
#endif





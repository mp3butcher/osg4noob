#include <osg/PolygonOffset>
//includes
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/PolygonOffset_pmoc.hpp>
#include <customCode/osg/PolygonOffset_pmoc.hpp>
#include <customCode/osg/StateAttribute_pmoc.hpp>
#include <customCode/osg/StateAttribute_pmoc.hpp>
using namespace pmoc;
 bool  osg::QReflect_PolygonOffset::areFactorAndUnitsMultipliersSet(){
return _model->areFactorAndUnitsMultipliersSet();

}
 int  osg::QReflect_PolygonOffset::compare(osg::QReflect_StateAttribute *p0)const{
return _model->compare(*p0->_model);

}
 void osg::QReflect_PolygonOffset::setFactorAndUnitsMultipliersUsingBestGuessForDriver(){
 _model->setFactorAndUnitsMultipliersUsingBestGuessForDriver();

}
const float osg::QReflect_PolygonOffset::getFactor()const{return _model->getFactor();}
const float osg::QReflect_PolygonOffset::getFactorMultiplier()const{return _model->getFactorMultiplier();}
const float osg::QReflect_PolygonOffset::getUnits()const{return _model->getUnits();}
const float osg::QReflect_PolygonOffset::getUnitsMultiplier()const{return _model->getUnitsMultiplier();}
void  osg::QReflect_PolygonOffset::setFactor(const float &par){_model->setFactor(par);emit FactorChanged(par);}
void  osg::QReflect_PolygonOffset::setFactorMultiplier(const float &par){_model->setFactorMultiplier(par);emit FactorMultiplierChanged(par);}
void  osg::QReflect_PolygonOffset::setUnits(const float &par){_model->setUnits(par);emit UnitsChanged(par);}
void  osg::QReflect_PolygonOffset::setUnitsMultiplier(const float &par){_model->setUnitsMultiplier(par);emit UnitsMultiplierChanged(par);}

///DefaultConstructor////////////////
osg::QReflect_PolygonOffset::QReflect_PolygonOffset(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
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
_typeid=&typeid(osg::PolygonOffset );           qRegisterMetaType<QMLPolygonOffset>();
qmlRegisterType<QReflect_PolygonOffset>("pmoc.osg",1,0,"QReflect_PolygonOffset");
           qmlRegisterType<QMLPolygonOffset>("pmoc.osg",1,0,"QMLPolygonOffset");
};
const std::string osg::MetaQReflect_PolygonOffset::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_PolygonOffset::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_PolygonOffset::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_PolygonOffset::createQQModel(Instance*i){ //return new MetaQReflect_PolygonOffset_QModel(i);}
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



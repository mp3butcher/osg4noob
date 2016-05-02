#include <osg/GraphicsCostEstimator>
//includes

#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/GraphicsCostEstimator_pmoc.hpp>
#include <customCode/osg/GraphicsCostEstimator_pmoc.hpp>
using namespace pmoc;

///DefaultConstructor////////////////
osg::QReflect_ClampedLinearCostFunction1D::QReflect_ClampedLinearCostFunction1D(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::ClampedLinearCostFunction1D*>(i->ptr);
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_ClampedLinearCostFunction1D::~QReflect_ClampedLinearCostFunction1D( ){
 }
///update this according _model new state
void osg::QReflect_ClampedLinearCostFunction1D::updateModel(){
}
Instance osg::MetaQReflect_ClampedLinearCostFunction1D::createInstance( ){
std::cerr<<"osg::ClampedLinearCostFunction1D is not instanciable"<<std::endl;return Instance();


}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_ClampedLinearCostFunction1D::MetaQReflect_ClampedLinearCostFunction1D():MetaQQuickClass( "osg::ClampedLinearCostFunction1D"){
_typeid=&typeid(osg::ClampedLinearCostFunction1D );
           qRegisterMetaType<osg::QMLClampedLinearCostFunction1D>();
           qRegisterMetaType<osg::QMLClampedLinearCostFunction1D*>("pmoc.osg.QMLClampedLinearCostFunction1D");
qmlRegisterType<osg::QReflect_ClampedLinearCostFunction1D>("pmoc.osg",1,0,"QReflect_ClampedLinearCostFunction1D");
           qmlRegisterType<osg::QMLClampedLinearCostFunction1D>("pmoc.osg",1,0,"QMLClampedLinearCostFunction1D");
};
const std::string osg::MetaQReflect_ClampedLinearCostFunction1D::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_ClampedLinearCostFunction1D::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_ClampedLinearCostFunction1D::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_ClampedLinearCostFunction1D::createQQModel(const Instance*i){ //return new MetaQReflect_ClampedLinearCostFunction1D_QModel(i);}
QMLClampedLinearCostFunction1D *ret =new QMLClampedLinearCostFunction1D(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_GraphicsCostEstimator_pmoc.cpp"
#endif
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/GraphicsCostEstimator_pmoc.hpp>
#include <customCode/osg/GraphicsCostEstimator_pmoc.hpp>
#include <customCode/osg/Referenced_pmoc.hpp>
#include <customCode/osg/RenderInfo_pmoc.hpp>
using namespace pmoc;
 void osg::QReflect_GeometryCostEstimator::calibrate(osg::QReflect_RenderInfo  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_GeometryCostEstimator::calibrate : parameter n.0 is NULL\n"<<endl;return;}
 _model->calibrate(*p0->_model);

}
 void osg::QReflect_GeometryCostEstimator::setDefaults(){
//params checking
 _model->setDefaults();

}

///DefaultConstructor////////////////
osg::QReflect_GeometryCostEstimator::QReflect_GeometryCostEstimator(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::GeometryCostEstimator*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_GeometryCostEstimator::~QReflect_GeometryCostEstimator( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_GeometryCostEstimator::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_GeometryCostEstimator::createInstance( ){
osg::ref_ptr<osg::GeometryCostEstimator> osg_GeometryCostEstimator_ptr	;
osg_GeometryCostEstimator_ptr = new osg::GeometryCostEstimator ()	;
Instance o(PMOCGETMETACLASS("osg::GeometryCostEstimator"),(void*)osg_GeometryCostEstimator_ptr.get()		,true);
_managedinstances.insert(osg_GeometryCostEstimator_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_GeometryCostEstimator::MetaQReflect_GeometryCostEstimator():MetaQQuickClass( "osg::GeometryCostEstimator"){
_typeid=&typeid(osg::GeometryCostEstimator );
           qRegisterMetaType<osg::QMLGeometryCostEstimator>();
           qRegisterMetaType<osg::QMLGeometryCostEstimator*>("pmoc.osg.QMLGeometryCostEstimator");
qmlRegisterType<osg::QReflect_GeometryCostEstimator>("pmoc.osg",1,0,"QReflect_GeometryCostEstimator");
           qmlRegisterType<osg::QMLGeometryCostEstimator>("pmoc.osg",1,0,"QMLGeometryCostEstimator");
};
const std::string osg::MetaQReflect_GeometryCostEstimator::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_GeometryCostEstimator::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_GeometryCostEstimator::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_GeometryCostEstimator::createQQModel(const Instance*i){ //return new MetaQReflect_GeometryCostEstimator_QModel(i);}
QMLGeometryCostEstimator *ret =new QMLGeometryCostEstimator(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::Referenced *mother =dynamic_cast<osg::Referenced*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::Referenced");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::Referenced model for osg::GeometryCostEstimatoris invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::Referenced");
if(!cl){std::cerr<<"osg::Referenced QQModel for osg::GeometryCostEstimatoris not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_GraphicsCostEstimator_pmoc.cpp"
#endif
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/GraphicsCostEstimator_pmoc.hpp>
#include <customCode/osg/GraphicsCostEstimator_pmoc.hpp>
#include <customCode/osg/Referenced_pmoc.hpp>
#include <customCode/osg/RenderInfo_pmoc.hpp>
using namespace pmoc;
 void osg::QReflect_GraphicsCostEstimator::calibrate(osg::QReflect_RenderInfo  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_GraphicsCostEstimator::calibrate : parameter n.0 is NULL\n"<<endl;return;}
 _model->calibrate(*p0->_model);

}
 void osg::QReflect_GraphicsCostEstimator::setDefaults(){
//params checking
 _model->setDefaults();

}

///DefaultConstructor////////////////
osg::QReflect_GraphicsCostEstimator::QReflect_GraphicsCostEstimator(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::GraphicsCostEstimator*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_GraphicsCostEstimator::~QReflect_GraphicsCostEstimator( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_GraphicsCostEstimator::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_GraphicsCostEstimator::createInstance( ){
osg::ref_ptr<osg::GraphicsCostEstimator> osg_GraphicsCostEstimator_ptr	;
osg_GraphicsCostEstimator_ptr = new osg::GraphicsCostEstimator ()	;
Instance o(PMOCGETMETACLASS("osg::GraphicsCostEstimator"),(void*)osg_GraphicsCostEstimator_ptr.get()		,true);
_managedinstances.insert(osg_GraphicsCostEstimator_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_GraphicsCostEstimator::MetaQReflect_GraphicsCostEstimator():MetaQQuickClass( "osg::GraphicsCostEstimator"){
_typeid=&typeid(osg::GraphicsCostEstimator );
           qRegisterMetaType<osg::QMLGraphicsCostEstimator>();
           qRegisterMetaType<osg::QMLGraphicsCostEstimator*>("pmoc.osg.QMLGraphicsCostEstimator");
qmlRegisterType<osg::QReflect_GraphicsCostEstimator>("pmoc.osg",1,0,"QReflect_GraphicsCostEstimator");
           qmlRegisterType<osg::QMLGraphicsCostEstimator>("pmoc.osg",1,0,"QMLGraphicsCostEstimator");
};
const std::string osg::MetaQReflect_GraphicsCostEstimator::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_GraphicsCostEstimator::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_GraphicsCostEstimator::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_GraphicsCostEstimator::createQQModel(const Instance*i){ //return new MetaQReflect_GraphicsCostEstimator_QModel(i);}
QMLGraphicsCostEstimator *ret =new QMLGraphicsCostEstimator(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::Referenced *mother =dynamic_cast<osg::Referenced*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::Referenced");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::Referenced model for osg::GraphicsCostEstimatoris invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::Referenced");
if(!cl){std::cerr<<"osg::Referenced QQModel for osg::GraphicsCostEstimatoris not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_GraphicsCostEstimator_pmoc.cpp"
#endif
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/GraphicsCostEstimator_pmoc.hpp>
#include <customCode/osg/GraphicsCostEstimator_pmoc.hpp>
#include <customCode/osg/Referenced_pmoc.hpp>
#include <customCode/osg/RenderInfo_pmoc.hpp>
using namespace pmoc;
 void osg::QReflect_ProgramCostEstimator::calibrate(osg::QReflect_RenderInfo  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_ProgramCostEstimator::calibrate : parameter n.0 is NULL\n"<<endl;return;}
 _model->calibrate(*p0->_model);

}
 void osg::QReflect_ProgramCostEstimator::setDefaults(){
//params checking
 _model->setDefaults();

}

///DefaultConstructor////////////////
osg::QReflect_ProgramCostEstimator::QReflect_ProgramCostEstimator(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::ProgramCostEstimator*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_ProgramCostEstimator::~QReflect_ProgramCostEstimator( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_ProgramCostEstimator::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_ProgramCostEstimator::createInstance( ){
osg::ref_ptr<osg::ProgramCostEstimator> osg_ProgramCostEstimator_ptr	;
osg_ProgramCostEstimator_ptr = new osg::ProgramCostEstimator ()	;
Instance o(PMOCGETMETACLASS("osg::ProgramCostEstimator"),(void*)osg_ProgramCostEstimator_ptr.get()		,true);
_managedinstances.insert(osg_ProgramCostEstimator_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_ProgramCostEstimator::MetaQReflect_ProgramCostEstimator():MetaQQuickClass( "osg::ProgramCostEstimator"){
_typeid=&typeid(osg::ProgramCostEstimator );
           qRegisterMetaType<osg::QMLProgramCostEstimator>();
           qRegisterMetaType<osg::QMLProgramCostEstimator*>("pmoc.osg.QMLProgramCostEstimator");
qmlRegisterType<osg::QReflect_ProgramCostEstimator>("pmoc.osg",1,0,"QReflect_ProgramCostEstimator");
           qmlRegisterType<osg::QMLProgramCostEstimator>("pmoc.osg",1,0,"QMLProgramCostEstimator");
};
const std::string osg::MetaQReflect_ProgramCostEstimator::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_ProgramCostEstimator::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_ProgramCostEstimator::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_ProgramCostEstimator::createQQModel(const Instance*i){ //return new MetaQReflect_ProgramCostEstimator_QModel(i);}
QMLProgramCostEstimator *ret =new QMLProgramCostEstimator(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::Referenced *mother =dynamic_cast<osg::Referenced*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::Referenced");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::Referenced model for osg::ProgramCostEstimatoris invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::Referenced");
if(!cl){std::cerr<<"osg::Referenced QQModel for osg::ProgramCostEstimatoris not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_GraphicsCostEstimator_pmoc.cpp"
#endif
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/GraphicsCostEstimator_pmoc.hpp>
#include <customCode/osg/GraphicsCostEstimator_pmoc.hpp>
#include <customCode/osg/Referenced_pmoc.hpp>
#include <customCode/osg/RenderInfo_pmoc.hpp>
using namespace pmoc;
 void osg::QReflect_TextureCostEstimator::calibrate(osg::QReflect_RenderInfo  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_TextureCostEstimator::calibrate : parameter n.0 is NULL\n"<<endl;return;}
 _model->calibrate(*p0->_model);

}
 void osg::QReflect_TextureCostEstimator::setDefaults(){
//params checking
 _model->setDefaults();

}

///DefaultConstructor////////////////
osg::QReflect_TextureCostEstimator::QReflect_TextureCostEstimator(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::TextureCostEstimator*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_TextureCostEstimator::~QReflect_TextureCostEstimator( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_TextureCostEstimator::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_TextureCostEstimator::createInstance( ){
osg::ref_ptr<osg::TextureCostEstimator> osg_TextureCostEstimator_ptr	;
osg_TextureCostEstimator_ptr = new osg::TextureCostEstimator ()	;
Instance o(PMOCGETMETACLASS("osg::TextureCostEstimator"),(void*)osg_TextureCostEstimator_ptr.get()		,true);
_managedinstances.insert(osg_TextureCostEstimator_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_TextureCostEstimator::MetaQReflect_TextureCostEstimator():MetaQQuickClass( "osg::TextureCostEstimator"){
_typeid=&typeid(osg::TextureCostEstimator );
           qRegisterMetaType<osg::QMLTextureCostEstimator>();
           qRegisterMetaType<osg::QMLTextureCostEstimator*>("pmoc.osg.QMLTextureCostEstimator");
qmlRegisterType<osg::QReflect_TextureCostEstimator>("pmoc.osg",1,0,"QReflect_TextureCostEstimator");
           qmlRegisterType<osg::QMLTextureCostEstimator>("pmoc.osg",1,0,"QMLTextureCostEstimator");
};
const std::string osg::MetaQReflect_TextureCostEstimator::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_TextureCostEstimator::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_TextureCostEstimator::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_TextureCostEstimator::createQQModel(const Instance*i){ //return new MetaQReflect_TextureCostEstimator_QModel(i);}
QMLTextureCostEstimator *ret =new QMLTextureCostEstimator(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::Referenced *mother =dynamic_cast<osg::Referenced*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::Referenced");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::Referenced model for osg::TextureCostEstimatoris invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::Referenced");
if(!cl){std::cerr<<"osg::Referenced QQModel for osg::TextureCostEstimatoris not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_GraphicsCostEstimator_pmoc.cpp"
#endif





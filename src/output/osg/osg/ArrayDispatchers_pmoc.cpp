#include <osg/ArrayDispatchers>
//includes
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/ArrayDispatchers_pmoc.hpp>
#include <customCode/osg/ArrayDispatchers_pmoc.hpp>
#include <customCode/osg/Referenced_pmoc.hpp>
#include <customCode/osg/ArrayDispatchers_pmoc.hpp>
#include <customCode/osg/Array_pmoc.hpp>
using namespace pmoc;
 bool  osg::QReflect_ArrayDispatchers::active( unsigned int p0)const{
return _model->active(p0);

}
 void osg::QReflect_ArrayDispatchers::activate( unsigned int p0 ,osg::QReflect_AttributeDispatch *p1){
 _model->activate(p0 ,p1->_model);

}
 void osg::QReflect_ArrayDispatchers::activateColorArray(osg::QReflect_Array *p0){
 _model->activateColorArray(p0->_model);

}
 void osg::QReflect_ArrayDispatchers::activateFogCoordArray(osg::QReflect_Array *p0){
 _model->activateFogCoordArray(p0->_model);

}
 void osg::QReflect_ArrayDispatchers::activateNormalArray(osg::QReflect_Array *p0){
 _model->activateNormalArray(p0->_model);

}
 void osg::QReflect_ArrayDispatchers::activateSecondaryColorArray(osg::QReflect_Array *p0){
 _model->activateSecondaryColorArray(p0->_model);

}
 void osg::QReflect_ArrayDispatchers::activateTexCoordArray( unsigned int p0 ,osg::QReflect_Array *p1){
 _model->activateTexCoordArray(p0 ,p1->_model);

}
 void osg::QReflect_ArrayDispatchers::activateVertexArray(osg::QReflect_Array *p0){
 _model->activateVertexArray(p0->_model);

}
 void osg::QReflect_ArrayDispatchers::activateVertexAttribArray( unsigned int p0 ,osg::QReflect_Array *p1){
 _model->activateVertexAttribArray(p0 ,p1->_model);

}
 void osg::QReflect_ArrayDispatchers::dispatch( unsigned int p0 , unsigned int p1){
 _model->dispatch(p0 ,p1);

}
 void osg::QReflect_ArrayDispatchers::reset(){
 _model->reset();

}
const bool osg::QReflect_ArrayDispatchers::getUseVertexAttribAlias()const{return _model->getUseVertexAttribAlias();}
osg::QReflect_AttributeDispatch*osg::QReflect_ArrayDispatchers::colorDispatcher(osg::QReflect_Array *p0){
PMOCSAFEADDOBJECT(*_model->colorDispatcher(p0->_model),inst);
return inst.isValid()?((osg::QReflect_AttributeDispatch * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_AttributeDispatch*osg::QReflect_ArrayDispatchers::fogCoordDispatcher(osg::QReflect_Array *p0){
PMOCSAFEADDOBJECT(*_model->fogCoordDispatcher(p0->_model),inst);
return inst.isValid()?((osg::QReflect_AttributeDispatch * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_AttributeDispatch*osg::QReflect_ArrayDispatchers::normalDispatcher(osg::QReflect_Array *p0){
PMOCSAFEADDOBJECT(*_model->normalDispatcher(p0->_model),inst);
return inst.isValid()?((osg::QReflect_AttributeDispatch * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_AttributeDispatch*osg::QReflect_ArrayDispatchers::secondaryColorDispatcher(osg::QReflect_Array *p0){
PMOCSAFEADDOBJECT(*_model->secondaryColorDispatcher(p0->_model),inst);
return inst.isValid()?((osg::QReflect_AttributeDispatch * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_AttributeDispatch*osg::QReflect_ArrayDispatchers::texCoordDispatcher( unsigned int p0 ,osg::QReflect_Array *p1){
PMOCSAFEADDOBJECT(*_model->texCoordDispatcher(p0 ,p1->_model),inst);
return inst.isValid()?((osg::QReflect_AttributeDispatch * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_AttributeDispatch*osg::QReflect_ArrayDispatchers::vertexAttribDispatcher( unsigned int p0 ,osg::QReflect_Array *p1){
PMOCSAFEADDOBJECT(*_model->vertexAttribDispatcher(p0 ,p1->_model),inst);
return inst.isValid()?((osg::QReflect_AttributeDispatch * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_AttributeDispatch*osg::QReflect_ArrayDispatchers::vertexDispatcher(osg::QReflect_Array *p0){
PMOCSAFEADDOBJECT(*_model->vertexDispatcher(p0->_model),inst);
return inst.isValid()?((osg::QReflect_AttributeDispatch * )inst.model->createQQModel(&inst)):NULL;
}
void  osg::QReflect_ArrayDispatchers::setUseVertexAttribAlias(const bool &par){_model->setUseVertexAttribAlias(par);emit UseVertexAttribAliasChanged(par);}

///DefaultConstructor////////////////
osg::QReflect_ArrayDispatchers::QReflect_ArrayDispatchers(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::ArrayDispatchers*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_ArrayDispatchers::~QReflect_ArrayDispatchers( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_ArrayDispatchers::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_ArrayDispatchers::createInstance( ){
osg::ref_ptr<osg::ArrayDispatchers> osg_ArrayDispatchers_ptr	;
osg_ArrayDispatchers_ptr = new osg::ArrayDispatchers ()	;
Instance o(PMOCGETMETACLASS("osg::ArrayDispatchers"),(void*)osg_ArrayDispatchers_ptr.get()		,true);
_managedinstances.insert(osg_ArrayDispatchers_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_ArrayDispatchers::MetaQReflect_ArrayDispatchers():MetaQQuickClass( "osg::ArrayDispatchers"){
_typeid=&typeid(osg::ArrayDispatchers );           qRegisterMetaType<QMLArrayDispatchers>();
qmlRegisterType<QReflect_ArrayDispatchers>("pmoc.osg",1,0,"QReflect_ArrayDispatchers");
           qmlRegisterType<QMLArrayDispatchers>("pmoc.osg",1,0,"QMLArrayDispatchers");
};
const std::string osg::MetaQReflect_ArrayDispatchers::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_ArrayDispatchers::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_ArrayDispatchers::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_ArrayDispatchers::createQQModel(Instance*i){ //return new MetaQReflect_ArrayDispatchers_QModel(i);}
QMLArrayDispatchers *ret =new QMLArrayDispatchers(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::Referenced *mother =dynamic_cast<osg::Referenced*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::Referenced");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::Referenced model for osg::ArrayDispatchersis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::Referenced");
if(!cl){std::cerr<<"osg::Referenced QQModel for osg::ArrayDispatchersis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_ArrayDispatchers_pmoc.cpp"
#endif
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/ArrayDispatchers_pmoc.hpp>
#include <customCode/osg/ArrayDispatchers_pmoc.hpp>
#include <customCode/osg/Referenced_pmoc.hpp>
using namespace pmoc;

///DefaultConstructor////////////////
osg::QReflect_AttributeDispatch::QReflect_AttributeDispatch(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::AttributeDispatch*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_AttributeDispatch::~QReflect_AttributeDispatch( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_AttributeDispatch::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_AttributeDispatch::createInstance( ){
std::cerr<<"osg::AttributeDispatch is not instanciable"<<std::endl;return Instance();


}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_AttributeDispatch::MetaQReflect_AttributeDispatch():MetaQQuickClass( "osg::AttributeDispatch"){
_typeid=&typeid(osg::AttributeDispatch );           qRegisterMetaType<QMLAttributeDispatch>();
qmlRegisterType<QReflect_AttributeDispatch>("pmoc.osg",1,0,"QReflect_AttributeDispatch");
           qmlRegisterType<QMLAttributeDispatch>("pmoc.osg",1,0,"QMLAttributeDispatch");
};
const std::string osg::MetaQReflect_AttributeDispatch::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_AttributeDispatch::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_AttributeDispatch::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_AttributeDispatch::createQQModel(Instance*i){ //return new MetaQReflect_AttributeDispatch_QModel(i);}
QMLAttributeDispatch *ret =new QMLAttributeDispatch(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::Referenced *mother =dynamic_cast<osg::Referenced*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::Referenced");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::Referenced model for osg::AttributeDispatchis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::Referenced");
if(!cl){std::cerr<<"osg::Referenced QQModel for osg::AttributeDispatchis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_ArrayDispatchers_pmoc.cpp"
#endif



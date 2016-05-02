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
#include <customCode/osg/State_pmoc.hpp>
using namespace pmoc;
 bool  osg::QReflect_ArrayDispatchers:: active( unsigned int  p0)const{
//params checking
return _model->active(p0);

}
 bool  osg::QReflect_ArrayDispatchers:: getUseVertexAttribAlias()const{
//params checking
return _model->getUseVertexAttribAlias();

}
 void osg::QReflect_ArrayDispatchers::activate( unsigned int  p0 ,osg::QReflect_AttributeDispatch  *p1){
//params checking
if(! p1) {std::cerr<<"PMOC: osg::QReflect_ArrayDispatchers::activate : parameter n.1 is NULL\n"<<endl;return;}
 _model->activate(p0 ,p1->_model);

}
 void osg::QReflect_ArrayDispatchers::activateColorArray(osg::QReflect_Array  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_ArrayDispatchers::activateColorArray : parameter n.0 is NULL\n"<<endl;return;}
 _model->activateColorArray(p0->_model);

}
 void osg::QReflect_ArrayDispatchers::activateFogCoordArray(osg::QReflect_Array  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_ArrayDispatchers::activateFogCoordArray : parameter n.0 is NULL\n"<<endl;return;}
 _model->activateFogCoordArray(p0->_model);

}
 void osg::QReflect_ArrayDispatchers::activateNormalArray(osg::QReflect_Array  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_ArrayDispatchers::activateNormalArray : parameter n.0 is NULL\n"<<endl;return;}
 _model->activateNormalArray(p0->_model);

}
 void osg::QReflect_ArrayDispatchers::activateSecondaryColorArray(osg::QReflect_Array  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_ArrayDispatchers::activateSecondaryColorArray : parameter n.0 is NULL\n"<<endl;return;}
 _model->activateSecondaryColorArray(p0->_model);

}
 void osg::QReflect_ArrayDispatchers::activateTexCoordArray( unsigned int  p0 ,osg::QReflect_Array  *p1){
//params checking
if(! p1) {std::cerr<<"PMOC: osg::QReflect_ArrayDispatchers::activateTexCoordArray : parameter n.1 is NULL\n"<<endl;return;}
 _model->activateTexCoordArray(p0 ,p1->_model);

}
 void osg::QReflect_ArrayDispatchers::activateVertexArray(osg::QReflect_Array  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_ArrayDispatchers::activateVertexArray : parameter n.0 is NULL\n"<<endl;return;}
 _model->activateVertexArray(p0->_model);

}
 void osg::QReflect_ArrayDispatchers::activateVertexAttribArray( unsigned int  p0 ,osg::QReflect_Array  *p1){
//params checking
if(! p1) {std::cerr<<"PMOC: osg::QReflect_ArrayDispatchers::activateVertexAttribArray : parameter n.1 is NULL\n"<<endl;return;}
 _model->activateVertexAttribArray(p0 ,p1->_model);

}
 void osg::QReflect_ArrayDispatchers::dispatch( unsigned int  p0 , unsigned int  p1){
//params checking
 _model->dispatch(p0 ,p1);

}
 void osg::QReflect_ArrayDispatchers::reset(){
//params checking
 _model->reset();

}
 void osg::QReflect_ArrayDispatchers::setState(osg::QReflect_State  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_ArrayDispatchers::setState : parameter n.0 is NULL\n"<<endl;return;}
 _model->setState(p0->_model);

}
 void osg::QReflect_ArrayDispatchers::setUseVertexAttribAlias( bool  p0){
//params checking
 _model->setUseVertexAttribAlias(p0);
emit UseVertexAttribAliasChanged();

}
osg::QReflect_AttributeDispatch*osg::QReflect_ArrayDispatchers::colorDispatcher(osg::QReflect_Array  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_ArrayDispatchers::colorDispatcher : parameter n.0 is NULL\n"<<endl;;}
PMOCSAFEADDOBJECT(*_model->colorDispatcher(p0->_model),inst);
return inst.isValid()?((osg::QReflect_AttributeDispatch * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_AttributeDispatch*osg::QReflect_ArrayDispatchers::fogCoordDispatcher(osg::QReflect_Array  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_ArrayDispatchers::fogCoordDispatcher : parameter n.0 is NULL\n"<<endl;;}
PMOCSAFEADDOBJECT(*_model->fogCoordDispatcher(p0->_model),inst);
return inst.isValid()?((osg::QReflect_AttributeDispatch * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_AttributeDispatch*osg::QReflect_ArrayDispatchers::normalDispatcher(osg::QReflect_Array  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_ArrayDispatchers::normalDispatcher : parameter n.0 is NULL\n"<<endl;;}
PMOCSAFEADDOBJECT(*_model->normalDispatcher(p0->_model),inst);
return inst.isValid()?((osg::QReflect_AttributeDispatch * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_AttributeDispatch*osg::QReflect_ArrayDispatchers::secondaryColorDispatcher(osg::QReflect_Array  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_ArrayDispatchers::secondaryColorDispatcher : parameter n.0 is NULL\n"<<endl;;}
PMOCSAFEADDOBJECT(*_model->secondaryColorDispatcher(p0->_model),inst);
return inst.isValid()?((osg::QReflect_AttributeDispatch * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_AttributeDispatch*osg::QReflect_ArrayDispatchers::texCoordDispatcher( unsigned int  p0 ,osg::QReflect_Array  *p1){
//params checking
if(! p1) {std::cerr<<"PMOC: osg::QReflect_ArrayDispatchers::texCoordDispatcher : parameter n.1 is NULL\n"<<endl;;}
PMOCSAFEADDOBJECT(*_model->texCoordDispatcher(p0 ,p1->_model),inst);
return inst.isValid()?((osg::QReflect_AttributeDispatch * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_AttributeDispatch*osg::QReflect_ArrayDispatchers::vertexAttribDispatcher( unsigned int  p0 ,osg::QReflect_Array  *p1){
//params checking
if(! p1) {std::cerr<<"PMOC: osg::QReflect_ArrayDispatchers::vertexAttribDispatcher : parameter n.1 is NULL\n"<<endl;;}
PMOCSAFEADDOBJECT(*_model->vertexAttribDispatcher(p0 ,p1->_model),inst);
return inst.isValid()?((osg::QReflect_AttributeDispatch * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_AttributeDispatch*osg::QReflect_ArrayDispatchers::vertexDispatcher(osg::QReflect_Array  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_ArrayDispatchers::vertexDispatcher : parameter n.0 is NULL\n"<<endl;;}
PMOCSAFEADDOBJECT(*_model->vertexDispatcher(p0->_model),inst);
return inst.isValid()?((osg::QReflect_AttributeDispatch * )inst.model->createQQModel(&inst)):NULL;
}

///DefaultConstructor////////////////
osg::QReflect_ArrayDispatchers::QReflect_ArrayDispatchers(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
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
_typeid=&typeid(osg::ArrayDispatchers );
           qRegisterMetaType<osg::QMLArrayDispatchers>();
           qRegisterMetaType<osg::QMLArrayDispatchers*>("pmoc.osg.QMLArrayDispatchers");
qmlRegisterType<osg::QReflect_ArrayDispatchers>("pmoc.osg",1,0,"QReflect_ArrayDispatchers");
           qmlRegisterType<osg::QMLArrayDispatchers>("pmoc.osg",1,0,"QMLArrayDispatchers");
};
const std::string osg::MetaQReflect_ArrayDispatchers::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_ArrayDispatchers::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_ArrayDispatchers::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_ArrayDispatchers::createQQModel(const Instance*i){ //return new MetaQReflect_ArrayDispatchers_QModel(i);}
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
osg::QReflect_AttributeDispatch::QReflect_AttributeDispatch(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
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
_typeid=&typeid(osg::AttributeDispatch );
           qRegisterMetaType<osg::QMLAttributeDispatch>();
           qRegisterMetaType<osg::QMLAttributeDispatch*>("pmoc.osg.QMLAttributeDispatch");
qmlRegisterType<osg::QReflect_AttributeDispatch>("pmoc.osg",1,0,"QReflect_AttributeDispatch");
           qmlRegisterType<osg::QMLAttributeDispatch>("pmoc.osg",1,0,"QMLAttributeDispatch");
};
const std::string osg::MetaQReflect_AttributeDispatch::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_AttributeDispatch::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_AttributeDispatch::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_AttributeDispatch::createQQModel(const Instance*i){ //return new MetaQReflect_AttributeDispatch_QModel(i);}
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





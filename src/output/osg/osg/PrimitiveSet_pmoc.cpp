#include <osg/PrimitiveSet>
//includes
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/PrimitiveSet_pmoc.hpp>
#include <customCode/osg/PrimitiveSet_pmoc.hpp>
#include <customCode/osg/PrimitiveSet_pmoc.hpp>
#include <customCode/osg/CopyOp_pmoc.hpp>
#include <customCode/osg/Object_pmoc.hpp>
#include <customCode/osg/PrimitiveSet_pmoc.hpp>
using namespace pmoc;
 GLint  osg::QReflect_DrawArrayLengths::getFirst()const{
return _model->getFirst();

}
 bool  osg::QReflect_DrawArrayLengths::isSameKindAs(osg::QReflect_Object *p0)const{
return _model->isSameKindAs(p0->_model);

}
 unsigned int  osg::QReflect_DrawArrayLengths::getNumIndices()const{
return _model->getNumIndices();

}
 unsigned int  osg::QReflect_DrawArrayLengths::getNumPrimitives()const{
return _model->getNumPrimitives();

}
 unsigned int  osg::QReflect_DrawArrayLengths::index( unsigned int p0)const{
return _model->index(p0);

}
 void osg::QReflect_DrawArrayLengths::accept(osg::QReflect_PrimitiveFunctor *p0)const{
 _model->accept(*p0->_model);

}
 void osg::QReflect_DrawArrayLengths::accept(osg::QReflect_PrimitiveIndexFunctor *p0)const{
 _model->accept(*p0->_model);

}
 void osg::QReflect_DrawArrayLengths::offsetIndices( int p0){
 _model->offsetIndices(p0);

}
 void osg::QReflect_DrawArrayLengths::setFirst( GLint p0){
 _model->setFirst(p0);

}
const  char*  osg::QReflect_DrawArrayLengths::className()const{
return _model->className();

}
const  char*  osg::QReflect_DrawArrayLengths::libraryName()const{
return _model->libraryName();

}
osg::QReflect_Object*osg::QReflect_DrawArrayLengths::clone(osg::QReflect_CopyOp *p0)const{
PMOCSAFEADDOBJECT(*_model->clone(*p0->_model),inst);
return inst.isValid()?((osg::QReflect_Object * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Object*osg::QReflect_DrawArrayLengths::cloneType()const{
PMOCSAFEADDOBJECT(*_model->cloneType(),inst);
return inst.isValid()?((osg::QReflect_Object * )inst.model->createQQModel(&inst)):NULL;
}

///DefaultConstructor////////////////
osg::QReflect_DrawArrayLengths::QReflect_DrawArrayLengths(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::DrawArrayLengths*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_DrawArrayLengths::~QReflect_DrawArrayLengths( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_DrawArrayLengths::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_DrawArrayLengths::createInstance( ){
osg::ref_ptr<osg::DrawArrayLengths> osg_DrawArrayLengths_ptr	;
osg_DrawArrayLengths_ptr = new osg::DrawArrayLengths ()	;
Instance o(PMOCGETMETACLASS("osg::DrawArrayLengths"),(void*)osg_DrawArrayLengths_ptr.get()		,true);
_managedinstances.insert(osg_DrawArrayLengths_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_DrawArrayLengths::MetaQReflect_DrawArrayLengths():MetaQQuickClass( "osg::DrawArrayLengths"){
_typeid=&typeid(osg::DrawArrayLengths );           qRegisterMetaType<QMLDrawArrayLengths>();
qmlRegisterType<QReflect_DrawArrayLengths>("pmoc.osg",1,0,"QReflect_DrawArrayLengths");
           qmlRegisterType<QMLDrawArrayLengths>("pmoc.osg",1,0,"QMLDrawArrayLengths");
};
const std::string osg::MetaQReflect_DrawArrayLengths::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_DrawArrayLengths::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_DrawArrayLengths::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_DrawArrayLengths::createQQModel(Instance*i){ //return new MetaQReflect_DrawArrayLengths_QModel(i);}
QMLDrawArrayLengths *ret =new QMLDrawArrayLengths(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::PrimitiveSet *mother =dynamic_cast<osg::PrimitiveSet*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::PrimitiveSet");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::PrimitiveSet model for osg::DrawArrayLengthsis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::PrimitiveSet");
if(!cl){std::cerr<<"osg::PrimitiveSet QQModel for osg::DrawArrayLengthsis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_PrimitiveSet_pmoc.cpp"
#endif
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/PrimitiveSet_pmoc.hpp>
#include <customCode/osg/PrimitiveSet_pmoc.hpp>
#include <customCode/osg/PrimitiveSet_pmoc.hpp>
#include <customCode/osg/CopyOp_pmoc.hpp>
#include <customCode/osg/Object_pmoc.hpp>
#include <customCode/osg/PrimitiveSet_pmoc.hpp>
using namespace pmoc;
 GLint  osg::QReflect_DrawArrays::getFirst()const{
return _model->getFirst();

}
 GLsizei  osg::QReflect_DrawArrays::getCount()const{
return _model->getCount();

}
 bool  osg::QReflect_DrawArrays::isSameKindAs(osg::QReflect_Object *p0)const{
return _model->isSameKindAs(p0->_model);

}
 unsigned int  osg::QReflect_DrawArrays::getNumIndices()const{
return _model->getNumIndices();

}
 unsigned int  osg::QReflect_DrawArrays::index( unsigned int p0)const{
return _model->index(p0);

}
 void osg::QReflect_DrawArrays::accept(osg::QReflect_PrimitiveFunctor *p0)const{
 _model->accept(*p0->_model);

}
 void osg::QReflect_DrawArrays::accept(osg::QReflect_PrimitiveIndexFunctor *p0)const{
 _model->accept(*p0->_model);

}
 void osg::QReflect_DrawArrays::offsetIndices( int p0){
 _model->offsetIndices(p0);

}
 void osg::QReflect_DrawArrays::set( GLenum p0 , GLint p1 , GLsizei p2){
 _model->set(p0 ,p1 ,p2);

}
 void osg::QReflect_DrawArrays::setCount( GLsizei p0){
 _model->setCount(p0);

}
 void osg::QReflect_DrawArrays::setFirst( GLint p0){
 _model->setFirst(p0);

}
const  char*  osg::QReflect_DrawArrays::className()const{
return _model->className();

}
const  char*  osg::QReflect_DrawArrays::libraryName()const{
return _model->libraryName();

}
osg::QReflect_Object*osg::QReflect_DrawArrays::clone(osg::QReflect_CopyOp *p0)const{
PMOCSAFEADDOBJECT(*_model->clone(*p0->_model),inst);
return inst.isValid()?((osg::QReflect_Object * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Object*osg::QReflect_DrawArrays::cloneType()const{
PMOCSAFEADDOBJECT(*_model->cloneType(),inst);
return inst.isValid()?((osg::QReflect_Object * )inst.model->createQQModel(&inst)):NULL;
}

///DefaultConstructor////////////////
osg::QReflect_DrawArrays::QReflect_DrawArrays(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::DrawArrays*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_DrawArrays::~QReflect_DrawArrays( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_DrawArrays::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_DrawArrays::createInstance( ){
osg::ref_ptr<osg::DrawArrays> osg_DrawArrays_ptr	;
osg_DrawArrays_ptr = new osg::DrawArrays ()	;
Instance o(PMOCGETMETACLASS("osg::DrawArrays"),(void*)osg_DrawArrays_ptr.get()		,true);
_managedinstances.insert(osg_DrawArrays_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_DrawArrays::MetaQReflect_DrawArrays():MetaQQuickClass( "osg::DrawArrays"){
_typeid=&typeid(osg::DrawArrays );           qRegisterMetaType<QMLDrawArrays>();
qmlRegisterType<QReflect_DrawArrays>("pmoc.osg",1,0,"QReflect_DrawArrays");
           qmlRegisterType<QMLDrawArrays>("pmoc.osg",1,0,"QMLDrawArrays");
};
const std::string osg::MetaQReflect_DrawArrays::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_DrawArrays::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_DrawArrays::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_DrawArrays::createQQModel(Instance*i){ //return new MetaQReflect_DrawArrays_QModel(i);}
QMLDrawArrays *ret =new QMLDrawArrays(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::PrimitiveSet *mother =dynamic_cast<osg::PrimitiveSet*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::PrimitiveSet");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::PrimitiveSet model for osg::DrawArraysis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::PrimitiveSet");
if(!cl){std::cerr<<"osg::PrimitiveSet QQModel for osg::DrawArraysis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_PrimitiveSet_pmoc.cpp"
#endif
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/PrimitiveSet_pmoc.hpp>
#include <customCode/osg/PrimitiveSet_pmoc.hpp>
#include <customCode/osg/PrimitiveSet_pmoc.hpp>
#include <customCode/osg/BufferObject_pmoc.hpp>
#include <osg/BufferObject>
#include <osg/BufferObject_pmoc.hpp>
using namespace pmoc;
osg::QReflect_DrawElements*osg::QReflect_DrawElements::getDrawElements()const{
PMOCSAFEADDOBJECT(*_model->getDrawElements(),inst);
return inst.isValid()?((osg::QReflect_DrawElements * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_DrawElements*osg::QReflect_DrawElements::getDrawElements(){
PMOCSAFEADDOBJECT(*_model->getDrawElements(),inst);
return inst.isValid()?((osg::QReflect_DrawElements * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_ElementBufferObject * osg::QReflect_DrawElements::getElementBufferObject()const{
PMOCSAFEADDOBJECT(*_model->getElementBufferObject(),inst);
return inst.isValid()?((osg::QReflect_ElementBufferObject * )inst.model->createQQModel(&inst)):NULL;
}
void osg::QReflect_DrawElements::pmoc_reverse_setElementBufferObject( osg::QReflect_ElementBufferObject *par){_model->setElementBufferObject(NULL);
emit ElementBufferObjectChanged(NULL);
}
void osg::QReflect_DrawElements::setElementBufferObject( osg::QReflect_ElementBufferObject *par){_model->setElementBufferObject(par->_model);
emit ElementBufferObjectChanged(par);
}

///DefaultConstructor////////////////
osg::QReflect_DrawElements::QReflect_DrawElements(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::DrawElements*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_DrawElements::~QReflect_DrawElements( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_DrawElements::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_DrawElements::createInstance( ){
std::cerr<<"osg::DrawElements is not instanciable"<<std::endl;return Instance();


}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_DrawElements::MetaQReflect_DrawElements():MetaQQuickClass( "osg::DrawElements"){
_typeid=&typeid(osg::DrawElements );           qRegisterMetaType<QMLDrawElements>();
qmlRegisterType<QReflect_DrawElements>("pmoc.osg",1,0,"QReflect_DrawElements");
           qmlRegisterType<QMLDrawElements>("pmoc.osg",1,0,"QMLDrawElements");
       PMOCACTION("getElementBufferObject","setElementBufferObject","unsetElementBufferObject");
};
const std::string osg::MetaQReflect_DrawElements::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_DrawElements::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_DrawElements::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_DrawElements::createQQModel(Instance*i){ //return new MetaQReflect_DrawElements_QModel(i);}
QMLDrawElements *ret =new QMLDrawElements(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::PrimitiveSet *mother =dynamic_cast<osg::PrimitiveSet*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::PrimitiveSet");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::PrimitiveSet model for osg::DrawElementsis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::PrimitiveSet");
if(!cl){std::cerr<<"osg::PrimitiveSet QQModel for osg::DrawElementsis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_PrimitiveSet_pmoc.cpp"
#endif
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/PrimitiveSet_pmoc.hpp>
#include <customCode/osg/PrimitiveSet_pmoc.hpp>
#include <customCode/osg/PrimitiveSet_pmoc.hpp>
#include <customCode/osg/CopyOp_pmoc.hpp>
#include <customCode/osg/Object_pmoc.hpp>
#include <customCode/osg/PrimitiveSet_pmoc.hpp>
using namespace pmoc;
 GLenum  osg::QReflect_DrawElementsUByte::getDataType(){
return _model->getDataType();

}
 bool  osg::QReflect_DrawElementsUByte::isSameKindAs(osg::QReflect_Object *p0)const{
return _model->isSameKindAs(p0->_model);

}
 bool  osg::QReflect_DrawElementsUByte::supportsBufferObject()const{
return _model->supportsBufferObject();

}
 unsigned int  osg::QReflect_DrawElementsUByte::getElement( unsigned int p0){
return _model->getElement(p0);

}
 unsigned int  osg::QReflect_DrawElementsUByte::getNumIndices()const{
return _model->getNumIndices();

}
 unsigned int  osg::QReflect_DrawElementsUByte::getTotalDataSize()const{
return _model->getTotalDataSize();

}
 unsigned int  osg::QReflect_DrawElementsUByte::index( unsigned int p0)const{
return _model->index(p0);

}
 void osg::QReflect_DrawElementsUByte::accept(osg::QReflect_PrimitiveFunctor *p0)const{
 _model->accept(*p0->_model);

}
 void osg::QReflect_DrawElementsUByte::accept(osg::QReflect_PrimitiveIndexFunctor *p0)const{
 _model->accept(*p0->_model);

}
 void osg::QReflect_DrawElementsUByte::addElement( unsigned int p0){
 _model->addElement(p0);

}
 void osg::QReflect_DrawElementsUByte::offsetIndices( int p0){
 _model->offsetIndices(p0);

}
 void osg::QReflect_DrawElementsUByte::reserveElements( unsigned int p0){
 _model->reserveElements(p0);

}
 void osg::QReflect_DrawElementsUByte::resizeElements( unsigned int p0){
 _model->resizeElements(p0);

}
 void osg::QReflect_DrawElementsUByte::setElement( unsigned int p0 , unsigned int p1){
 _model->setElement(p0 ,p1);

}
const  GLvoid*  osg::QReflect_DrawElementsUByte::getDataPointer()const{
return _model->getDataPointer();

}
const  char*  osg::QReflect_DrawElementsUByte::className()const{
return _model->className();

}
const  char*  osg::QReflect_DrawElementsUByte::libraryName()const{
return _model->libraryName();

}
osg::QReflect_Object*osg::QReflect_DrawElementsUByte::clone(osg::QReflect_CopyOp *p0)const{
PMOCSAFEADDOBJECT(*_model->clone(*p0->_model),inst);
return inst.isValid()?((osg::QReflect_Object * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Object*osg::QReflect_DrawElementsUByte::cloneType()const{
PMOCSAFEADDOBJECT(*_model->cloneType(),inst);
return inst.isValid()?((osg::QReflect_Object * )inst.model->createQQModel(&inst)):NULL;
}

///DefaultConstructor////////////////
osg::QReflect_DrawElementsUByte::QReflect_DrawElementsUByte(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::DrawElementsUByte*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_DrawElementsUByte::~QReflect_DrawElementsUByte( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_DrawElementsUByte::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_DrawElementsUByte::createInstance( ){
osg::ref_ptr<osg::DrawElementsUByte> osg_DrawElementsUByte_ptr	;
osg_DrawElementsUByte_ptr = new osg::DrawElementsUByte ()	;
Instance o(PMOCGETMETACLASS("osg::DrawElementsUByte"),(void*)osg_DrawElementsUByte_ptr.get()		,true);
_managedinstances.insert(osg_DrawElementsUByte_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_DrawElementsUByte::MetaQReflect_DrawElementsUByte():MetaQQuickClass( "osg::DrawElementsUByte"){
_typeid=&typeid(osg::DrawElementsUByte );           qRegisterMetaType<QMLDrawElementsUByte>();
qmlRegisterType<QReflect_DrawElementsUByte>("pmoc.osg",1,0,"QReflect_DrawElementsUByte");
           qmlRegisterType<QMLDrawElementsUByte>("pmoc.osg",1,0,"QMLDrawElementsUByte");
};
const std::string osg::MetaQReflect_DrawElementsUByte::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_DrawElementsUByte::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_DrawElementsUByte::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_DrawElementsUByte::createQQModel(Instance*i){ //return new MetaQReflect_DrawElementsUByte_QModel(i);}
QMLDrawElementsUByte *ret =new QMLDrawElementsUByte(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::DrawElements *mother =dynamic_cast<osg::DrawElements*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::DrawElements");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::DrawElements model for osg::DrawElementsUByteis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::DrawElements");
if(!cl){std::cerr<<"osg::DrawElements QQModel for osg::DrawElementsUByteis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_PrimitiveSet_pmoc.cpp"
#endif
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/PrimitiveSet_pmoc.hpp>
#include <customCode/osg/PrimitiveSet_pmoc.hpp>
#include <customCode/osg/PrimitiveSet_pmoc.hpp>
#include <customCode/osg/CopyOp_pmoc.hpp>
#include <customCode/osg/Object_pmoc.hpp>
#include <customCode/osg/PrimitiveSet_pmoc.hpp>
using namespace pmoc;
 GLenum  osg::QReflect_DrawElementsUInt::getDataType(){
return _model->getDataType();

}
 bool  osg::QReflect_DrawElementsUInt::isSameKindAs(osg::QReflect_Object *p0)const{
return _model->isSameKindAs(p0->_model);

}
 bool  osg::QReflect_DrawElementsUInt::supportsBufferObject()const{
return _model->supportsBufferObject();

}
 unsigned int  osg::QReflect_DrawElementsUInt::getElement( unsigned int p0){
return _model->getElement(p0);

}
 unsigned int  osg::QReflect_DrawElementsUInt::getNumIndices()const{
return _model->getNumIndices();

}
 unsigned int  osg::QReflect_DrawElementsUInt::getTotalDataSize()const{
return _model->getTotalDataSize();

}
 unsigned int  osg::QReflect_DrawElementsUInt::index( unsigned int p0)const{
return _model->index(p0);

}
 void osg::QReflect_DrawElementsUInt::accept(osg::QReflect_PrimitiveFunctor *p0)const{
 _model->accept(*p0->_model);

}
 void osg::QReflect_DrawElementsUInt::accept(osg::QReflect_PrimitiveIndexFunctor *p0)const{
 _model->accept(*p0->_model);

}
 void osg::QReflect_DrawElementsUInt::addElement( unsigned int p0){
 _model->addElement(p0);

}
 void osg::QReflect_DrawElementsUInt::offsetIndices( int p0){
 _model->offsetIndices(p0);

}
 void osg::QReflect_DrawElementsUInt::reserveElements( unsigned int p0){
 _model->reserveElements(p0);

}
 void osg::QReflect_DrawElementsUInt::resizeElements( unsigned int p0){
 _model->resizeElements(p0);

}
 void osg::QReflect_DrawElementsUInt::setElement( unsigned int p0 , unsigned int p1){
 _model->setElement(p0 ,p1);

}
const  GLvoid*  osg::QReflect_DrawElementsUInt::getDataPointer()const{
return _model->getDataPointer();

}
const  char*  osg::QReflect_DrawElementsUInt::className()const{
return _model->className();

}
const  char*  osg::QReflect_DrawElementsUInt::libraryName()const{
return _model->libraryName();

}
osg::QReflect_Object*osg::QReflect_DrawElementsUInt::clone(osg::QReflect_CopyOp *p0)const{
PMOCSAFEADDOBJECT(*_model->clone(*p0->_model),inst);
return inst.isValid()?((osg::QReflect_Object * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Object*osg::QReflect_DrawElementsUInt::cloneType()const{
PMOCSAFEADDOBJECT(*_model->cloneType(),inst);
return inst.isValid()?((osg::QReflect_Object * )inst.model->createQQModel(&inst)):NULL;
}

///DefaultConstructor////////////////
osg::QReflect_DrawElementsUInt::QReflect_DrawElementsUInt(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::DrawElementsUInt*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_DrawElementsUInt::~QReflect_DrawElementsUInt( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_DrawElementsUInt::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_DrawElementsUInt::createInstance( ){
osg::ref_ptr<osg::DrawElementsUInt> osg_DrawElementsUInt_ptr	;
osg_DrawElementsUInt_ptr = new osg::DrawElementsUInt ()	;
Instance o(PMOCGETMETACLASS("osg::DrawElementsUInt"),(void*)osg_DrawElementsUInt_ptr.get()		,true);
_managedinstances.insert(osg_DrawElementsUInt_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_DrawElementsUInt::MetaQReflect_DrawElementsUInt():MetaQQuickClass( "osg::DrawElementsUInt"){
_typeid=&typeid(osg::DrawElementsUInt );           qRegisterMetaType<QMLDrawElementsUInt>();
qmlRegisterType<QReflect_DrawElementsUInt>("pmoc.osg",1,0,"QReflect_DrawElementsUInt");
           qmlRegisterType<QMLDrawElementsUInt>("pmoc.osg",1,0,"QMLDrawElementsUInt");
};
const std::string osg::MetaQReflect_DrawElementsUInt::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_DrawElementsUInt::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_DrawElementsUInt::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_DrawElementsUInt::createQQModel(Instance*i){ //return new MetaQReflect_DrawElementsUInt_QModel(i);}
QMLDrawElementsUInt *ret =new QMLDrawElementsUInt(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::DrawElements *mother =dynamic_cast<osg::DrawElements*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::DrawElements");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::DrawElements model for osg::DrawElementsUIntis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::DrawElements");
if(!cl){std::cerr<<"osg::DrawElements QQModel for osg::DrawElementsUIntis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_PrimitiveSet_pmoc.cpp"
#endif
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/PrimitiveSet_pmoc.hpp>
#include <customCode/osg/PrimitiveSet_pmoc.hpp>
#include <customCode/osg/PrimitiveSet_pmoc.hpp>
#include <customCode/osg/CopyOp_pmoc.hpp>
#include <customCode/osg/Object_pmoc.hpp>
#include <customCode/osg/PrimitiveSet_pmoc.hpp>
using namespace pmoc;
 GLenum  osg::QReflect_DrawElementsUShort::getDataType(){
return _model->getDataType();

}
 bool  osg::QReflect_DrawElementsUShort::isSameKindAs(osg::QReflect_Object *p0)const{
return _model->isSameKindAs(p0->_model);

}
 bool  osg::QReflect_DrawElementsUShort::supportsBufferObject()const{
return _model->supportsBufferObject();

}
 unsigned int  osg::QReflect_DrawElementsUShort::getElement( unsigned int p0){
return _model->getElement(p0);

}
 unsigned int  osg::QReflect_DrawElementsUShort::getNumIndices()const{
return _model->getNumIndices();

}
 unsigned int  osg::QReflect_DrawElementsUShort::getTotalDataSize()const{
return _model->getTotalDataSize();

}
 unsigned int  osg::QReflect_DrawElementsUShort::index( unsigned int p0)const{
return _model->index(p0);

}
 void osg::QReflect_DrawElementsUShort::accept(osg::QReflect_PrimitiveFunctor *p0)const{
 _model->accept(*p0->_model);

}
 void osg::QReflect_DrawElementsUShort::accept(osg::QReflect_PrimitiveIndexFunctor *p0)const{
 _model->accept(*p0->_model);

}
 void osg::QReflect_DrawElementsUShort::addElement( unsigned int p0){
 _model->addElement(p0);

}
 void osg::QReflect_DrawElementsUShort::offsetIndices( int p0){
 _model->offsetIndices(p0);

}
 void osg::QReflect_DrawElementsUShort::reserveElements( unsigned int p0){
 _model->reserveElements(p0);

}
 void osg::QReflect_DrawElementsUShort::resizeElements( unsigned int p0){
 _model->resizeElements(p0);

}
 void osg::QReflect_DrawElementsUShort::setElement( unsigned int p0 , unsigned int p1){
 _model->setElement(p0 ,p1);

}
const  GLvoid*  osg::QReflect_DrawElementsUShort::getDataPointer()const{
return _model->getDataPointer();

}
const  char*  osg::QReflect_DrawElementsUShort::className()const{
return _model->className();

}
const  char*  osg::QReflect_DrawElementsUShort::libraryName()const{
return _model->libraryName();

}
osg::QReflect_Object*osg::QReflect_DrawElementsUShort::clone(osg::QReflect_CopyOp *p0)const{
PMOCSAFEADDOBJECT(*_model->clone(*p0->_model),inst);
return inst.isValid()?((osg::QReflect_Object * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Object*osg::QReflect_DrawElementsUShort::cloneType()const{
PMOCSAFEADDOBJECT(*_model->cloneType(),inst);
return inst.isValid()?((osg::QReflect_Object * )inst.model->createQQModel(&inst)):NULL;
}

///DefaultConstructor////////////////
osg::QReflect_DrawElementsUShort::QReflect_DrawElementsUShort(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::DrawElementsUShort*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_DrawElementsUShort::~QReflect_DrawElementsUShort( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_DrawElementsUShort::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_DrawElementsUShort::createInstance( ){
osg::ref_ptr<osg::DrawElementsUShort> osg_DrawElementsUShort_ptr	;
osg_DrawElementsUShort_ptr = new osg::DrawElementsUShort ()	;
Instance o(PMOCGETMETACLASS("osg::DrawElementsUShort"),(void*)osg_DrawElementsUShort_ptr.get()		,true);
_managedinstances.insert(osg_DrawElementsUShort_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_DrawElementsUShort::MetaQReflect_DrawElementsUShort():MetaQQuickClass( "osg::DrawElementsUShort"){
_typeid=&typeid(osg::DrawElementsUShort );           qRegisterMetaType<QMLDrawElementsUShort>();
qmlRegisterType<QReflect_DrawElementsUShort>("pmoc.osg",1,0,"QReflect_DrawElementsUShort");
           qmlRegisterType<QMLDrawElementsUShort>("pmoc.osg",1,0,"QMLDrawElementsUShort");
};
const std::string osg::MetaQReflect_DrawElementsUShort::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_DrawElementsUShort::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_DrawElementsUShort::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_DrawElementsUShort::createQQModel(Instance*i){ //return new MetaQReflect_DrawElementsUShort_QModel(i);}
QMLDrawElementsUShort *ret =new QMLDrawElementsUShort(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::DrawElements *mother =dynamic_cast<osg::DrawElements*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::DrawElements");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::DrawElements model for osg::DrawElementsUShortis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::DrawElements");
if(!cl){std::cerr<<"osg::DrawElements QQModel for osg::DrawElementsUShortis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_PrimitiveSet_pmoc.cpp"
#endif
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/PrimitiveSet_pmoc.hpp>
#include <customCode/osg/PrimitiveSet_pmoc.hpp>
using namespace pmoc;
 void osg::QReflect_PrimitiveFunctor::useVertexCacheAsVertexArray(){
 _model->useVertexCacheAsVertexArray();

}

///DefaultConstructor////////////////
osg::QReflect_PrimitiveFunctor::QReflect_PrimitiveFunctor(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::PrimitiveFunctor*>(i->ptr);
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_PrimitiveFunctor::~QReflect_PrimitiveFunctor( ){
 }
///update this according _model new state
void osg::QReflect_PrimitiveFunctor::updateModel(){
}
Instance osg::MetaQReflect_PrimitiveFunctor::createInstance( ){
std::cerr<<"osg::PrimitiveFunctor is not instanciable"<<std::endl;return Instance();


}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_PrimitiveFunctor::MetaQReflect_PrimitiveFunctor():MetaQQuickClass( "osg::PrimitiveFunctor"){
_typeid=&typeid(osg::PrimitiveFunctor );           qRegisterMetaType<QMLPrimitiveFunctor>();
qmlRegisterType<QReflect_PrimitiveFunctor>("pmoc.osg",1,0,"QReflect_PrimitiveFunctor");
           qmlRegisterType<QMLPrimitiveFunctor>("pmoc.osg",1,0,"QMLPrimitiveFunctor");
};
const std::string osg::MetaQReflect_PrimitiveFunctor::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_PrimitiveFunctor::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_PrimitiveFunctor::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_PrimitiveFunctor::createQQModel(Instance*i){ //return new MetaQReflect_PrimitiveFunctor_QModel(i);}
QMLPrimitiveFunctor *ret =new QMLPrimitiveFunctor(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_PrimitiveSet_pmoc.cpp"
#endif
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/PrimitiveSet_pmoc.hpp>
#include <customCode/osg/PrimitiveSet_pmoc.hpp>
using namespace pmoc;
 void osg::QReflect_PrimitiveIndexFunctor::useVertexCacheAsVertexArray(){
 _model->useVertexCacheAsVertexArray();

}

///DefaultConstructor////////////////
osg::QReflect_PrimitiveIndexFunctor::QReflect_PrimitiveIndexFunctor(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::PrimitiveIndexFunctor*>(i->ptr);
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_PrimitiveIndexFunctor::~QReflect_PrimitiveIndexFunctor( ){
 }
///update this according _model new state
void osg::QReflect_PrimitiveIndexFunctor::updateModel(){
}
Instance osg::MetaQReflect_PrimitiveIndexFunctor::createInstance( ){
std::cerr<<"osg::PrimitiveIndexFunctor is not instanciable"<<std::endl;return Instance();


}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_PrimitiveIndexFunctor::MetaQReflect_PrimitiveIndexFunctor():MetaQQuickClass( "osg::PrimitiveIndexFunctor"){
_typeid=&typeid(osg::PrimitiveIndexFunctor );           qRegisterMetaType<QMLPrimitiveIndexFunctor>();
qmlRegisterType<QReflect_PrimitiveIndexFunctor>("pmoc.osg",1,0,"QReflect_PrimitiveIndexFunctor");
           qmlRegisterType<QMLPrimitiveIndexFunctor>("pmoc.osg",1,0,"QMLPrimitiveIndexFunctor");
};
const std::string osg::MetaQReflect_PrimitiveIndexFunctor::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_PrimitiveIndexFunctor::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_PrimitiveIndexFunctor::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_PrimitiveIndexFunctor::createQQModel(Instance*i){ //return new MetaQReflect_PrimitiveIndexFunctor_QModel(i);}
QMLPrimitiveIndexFunctor *ret =new QMLPrimitiveIndexFunctor(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_PrimitiveSet_pmoc.cpp"
#endif
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/PrimitiveSet_pmoc.hpp>
#include <customCode/osg/PrimitiveSet_pmoc.hpp>
#include <customCode/osg/BufferObject_pmoc.hpp>
#include <customCode/osg/Object_pmoc.hpp>
using namespace pmoc;
 GLenum  osg::QReflect_PrimitiveSet::getMode()const{
return _model->getMode();

}
 bool  osg::QReflect_PrimitiveSet::isSameKindAs(osg::QReflect_Object *p0)const{
return _model->isSameKindAs(p0->_model);

}
 bool  osg::QReflect_PrimitiveSet::supportsBufferObject()const{
return _model->supportsBufferObject();

}
 unsigned int  osg::QReflect_PrimitiveSet::getNumPrimitives()const{
return _model->getNumPrimitives();

}
 unsigned int  osg::QReflect_PrimitiveSet::getTotalDataSize()const{
return _model->getTotalDataSize();

}
 void osg::QReflect_PrimitiveSet::computeRange()const{
 _model->computeRange();

}
 void osg::QReflect_PrimitiveSet::setMode( GLenum p0){
 _model->setMode(p0);

}
const  GLvoid*  osg::QReflect_PrimitiveSet::getDataPointer()const{
return _model->getDataPointer();

}
const  char*  osg::QReflect_PrimitiveSet::className()const{
return _model->className();

}
const  char*  osg::QReflect_PrimitiveSet::libraryName()const{
return _model->libraryName();

}
const int osg::QReflect_PrimitiveSet::getNumInstances()const{return _model->getNumInstances();}
osg::QReflect_DrawElements*osg::QReflect_PrimitiveSet::getDrawElements()const{
PMOCSAFEADDOBJECT(*_model->getDrawElements(),inst);
return inst.isValid()?((osg::QReflect_DrawElements * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_DrawElements*osg::QReflect_PrimitiveSet::getDrawElements(){
PMOCSAFEADDOBJECT(*_model->getDrawElements(),inst);
return inst.isValid()?((osg::QReflect_DrawElements * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_PrimitiveSet*osg::QReflect_PrimitiveSet::asPrimitiveSet()const{
PMOCSAFEADDOBJECT(*_model->asPrimitiveSet(),inst);
return inst.isValid()?((osg::QReflect_PrimitiveSet * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_PrimitiveSet*osg::QReflect_PrimitiveSet::asPrimitiveSet(){
PMOCSAFEADDOBJECT(*_model->asPrimitiveSet(),inst);
return inst.isValid()?((osg::QReflect_PrimitiveSet * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_PrimitiveSet::Type  osg::QReflect_PrimitiveSet::getType()const{
osg::QReflect_PrimitiveSet::Type ret=static_cast<osg::QReflect_PrimitiveSet::Type>( _model->getType());return  ret;

}
void  osg::QReflect_PrimitiveSet::setNumInstances(const int &par){_model->setNumInstances(par);emit NumInstancesChanged(par);}

///DefaultConstructor////////////////
osg::QReflect_PrimitiveSet::QReflect_PrimitiveSet(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::PrimitiveSet*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_PrimitiveSet::~QReflect_PrimitiveSet( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_PrimitiveSet::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_PrimitiveSet::createInstance( ){
std::cerr<<"osg::PrimitiveSet is not instanciable"<<std::endl;return Instance();


}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_PrimitiveSet::MetaQReflect_PrimitiveSet():MetaQQuickClass( "osg::PrimitiveSet"){
_typeid=&typeid(osg::PrimitiveSet );           qRegisterMetaType<QMLPrimitiveSet>();
qmlRegisterType<QReflect_PrimitiveSet>("pmoc.osg",1,0,"QReflect_PrimitiveSet");
           qmlRegisterType<QMLPrimitiveSet>("pmoc.osg",1,0,"QMLPrimitiveSet");
};
const std::string osg::MetaQReflect_PrimitiveSet::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_PrimitiveSet::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_PrimitiveSet::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_PrimitiveSet::createQQModel(Instance*i){ //return new MetaQReflect_PrimitiveSet_QModel(i);}
QMLPrimitiveSet *ret =new QMLPrimitiveSet(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::BufferData *mother =dynamic_cast<osg::BufferData*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::BufferData");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::BufferData model for osg::PrimitiveSetis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::BufferData");
if(!cl){std::cerr<<"osg::BufferData QQModel for osg::PrimitiveSetis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_PrimitiveSet_pmoc.cpp"
#endif



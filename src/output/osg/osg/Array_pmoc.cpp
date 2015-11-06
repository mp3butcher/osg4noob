#include <osg/Array>
//includes
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/Array_pmoc.hpp>
#include <customCode/osg/Array_pmoc.hpp>
#include <customCode/osg/BufferObject_pmoc.hpp>
#include <customCode/osg/BufferObject_pmoc.hpp>
#include <customCode/osg/Object_pmoc.hpp>
#include <osg/BufferObject>
#include <osg/BufferObject_pmoc.hpp>
using namespace pmoc;
 GLenum  osg::QReflect_Array::getDataType()const{
return _model->getDataType();

}
 GLint  osg::QReflect_Array::getDataSize()const{
return _model->getDataSize();

}
 bool  osg::QReflect_Array::isSameKindAs(osg::QReflect_Object *p0)const{
return _model->isSameKindAs(p0->_model);

}
 void osg::QReflect_Array::setBinding(osg::QReflect_Array::Binding p0){
 _model->setBinding(static_cast<osg::Array::Binding>(p0));

}
 void osg::QReflect_Array::trim(){
 _model->trim();

}
const  char*  osg::QReflect_Array::className()const{
return _model->className();

}
const  char*  osg::QReflect_Array::libraryName()const{
return _model->libraryName();

}
const bool osg::QReflect_Array::getNormalize()const{return _model->getNormalize();}
const bool osg::QReflect_Array::getPreserveDataType()const{return _model->getPreserveDataType();}
osg::QReflect_Array*osg::QReflect_Array::asArray()const{
PMOCSAFEADDOBJECT(*_model->asArray(),inst);
return inst.isValid()?((osg::QReflect_Array * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Array*osg::QReflect_Array::asArray(){
PMOCSAFEADDOBJECT(*_model->asArray(),inst);
return inst.isValid()?((osg::QReflect_Array * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Array::Binding  osg::QReflect_Array::getBinding()const{
osg::QReflect_Array::Binding ret=static_cast<osg::QReflect_Array::Binding>( _model->getBinding());return  ret;

}
osg::QReflect_Array::Type  osg::QReflect_Array::getType()const{
osg::QReflect_Array::Type ret=static_cast<osg::QReflect_Array::Type>( _model->getType());return  ret;

}
osg::QReflect_VertexBufferObject * osg::QReflect_Array::getVertexBufferObject()const{
PMOCSAFEADDOBJECT(*_model->getVertexBufferObject(),inst);
return inst.isValid()?((osg::QReflect_VertexBufferObject * )inst.model->createQQModel(&inst)):NULL;
}
void  osg::QReflect_Array::setNormalize(const bool &par){_model->setNormalize(par);emit NormalizeChanged(par);}
void  osg::QReflect_Array::setPreserveDataType(const bool &par){_model->setPreserveDataType(par);emit PreserveDataTypeChanged(par);}
void osg::QReflect_Array::pmoc_reverse_setVertexBufferObject( osg::QReflect_VertexBufferObject *par){_model->setVertexBufferObject(NULL);
emit VertexBufferObjectChanged(NULL);
}
void osg::QReflect_Array::setVertexBufferObject( osg::QReflect_VertexBufferObject *par){_model->setVertexBufferObject(par->_model);
emit VertexBufferObjectChanged(par);
}

///DefaultConstructor////////////////
osg::QReflect_Array::QReflect_Array(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::Array*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_Array::~QReflect_Array( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_Array::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_Array::createInstance( ){
std::cerr<<"osg::Array is not instanciable"<<std::endl;return Instance();


}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_Array::MetaQReflect_Array():MetaQQuickClass( "osg::Array"){
_typeid=&typeid(osg::Array );           qRegisterMetaType<QMLArray>();
qmlRegisterType<QReflect_Array>("pmoc.osg",1,0,"QReflect_Array");
           qmlRegisterType<QMLArray>("pmoc.osg",1,0,"QMLArray");
       PMOCACTION("getVertexBufferObject","setVertexBufferObject","unsetVertexBufferObject");
};
const std::string osg::MetaQReflect_Array::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_Array::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_Array::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_Array::createQQModel(Instance*i){ //return new MetaQReflect_Array_QModel(i);}
QMLArray *ret =new QMLArray(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::BufferData *mother =dynamic_cast<osg::BufferData*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::BufferData");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::BufferData model for osg::Arrayis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::BufferData");
if(!cl){std::cerr<<"osg::BufferData QQModel for osg::Arrayis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Array_pmoc.cpp"
#endif
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/Array_pmoc.hpp>
#include <customCode/osg/Array_pmoc.hpp>
#include <customCode/osg/Array_pmoc.hpp>
using namespace pmoc;
 void osg::QReflect_ArrayVisitor::apply(osg::QReflect_Array *p0){
 _model->apply(*p0->_model);

}

///DefaultConstructor////////////////
osg::QReflect_ArrayVisitor::QReflect_ArrayVisitor(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::ArrayVisitor*>(i->ptr);
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_ArrayVisitor::~QReflect_ArrayVisitor( ){
 }
///update this according _model new state
void osg::QReflect_ArrayVisitor::updateModel(){
}
Instance osg::MetaQReflect_ArrayVisitor::createInstance( ){
osg::ArrayVisitor* osg_ArrayVisitor_ptr	;
osg_ArrayVisitor_ptr= new osg::ArrayVisitor()	;
Instance o(PMOCGETMETACLASS("osg::ArrayVisitor"),(void*)osg_ArrayVisitor_ptr	,true);
_managedinstances.insert(osg_ArrayVisitor_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_ArrayVisitor::MetaQReflect_ArrayVisitor():MetaQQuickClass( "osg::ArrayVisitor"){
_typeid=&typeid(osg::ArrayVisitor );           qRegisterMetaType<QMLArrayVisitor>();
qmlRegisterType<QReflect_ArrayVisitor>("pmoc.osg",1,0,"QReflect_ArrayVisitor");
           qmlRegisterType<QMLArrayVisitor>("pmoc.osg",1,0,"QMLArrayVisitor");
};
const std::string osg::MetaQReflect_ArrayVisitor::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_ArrayVisitor::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_ArrayVisitor::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_ArrayVisitor::createQQModel(Instance*i){ //return new MetaQReflect_ArrayVisitor_QModel(i);}
QMLArrayVisitor *ret =new QMLArrayVisitor(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Array_pmoc.cpp"
#endif
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/Array_pmoc.hpp>
#include <customCode/osg/Array_pmoc.hpp>
#include <customCode/osg/Array_pmoc.hpp>
using namespace pmoc;
 void osg::QReflect_ConstArrayVisitor::apply(osg::QReflect_Array *p0){
 _model->apply(*p0->_model);

}

///DefaultConstructor////////////////
osg::QReflect_ConstArrayVisitor::QReflect_ConstArrayVisitor(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::ConstArrayVisitor*>(i->ptr);
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_ConstArrayVisitor::~QReflect_ConstArrayVisitor( ){
 }
///update this according _model new state
void osg::QReflect_ConstArrayVisitor::updateModel(){
}
Instance osg::MetaQReflect_ConstArrayVisitor::createInstance( ){
osg::ConstArrayVisitor* osg_ConstArrayVisitor_ptr	;
osg_ConstArrayVisitor_ptr= new osg::ConstArrayVisitor()	;
Instance o(PMOCGETMETACLASS("osg::ConstArrayVisitor"),(void*)osg_ConstArrayVisitor_ptr	,true);
_managedinstances.insert(osg_ConstArrayVisitor_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_ConstArrayVisitor::MetaQReflect_ConstArrayVisitor():MetaQQuickClass( "osg::ConstArrayVisitor"){
_typeid=&typeid(osg::ConstArrayVisitor );           qRegisterMetaType<QMLConstArrayVisitor>();
qmlRegisterType<QReflect_ConstArrayVisitor>("pmoc.osg",1,0,"QReflect_ConstArrayVisitor");
           qmlRegisterType<QMLConstArrayVisitor>("pmoc.osg",1,0,"QMLConstArrayVisitor");
};
const std::string osg::MetaQReflect_ConstArrayVisitor::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_ConstArrayVisitor::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_ConstArrayVisitor::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_ConstArrayVisitor::createQQModel(Instance*i){ //return new MetaQReflect_ConstArrayVisitor_QModel(i);}
QMLConstArrayVisitor *ret =new QMLConstArrayVisitor(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Array_pmoc.cpp"
#endif
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/Array_pmoc.hpp>
#include <customCode/osg/Array_pmoc.hpp>
#include <customCode/osg/Matrixd_pmoc.hpp>
#include <customCode/osg/Matrixf_pmoc.hpp>
#include <customCode/osg/Vec2b_pmoc.hpp>
#include <customCode/osg/Vec2d_pmoc.hpp>
#include <customCode/osg/Vec2f_pmoc.hpp>
#include <customCode/osg/Vec2i_pmoc.hpp>
#include <customCode/osg/Vec2s_pmoc.hpp>
#include <customCode/osg/Vec2ub_pmoc.hpp>
#include <customCode/osg/Vec2ui_pmoc.hpp>
#include <customCode/osg/Vec2us_pmoc.hpp>
#include <customCode/osg/Vec3b_pmoc.hpp>
#include <customCode/osg/Vec3d_pmoc.hpp>
#include <customCode/osg/Vec3f_pmoc.hpp>
#include <customCode/osg/Vec3i_pmoc.hpp>
#include <customCode/osg/Vec3s_pmoc.hpp>
#include <customCode/osg/Vec3ub_pmoc.hpp>
#include <customCode/osg/Vec3ui_pmoc.hpp>
#include <customCode/osg/Vec3us_pmoc.hpp>
#include <customCode/osg/Vec4b_pmoc.hpp>
#include <customCode/osg/Vec4d_pmoc.hpp>
#include <customCode/osg/Vec4f_pmoc.hpp>
#include <customCode/osg/Vec4i_pmoc.hpp>
#include <customCode/osg/Vec4s_pmoc.hpp>
#include <customCode/osg/Vec4ub_pmoc.hpp>
#include <customCode/osg/Vec4ui_pmoc.hpp>
#include <customCode/osg/Vec4us_pmoc.hpp>
using namespace pmoc;
 void osg::QReflect_ConstValueVisitor::apply(const  GLbyte &p0){
 _model->apply(p0);

}
 void osg::QReflect_ConstValueVisitor::apply(const  GLdouble &p0){
 _model->apply(p0);

}
 void osg::QReflect_ConstValueVisitor::apply(const  GLfloat &p0){
 _model->apply(p0);

}
 void osg::QReflect_ConstValueVisitor::apply(const  GLint &p0){
 _model->apply(p0);

}
 void osg::QReflect_ConstValueVisitor::apply(const  GLshort &p0){
 _model->apply(p0);

}
 void osg::QReflect_ConstValueVisitor::apply(const  GLubyte &p0){
 _model->apply(p0);

}
 void osg::QReflect_ConstValueVisitor::apply(const  GLuint &p0){
 _model->apply(p0);

}
 void osg::QReflect_ConstValueVisitor::apply(const  GLushort &p0){
 _model->apply(p0);

}
 void osg::QReflect_ConstValueVisitor::apply(osg::QReflect_Matrixd *p0){
 _model->apply(*p0->_model);

}
 void osg::QReflect_ConstValueVisitor::apply(osg::QReflect_Matrixf *p0){
 _model->apply(*p0->_model);

}
 void osg::QReflect_ConstValueVisitor::apply(osg::QReflect_Vec2b *p0){
 _model->apply(*p0->_model);

}
 void osg::QReflect_ConstValueVisitor::apply(osg::QReflect_Vec2d *p0){
 _model->apply(*p0->_model);

}
 void osg::QReflect_ConstValueVisitor::apply(osg::QReflect_Vec2f *p0){
 _model->apply(*p0->_model);

}
 void osg::QReflect_ConstValueVisitor::apply(osg::QReflect_Vec2i *p0){
 _model->apply(*p0->_model);

}
 void osg::QReflect_ConstValueVisitor::apply(osg::QReflect_Vec2s *p0){
 _model->apply(*p0->_model);

}
 void osg::QReflect_ConstValueVisitor::apply(osg::QReflect_Vec2ub *p0){
 _model->apply(*p0->_model);

}
 void osg::QReflect_ConstValueVisitor::apply(osg::QReflect_Vec2ui *p0){
 _model->apply(*p0->_model);

}
 void osg::QReflect_ConstValueVisitor::apply(osg::QReflect_Vec2us *p0){
 _model->apply(*p0->_model);

}
 void osg::QReflect_ConstValueVisitor::apply(osg::QReflect_Vec3b *p0){
 _model->apply(*p0->_model);

}
 void osg::QReflect_ConstValueVisitor::apply(osg::QReflect_Vec3d *p0){
 _model->apply(*p0->_model);

}
 void osg::QReflect_ConstValueVisitor::apply(osg::QReflect_Vec3f *p0){
 _model->apply(*p0->_model);

}
 void osg::QReflect_ConstValueVisitor::apply(osg::QReflect_Vec3i *p0){
 _model->apply(*p0->_model);

}
 void osg::QReflect_ConstValueVisitor::apply(osg::QReflect_Vec3s *p0){
 _model->apply(*p0->_model);

}
 void osg::QReflect_ConstValueVisitor::apply(osg::QReflect_Vec3ub *p0){
 _model->apply(*p0->_model);

}
 void osg::QReflect_ConstValueVisitor::apply(osg::QReflect_Vec3ui *p0){
 _model->apply(*p0->_model);

}
 void osg::QReflect_ConstValueVisitor::apply(osg::QReflect_Vec3us *p0){
 _model->apply(*p0->_model);

}
 void osg::QReflect_ConstValueVisitor::apply(osg::QReflect_Vec4b *p0){
 _model->apply(*p0->_model);

}
 void osg::QReflect_ConstValueVisitor::apply(osg::QReflect_Vec4d *p0){
 _model->apply(*p0->_model);

}
 void osg::QReflect_ConstValueVisitor::apply(osg::QReflect_Vec4f *p0){
 _model->apply(*p0->_model);

}
 void osg::QReflect_ConstValueVisitor::apply(osg::QReflect_Vec4i *p0){
 _model->apply(*p0->_model);

}
 void osg::QReflect_ConstValueVisitor::apply(osg::QReflect_Vec4s *p0){
 _model->apply(*p0->_model);

}
 void osg::QReflect_ConstValueVisitor::apply(osg::QReflect_Vec4ub *p0){
 _model->apply(*p0->_model);

}
 void osg::QReflect_ConstValueVisitor::apply(osg::QReflect_Vec4ui *p0){
 _model->apply(*p0->_model);

}
 void osg::QReflect_ConstValueVisitor::apply(osg::QReflect_Vec4us *p0){
 _model->apply(*p0->_model);

}

///DefaultConstructor////////////////
osg::QReflect_ConstValueVisitor::QReflect_ConstValueVisitor(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::ConstValueVisitor*>(i->ptr);
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_ConstValueVisitor::~QReflect_ConstValueVisitor( ){
 }
///update this according _model new state
void osg::QReflect_ConstValueVisitor::updateModel(){
}
Instance osg::MetaQReflect_ConstValueVisitor::createInstance( ){
osg::ConstValueVisitor* osg_ConstValueVisitor_ptr	;
osg_ConstValueVisitor_ptr= new osg::ConstValueVisitor()	;
Instance o(PMOCGETMETACLASS("osg::ConstValueVisitor"),(void*)osg_ConstValueVisitor_ptr	,true);
_managedinstances.insert(osg_ConstValueVisitor_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_ConstValueVisitor::MetaQReflect_ConstValueVisitor():MetaQQuickClass( "osg::ConstValueVisitor"){
_typeid=&typeid(osg::ConstValueVisitor );           qRegisterMetaType<QMLConstValueVisitor>();
qmlRegisterType<QReflect_ConstValueVisitor>("pmoc.osg",1,0,"QReflect_ConstValueVisitor");
           qmlRegisterType<QMLConstValueVisitor>("pmoc.osg",1,0,"QMLConstValueVisitor");
};
const std::string osg::MetaQReflect_ConstValueVisitor::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_ConstValueVisitor::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_ConstValueVisitor::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_ConstValueVisitor::createQQModel(Instance*i){ //return new MetaQReflect_ConstValueVisitor_QModel(i);}
QMLConstValueVisitor *ret =new QMLConstValueVisitor(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Array_pmoc.cpp"
#endif
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/Array_pmoc.hpp>
#include <customCode/osg/Array_pmoc.hpp>
#include <customCode/osg/Array_pmoc.hpp>
#include <customCode/osg/Object_pmoc.hpp>
using namespace pmoc;
 bool  osg::QReflect_IndexArray::isSameKindAs(osg::QReflect_Object *p0)const{
return _model->isSameKindAs(p0->_model);

}

///DefaultConstructor////////////////
osg::QReflect_IndexArray::QReflect_IndexArray(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::IndexArray*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_IndexArray::~QReflect_IndexArray( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_IndexArray::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_IndexArray::createInstance( ){
std::cerr<<"osg::IndexArray is not instanciable"<<std::endl;return Instance();


}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_IndexArray::MetaQReflect_IndexArray():MetaQQuickClass( "osg::IndexArray"){
_typeid=&typeid(osg::IndexArray );           qRegisterMetaType<QMLIndexArray>();
qmlRegisterType<QReflect_IndexArray>("pmoc.osg",1,0,"QReflect_IndexArray");
           qmlRegisterType<QMLIndexArray>("pmoc.osg",1,0,"QMLIndexArray");
};
const std::string osg::MetaQReflect_IndexArray::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_IndexArray::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_IndexArray::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_IndexArray::createQQModel(Instance*i){ //return new MetaQReflect_IndexArray_QModel(i);}
QMLIndexArray *ret =new QMLIndexArray(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::Array *mother =dynamic_cast<osg::Array*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::Array");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::Array model for osg::IndexArrayis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::Array");
if(!cl){std::cerr<<"osg::Array QQModel for osg::IndexArrayis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Array_pmoc.cpp"
#endif
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/Array_pmoc.hpp>
#include <customCode/osg/Array_pmoc.hpp>
#include <customCode/osg/Matrixd_pmoc.hpp>
#include <customCode/osg/Matrixf_pmoc.hpp>
#include <customCode/osg/Vec2b_pmoc.hpp>
#include <customCode/osg/Vec2d_pmoc.hpp>
#include <customCode/osg/Vec2f_pmoc.hpp>
#include <customCode/osg/Vec2i_pmoc.hpp>
#include <customCode/osg/Vec2s_pmoc.hpp>
#include <customCode/osg/Vec2ub_pmoc.hpp>
#include <customCode/osg/Vec2ui_pmoc.hpp>
#include <customCode/osg/Vec2us_pmoc.hpp>
#include <customCode/osg/Vec3b_pmoc.hpp>
#include <customCode/osg/Vec3d_pmoc.hpp>
#include <customCode/osg/Vec3f_pmoc.hpp>
#include <customCode/osg/Vec3i_pmoc.hpp>
#include <customCode/osg/Vec3s_pmoc.hpp>
#include <customCode/osg/Vec3ub_pmoc.hpp>
#include <customCode/osg/Vec3ui_pmoc.hpp>
#include <customCode/osg/Vec3us_pmoc.hpp>
#include <customCode/osg/Vec4b_pmoc.hpp>
#include <customCode/osg/Vec4d_pmoc.hpp>
#include <customCode/osg/Vec4f_pmoc.hpp>
#include <customCode/osg/Vec4i_pmoc.hpp>
#include <customCode/osg/Vec4s_pmoc.hpp>
#include <customCode/osg/Vec4ub_pmoc.hpp>
#include <customCode/osg/Vec4ui_pmoc.hpp>
#include <customCode/osg/Vec4us_pmoc.hpp>
using namespace pmoc;
 void osg::QReflect_ValueVisitor::apply( GLbyte &p0){
 _model->apply(p0);

}
 void osg::QReflect_ValueVisitor::apply( GLdouble &p0){
 _model->apply(p0);

}
 void osg::QReflect_ValueVisitor::apply( GLfloat &p0){
 _model->apply(p0);

}
 void osg::QReflect_ValueVisitor::apply( GLint &p0){
 _model->apply(p0);

}
 void osg::QReflect_ValueVisitor::apply( GLshort &p0){
 _model->apply(p0);

}
 void osg::QReflect_ValueVisitor::apply( GLubyte &p0){
 _model->apply(p0);

}
 void osg::QReflect_ValueVisitor::apply( GLuint &p0){
 _model->apply(p0);

}
 void osg::QReflect_ValueVisitor::apply( GLushort &p0){
 _model->apply(p0);

}
 void osg::QReflect_ValueVisitor::apply(osg::QReflect_Matrixd *p0){
 _model->apply(*p0->_model);

}
 void osg::QReflect_ValueVisitor::apply(osg::QReflect_Matrixf *p0){
 _model->apply(*p0->_model);

}
 void osg::QReflect_ValueVisitor::apply(osg::QReflect_Vec2b *p0){
 _model->apply(*p0->_model);

}
 void osg::QReflect_ValueVisitor::apply(osg::QReflect_Vec2d *p0){
 _model->apply(*p0->_model);

}
 void osg::QReflect_ValueVisitor::apply(osg::QReflect_Vec2f *p0){
 _model->apply(*p0->_model);

}
 void osg::QReflect_ValueVisitor::apply(osg::QReflect_Vec2i *p0){
 _model->apply(*p0->_model);

}
 void osg::QReflect_ValueVisitor::apply(osg::QReflect_Vec2s *p0){
 _model->apply(*p0->_model);

}
 void osg::QReflect_ValueVisitor::apply(osg::QReflect_Vec2ub *p0){
 _model->apply(*p0->_model);

}
 void osg::QReflect_ValueVisitor::apply(osg::QReflect_Vec2ui *p0){
 _model->apply(*p0->_model);

}
 void osg::QReflect_ValueVisitor::apply(osg::QReflect_Vec2us *p0){
 _model->apply(*p0->_model);

}
 void osg::QReflect_ValueVisitor::apply(osg::QReflect_Vec3b *p0){
 _model->apply(*p0->_model);

}
 void osg::QReflect_ValueVisitor::apply(osg::QReflect_Vec3d *p0){
 _model->apply(*p0->_model);

}
 void osg::QReflect_ValueVisitor::apply(osg::QReflect_Vec3f *p0){
 _model->apply(*p0->_model);

}
 void osg::QReflect_ValueVisitor::apply(osg::QReflect_Vec3i *p0){
 _model->apply(*p0->_model);

}
 void osg::QReflect_ValueVisitor::apply(osg::QReflect_Vec3s *p0){
 _model->apply(*p0->_model);

}
 void osg::QReflect_ValueVisitor::apply(osg::QReflect_Vec3ub *p0){
 _model->apply(*p0->_model);

}
 void osg::QReflect_ValueVisitor::apply(osg::QReflect_Vec3ui *p0){
 _model->apply(*p0->_model);

}
 void osg::QReflect_ValueVisitor::apply(osg::QReflect_Vec3us *p0){
 _model->apply(*p0->_model);

}
 void osg::QReflect_ValueVisitor::apply(osg::QReflect_Vec4b *p0){
 _model->apply(*p0->_model);

}
 void osg::QReflect_ValueVisitor::apply(osg::QReflect_Vec4d *p0){
 _model->apply(*p0->_model);

}
 void osg::QReflect_ValueVisitor::apply(osg::QReflect_Vec4f *p0){
 _model->apply(*p0->_model);

}
 void osg::QReflect_ValueVisitor::apply(osg::QReflect_Vec4i *p0){
 _model->apply(*p0->_model);

}
 void osg::QReflect_ValueVisitor::apply(osg::QReflect_Vec4s *p0){
 _model->apply(*p0->_model);

}
 void osg::QReflect_ValueVisitor::apply(osg::QReflect_Vec4ub *p0){
 _model->apply(*p0->_model);

}
 void osg::QReflect_ValueVisitor::apply(osg::QReflect_Vec4ui *p0){
 _model->apply(*p0->_model);

}
 void osg::QReflect_ValueVisitor::apply(osg::QReflect_Vec4us *p0){
 _model->apply(*p0->_model);

}

///DefaultConstructor////////////////
osg::QReflect_ValueVisitor::QReflect_ValueVisitor(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::ValueVisitor*>(i->ptr);
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_ValueVisitor::~QReflect_ValueVisitor( ){
 }
///update this according _model new state
void osg::QReflect_ValueVisitor::updateModel(){
}
Instance osg::MetaQReflect_ValueVisitor::createInstance( ){
osg::ValueVisitor* osg_ValueVisitor_ptr	;
osg_ValueVisitor_ptr= new osg::ValueVisitor()	;
Instance o(PMOCGETMETACLASS("osg::ValueVisitor"),(void*)osg_ValueVisitor_ptr	,true);
_managedinstances.insert(osg_ValueVisitor_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_ValueVisitor::MetaQReflect_ValueVisitor():MetaQQuickClass( "osg::ValueVisitor"){
_typeid=&typeid(osg::ValueVisitor );           qRegisterMetaType<QMLValueVisitor>();
qmlRegisterType<QReflect_ValueVisitor>("pmoc.osg",1,0,"QReflect_ValueVisitor");
           qmlRegisterType<QMLValueVisitor>("pmoc.osg",1,0,"QMLValueVisitor");
};
const std::string osg::MetaQReflect_ValueVisitor::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_ValueVisitor::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_ValueVisitor::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_ValueVisitor::createQQModel(Instance*i){ //return new MetaQReflect_ValueVisitor_QModel(i);}
QMLValueVisitor *ret =new QMLValueVisitor(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Array_pmoc.cpp"
#endif



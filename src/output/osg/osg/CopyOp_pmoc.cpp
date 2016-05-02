#include <osg/CopyOp>
//includes

#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/CopyOp_pmoc.hpp>
#include <customCode/osg/CopyOp_pmoc.hpp>
#include <customCode/osg/Array_pmoc.hpp>
#include <customCode/osg/Callback_pmoc.hpp>
#include <customCode/osg/Drawable_pmoc.hpp>
#include <customCode/osg/Image_pmoc.hpp>
#include <customCode/osg/Node_pmoc.hpp>
#include <customCode/osg/Object_pmoc.hpp>
#include <customCode/osg/PrimitiveSet_pmoc.hpp>
#include <customCode/osg/Referenced_pmoc.hpp>
#include <customCode/osg/Shape_pmoc.hpp>
#include <customCode/osg/StateAttribute_pmoc.hpp>
#include <customCode/osg/StateSet_pmoc.hpp>
#include <customCode/osg/Texture_pmoc.hpp>
#include <customCode/osg/Uniform_pmoc.hpp>
using namespace pmoc;
 unsigned int  osg::QReflect_CopyOp:: getCopyFlags()const{
//params checking
return _model->getCopyFlags();

}
 void osg::QReflect_CopyOp::setCopyFlags( unsigned int  p0){
//params checking
 _model->setCopyFlags(p0);
emit CopyFlagsChanged();

}
osg::QReflect_Array*osg::QReflect_CopyOp::operator()(osg::QReflect_Array  *p0)const{
//params checking
PMOCSAFEADDOBJECT(*_model->operator()(p0->_model),inst);
return inst.isValid()?((osg::QReflect_Array * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Callback*osg::QReflect_CopyOp::operator()(osg::QReflect_Callback  *p0)const{
//params checking
PMOCSAFEADDOBJECT(*_model->operator()(p0->_model),inst);
return inst.isValid()?((osg::QReflect_Callback * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Drawable*osg::QReflect_CopyOp::operator()(osg::QReflect_Drawable  *p0)const{
//params checking
PMOCSAFEADDOBJECT(*_model->operator()(p0->_model),inst);
return inst.isValid()?((osg::QReflect_Drawable * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Image*osg::QReflect_CopyOp::operator()(osg::QReflect_Image  *p0)const{
//params checking
PMOCSAFEADDOBJECT(*_model->operator()(p0->_model),inst);
return inst.isValid()?((osg::QReflect_Image * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Node*osg::QReflect_CopyOp::operator()(osg::QReflect_Node  *p0)const{
//params checking
PMOCSAFEADDOBJECT(*_model->operator()(p0->_model),inst);
return inst.isValid()?((osg::QReflect_Node * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Object*osg::QReflect_CopyOp::operator()(osg::QReflect_Object  *p0)const{
//params checking
PMOCSAFEADDOBJECT(*_model->operator()(p0->_model),inst);
return inst.isValid()?((osg::QReflect_Object * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_PrimitiveSet*osg::QReflect_CopyOp::operator()(osg::QReflect_PrimitiveSet  *p0)const{
//params checking
PMOCSAFEADDOBJECT(*_model->operator()(p0->_model),inst);
return inst.isValid()?((osg::QReflect_PrimitiveSet * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Referenced*osg::QReflect_CopyOp::operator()(osg::QReflect_Referenced  *p0)const{
//params checking
PMOCSAFEADDOBJECT(*_model->operator()(p0->_model),inst);
return inst.isValid()?((osg::QReflect_Referenced * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Shape*osg::QReflect_CopyOp::operator()(osg::QReflect_Shape  *p0)const{
//params checking
PMOCSAFEADDOBJECT(*_model->operator()(p0->_model),inst);
return inst.isValid()?((osg::QReflect_Shape * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_StateAttribute*osg::QReflect_CopyOp::operator()(osg::QReflect_StateAttribute  *p0)const{
//params checking
PMOCSAFEADDOBJECT(*_model->operator()(p0->_model),inst);
return inst.isValid()?((osg::QReflect_StateAttribute * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_StateAttributeCallback*osg::QReflect_CopyOp::operator()(osg::QReflect_StateAttributeCallback  *p0)const{
//params checking
PMOCSAFEADDOBJECT(*_model->operator()(p0->_model),inst);
return inst.isValid()?((osg::QReflect_StateAttributeCallback * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_StateSet*osg::QReflect_CopyOp::operator()(osg::QReflect_StateSet  *p0)const{
//params checking
PMOCSAFEADDOBJECT(*_model->operator()(p0->_model),inst);
return inst.isValid()?((osg::QReflect_StateSet * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Texture*osg::QReflect_CopyOp::operator()(osg::QReflect_Texture  *p0)const{
//params checking
PMOCSAFEADDOBJECT(*_model->operator()(p0->_model),inst);
return inst.isValid()?((osg::QReflect_Texture * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Uniform*osg::QReflect_CopyOp::operator()(osg::QReflect_Uniform  *p0)const{
//params checking
PMOCSAFEADDOBJECT(*_model->operator()(p0->_model),inst);
return inst.isValid()?((osg::QReflect_Uniform * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_UniformCallback*osg::QReflect_CopyOp::operator()(osg::QReflect_UniformCallback  *p0)const{
//params checking
PMOCSAFEADDOBJECT(*_model->operator()(p0->_model),inst);
return inst.isValid()?((osg::QReflect_UniformCallback * )inst.model->createQQModel(&inst)):NULL;
}

///DefaultConstructor////////////////
osg::QReflect_CopyOp::QReflect_CopyOp(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::CopyOp*>(i->ptr);
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_CopyOp::~QReflect_CopyOp( ){
 }
///update this according _model new state
void osg::QReflect_CopyOp::updateModel(){
}
Instance osg::MetaQReflect_CopyOp::createInstance( ){
osg::CopyOp* osg_CopyOp_ptr	;
osg_CopyOp_ptr= new osg::CopyOp()	;
Instance o(PMOCGETMETACLASS("osg::CopyOp"),(void*)osg_CopyOp_ptr	,true);
_managedinstances.insert(osg_CopyOp_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_CopyOp::MetaQReflect_CopyOp():MetaQQuickClass( "osg::CopyOp"){
_typeid=&typeid(osg::CopyOp );
           qRegisterMetaType<osg::QMLCopyOp>();
           qRegisterMetaType<osg::QMLCopyOp*>("pmoc.osg.QMLCopyOp");
qmlRegisterType<osg::QReflect_CopyOp>("pmoc.osg",1,0,"QReflect_CopyOp");
           qmlRegisterType<osg::QMLCopyOp>("pmoc.osg",1,0,"QMLCopyOp");
};
const std::string osg::MetaQReflect_CopyOp::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_CopyOp::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_CopyOp::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_CopyOp::createQQModel(const Instance*i){ //return new MetaQReflect_CopyOp_QModel(i);}
QMLCopyOp *ret =new QMLCopyOp(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_CopyOp_pmoc.cpp"
#endif





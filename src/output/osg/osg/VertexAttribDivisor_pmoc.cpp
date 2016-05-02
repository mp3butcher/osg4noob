#include <osg/VertexAttribDivisor>
//includes

#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/VertexAttribDivisor_pmoc.hpp>
#include <customCode/osg/VertexAttribDivisor_pmoc.hpp>
#include <customCode/osg/StateAttribute_pmoc.hpp>
#include <customCode/osg/CopyOp_pmoc.hpp>
#include <customCode/osg/Object_pmoc.hpp>
#include <customCode/osg/StateAttribute_pmoc.hpp>
#include <customCode/osg/State_pmoc.hpp>
using namespace pmoc;
 bool  osg::QReflect_VertexAttribDivisor:: isSameKindAs(osg::QReflect_Object  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_VertexAttribDivisor::isSameKindAs : parameter n.0 is NULL\n"<<endl;return -1;}
return _model->isSameKindAs(p0->_model);

}
 int  osg::QReflect_VertexAttribDivisor:: compare(osg::QReflect_StateAttribute  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_VertexAttribDivisor::compare : parameter n.0 is NULL\n"<<endl;return -1;}
return _model->compare(*p0->_model);

}
 unsigned int  osg::QReflect_VertexAttribDivisor:: getDivisor()const{
//params checking
return _model->getDivisor();

}
 unsigned int  osg::QReflect_VertexAttribDivisor:: getIndex()const{
//params checking
return _model->getIndex();

}
 unsigned int  osg::QReflect_VertexAttribDivisor:: getMember()const{
//params checking
return _model->getMember();

}
 void osg::QReflect_VertexAttribDivisor::apply(osg::QReflect_State  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_VertexAttribDivisor::apply : parameter n.0 is NULL\n"<<endl;return;}
 _model->apply(*p0->_model);

}
 void osg::QReflect_VertexAttribDivisor::setDivisor( unsigned int  p0){
//params checking
 _model->setDivisor(p0);
emit DivisorChanged();

}
 void osg::QReflect_VertexAttribDivisor::setIndex( unsigned int  p0){
//params checking
 _model->setIndex(p0);
emit IndexChanged();

}
const  char*  osg::QReflect_VertexAttribDivisor:: className()const{
//params checking
return _model->className();

}
const  char*  osg::QReflect_VertexAttribDivisor:: libraryName()const{
//params checking
return _model->libraryName();

}
osg::QReflect_Object*osg::QReflect_VertexAttribDivisor::clone(osg::QReflect_CopyOp  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_VertexAttribDivisor::clone : parameter n.0 is NULL\n"<<endl;;}
PMOCSAFEADDOBJECT(*_model->clone(*p0->_model),inst);
return inst.isValid()?((osg::QReflect_Object * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Object*osg::QReflect_VertexAttribDivisor::cloneType()const{
//params checking
PMOCSAFEADDOBJECT(*_model->cloneType(),inst);
return inst.isValid()?((osg::QReflect_Object * )inst.model->createQQModel(&inst)):NULL;
}

///DefaultConstructor////////////////
osg::QReflect_VertexAttribDivisor::QReflect_VertexAttribDivisor(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::VertexAttribDivisor*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_VertexAttribDivisor::~QReflect_VertexAttribDivisor( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_VertexAttribDivisor::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_VertexAttribDivisor::createInstance( ){
osg::ref_ptr<osg::VertexAttribDivisor> osg_VertexAttribDivisor_ptr	;
osg_VertexAttribDivisor_ptr = new osg::VertexAttribDivisor ()	;
Instance o(PMOCGETMETACLASS("osg::VertexAttribDivisor"),(void*)osg_VertexAttribDivisor_ptr.get()		,true);
_managedinstances.insert(osg_VertexAttribDivisor_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_VertexAttribDivisor::MetaQReflect_VertexAttribDivisor():MetaQQuickClass( "osg::VertexAttribDivisor"){
_typeid=&typeid(osg::VertexAttribDivisor );
           qRegisterMetaType<osg::QMLVertexAttribDivisor>();
           qRegisterMetaType<osg::QMLVertexAttribDivisor*>("pmoc.osg.QMLVertexAttribDivisor");
qmlRegisterType<osg::QReflect_VertexAttribDivisor>("pmoc.osg",1,0,"QReflect_VertexAttribDivisor");
           qmlRegisterType<osg::QMLVertexAttribDivisor>("pmoc.osg",1,0,"QMLVertexAttribDivisor");
};
const std::string osg::MetaQReflect_VertexAttribDivisor::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_VertexAttribDivisor::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_VertexAttribDivisor::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_VertexAttribDivisor::createQQModel(const Instance*i){ //return new MetaQReflect_VertexAttribDivisor_QModel(i);}
QMLVertexAttribDivisor *ret =new QMLVertexAttribDivisor(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::StateAttribute *mother =dynamic_cast<osg::StateAttribute*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::StateAttribute");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::StateAttribute model for osg::VertexAttribDivisoris invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::StateAttribute");
if(!cl){std::cerr<<"osg::StateAttribute QQModel for osg::VertexAttribDivisoris not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_VertexAttribDivisor_pmoc.cpp"
#endif





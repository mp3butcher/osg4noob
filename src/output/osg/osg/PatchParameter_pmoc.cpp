#include <osg/PatchParameter>
//includes

#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/PatchParameter_pmoc.hpp>
#include <customCode/osg/PatchParameter_pmoc.hpp>
#include <customCode/osg/StateAttribute_pmoc.hpp>
#include <customCode/osg/StateAttribute_pmoc.hpp>
#include <customCode/osg/State_pmoc.hpp>
#include <customCode/osg/Vec2f_pmoc.hpp>
#include <customCode/osg/Vec4f_pmoc.hpp>
using namespace pmoc;
 GLint  osg::QReflect_PatchParameter:: getVertices()const{
//params checking
return _model->getVertices();

}
 int  osg::QReflect_PatchParameter:: compare(osg::QReflect_StateAttribute  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_PatchParameter::compare : parameter n.0 is NULL\n"<<endl;return -1;}
return _model->compare(*p0->_model);

}
 void osg::QReflect_PatchParameter::apply(osg::QReflect_State  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_PatchParameter::apply : parameter n.0 is NULL\n"<<endl;return;}
 _model->apply(*p0->_model);

}
 void osg::QReflect_PatchParameter::setPatchDefaultInnerLevel(osg::QReflect_Vec2f  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_PatchParameter::setPatchDefaultInnerLevel : parameter n.0 is NULL\n"<<endl;return;}
 _model->setPatchDefaultInnerLevel(*p0->_model);

}
 void osg::QReflect_PatchParameter::setPatchDefaultOuterLevel(osg::QReflect_Vec4f  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_PatchParameter::setPatchDefaultOuterLevel : parameter n.0 is NULL\n"<<endl;return;}
 _model->setPatchDefaultOuterLevel(*p0->_model);

}
 void osg::QReflect_PatchParameter::setVertices( GLint  p0){
//params checking
 _model->setVertices(p0);
emit VerticesChanged();

}

///DefaultConstructor////////////////
osg::QReflect_PatchParameter::QReflect_PatchParameter(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::PatchParameter*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_PatchParameter::~QReflect_PatchParameter( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_PatchParameter::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_PatchParameter::createInstance( ){
osg::ref_ptr<osg::PatchParameter> osg_PatchParameter_ptr	;
osg_PatchParameter_ptr = new osg::PatchParameter ()	;
Instance o(PMOCGETMETACLASS("osg::PatchParameter"),(void*)osg_PatchParameter_ptr.get()		,true);
_managedinstances.insert(osg_PatchParameter_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_PatchParameter::MetaQReflect_PatchParameter():MetaQQuickClass( "osg::PatchParameter"){
_typeid=&typeid(osg::PatchParameter );
           qRegisterMetaType<osg::QMLPatchParameter>();
           qRegisterMetaType<osg::QMLPatchParameter*>("pmoc.osg.QMLPatchParameter");
qmlRegisterType<osg::QReflect_PatchParameter>("pmoc.osg",1,0,"QReflect_PatchParameter");
           qmlRegisterType<osg::QMLPatchParameter>("pmoc.osg",1,0,"QMLPatchParameter");
};
const std::string osg::MetaQReflect_PatchParameter::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_PatchParameter::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_PatchParameter::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_PatchParameter::createQQModel(const Instance*i){ //return new MetaQReflect_PatchParameter_QModel(i);}
QMLPatchParameter *ret =new QMLPatchParameter(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::StateAttribute *mother =dynamic_cast<osg::StateAttribute*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::StateAttribute");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::StateAttribute model for osg::PatchParameteris invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::StateAttribute");
if(!cl){std::cerr<<"osg::StateAttribute QQModel for osg::PatchParameteris not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_PatchParameter_pmoc.cpp"
#endif





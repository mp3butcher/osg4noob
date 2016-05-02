#include <osg/ShaderComposer>
//includes

#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/ShaderComposer_pmoc.hpp>
#include <customCode/osg/ShaderComposer_pmoc.hpp>
#include <customCode/osg/Object_pmoc.hpp>
#include <customCode/osg/State_pmoc.hpp>
using namespace pmoc;
 void osg::QReflect_ShaderComposer::releaseGLObjects(osg::QReflect_State  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_ShaderComposer::releaseGLObjects : parameter n.0 is NULL\n"<<endl;return;}
 _model->releaseGLObjects(p0->_model);

}

///DefaultConstructor////////////////
osg::QReflect_ShaderComposer::QReflect_ShaderComposer(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::ShaderComposer*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_ShaderComposer::~QReflect_ShaderComposer( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_ShaderComposer::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_ShaderComposer::createInstance( ){
osg::ref_ptr<osg::ShaderComposer> osg_ShaderComposer_ptr	;
osg_ShaderComposer_ptr = new osg::ShaderComposer ()	;
Instance o(PMOCGETMETACLASS("osg::ShaderComposer"),(void*)osg_ShaderComposer_ptr.get()		,true);
_managedinstances.insert(osg_ShaderComposer_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_ShaderComposer::MetaQReflect_ShaderComposer():MetaQQuickClass( "osg::ShaderComposer"){
_typeid=&typeid(osg::ShaderComposer );
           qRegisterMetaType<osg::QMLShaderComposer>();
           qRegisterMetaType<osg::QMLShaderComposer*>("pmoc.osg.QMLShaderComposer");
qmlRegisterType<osg::QReflect_ShaderComposer>("pmoc.osg",1,0,"QReflect_ShaderComposer");
           qmlRegisterType<osg::QMLShaderComposer>("pmoc.osg",1,0,"QMLShaderComposer");
};
const std::string osg::MetaQReflect_ShaderComposer::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_ShaderComposer::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_ShaderComposer::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_ShaderComposer::createQQModel(const Instance*i){ //return new MetaQReflect_ShaderComposer_QModel(i);}
QMLShaderComposer *ret =new QMLShaderComposer(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::Object *mother =dynamic_cast<osg::Object*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::Object");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::Object model for osg::ShaderComposeris invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::Object");
if(!cl){std::cerr<<"osg::Object QQModel for osg::ShaderComposeris not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_ShaderComposer_pmoc.cpp"
#endif





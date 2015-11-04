#include <osg/StateAttribute>
//includes
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/StateAttribute_pmoc.hpp>
#include <customCode/osg/StateAttribute_pmoc.hpp>
#include <customCode/osg/Object_pmoc.hpp>
#include <customCode/osg/Callback_pmoc.hpp>
#include <customCode/osg/Object_pmoc.hpp>
#include <osg/Shader_pmoc.hpp>
#include <osg/Callback>
#include <osg/Callback_pmoc.hpp>
#include <osg/Shader>
#include <osg/Shader_pmoc.hpp>
using namespace pmoc;
 bool  osg::QReflect_StateAttribute::isSameKindAs(osg::QReflect_Object *p0)const{
return _model->isSameKindAs(p0->_model);

}
 bool  osg::QReflect_StateAttribute::isTextureAttribute()const{
return _model->isTextureAttribute();

}
 unsigned int  osg::QReflect_StateAttribute::getMember()const{
return _model->getMember();

}
 unsigned int  osg::QReflect_StateAttribute::getNumParents()const{
return _model->getNumParents();

}
 void osg::QReflect_StateAttribute::resizeGLObjectBuffers( unsigned int p0){
 _model->resizeGLObjectBuffers(p0);

}
const  char*  osg::QReflect_StateAttribute::className()const{
return _model->className();

}
const  char*  osg::QReflect_StateAttribute::libraryName()const{
return _model->libraryName();

}
osg::QReflect_ShaderComponent * osg::QReflect_StateAttribute::getShaderComponent()const{
PMOCSAFEADDOBJECT(*_model->getShaderComponent(),inst);
return inst.isValid()?((osg::QReflect_ShaderComponent * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_StateAttribute*osg::QReflect_StateAttribute::asStateAttribute()const{
PMOCSAFEADDOBJECT(*_model->asStateAttribute(),inst);
return inst.isValid()?((osg::QReflect_StateAttribute * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_StateAttribute*osg::QReflect_StateAttribute::asStateAttribute(){
PMOCSAFEADDOBJECT(*_model->asStateAttribute(),inst);
return inst.isValid()?((osg::QReflect_StateAttribute * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_StateAttributeCallback * osg::QReflect_StateAttribute::getEventCallback()const{
PMOCSAFEADDOBJECT(*_model->getEventCallback(),inst);
return inst.isValid()?((osg::QReflect_StateAttributeCallback * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_StateAttributeCallback * osg::QReflect_StateAttribute::getUpdateCallback()const{
PMOCSAFEADDOBJECT(*_model->getUpdateCallback(),inst);
return inst.isValid()?((osg::QReflect_StateAttributeCallback * )inst.model->createQQModel(&inst)):NULL;
}
void osg::QReflect_StateAttribute::pmoc_reverse_setEventCallback( osg::QReflect_StateAttributeCallback *par){_model->setEventCallback(NULL);
emit EventCallbackChanged(NULL);
}
void osg::QReflect_StateAttribute::pmoc_reverse_setShaderComponent( osg::QReflect_ShaderComponent *par){_model->setShaderComponent(NULL);
emit ShaderComponentChanged(NULL);
}
void osg::QReflect_StateAttribute::pmoc_reverse_setUpdateCallback( osg::QReflect_StateAttributeCallback *par){_model->setUpdateCallback(NULL);
emit UpdateCallbackChanged(NULL);
}
void osg::QReflect_StateAttribute::setEventCallback( osg::QReflect_StateAttributeCallback *par){_model->setEventCallback(par->_model);
emit EventCallbackChanged(par);
}
void osg::QReflect_StateAttribute::setShaderComponent( osg::QReflect_ShaderComponent *par){_model->setShaderComponent(par->_model);
emit ShaderComponentChanged(par);
}
void osg::QReflect_StateAttribute::setUpdateCallback( osg::QReflect_StateAttributeCallback *par){_model->setUpdateCallback(par->_model);
emit UpdateCallbackChanged(par);
}

///DefaultConstructor////////////////
osg::QReflect_StateAttribute::QReflect_StateAttribute(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::StateAttribute*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_StateAttribute::~QReflect_StateAttribute( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_StateAttribute::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_StateAttribute::createInstance( ){
std::cerr<<"osg::StateAttribute is not instanciable"<<std::endl;return Instance();


}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_StateAttribute::MetaQReflect_StateAttribute():MetaQQuickClass( "osg::StateAttribute"){
_typeid=&typeid(osg::StateAttribute );           qRegisterMetaType<QMLStateAttribute>();
qmlRegisterType<QReflect_StateAttribute>("pmoc.osg",1,0,"QReflect_StateAttribute");
           qmlRegisterType<QMLStateAttribute>("pmoc.osg",1,0,"QMLStateAttribute");
       PMOCACTION("getEventCallback","setEventCallback","unsetEventCallback");
       PMOCACTION("getShaderComponent","setShaderComponent","unsetShaderComponent");
       PMOCACTION("getUpdateCallback","setUpdateCallback","unsetUpdateCallback");
};
const std::string osg::MetaQReflect_StateAttribute::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_StateAttribute::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_StateAttribute::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_StateAttribute::createQQModel(Instance*i){ //return new MetaQReflect_StateAttribute_QModel(i);}
QMLStateAttribute *ret =new QMLStateAttribute(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::Object *mother =dynamic_cast<osg::Object*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::Object");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::Object model for osg::StateAttributeis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::Object");
if(!cl){std::cerr<<"osg::Object QQModel for osg::StateAttributeis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_StateAttribute_pmoc.cpp"
#endif



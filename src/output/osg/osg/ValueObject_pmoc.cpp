#include <osg/ValueObject>
//includes
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/ValueObject_pmoc.hpp>
#include <customCode/osg/ValueObject_pmoc.hpp>
#include <customCode/osg/Object_pmoc.hpp>
using namespace pmoc;

///DefaultConstructor////////////////
osg::QReflect_ValueObject::QReflect_ValueObject(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::ValueObject*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_ValueObject::~QReflect_ValueObject( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_ValueObject::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_ValueObject::createInstance( ){
osg::ref_ptr<osg::ValueObject> osg_ValueObject_ptr	;
osg_ValueObject_ptr = new osg::ValueObject ()	;
Instance o(PMOCGETMETACLASS("osg::ValueObject"),(void*)osg_ValueObject_ptr.get()		,true);
_managedinstances.insert(osg_ValueObject_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_ValueObject::MetaQReflect_ValueObject():MetaQQuickClass( "osg::ValueObject"){
_typeid=&typeid(osg::ValueObject );           qRegisterMetaType<QMLValueObject>();
qmlRegisterType<QReflect_ValueObject>("pmoc.osg",1,0,"QReflect_ValueObject");
           qmlRegisterType<QMLValueObject>("pmoc.osg",1,0,"QMLValueObject");
};
const std::string osg::MetaQReflect_ValueObject::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_ValueObject::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_ValueObject::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_ValueObject::createQQModel(Instance*i){ //return new MetaQReflect_ValueObject_QModel(i);}
QMLValueObject *ret =new QMLValueObject(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::Object *mother =dynamic_cast<osg::Object*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::Object");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::Object model for osg::ValueObjectis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::Object");
if(!cl){std::cerr<<"osg::Object QQModel for osg::ValueObjectis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_ValueObject_pmoc.cpp"
#endif



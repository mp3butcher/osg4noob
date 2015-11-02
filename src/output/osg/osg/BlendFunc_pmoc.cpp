#include <osg/BlendFunc>
//includes
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/BlendFunc_pmoc.hpp>
#include <customCode/osg/BlendFunc_pmoc.hpp>
#include <customCode/osg/StateAttribute_pmoc.hpp>
#include <customCode/osg/StateAttribute_pmoc.hpp>
using namespace pmoc;
 int  osg::QReflect_BlendFunc::compare(osg::QReflect_StateAttribute *p0)const{
return _model->compare(*p0->_model);

}

///DefaultConstructor////////////////
osg::QReflect_BlendFunc::QReflect_BlendFunc(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::BlendFunc*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_BlendFunc::~QReflect_BlendFunc( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_BlendFunc::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_BlendFunc::createInstance( ){
osg::ref_ptr<osg::BlendFunc> osg_BlendFunc_ptr	;
osg_BlendFunc_ptr = new osg::BlendFunc ()	;
Instance o(PMOCGETMETACLASS("osg::BlendFunc"),(void*)osg_BlendFunc_ptr.get()		,true);
_managedinstances.insert(osg_BlendFunc_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_BlendFunc::MetaQReflect_BlendFunc():MetaQQuickClass( "osg::BlendFunc"){
_typeid=&typeid(osg::BlendFunc );           qRegisterMetaType<QMLBlendFunc>();
qmlRegisterType<QReflect_BlendFunc>("pmoc.osg",1,0,"QReflect_BlendFunc");
           qmlRegisterType<QMLBlendFunc>("pmoc.osg",1,0,"QMLBlendFunc");
};
const std::string osg::MetaQReflect_BlendFunc::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_BlendFunc::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_BlendFunc::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_BlendFunc::createQQModel(Instance*i){ //return new MetaQReflect_BlendFunc_QModel(i);}
QMLBlendFunc *ret =new QMLBlendFunc(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::StateAttribute *mother =dynamic_cast<osg::StateAttribute*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::StateAttribute");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::StateAttribute model for osg::BlendFuncis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::StateAttribute");
if(!cl){std::cerr<<"osg::StateAttribute QQModel for osg::BlendFuncis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_BlendFunc_pmoc.cpp"
#endif



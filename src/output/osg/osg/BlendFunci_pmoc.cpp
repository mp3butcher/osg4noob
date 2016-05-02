#include <osg/BlendFunci>
//includes

#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/BlendFunci_pmoc.hpp>
#include <customCode/osg/BlendFunci_pmoc.hpp>
#include <customCode/osg/BlendFunc_pmoc.hpp>
#include <customCode/osg/StateAttribute_pmoc.hpp>
#include <customCode/osg/State_pmoc.hpp>
using namespace pmoc;
 int  osg::QReflect_BlendFunci:: compare(osg::QReflect_StateAttribute  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_BlendFunci::compare : parameter n.0 is NULL\n"<<endl;return -1;}
return _model->compare(*p0->_model);

}
 unsigned int  osg::QReflect_BlendFunci:: getIndex()const{
//params checking
return _model->getIndex();

}
 unsigned int  osg::QReflect_BlendFunci:: getMember()const{
//params checking
return _model->getMember();

}
 void osg::QReflect_BlendFunci::apply(osg::QReflect_State  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_BlendFunci::apply : parameter n.0 is NULL\n"<<endl;return;}
 _model->apply(*p0->_model);

}
 void osg::QReflect_BlendFunci::setIndex( unsigned int  p0){
//params checking
 _model->setIndex(p0);
emit IndexChanged();

}

///DefaultConstructor////////////////
osg::QReflect_BlendFunci::QReflect_BlendFunci(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::BlendFunci*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_BlendFunci::~QReflect_BlendFunci( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_BlendFunci::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_BlendFunci::createInstance( ){
osg::ref_ptr<osg::BlendFunci> osg_BlendFunci_ptr	;
osg_BlendFunci_ptr = new osg::BlendFunci ()	;
Instance o(PMOCGETMETACLASS("osg::BlendFunci"),(void*)osg_BlendFunci_ptr.get()		,true);
_managedinstances.insert(osg_BlendFunci_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_BlendFunci::MetaQReflect_BlendFunci():MetaQQuickClass( "osg::BlendFunci"){
_typeid=&typeid(osg::BlendFunci );
           qRegisterMetaType<osg::QMLBlendFunci>();
           qRegisterMetaType<osg::QMLBlendFunci*>("pmoc.osg.QMLBlendFunci");
qmlRegisterType<osg::QReflect_BlendFunci>("pmoc.osg",1,0,"QReflect_BlendFunci");
           qmlRegisterType<osg::QMLBlendFunci>("pmoc.osg",1,0,"QMLBlendFunci");
};
const std::string osg::MetaQReflect_BlendFunci::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_BlendFunci::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_BlendFunci::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_BlendFunci::createQQModel(const Instance*i){ //return new MetaQReflect_BlendFunci_QModel(i);}
QMLBlendFunci *ret =new QMLBlendFunci(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::BlendFunc *mother =dynamic_cast<osg::BlendFunc*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::BlendFunc");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::BlendFunc model for osg::BlendFunciis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::BlendFunc");
if(!cl){std::cerr<<"osg::BlendFunc QQModel for osg::BlendFunciis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_BlendFunci_pmoc.cpp"
#endif





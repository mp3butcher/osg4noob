#include <osg/LineStipple>
//includes
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/LineStipple_pmoc.hpp>
#include <customCode/osg/LineStipple_pmoc.hpp>
#include <customCode/osg/StateAttribute_pmoc.hpp>
#include <customCode/osg/StateAttribute_pmoc.hpp>
using namespace pmoc;
 GLint  osg::QReflect_LineStipple::getFactor()const{
return _model->getFactor();

}
 int  osg::QReflect_LineStipple::compare(osg::QReflect_StateAttribute *p0)const{
return _model->compare(*p0->_model);

}
 void osg::QReflect_LineStipple::setFactor( GLint p0){
 _model->setFactor(p0);

}

///DefaultConstructor////////////////
osg::QReflect_LineStipple::QReflect_LineStipple(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::LineStipple*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_LineStipple::~QReflect_LineStipple( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_LineStipple::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_LineStipple::createInstance( ){
osg::ref_ptr<osg::LineStipple> osg_LineStipple_ptr	;
osg_LineStipple_ptr = new osg::LineStipple ()	;
Instance o(PMOCGETMETACLASS("osg::LineStipple"),(void*)osg_LineStipple_ptr.get()		,true);
_managedinstances.insert(osg_LineStipple_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_LineStipple::MetaQReflect_LineStipple():MetaQQuickClass( "osg::LineStipple"){
_typeid=&typeid(osg::LineStipple );           qRegisterMetaType<QMLLineStipple>();
qmlRegisterType<QReflect_LineStipple>("pmoc.osg",1,0,"QReflect_LineStipple");
           qmlRegisterType<QMLLineStipple>("pmoc.osg",1,0,"QMLLineStipple");
};
const std::string osg::MetaQReflect_LineStipple::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_LineStipple::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_LineStipple::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_LineStipple::createQQModel(Instance*i){ //return new MetaQReflect_LineStipple_QModel(i);}
QMLLineStipple *ret =new QMLLineStipple(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::StateAttribute *mother =dynamic_cast<osg::StateAttribute*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::StateAttribute");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::StateAttribute model for osg::LineStippleis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::StateAttribute");
if(!cl){std::cerr<<"osg::StateAttribute QQModel for osg::LineStippleis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_LineStipple_pmoc.cpp"
#endif



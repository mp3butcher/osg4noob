#include <osg/AlphaFunc>
//includes

#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/AlphaFunc_pmoc.hpp>
#include <customCode/osg/AlphaFunc_pmoc.hpp>
#include <customCode/osg/StateAttribute_pmoc.hpp>
#include <customCode/osg/StateAttribute_pmoc.hpp>
#include <customCode/osg/State_pmoc.hpp>
using namespace pmoc;
 float  osg::QReflect_AlphaFunc:: getReferenceValue()const{
//params checking
return _model->getReferenceValue();

}
 int  osg::QReflect_AlphaFunc:: compare(osg::QReflect_StateAttribute  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_AlphaFunc::compare : parameter n.0 is NULL\n"<<endl;return -1;}
return _model->compare(*p0->_model);

}
 void osg::QReflect_AlphaFunc::apply(osg::QReflect_State  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_AlphaFunc::apply : parameter n.0 is NULL\n"<<endl;return;}
 _model->apply(*p0->_model);

}
 void osg::QReflect_AlphaFunc::setFunction(osg::QReflect_AlphaFunc::ComparisonFunction  p0 , float  p1){
//params checking
 _model->setFunction(static_cast<osg::AlphaFunc::ComparisonFunction>(p0) ,p1);

}
 void osg::QReflect_AlphaFunc::setFunction(osg::QReflect_AlphaFunc::ComparisonFunction  p0){
//params checking
 _model->setFunction(static_cast<osg::AlphaFunc::ComparisonFunction>(p0));
emit FunctionChanged();

}
 void osg::QReflect_AlphaFunc::setReferenceValue( float  p0){
//params checking
 _model->setReferenceValue(p0);
emit ReferenceValueChanged();

}
osg::QReflect_AlphaFunc::ComparisonFunction  osg::QReflect_AlphaFunc::getFunction()const{
//params checking
osg::QReflect_AlphaFunc::ComparisonFunction ret=static_cast<osg::QReflect_AlphaFunc::ComparisonFunction>( _model->getFunction());return  ret;

}

///DefaultConstructor////////////////
osg::QReflect_AlphaFunc::QReflect_AlphaFunc(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::AlphaFunc*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_AlphaFunc::~QReflect_AlphaFunc( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_AlphaFunc::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_AlphaFunc::createInstance( ){
osg::ref_ptr<osg::AlphaFunc> osg_AlphaFunc_ptr	;
osg_AlphaFunc_ptr = new osg::AlphaFunc ()	;
Instance o(PMOCGETMETACLASS("osg::AlphaFunc"),(void*)osg_AlphaFunc_ptr.get()		,true);
_managedinstances.insert(osg_AlphaFunc_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_AlphaFunc::MetaQReflect_AlphaFunc():MetaQQuickClass( "osg::AlphaFunc"){
_typeid=&typeid(osg::AlphaFunc );
           qRegisterMetaType<osg::QMLAlphaFunc>();
           qRegisterMetaType<osg::QMLAlphaFunc*>("pmoc.osg.QMLAlphaFunc");
qmlRegisterType<osg::QReflect_AlphaFunc>("pmoc.osg",1,0,"QReflect_AlphaFunc");
           qmlRegisterType<osg::QMLAlphaFunc>("pmoc.osg",1,0,"QMLAlphaFunc");
};
const std::string osg::MetaQReflect_AlphaFunc::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_AlphaFunc::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_AlphaFunc::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_AlphaFunc::createQQModel(const Instance*i){ //return new MetaQReflect_AlphaFunc_QModel(i);}
QMLAlphaFunc *ret =new QMLAlphaFunc(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::StateAttribute *mother =dynamic_cast<osg::StateAttribute*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::StateAttribute");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::StateAttribute model for osg::AlphaFuncis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::StateAttribute");
if(!cl){std::cerr<<"osg::StateAttribute QQModel for osg::AlphaFuncis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_AlphaFunc_pmoc.cpp"
#endif





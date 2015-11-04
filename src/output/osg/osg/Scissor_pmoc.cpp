#include <osg/Scissor>
//includes
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/Scissor_pmoc.hpp>
#include <customCode/osg/Scissor_pmoc.hpp>
#include <customCode/osg/StateAttribute_pmoc.hpp>
#include <customCode/osg/StateAttribute_pmoc.hpp>
using namespace pmoc;
 int  osg::QReflect_Scissor::compare(osg::QReflect_StateAttribute *p0)const{
return _model->compare(*p0->_model);

}
 int  osg::QReflect_Scissor::height()const{
return _model->height();

}
 int  osg::QReflect_Scissor::width()const{
return _model->width();

}
 int  osg::QReflect_Scissor::x()const{
return _model->x();

}
 int  osg::QReflect_Scissor::y()const{
return _model->y();

}
 int&  osg::QReflect_Scissor::height(){
return _model->height();

}
 int&  osg::QReflect_Scissor::width(){
return _model->width();

}
 int&  osg::QReflect_Scissor::x(){
return _model->x();

}
 int&  osg::QReflect_Scissor::y(){
return _model->y();

}
 void osg::QReflect_Scissor::setScissor( int p0 , int p1 , int p2 , int p3){
 _model->setScissor(p0 ,p1 ,p2 ,p3);

}

///DefaultConstructor////////////////
osg::QReflect_Scissor::QReflect_Scissor(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::Scissor*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_Scissor::~QReflect_Scissor( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_Scissor::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_Scissor::createInstance( ){
osg::ref_ptr<osg::Scissor> osg_Scissor_ptr	;
osg_Scissor_ptr = new osg::Scissor ()	;
Instance o(PMOCGETMETACLASS("osg::Scissor"),(void*)osg_Scissor_ptr.get()		,true);
_managedinstances.insert(osg_Scissor_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_Scissor::MetaQReflect_Scissor():MetaQQuickClass( "osg::Scissor"){
_typeid=&typeid(osg::Scissor );           qRegisterMetaType<QMLScissor>();
qmlRegisterType<QReflect_Scissor>("pmoc.osg",1,0,"QReflect_Scissor");
           qmlRegisterType<QMLScissor>("pmoc.osg",1,0,"QMLScissor");
};
const std::string osg::MetaQReflect_Scissor::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_Scissor::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_Scissor::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_Scissor::createQQModel(Instance*i){ //return new MetaQReflect_Scissor_QModel(i);}
QMLScissor *ret =new QMLScissor(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::StateAttribute *mother =dynamic_cast<osg::StateAttribute*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::StateAttribute");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::StateAttribute model for osg::Scissoris invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::StateAttribute");
if(!cl){std::cerr<<"osg::StateAttribute QQModel for osg::Scissoris not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Scissor_pmoc.cpp"
#endif



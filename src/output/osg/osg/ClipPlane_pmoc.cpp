#include <osg/ClipPlane>
//includes

#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/ClipPlane_pmoc.hpp>
#include <customCode/osg/ClipPlane_pmoc.hpp>
#include <customCode/osg/StateAttribute_pmoc.hpp>
#include <customCode/osg/CopyOp_pmoc.hpp>
#include <customCode/osg/Object_pmoc.hpp>
#include <customCode/osg/Plane_pmoc.hpp>
#include <customCode/osg/StateAttribute_pmoc.hpp>
#include <customCode/osg/State_pmoc.hpp>
#include <customCode/osg/Vec4d_pmoc.hpp>
using namespace pmoc;
 bool  osg::QReflect_ClipPlane:: isSameKindAs(osg::QReflect_Object  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_ClipPlane::isSameKindAs : parameter n.0 is NULL\n"<<endl;return -1;}
return _model->isSameKindAs(p0->_model);

}
 int  osg::QReflect_ClipPlane:: compare(osg::QReflect_StateAttribute  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_ClipPlane::compare : parameter n.0 is NULL\n"<<endl;return -1;}
return _model->compare(*p0->_model);

}
 unsigned int  osg::QReflect_ClipPlane:: getClipPlaneNum()const{
//params checking
return _model->getClipPlaneNum();

}
 unsigned int  osg::QReflect_ClipPlane:: getMember()const{
//params checking
return _model->getMember();

}
 void osg::QReflect_ClipPlane::apply(osg::QReflect_State  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_ClipPlane::apply : parameter n.0 is NULL\n"<<endl;return;}
 _model->apply(*p0->_model);

}
 void osg::QReflect_ClipPlane::setClipPlane( double  p0 , double  p1 , double  p2 , double  p3){
//params checking
 _model->setClipPlane(p0 ,p1 ,p2 ,p3);

}
 void osg::QReflect_ClipPlane::setClipPlane(osg::QReflect_Plane  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_ClipPlane::setClipPlane : parameter n.0 is NULL\n"<<endl;return;}
 _model->setClipPlane(*p0->_model);

}
 void osg::QReflect_ClipPlane::setClipPlane(osg::QReflect_Vec4d  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_ClipPlane::setClipPlane : parameter n.0 is NULL\n"<<endl;return;}
 _model->setClipPlane(*p0->_model);

}
 void osg::QReflect_ClipPlane::setClipPlaneNum( unsigned int  p0){
//params checking
 _model->setClipPlaneNum(p0);
emit ClipPlaneNumChanged();

}
const  char*  osg::QReflect_ClipPlane:: className()const{
//params checking
return _model->className();

}
const  char*  osg::QReflect_ClipPlane:: libraryName()const{
//params checking
return _model->libraryName();

}
osg::QReflect_Object*osg::QReflect_ClipPlane::clone(osg::QReflect_CopyOp  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_ClipPlane::clone : parameter n.0 is NULL\n"<<endl;;}
PMOCSAFEADDOBJECT(*_model->clone(*p0->_model),inst);
return inst.isValid()?((osg::QReflect_Object * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Object*osg::QReflect_ClipPlane::cloneType()const{
//params checking
PMOCSAFEADDOBJECT(*_model->cloneType(),inst);
return inst.isValid()?((osg::QReflect_Object * )inst.model->createQQModel(&inst)):NULL;
}

///DefaultConstructor////////////////
osg::QReflect_ClipPlane::QReflect_ClipPlane(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::ClipPlane*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_ClipPlane::~QReflect_ClipPlane( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_ClipPlane::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_ClipPlane::createInstance( ){
osg::ref_ptr<osg::ClipPlane> osg_ClipPlane_ptr	;
osg_ClipPlane_ptr = new osg::ClipPlane ()	;
Instance o(PMOCGETMETACLASS("osg::ClipPlane"),(void*)osg_ClipPlane_ptr.get()		,true);
_managedinstances.insert(osg_ClipPlane_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_ClipPlane::MetaQReflect_ClipPlane():MetaQQuickClass( "osg::ClipPlane"){
_typeid=&typeid(osg::ClipPlane );
           qRegisterMetaType<osg::QMLClipPlane>();
           qRegisterMetaType<osg::QMLClipPlane*>("pmoc.osg.QMLClipPlane");
qmlRegisterType<osg::QReflect_ClipPlane>("pmoc.osg",1,0,"QReflect_ClipPlane");
           qmlRegisterType<osg::QMLClipPlane>("pmoc.osg",1,0,"QMLClipPlane");
};
const std::string osg::MetaQReflect_ClipPlane::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_ClipPlane::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_ClipPlane::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_ClipPlane::createQQModel(const Instance*i){ //return new MetaQReflect_ClipPlane_QModel(i);}
QMLClipPlane *ret =new QMLClipPlane(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::StateAttribute *mother =dynamic_cast<osg::StateAttribute*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::StateAttribute");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::StateAttribute model for osg::ClipPlaneis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::StateAttribute");
if(!cl){std::cerr<<"osg::StateAttribute QQModel for osg::ClipPlaneis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_ClipPlane_pmoc.cpp"
#endif





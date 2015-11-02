#include <osg/ShadeModel>
//includes
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/ShadeModel_pmoc.hpp>
#include <customCode/osg/ShadeModel_pmoc.hpp>
#include <customCode/osg/StateAttribute_pmoc.hpp>
#include <customCode/osg/StateAttribute_pmoc.hpp>
using namespace pmoc;
 int  osg::QReflect_ShadeModel::compare(osg::QReflect_StateAttribute *p0)const{
return _model->compare(*p0->_model);

}
 void osg::QReflect_ShadeModel::setMode(osg::QReflect_ShadeModel::Mode p0){
 _model->setMode(static_cast<osg::ShadeModel::Mode>(p0));

}
osg::QReflect_ShadeModel::Mode  osg::QReflect_ShadeModel::getMode()const{
osg::QReflect_ShadeModel::Mode ret=static_cast<osg::QReflect_ShadeModel::Mode>( _model->getMode());return  ret;

}

///DefaultConstructor////////////////
osg::QReflect_ShadeModel::QReflect_ShadeModel(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::ShadeModel*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_ShadeModel::~QReflect_ShadeModel( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_ShadeModel::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_ShadeModel::createInstance( ){
osg::ref_ptr<osg::ShadeModel> osg_ShadeModel_ptr	;
osg_ShadeModel_ptr = new osg::ShadeModel ()	;
Instance o(PMOCGETMETACLASS("osg::ShadeModel"),(void*)osg_ShadeModel_ptr.get()		,true);
_managedinstances.insert(osg_ShadeModel_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_ShadeModel::MetaQReflect_ShadeModel():MetaQQuickClass( "osg::ShadeModel"){
_typeid=&typeid(osg::ShadeModel );           qRegisterMetaType<QMLShadeModel>();
qmlRegisterType<QReflect_ShadeModel>("pmoc.osg",1,0,"QReflect_ShadeModel");
           qmlRegisterType<QMLShadeModel>("pmoc.osg",1,0,"QMLShadeModel");
};
const std::string osg::MetaQReflect_ShadeModel::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_ShadeModel::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_ShadeModel::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_ShadeModel::createQQModel(Instance*i){ //return new MetaQReflect_ShadeModel_QModel(i);}
QMLShadeModel *ret =new QMLShadeModel(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::StateAttribute *mother =dynamic_cast<osg::StateAttribute*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::StateAttribute");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::StateAttribute model for osg::ShadeModelis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::StateAttribute");
if(!cl){std::cerr<<"osg::StateAttribute QQModel for osg::ShadeModelis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_ShadeModel_pmoc.cpp"
#endif



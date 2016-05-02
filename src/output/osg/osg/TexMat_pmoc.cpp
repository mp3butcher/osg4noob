#include <osg/TexMat>
//includes

#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/TexMat_pmoc.hpp>
#include <customCode/osg/TexMat_pmoc.hpp>
#include <customCode/osg/StateAttribute_pmoc.hpp>
#include <customCode/osg/Matrixd_pmoc.hpp>
#include <customCode/osg/StateAttribute_pmoc.hpp>
#include <customCode/osg/State_pmoc.hpp>
using namespace pmoc;
 bool  osg::QReflect_TexMat:: getScaleByTextureRectangleSize()const{
//params checking
return _model->getScaleByTextureRectangleSize();

}
 bool  osg::QReflect_TexMat:: isTextureAttribute()const{
//params checking
return _model->isTextureAttribute();

}
 int  osg::QReflect_TexMat:: compare(osg::QReflect_StateAttribute  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_TexMat::compare : parameter n.0 is NULL\n"<<endl;return -1;}
return _model->compare(*p0->_model);

}
 void osg::QReflect_TexMat::apply(osg::QReflect_State  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_TexMat::apply : parameter n.0 is NULL\n"<<endl;return;}
 _model->apply(*p0->_model);

}
 void osg::QReflect_TexMat::setMatrix(osg::QReflect_Matrixd  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_TexMat::setMatrix : parameter n.0 is NULL\n"<<endl;return;}
 _model->setMatrix(*p0->_model);

}
 void osg::QReflect_TexMat::setScaleByTextureRectangleSize( bool  p0){
//params checking
 _model->setScaleByTextureRectangleSize(p0);
emit ScaleByTextureRectangleSizeChanged();

}

///DefaultConstructor////////////////
osg::QReflect_TexMat::QReflect_TexMat(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::TexMat*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_TexMat::~QReflect_TexMat( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_TexMat::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_TexMat::createInstance( ){
osg::ref_ptr<osg::TexMat> osg_TexMat_ptr	;
osg_TexMat_ptr = new osg::TexMat ()	;
Instance o(PMOCGETMETACLASS("osg::TexMat"),(void*)osg_TexMat_ptr.get()		,true);
_managedinstances.insert(osg_TexMat_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_TexMat::MetaQReflect_TexMat():MetaQQuickClass( "osg::TexMat"){
_typeid=&typeid(osg::TexMat );
           qRegisterMetaType<osg::QMLTexMat>();
           qRegisterMetaType<osg::QMLTexMat*>("pmoc.osg.QMLTexMat");
qmlRegisterType<osg::QReflect_TexMat>("pmoc.osg",1,0,"QReflect_TexMat");
           qmlRegisterType<osg::QMLTexMat>("pmoc.osg",1,0,"QMLTexMat");
};
const std::string osg::MetaQReflect_TexMat::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_TexMat::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_TexMat::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_TexMat::createQQModel(const Instance*i){ //return new MetaQReflect_TexMat_QModel(i);}
QMLTexMat *ret =new QMLTexMat(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::StateAttribute *mother =dynamic_cast<osg::StateAttribute*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::StateAttribute");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::StateAttribute model for osg::TexMatis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::StateAttribute");
if(!cl){std::cerr<<"osg::StateAttribute QQModel for osg::TexMatis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_TexMat_pmoc.cpp"
#endif





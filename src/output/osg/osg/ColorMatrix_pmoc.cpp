#include <osg/ColorMatrix>
//includes
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/ColorMatrix_pmoc.hpp>
#include <customCode/osg/ColorMatrix_pmoc.hpp>
#include <customCode/osg/StateAttribute_pmoc.hpp>
#include <customCode/osg/Matrixd_pmoc.hpp>
#include <customCode/osg/StateAttribute_pmoc.hpp>
using namespace pmoc;
 int  osg::QReflect_ColorMatrix::compare(osg::QReflect_StateAttribute *p0)const{
return _model->compare(*p0->_model);

}
 void osg::QReflect_ColorMatrix::setMatrix(osg::QReflect_Matrixd *p0){
 _model->setMatrix(*p0->_model);

}

///DefaultConstructor////////////////
osg::QReflect_ColorMatrix::QReflect_ColorMatrix(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::ColorMatrix*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_ColorMatrix::~QReflect_ColorMatrix( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_ColorMatrix::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_ColorMatrix::createInstance( ){
osg::ref_ptr<osg::ColorMatrix> osg_ColorMatrix_ptr	;
osg_ColorMatrix_ptr = new osg::ColorMatrix ()	;
Instance o(PMOCGETMETACLASS("osg::ColorMatrix"),(void*)osg_ColorMatrix_ptr.get()		,true);
_managedinstances.insert(osg_ColorMatrix_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_ColorMatrix::MetaQReflect_ColorMatrix():MetaQQuickClass( "osg::ColorMatrix"){
_typeid=&typeid(osg::ColorMatrix );           qRegisterMetaType<QMLColorMatrix>();
qmlRegisterType<QReflect_ColorMatrix>("pmoc.osg",1,0,"QReflect_ColorMatrix");
           qmlRegisterType<QMLColorMatrix>("pmoc.osg",1,0,"QMLColorMatrix");
};
const std::string osg::MetaQReflect_ColorMatrix::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_ColorMatrix::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_ColorMatrix::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_ColorMatrix::createQQModel(Instance*i){ //return new MetaQReflect_ColorMatrix_QModel(i);}
QMLColorMatrix *ret =new QMLColorMatrix(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::StateAttribute *mother =dynamic_cast<osg::StateAttribute*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::StateAttribute");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::StateAttribute model for osg::ColorMatrixis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::StateAttribute");
if(!cl){std::cerr<<"osg::StateAttribute QQModel for osg::ColorMatrixis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_ColorMatrix_pmoc.cpp"
#endif



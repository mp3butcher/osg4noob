#include <osg/LineSegment>
//includes
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/LineSegment_pmoc.hpp>
#include <customCode/osg/LineSegment_pmoc.hpp>
#include <customCode/osg/Referenced_pmoc.hpp>
#include <customCode/osg/LineSegment_pmoc.hpp>
#include <customCode/osg/Matrixd_pmoc.hpp>
using namespace pmoc;
 bool  osg::QReflect_LineSegment::valid()const{
return _model->valid();

}
 void osg::QReflect_LineSegment::mult(osg::QReflect_LineSegment *p0 ,osg::QReflect_Matrixd *p1){
 _model->mult(*p0->_model ,*p1->_model);

}
 void osg::QReflect_LineSegment::mult(osg::QReflect_Matrixd *p0 ,osg::QReflect_LineSegment *p1){
 _model->mult(*p0->_model ,*p1->_model);

}

///DefaultConstructor////////////////
osg::QReflect_LineSegment::QReflect_LineSegment(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::LineSegment*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_LineSegment::~QReflect_LineSegment( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_LineSegment::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_LineSegment::createInstance( ){
osg::ref_ptr<osg::LineSegment> osg_LineSegment_ptr	;
osg_LineSegment_ptr = new osg::LineSegment ()	;
Instance o(PMOCGETMETACLASS("osg::LineSegment"),(void*)osg_LineSegment_ptr.get()		,true);
_managedinstances.insert(osg_LineSegment_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_LineSegment::MetaQReflect_LineSegment():MetaQQuickClass( "osg::LineSegment"){
_typeid=&typeid(osg::LineSegment );           qRegisterMetaType<QMLLineSegment>();
qmlRegisterType<QReflect_LineSegment>("pmoc.osg",1,0,"QReflect_LineSegment");
           qmlRegisterType<QMLLineSegment>("pmoc.osg",1,0,"QMLLineSegment");
};
const std::string osg::MetaQReflect_LineSegment::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_LineSegment::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_LineSegment::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_LineSegment::createQQModel(Instance*i){ //return new MetaQReflect_LineSegment_QModel(i);}
QMLLineSegment *ret =new QMLLineSegment(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::Referenced *mother =dynamic_cast<osg::Referenced*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::Referenced");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::Referenced model for osg::LineSegmentis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::Referenced");
if(!cl){std::cerr<<"osg::Referenced QQModel for osg::LineSegmentis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_LineSegment_pmoc.cpp"
#endif



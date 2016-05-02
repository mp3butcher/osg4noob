#include <osg/Projection>
//includes

#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/Projection_pmoc.hpp>
#include <customCode/osg/Projection_pmoc.hpp>
#include <customCode/osg/Group_pmoc.hpp>
#include <customCode/osg/Matrixd_pmoc.hpp>
using namespace pmoc;
 void osg::QReflect_Projection::postMult(osg::QReflect_Matrixd  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Projection::postMult : parameter n.0 is NULL\n"<<endl;return;}
 _model->postMult(*p0->_model);

}
 void osg::QReflect_Projection::preMult(osg::QReflect_Matrixd  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Projection::preMult : parameter n.0 is NULL\n"<<endl;return;}
 _model->preMult(*p0->_model);

}
 void osg::QReflect_Projection::setMatrix(osg::QReflect_Matrixd  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Projection::setMatrix : parameter n.0 is NULL\n"<<endl;return;}
 _model->setMatrix(*p0->_model);

}

///DefaultConstructor////////////////
osg::QReflect_Projection::QReflect_Projection(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::Projection*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_Projection::~QReflect_Projection( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_Projection::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_Projection::createInstance( ){
osg::ref_ptr<osg::Projection> osg_Projection_ptr	;
osg_Projection_ptr = new osg::Projection ()	;
Instance o(PMOCGETMETACLASS("osg::Projection"),(void*)osg_Projection_ptr.get()		,true);
_managedinstances.insert(osg_Projection_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_Projection::MetaQReflect_Projection():MetaQQuickClass( "osg::Projection"){
_typeid=&typeid(osg::Projection );
           qRegisterMetaType<osg::QMLProjection>();
           qRegisterMetaType<osg::QMLProjection*>("pmoc.osg.QMLProjection");
qmlRegisterType<osg::QReflect_Projection>("pmoc.osg",1,0,"QReflect_Projection");
           qmlRegisterType<osg::QMLProjection>("pmoc.osg",1,0,"QMLProjection");
};
const std::string osg::MetaQReflect_Projection::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_Projection::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_Projection::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_Projection::createQQModel(const Instance*i){ //return new MetaQReflect_Projection_QModel(i);}
QMLProjection *ret =new QMLProjection(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::Group *mother =dynamic_cast<osg::Group*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::Group");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::Group model for osg::Projectionis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::Group");
if(!cl){std::cerr<<"osg::Group QQModel for osg::Projectionis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Projection_pmoc.cpp"
#endif





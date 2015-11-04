#include <osg/ComputeBoundsVisitor>
//includes
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/ComputeBoundsVisitor_pmoc.hpp>
#include <customCode/osg/ComputeBoundsVisitor_pmoc.hpp>
#include <customCode/osg/NodeVisitor_pmoc.hpp>
using namespace pmoc;
 void osg::QReflect_ComputeBoundsVisitor::popMatrix(){
 _model->popMatrix();

}
 void osg::QReflect_ComputeBoundsVisitor::reset(){
 _model->reset();

}

///DefaultConstructor////////////////
osg::QReflect_ComputeBoundsVisitor::QReflect_ComputeBoundsVisitor(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =dynamic_cast<osg::ComputeBoundsVisitor*>(reinterpret_cast<osg::Referenced*>(i->ptr));
 if(!_model)  _model =dynamic_cast<osg::ComputeBoundsVisitor*>(reinterpret_cast<osg::Object*>(i->ptr));
 if(!_model)  _model =reinterpret_cast<osg::ComputeBoundsVisitor*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_ComputeBoundsVisitor::~QReflect_ComputeBoundsVisitor( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_ComputeBoundsVisitor::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_ComputeBoundsVisitor::createInstance( ){
osg::ref_ptr<osg::ComputeBoundsVisitor> osg_ComputeBoundsVisitor_ptr	;
osg_ComputeBoundsVisitor_ptr = new osg::ComputeBoundsVisitor ()	;
Instance o(PMOCGETMETACLASS("osg::ComputeBoundsVisitor"),(void*)dynamic_cast<osg::Object*>( osg_ComputeBoundsVisitor_ptr.get()		),true);
_managedinstances.insert(osg_ComputeBoundsVisitor_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_ComputeBoundsVisitor::MetaQReflect_ComputeBoundsVisitor():MetaQQuickClass( "osg::ComputeBoundsVisitor"){
_typeid=&typeid(osg::ComputeBoundsVisitor );           qRegisterMetaType<QMLComputeBoundsVisitor>();
qmlRegisterType<QReflect_ComputeBoundsVisitor>("pmoc.osg",1,0,"QReflect_ComputeBoundsVisitor");
           qmlRegisterType<QMLComputeBoundsVisitor>("pmoc.osg",1,0,"QMLComputeBoundsVisitor");
};
const std::string osg::MetaQReflect_ComputeBoundsVisitor::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_ComputeBoundsVisitor::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_ComputeBoundsVisitor::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_ComputeBoundsVisitor::createQQModel(Instance*i){ //return new MetaQReflect_ComputeBoundsVisitor_QModel(i);}
QMLComputeBoundsVisitor *ret =new QMLComputeBoundsVisitor(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::NodeVisitor *mother =dynamic_cast<osg::NodeVisitor*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::NodeVisitor");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::NodeVisitor model for osg::ComputeBoundsVisitoris invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::NodeVisitor");
if(!cl){std::cerr<<"osg::NodeVisitor QQModel for osg::ComputeBoundsVisitoris not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_ComputeBoundsVisitor_pmoc.cpp"
#endif




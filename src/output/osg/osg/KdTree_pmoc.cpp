#include <osg/KdTree>
//includes

#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/KdTree_pmoc.hpp>
#include <customCode/osg/KdTree_pmoc.hpp>
#include <customCode/osg/Shape_pmoc.hpp>
using namespace pmoc;

///DefaultConstructor////////////////
osg::QReflect_KdTree::QReflect_KdTree(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::KdTree*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_KdTree::~QReflect_KdTree( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_KdTree::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_KdTree::createInstance( ){
osg::ref_ptr<osg::KdTree> osg_KdTree_ptr	;
osg_KdTree_ptr = new osg::KdTree ()	;
Instance o(PMOCGETMETACLASS("osg::KdTree"),(void*)osg_KdTree_ptr.get()		,true);
_managedinstances.insert(osg_KdTree_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_KdTree::MetaQReflect_KdTree():MetaQQuickClass( "osg::KdTree"){
_typeid=&typeid(osg::KdTree );           qRegisterMetaType<QMLKdTree>();
qmlRegisterType<QReflect_KdTree>("pmoc.osg",1,0,"QReflect_KdTree");
           qmlRegisterType<QMLKdTree>("pmoc.osg",1,0,"QMLKdTree");
};
const std::string osg::MetaQReflect_KdTree::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_KdTree::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_KdTree::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_KdTree::createQQModel(Instance*i){ //return new MetaQReflect_KdTree_QModel(i);}
QMLKdTree *ret =new QMLKdTree(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::Shape *mother =dynamic_cast<osg::Shape*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::Shape");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::Shape model for osg::KdTreeis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::Shape");
if(!cl){std::cerr<<"osg::Shape QQModel for osg::KdTreeis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_KdTree_pmoc.cpp"
#endif
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/KdTree_pmoc.hpp>
#include <customCode/osg/KdTree_pmoc.hpp>
#include <customCode/osg/NodeVisitor_pmoc.hpp>
#include <customCode/osg/Geometry_pmoc.hpp>
using namespace pmoc;
 void osg::QReflect_KdTreeBuilder::apply(osg::QReflect_Geometry *p0){
 _model->apply(*p0->_model);

}
osg::QReflect_KdTreeBuilder*osg::QReflect_KdTreeBuilder::clone(){
PMOCSAFEADDOBJECT(*_model->clone(),inst);
return inst.isValid()?((osg::QReflect_KdTreeBuilder * )inst.model->createQQModel(&inst)):NULL;
}

///DefaultConstructor////////////////
osg::QReflect_KdTreeBuilder::QReflect_KdTreeBuilder(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =dynamic_cast<osg::KdTreeBuilder*>(reinterpret_cast<osg::Referenced*>(i->ptr));
 if(!_model)  _model =dynamic_cast<osg::KdTreeBuilder*>(reinterpret_cast<osg::Object*>(i->ptr));
 if(!_model)  _model =reinterpret_cast<osg::KdTreeBuilder*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_KdTreeBuilder::~QReflect_KdTreeBuilder( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_KdTreeBuilder::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_KdTreeBuilder::createInstance( ){
osg::ref_ptr<osg::KdTreeBuilder> osg_KdTreeBuilder_ptr	;
osg_KdTreeBuilder_ptr = new osg::KdTreeBuilder ()	;
Instance o(PMOCGETMETACLASS("osg::KdTreeBuilder"),(void*)dynamic_cast<osg::Object*>( osg_KdTreeBuilder_ptr.get()		),true);
_managedinstances.insert(osg_KdTreeBuilder_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_KdTreeBuilder::MetaQReflect_KdTreeBuilder():MetaQQuickClass( "osg::KdTreeBuilder"){
_typeid=&typeid(osg::KdTreeBuilder );           qRegisterMetaType<QMLKdTreeBuilder>();
qmlRegisterType<QReflect_KdTreeBuilder>("pmoc.osg",1,0,"QReflect_KdTreeBuilder");
           qmlRegisterType<QMLKdTreeBuilder>("pmoc.osg",1,0,"QMLKdTreeBuilder");
};
const std::string osg::MetaQReflect_KdTreeBuilder::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_KdTreeBuilder::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_KdTreeBuilder::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_KdTreeBuilder::createQQModel(Instance*i){ //return new MetaQReflect_KdTreeBuilder_QModel(i);}
QMLKdTreeBuilder *ret =new QMLKdTreeBuilder(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::NodeVisitor *mother =dynamic_cast<osg::NodeVisitor*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::NodeVisitor");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::NodeVisitor model for osg::KdTreeBuilderis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::NodeVisitor");
if(!cl){std::cerr<<"osg::NodeVisitor QQModel for osg::KdTreeBuilderis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_KdTree_pmoc.cpp"
#endif





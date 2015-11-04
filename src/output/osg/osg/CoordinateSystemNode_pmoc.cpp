#include <osg/CoordinateSystemNode>
//includes
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/CoordinateSystemNode_pmoc.hpp>
#include <customCode/osg/CoordinateSystemNode_pmoc.hpp>
#include <customCode/osg/Group_pmoc.hpp>
#include <customCode/osg/CoordinateSystemNode_pmoc.hpp>
#include <osg/CoordinateSystemNode>
#include <osg/CoordinateSystemNode_pmoc.hpp>
using namespace pmoc;
 void osg::QReflect_CoordinateSystemNode::set(osg::QReflect_CoordinateSystemNode *p0){
 _model->set(*p0->_model);

}
const QString osg::QReflect_CoordinateSystemNode::getCoordinateSystem()const{return QString(_model->getCoordinateSystem().c_str());}
const QString osg::QReflect_CoordinateSystemNode::getFormat()const{return QString(_model->getFormat().c_str());}
osg::QReflect_EllipsoidModel * osg::QReflect_CoordinateSystemNode::getEllipsoidModel()const{
PMOCSAFEADDOBJECT(*_model->getEllipsoidModel(),inst);
return inst.isValid()?((osg::QReflect_EllipsoidModel * )inst.model->createQQModel(&inst)):NULL;
}
void osg::QReflect_CoordinateSystemNode::pmoc_reverse_setEllipsoidModel( osg::QReflect_EllipsoidModel *par){_model->setEllipsoidModel(NULL);
emit EllipsoidModelChanged(NULL);
}
void osg::QReflect_CoordinateSystemNode::setCoordinateSystem(const QString &par){_model->setCoordinateSystem(par.toStdString());emit CoordinateSystemChanged(par);}
void osg::QReflect_CoordinateSystemNode::setEllipsoidModel( osg::QReflect_EllipsoidModel *par){_model->setEllipsoidModel(par->_model);
emit EllipsoidModelChanged(par);
}
void osg::QReflect_CoordinateSystemNode::setFormat(const QString &par){_model->setFormat(par.toStdString());emit FormatChanged(par);}

///DefaultConstructor////////////////
osg::QReflect_CoordinateSystemNode::QReflect_CoordinateSystemNode(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::CoordinateSystemNode*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_CoordinateSystemNode::~QReflect_CoordinateSystemNode( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_CoordinateSystemNode::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_CoordinateSystemNode::createInstance( ){
osg::ref_ptr<osg::CoordinateSystemNode> osg_CoordinateSystemNode_ptr	;
osg_CoordinateSystemNode_ptr = new osg::CoordinateSystemNode ()	;
Instance o(PMOCGETMETACLASS("osg::CoordinateSystemNode"),(void*)osg_CoordinateSystemNode_ptr.get()		,true);
_managedinstances.insert(osg_CoordinateSystemNode_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_CoordinateSystemNode::MetaQReflect_CoordinateSystemNode():MetaQQuickClass( "osg::CoordinateSystemNode"){
_typeid=&typeid(osg::CoordinateSystemNode );           qRegisterMetaType<QMLCoordinateSystemNode>();
qmlRegisterType<QReflect_CoordinateSystemNode>("pmoc.osg",1,0,"QReflect_CoordinateSystemNode");
           qmlRegisterType<QMLCoordinateSystemNode>("pmoc.osg",1,0,"QMLCoordinateSystemNode");
       PMOCACTION("getEllipsoidModel","setEllipsoidModel","unsetEllipsoidModel");
};
const std::string osg::MetaQReflect_CoordinateSystemNode::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_CoordinateSystemNode::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_CoordinateSystemNode::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_CoordinateSystemNode::createQQModel(Instance*i){ //return new MetaQReflect_CoordinateSystemNode_QModel(i);}
QMLCoordinateSystemNode *ret =new QMLCoordinateSystemNode(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::Group *mother =dynamic_cast<osg::Group*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::Group");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::Group model for osg::CoordinateSystemNodeis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::Group");
if(!cl){std::cerr<<"osg::Group QQModel for osg::CoordinateSystemNodeis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_CoordinateSystemNode_pmoc.cpp"
#endif
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/CoordinateSystemNode_pmoc.hpp>
#include <customCode/osg/CoordinateSystemNode_pmoc.hpp>
#include <customCode/osg/Object_pmoc.hpp>
using namespace pmoc;
 bool  osg::QReflect_EllipsoidModel::isWGS84()const{
return _model->isWGS84();

}
const double osg::QReflect_EllipsoidModel::getRadiusEquator()const{return _model->getRadiusEquator();}
const double osg::QReflect_EllipsoidModel::getRadiusPolar()const{return _model->getRadiusPolar();}
void  osg::QReflect_EllipsoidModel::setRadiusEquator(const double &par){_model->setRadiusEquator(par);emit RadiusEquatorChanged(par);}
void  osg::QReflect_EllipsoidModel::setRadiusPolar(const double &par){_model->setRadiusPolar(par);emit RadiusPolarChanged(par);}

///DefaultConstructor////////////////
osg::QReflect_EllipsoidModel::QReflect_EllipsoidModel(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::EllipsoidModel*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_EllipsoidModel::~QReflect_EllipsoidModel( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_EllipsoidModel::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_EllipsoidModel::createInstance( ){
osg::ref_ptr<osg::EllipsoidModel> osg_EllipsoidModel_ptr	;
osg_EllipsoidModel_ptr = new osg::EllipsoidModel ()	;
Instance o(PMOCGETMETACLASS("osg::EllipsoidModel"),(void*)osg_EllipsoidModel_ptr.get()		,true);
_managedinstances.insert(osg_EllipsoidModel_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_EllipsoidModel::MetaQReflect_EllipsoidModel():MetaQQuickClass( "osg::EllipsoidModel"){
_typeid=&typeid(osg::EllipsoidModel );           qRegisterMetaType<QMLEllipsoidModel>();
qmlRegisterType<QReflect_EllipsoidModel>("pmoc.osg",1,0,"QReflect_EllipsoidModel");
           qmlRegisterType<QMLEllipsoidModel>("pmoc.osg",1,0,"QMLEllipsoidModel");
};
const std::string osg::MetaQReflect_EllipsoidModel::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_EllipsoidModel::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_EllipsoidModel::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_EllipsoidModel::createQQModel(Instance*i){ //return new MetaQReflect_EllipsoidModel_QModel(i);}
QMLEllipsoidModel *ret =new QMLEllipsoidModel(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::Object *mother =dynamic_cast<osg::Object*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::Object");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::Object model for osg::EllipsoidModelis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::Object");
if(!cl){std::cerr<<"osg::Object QQModel for osg::EllipsoidModelis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_CoordinateSystemNode_pmoc.cpp"
#endif




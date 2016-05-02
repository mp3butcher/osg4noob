#include <osg/CoordinateSystemNode>
//includes

#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/CoordinateSystemNode_pmoc.hpp>
#include <customCode/osg/CoordinateSystemNode_pmoc.hpp>
#include <customCode/osg/Group_pmoc.hpp>
#include <customCode/osg/CoordinateSystemNode_pmoc.hpp>
using namespace pmoc;
 void osg::QReflect_CoordinateSystemNode::set(osg::QReflect_CoordinateSystemNode  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_CoordinateSystemNode::set : parameter n.0 is NULL\n"<<endl;return;}
 _model->set(*p0->_model);

}
 void osg::QReflect_CoordinateSystemNode::setCoordinateSystem(const  QString  &p0){
//params checking
 _model->setCoordinateSystem(std::string(p0.toStdString()));
emit CoordinateSystemChanged();

}
 void osg::QReflect_CoordinateSystemNode::setEllipsoidModel(osg::QReflect_EllipsoidModel  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_CoordinateSystemNode::setEllipsoidModel : parameter n.0 is NULL\n"<<endl;return;}
 _model->setEllipsoidModel(p0->_model);
emit EllipsoidModelChanged();

}
 void osg::QReflect_CoordinateSystemNode::setFormat(const  QString  &p0){
//params checking
 _model->setFormat(std::string(p0.toStdString()));
emit FormatChanged();

}
QString  osg::QReflect_CoordinateSystemNode::getCoordinateSystem()const{
//params checking
QString ret(_model->getCoordinateSystem().c_str());return ret;

}
QString  osg::QReflect_CoordinateSystemNode::getFormat()const{
//params checking
QString ret(_model->getFormat().c_str());return ret;

}
osg::QReflect_EllipsoidModel*osg::QReflect_CoordinateSystemNode::getEllipsoidModel()const{
//params checking
PMOCSAFEADDOBJECT(*_model->getEllipsoidModel(),inst);
return inst.isValid()?((osg::QReflect_EllipsoidModel * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_EllipsoidModel*osg::QReflect_CoordinateSystemNode::getEllipsoidModel(){
//params checking
PMOCSAFEADDOBJECT(*_model->getEllipsoidModel(),inst);
return inst.isValid()?((osg::QReflect_EllipsoidModel * )inst.model->createQQModel(&inst)):NULL;
}

///DefaultConstructor////////////////
osg::QReflect_CoordinateSystemNode::QReflect_CoordinateSystemNode(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
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
_typeid=&typeid(osg::CoordinateSystemNode );
           qRegisterMetaType<osg::QMLCoordinateSystemNode>();
           qRegisterMetaType<osg::QMLCoordinateSystemNode*>("pmoc.osg.QMLCoordinateSystemNode");
qmlRegisterType<osg::QReflect_CoordinateSystemNode>("pmoc.osg",1,0,"QReflect_CoordinateSystemNode");
           qmlRegisterType<osg::QMLCoordinateSystemNode>("pmoc.osg",1,0,"QMLCoordinateSystemNode");
};
const std::string osg::MetaQReflect_CoordinateSystemNode::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_CoordinateSystemNode::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_CoordinateSystemNode::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_CoordinateSystemNode::createQQModel(const Instance*i){ //return new MetaQReflect_CoordinateSystemNode_QModel(i);}
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
#include <customCode/osg/CoordinateSystemNode_pmoc.hpp>
#include <customCode/osg/Matrixd_pmoc.hpp>
using namespace pmoc;
 bool  osg::QReflect_EllipsoidModel:: isWGS84()const{
//params checking
return _model->isWGS84();

}
 bool operator==(osg::QReflect_EllipsoidModel  &p0 ,osg::QReflect_EllipsoidModel  &p1){
//params checking
return *p0._model ==*p1._model;

}
 double  osg::QReflect_EllipsoidModel:: getRadiusEquator()const{
//params checking
return _model->getRadiusEquator();

}
 double  osg::QReflect_EllipsoidModel:: getRadiusPolar()const{
//params checking
return _model->getRadiusPolar();

}
 void osg::QReflect_EllipsoidModel::computeCoordinateFrame( double  p0 , double  p1 ,osg::QReflect_Matrixd  *p2)const{
//params checking
if(! p2) {std::cerr<<"PMOC: osg::QReflect_EllipsoidModel::computeCoordinateFrame : parameter n.2 is NULL\n"<<endl;return;}
 _model->computeCoordinateFrame(p0 ,p1 ,*p2->_model);

}
 void osg::QReflect_EllipsoidModel::computeLocalToWorldTransformFromLatLongHeight( double  p0 , double  p1 , double  p2 ,osg::QReflect_Matrixd  *p3)const{
//params checking
if(! p3) {std::cerr<<"PMOC: osg::QReflect_EllipsoidModel::computeLocalToWorldTransformFromLatLongHeight : parameter n.3 is NULL\n"<<endl;return;}
 _model->computeLocalToWorldTransformFromLatLongHeight(p0 ,p1 ,p2 ,*p3->_model);

}
 void osg::QReflect_EllipsoidModel::computeLocalToWorldTransformFromXYZ( double  p0 , double  p1 , double  p2 ,osg::QReflect_Matrixd  *p3)const{
//params checking
if(! p3) {std::cerr<<"PMOC: osg::QReflect_EllipsoidModel::computeLocalToWorldTransformFromXYZ : parameter n.3 is NULL\n"<<endl;return;}
 _model->computeLocalToWorldTransformFromXYZ(p0 ,p1 ,p2 ,*p3->_model);

}
 void osg::QReflect_EllipsoidModel::convertLatLongHeightToXYZ( double  p0 , double  p1 , double  p2 , double  &p3 , double  &p4 , double  &p5)const{
//params checking
 _model->convertLatLongHeightToXYZ(p0 ,p1 ,p2 ,p3 ,p4 ,p5);

}
 void osg::QReflect_EllipsoidModel::convertXYZToLatLongHeight( double  p0 , double  p1 , double  p2 , double  &p3 , double  &p4 , double  &p5)const{
//params checking
 _model->convertXYZToLatLongHeight(p0 ,p1 ,p2 ,p3 ,p4 ,p5);

}
 void osg::QReflect_EllipsoidModel::setRadiusEquator( double  p0){
//params checking
 _model->setRadiusEquator(p0);
emit RadiusEquatorChanged();

}
 void osg::QReflect_EllipsoidModel::setRadiusPolar( double  p0){
//params checking
 _model->setRadiusPolar(p0);
emit RadiusPolarChanged();

}

///DefaultConstructor////////////////
osg::QReflect_EllipsoidModel::QReflect_EllipsoidModel(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
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
_typeid=&typeid(osg::EllipsoidModel );
           qRegisterMetaType<osg::QMLEllipsoidModel>();
           qRegisterMetaType<osg::QMLEllipsoidModel*>("pmoc.osg.QMLEllipsoidModel");
qmlRegisterType<osg::QReflect_EllipsoidModel>("pmoc.osg",1,0,"QReflect_EllipsoidModel");
           qmlRegisterType<osg::QMLEllipsoidModel>("pmoc.osg",1,0,"QMLEllipsoidModel");
};
const std::string osg::MetaQReflect_EllipsoidModel::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_EllipsoidModel::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_EllipsoidModel::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_EllipsoidModel::createQQModel(const Instance*i){ //return new MetaQReflect_EllipsoidModel_QModel(i);}
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





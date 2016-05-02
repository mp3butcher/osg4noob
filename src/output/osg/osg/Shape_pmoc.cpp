#include <osg/Shape>
//includes

#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/Shape_pmoc.hpp>
#include <customCode/osg/Shape_pmoc.hpp>
#include <customCode/osg/Shape_pmoc.hpp>
#include <customCode/osg/Quat_pmoc.hpp>
#include <customCode/osg/Vec3f_pmoc.hpp>
using namespace pmoc;
 bool  osg::QReflect_Box:: valid()const{
//params checking
return _model->valid();

}
 bool  osg::QReflect_Box:: zeroRotation()const{
//params checking
return _model->zeroRotation();

}
 void osg::QReflect_Box::set(osg::QReflect_Vec3f  *p0 ,osg::QReflect_Vec3f  *p1){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Box::set : parameter n.0 is NULL\n"<<endl;return;}
if(! p1) {std::cerr<<"PMOC: osg::QReflect_Box::set : parameter n.1 is NULL\n"<<endl;return;}
 _model->set(*p0->_model ,*p1->_model);

}
 void osg::QReflect_Box::setCenter(osg::QReflect_Vec3f  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Box::setCenter : parameter n.0 is NULL\n"<<endl;return;}
 _model->setCenter(*p0->_model);

}
 void osg::QReflect_Box::setHalfLengths(osg::QReflect_Vec3f  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Box::setHalfLengths : parameter n.0 is NULL\n"<<endl;return;}
 _model->setHalfLengths(*p0->_model);

}
 void osg::QReflect_Box::setRotation(osg::QReflect_Quat  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Box::setRotation : parameter n.0 is NULL\n"<<endl;return;}
 _model->setRotation(*p0->_model);

}

///DefaultConstructor////////////////
osg::QReflect_Box::QReflect_Box(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::Box*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_Box::~QReflect_Box( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_Box::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_Box::createInstance( ){
osg::ref_ptr<osg::Box> osg_Box_ptr	;
osg_Box_ptr = new osg::Box ()	;
Instance o(PMOCGETMETACLASS("osg::Box"),(void*)osg_Box_ptr.get()		,true);
_managedinstances.insert(osg_Box_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_Box::MetaQReflect_Box():MetaQQuickClass( "osg::Box"){
_typeid=&typeid(osg::Box );
           qRegisterMetaType<osg::QMLBox>();
           qRegisterMetaType<osg::QMLBox*>("pmoc.osg.QMLBox");
qmlRegisterType<osg::QReflect_Box>("pmoc.osg",1,0,"QReflect_Box");
           qmlRegisterType<osg::QMLBox>("pmoc.osg",1,0,"QMLBox");
};
const std::string osg::MetaQReflect_Box::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_Box::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_Box::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_Box::createQQModel(const Instance*i){ //return new MetaQReflect_Box_QModel(i);}
QMLBox *ret =new QMLBox(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::Shape *mother =dynamic_cast<osg::Shape*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::Shape");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::Shape model for osg::Boxis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::Shape");
if(!cl){std::cerr<<"osg::Shape QQModel for osg::Boxis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Shape_pmoc.cpp"
#endif
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/Shape_pmoc.hpp>
#include <customCode/osg/Shape_pmoc.hpp>
#include <customCode/osg/Shape_pmoc.hpp>
#include <customCode/osg/Quat_pmoc.hpp>
#include <customCode/osg/Vec3f_pmoc.hpp>
using namespace pmoc;
 bool  osg::QReflect_Capsule:: valid()const{
//params checking
return _model->valid();

}
 bool  osg::QReflect_Capsule:: zeroRotation()const{
//params checking
return _model->zeroRotation();

}
 float  osg::QReflect_Capsule:: getHeight()const{
//params checking
return _model->getHeight();

}
 float  osg::QReflect_Capsule:: getRadius()const{
//params checking
return _model->getRadius();

}
 void osg::QReflect_Capsule::set(osg::QReflect_Vec3f  *p0 , float  p1 , float  p2){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Capsule::set : parameter n.0 is NULL\n"<<endl;return;}
 _model->set(*p0->_model ,p1 ,p2);

}
 void osg::QReflect_Capsule::setCenter(osg::QReflect_Vec3f  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Capsule::setCenter : parameter n.0 is NULL\n"<<endl;return;}
 _model->setCenter(*p0->_model);

}
 void osg::QReflect_Capsule::setHeight( float  p0){
//params checking
 _model->setHeight(p0);
emit HeightChanged();

}
 void osg::QReflect_Capsule::setRadius( float  p0){
//params checking
 _model->setRadius(p0);
emit RadiusChanged();

}
 void osg::QReflect_Capsule::setRotation(osg::QReflect_Quat  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Capsule::setRotation : parameter n.0 is NULL\n"<<endl;return;}
 _model->setRotation(*p0->_model);

}

///DefaultConstructor////////////////
osg::QReflect_Capsule::QReflect_Capsule(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::Capsule*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_Capsule::~QReflect_Capsule( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_Capsule::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_Capsule::createInstance( ){
osg::ref_ptr<osg::Capsule> osg_Capsule_ptr	;
osg_Capsule_ptr = new osg::Capsule ()	;
Instance o(PMOCGETMETACLASS("osg::Capsule"),(void*)osg_Capsule_ptr.get()		,true);
_managedinstances.insert(osg_Capsule_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_Capsule::MetaQReflect_Capsule():MetaQQuickClass( "osg::Capsule"){
_typeid=&typeid(osg::Capsule );
           qRegisterMetaType<osg::QMLCapsule>();
           qRegisterMetaType<osg::QMLCapsule*>("pmoc.osg.QMLCapsule");
qmlRegisterType<osg::QReflect_Capsule>("pmoc.osg",1,0,"QReflect_Capsule");
           qmlRegisterType<osg::QMLCapsule>("pmoc.osg",1,0,"QMLCapsule");
};
const std::string osg::MetaQReflect_Capsule::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_Capsule::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_Capsule::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_Capsule::createQQModel(const Instance*i){ //return new MetaQReflect_Capsule_QModel(i);}
QMLCapsule *ret =new QMLCapsule(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::Shape *mother =dynamic_cast<osg::Shape*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::Shape");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::Shape model for osg::Capsuleis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::Shape");
if(!cl){std::cerr<<"osg::Shape QQModel for osg::Capsuleis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Shape_pmoc.cpp"
#endif
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/Shape_pmoc.hpp>
#include <customCode/osg/Shape_pmoc.hpp>
#include <customCode/osg/Shape_pmoc.hpp>
#include <customCode/osg/Shape_pmoc.hpp>
using namespace pmoc;
 unsigned int  osg::QReflect_CompositeShape:: findChildNo(osg::QReflect_Shape  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_CompositeShape::findChildNo : parameter n.0 is NULL\n"<<endl;return -1;}
return _model->findChildNo(p0->_model);

}
 unsigned int  osg::QReflect_CompositeShape:: getNumChildren()const{
//params checking
return _model->getNumChildren();

}
 void osg::QReflect_CompositeShape::addChild(osg::QReflect_Shape  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_CompositeShape::addChild : parameter n.0 is NULL\n"<<endl;return;}
 _model->addChild(p0->_model);

}
 void osg::QReflect_CompositeShape::removeChild( unsigned int  p0){
//params checking
 _model->removeChild(p0);

}
 void osg::QReflect_CompositeShape::setShape(osg::QReflect_Shape  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_CompositeShape::setShape : parameter n.0 is NULL\n"<<endl;return;}
 _model->setShape(p0->_model);
emit ShapeChanged();

}
osg::QReflect_Shape*osg::QReflect_CompositeShape::getChild( unsigned int  p0)const{
//params checking
PMOCSAFEADDOBJECT(*_model->getChild(p0),inst);
return inst.isValid()?((osg::QReflect_Shape * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Shape*osg::QReflect_CompositeShape::getChild( unsigned int  p0){
//params checking
PMOCSAFEADDOBJECT(*_model->getChild(p0),inst);
return inst.isValid()?((osg::QReflect_Shape * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Shape*osg::QReflect_CompositeShape::getShape()const{
//params checking
PMOCSAFEADDOBJECT(*_model->getShape(),inst);
return inst.isValid()?((osg::QReflect_Shape * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Shape*osg::QReflect_CompositeShape::getShape(){
//params checking
PMOCSAFEADDOBJECT(*_model->getShape(),inst);
return inst.isValid()?((osg::QReflect_Shape * )inst.model->createQQModel(&inst)):NULL;
}

///DefaultConstructor////////////////
osg::QReflect_CompositeShape::QReflect_CompositeShape(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::CompositeShape*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_CompositeShape::~QReflect_CompositeShape( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_CompositeShape::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_CompositeShape::createInstance( ){
osg::ref_ptr<osg::CompositeShape> osg_CompositeShape_ptr	;
osg_CompositeShape_ptr = new osg::CompositeShape ()	;
Instance o(PMOCGETMETACLASS("osg::CompositeShape"),(void*)osg_CompositeShape_ptr.get()		,true);
_managedinstances.insert(osg_CompositeShape_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_CompositeShape::MetaQReflect_CompositeShape():MetaQQuickClass( "osg::CompositeShape"){
_typeid=&typeid(osg::CompositeShape );
           qRegisterMetaType<osg::QMLCompositeShape>();
           qRegisterMetaType<osg::QMLCompositeShape*>("pmoc.osg.QMLCompositeShape");
qmlRegisterType<osg::QReflect_CompositeShape>("pmoc.osg",1,0,"QReflect_CompositeShape");
           qmlRegisterType<osg::QMLCompositeShape>("pmoc.osg",1,0,"QMLCompositeShape");
};
const std::string osg::MetaQReflect_CompositeShape::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_CompositeShape::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_CompositeShape::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_CompositeShape::createQQModel(const Instance*i){ //return new MetaQReflect_CompositeShape_QModel(i);}
QMLCompositeShape *ret =new QMLCompositeShape(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::Shape *mother =dynamic_cast<osg::Shape*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::Shape");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::Shape model for osg::CompositeShapeis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::Shape");
if(!cl){std::cerr<<"osg::Shape QQModel for osg::CompositeShapeis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Shape_pmoc.cpp"
#endif
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/Shape_pmoc.hpp>
#include <customCode/osg/Shape_pmoc.hpp>
#include <customCode/osg/Shape_pmoc.hpp>
#include <customCode/osg/Quat_pmoc.hpp>
#include <customCode/osg/Vec3f_pmoc.hpp>
using namespace pmoc;
 bool  osg::QReflect_Cone:: valid()const{
//params checking
return _model->valid();

}
 bool  osg::QReflect_Cone:: zeroRotation()const{
//params checking
return _model->zeroRotation();

}
 float  osg::QReflect_Cone:: getBaseOffset()const{
//params checking
return _model->getBaseOffset();

}
 float  osg::QReflect_Cone:: getBaseOffsetFactor()const{
//params checking
return _model->getBaseOffsetFactor();

}
 float  osg::QReflect_Cone:: getHeight()const{
//params checking
return _model->getHeight();

}
 float  osg::QReflect_Cone:: getRadius()const{
//params checking
return _model->getRadius();

}
 void osg::QReflect_Cone::set(osg::QReflect_Vec3f  *p0 , float  p1 , float  p2){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Cone::set : parameter n.0 is NULL\n"<<endl;return;}
 _model->set(*p0->_model ,p1 ,p2);

}
 void osg::QReflect_Cone::setCenter(osg::QReflect_Vec3f  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Cone::setCenter : parameter n.0 is NULL\n"<<endl;return;}
 _model->setCenter(*p0->_model);

}
 void osg::QReflect_Cone::setHeight( float  p0){
//params checking
 _model->setHeight(p0);
emit HeightChanged();

}
 void osg::QReflect_Cone::setRadius( float  p0){
//params checking
 _model->setRadius(p0);
emit RadiusChanged();

}
 void osg::QReflect_Cone::setRotation(osg::QReflect_Quat  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Cone::setRotation : parameter n.0 is NULL\n"<<endl;return;}
 _model->setRotation(*p0->_model);

}

///DefaultConstructor////////////////
osg::QReflect_Cone::QReflect_Cone(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::Cone*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_Cone::~QReflect_Cone( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_Cone::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_Cone::createInstance( ){
osg::ref_ptr<osg::Cone> osg_Cone_ptr	;
osg_Cone_ptr = new osg::Cone ()	;
Instance o(PMOCGETMETACLASS("osg::Cone"),(void*)osg_Cone_ptr.get()		,true);
_managedinstances.insert(osg_Cone_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_Cone::MetaQReflect_Cone():MetaQQuickClass( "osg::Cone"){
_typeid=&typeid(osg::Cone );
           qRegisterMetaType<osg::QMLCone>();
           qRegisterMetaType<osg::QMLCone*>("pmoc.osg.QMLCone");
qmlRegisterType<osg::QReflect_Cone>("pmoc.osg",1,0,"QReflect_Cone");
           qmlRegisterType<osg::QMLCone>("pmoc.osg",1,0,"QMLCone");
};
const std::string osg::MetaQReflect_Cone::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_Cone::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_Cone::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_Cone::createQQModel(const Instance*i){ //return new MetaQReflect_Cone_QModel(i);}
QMLCone *ret =new QMLCone(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::Shape *mother =dynamic_cast<osg::Shape*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::Shape");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::Shape model for osg::Coneis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::Shape");
if(!cl){std::cerr<<"osg::Shape QQModel for osg::Coneis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Shape_pmoc.cpp"
#endif
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/Shape_pmoc.hpp>
#include <customCode/osg/Shape_pmoc.hpp>
#include <customCode/osg/Shape_pmoc.hpp>
using namespace pmoc;
 void osg::QReflect_ConstShapeVisitor::apply(osg::QReflect_Box  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_ConstShapeVisitor::apply : parameter n.0 is NULL\n"<<endl;return;}
 _model->apply(*p0->_model);

}
 void osg::QReflect_ConstShapeVisitor::apply(osg::QReflect_Capsule  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_ConstShapeVisitor::apply : parameter n.0 is NULL\n"<<endl;return;}
 _model->apply(*p0->_model);

}
 void osg::QReflect_ConstShapeVisitor::apply(osg::QReflect_CompositeShape  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_ConstShapeVisitor::apply : parameter n.0 is NULL\n"<<endl;return;}
 _model->apply(*p0->_model);

}
 void osg::QReflect_ConstShapeVisitor::apply(osg::QReflect_Cone  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_ConstShapeVisitor::apply : parameter n.0 is NULL\n"<<endl;return;}
 _model->apply(*p0->_model);

}
 void osg::QReflect_ConstShapeVisitor::apply(osg::QReflect_ConvexHull  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_ConstShapeVisitor::apply : parameter n.0 is NULL\n"<<endl;return;}
 _model->apply(*p0->_model);

}
 void osg::QReflect_ConstShapeVisitor::apply(osg::QReflect_Cylinder  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_ConstShapeVisitor::apply : parameter n.0 is NULL\n"<<endl;return;}
 _model->apply(*p0->_model);

}
 void osg::QReflect_ConstShapeVisitor::apply(osg::QReflect_HeightField  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_ConstShapeVisitor::apply : parameter n.0 is NULL\n"<<endl;return;}
 _model->apply(*p0->_model);

}
 void osg::QReflect_ConstShapeVisitor::apply(osg::QReflect_InfinitePlane  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_ConstShapeVisitor::apply : parameter n.0 is NULL\n"<<endl;return;}
 _model->apply(*p0->_model);

}
 void osg::QReflect_ConstShapeVisitor::apply(osg::QReflect_Shape  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_ConstShapeVisitor::apply : parameter n.0 is NULL\n"<<endl;return;}
 _model->apply(*p0->_model);

}
 void osg::QReflect_ConstShapeVisitor::apply(osg::QReflect_Sphere  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_ConstShapeVisitor::apply : parameter n.0 is NULL\n"<<endl;return;}
 _model->apply(*p0->_model);

}
 void osg::QReflect_ConstShapeVisitor::apply(osg::QReflect_TriangleMesh  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_ConstShapeVisitor::apply : parameter n.0 is NULL\n"<<endl;return;}
 _model->apply(*p0->_model);

}

///DefaultConstructor////////////////
osg::QReflect_ConstShapeVisitor::QReflect_ConstShapeVisitor(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::ConstShapeVisitor*>(i->ptr);
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_ConstShapeVisitor::~QReflect_ConstShapeVisitor( ){
 }
///update this according _model new state
void osg::QReflect_ConstShapeVisitor::updateModel(){
}
Instance osg::MetaQReflect_ConstShapeVisitor::createInstance( ){
osg::ConstShapeVisitor* osg_ConstShapeVisitor_ptr	;
osg_ConstShapeVisitor_ptr= new osg::ConstShapeVisitor()	;
Instance o(PMOCGETMETACLASS("osg::ConstShapeVisitor"),(void*)osg_ConstShapeVisitor_ptr	,true);
_managedinstances.insert(osg_ConstShapeVisitor_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_ConstShapeVisitor::MetaQReflect_ConstShapeVisitor():MetaQQuickClass( "osg::ConstShapeVisitor"){
_typeid=&typeid(osg::ConstShapeVisitor );
           qRegisterMetaType<osg::QMLConstShapeVisitor>();
           qRegisterMetaType<osg::QMLConstShapeVisitor*>("pmoc.osg.QMLConstShapeVisitor");
qmlRegisterType<osg::QReflect_ConstShapeVisitor>("pmoc.osg",1,0,"QReflect_ConstShapeVisitor");
           qmlRegisterType<osg::QMLConstShapeVisitor>("pmoc.osg",1,0,"QMLConstShapeVisitor");
};
const std::string osg::MetaQReflect_ConstShapeVisitor::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_ConstShapeVisitor::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_ConstShapeVisitor::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_ConstShapeVisitor::createQQModel(const Instance*i){ //return new MetaQReflect_ConstShapeVisitor_QModel(i);}
QMLConstShapeVisitor *ret =new QMLConstShapeVisitor(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Shape_pmoc.cpp"
#endif
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/Shape_pmoc.hpp>
#include <customCode/osg/Shape_pmoc.hpp>
#include <customCode/osg/Shape_pmoc.hpp>
using namespace pmoc;

///DefaultConstructor////////////////
osg::QReflect_ConvexHull::QReflect_ConvexHull(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::ConvexHull*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_ConvexHull::~QReflect_ConvexHull( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_ConvexHull::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_ConvexHull::createInstance( ){
osg::ref_ptr<osg::ConvexHull> osg_ConvexHull_ptr	;
osg_ConvexHull_ptr = new osg::ConvexHull ()	;
Instance o(PMOCGETMETACLASS("osg::ConvexHull"),(void*)osg_ConvexHull_ptr.get()		,true);
_managedinstances.insert(osg_ConvexHull_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_ConvexHull::MetaQReflect_ConvexHull():MetaQQuickClass( "osg::ConvexHull"){
_typeid=&typeid(osg::ConvexHull );
           qRegisterMetaType<osg::QMLConvexHull>();
           qRegisterMetaType<osg::QMLConvexHull*>("pmoc.osg.QMLConvexHull");
qmlRegisterType<osg::QReflect_ConvexHull>("pmoc.osg",1,0,"QReflect_ConvexHull");
           qmlRegisterType<osg::QMLConvexHull>("pmoc.osg",1,0,"QMLConvexHull");
};
const std::string osg::MetaQReflect_ConvexHull::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_ConvexHull::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_ConvexHull::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_ConvexHull::createQQModel(const Instance*i){ //return new MetaQReflect_ConvexHull_QModel(i);}
QMLConvexHull *ret =new QMLConvexHull(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::TriangleMesh *mother =dynamic_cast<osg::TriangleMesh*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::TriangleMesh");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::TriangleMesh model for osg::ConvexHullis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::TriangleMesh");
if(!cl){std::cerr<<"osg::TriangleMesh QQModel for osg::ConvexHullis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Shape_pmoc.cpp"
#endif
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/Shape_pmoc.hpp>
#include <customCode/osg/Shape_pmoc.hpp>
#include <customCode/osg/Shape_pmoc.hpp>
#include <customCode/osg/Quat_pmoc.hpp>
#include <customCode/osg/Vec3f_pmoc.hpp>
using namespace pmoc;
 bool  osg::QReflect_Cylinder:: valid()const{
//params checking
return _model->valid();

}
 bool  osg::QReflect_Cylinder:: zeroRotation()const{
//params checking
return _model->zeroRotation();

}
 float  osg::QReflect_Cylinder:: getHeight()const{
//params checking
return _model->getHeight();

}
 float  osg::QReflect_Cylinder:: getRadius()const{
//params checking
return _model->getRadius();

}
 void osg::QReflect_Cylinder::set(osg::QReflect_Vec3f  *p0 , float  p1 , float  p2){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Cylinder::set : parameter n.0 is NULL\n"<<endl;return;}
 _model->set(*p0->_model ,p1 ,p2);

}
 void osg::QReflect_Cylinder::setCenter(osg::QReflect_Vec3f  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Cylinder::setCenter : parameter n.0 is NULL\n"<<endl;return;}
 _model->setCenter(*p0->_model);

}
 void osg::QReflect_Cylinder::setHeight( float  p0){
//params checking
 _model->setHeight(p0);
emit HeightChanged();

}
 void osg::QReflect_Cylinder::setRadius( float  p0){
//params checking
 _model->setRadius(p0);
emit RadiusChanged();

}
 void osg::QReflect_Cylinder::setRotation(osg::QReflect_Quat  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Cylinder::setRotation : parameter n.0 is NULL\n"<<endl;return;}
 _model->setRotation(*p0->_model);

}

///DefaultConstructor////////////////
osg::QReflect_Cylinder::QReflect_Cylinder(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::Cylinder*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_Cylinder::~QReflect_Cylinder( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_Cylinder::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_Cylinder::createInstance( ){
osg::ref_ptr<osg::Cylinder> osg_Cylinder_ptr	;
osg_Cylinder_ptr = new osg::Cylinder ()	;
Instance o(PMOCGETMETACLASS("osg::Cylinder"),(void*)osg_Cylinder_ptr.get()		,true);
_managedinstances.insert(osg_Cylinder_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_Cylinder::MetaQReflect_Cylinder():MetaQQuickClass( "osg::Cylinder"){
_typeid=&typeid(osg::Cylinder );
           qRegisterMetaType<osg::QMLCylinder>();
           qRegisterMetaType<osg::QMLCylinder*>("pmoc.osg.QMLCylinder");
qmlRegisterType<osg::QReflect_Cylinder>("pmoc.osg",1,0,"QReflect_Cylinder");
           qmlRegisterType<osg::QMLCylinder>("pmoc.osg",1,0,"QMLCylinder");
};
const std::string osg::MetaQReflect_Cylinder::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_Cylinder::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_Cylinder::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_Cylinder::createQQModel(const Instance*i){ //return new MetaQReflect_Cylinder_QModel(i);}
QMLCylinder *ret =new QMLCylinder(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::Shape *mother =dynamic_cast<osg::Shape*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::Shape");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::Shape model for osg::Cylinderis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::Shape");
if(!cl){std::cerr<<"osg::Shape QQModel for osg::Cylinderis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Shape_pmoc.cpp"
#endif
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/Shape_pmoc.hpp>
#include <customCode/osg/Shape_pmoc.hpp>
#include <customCode/osg/Shape_pmoc.hpp>
#include <customCode/osg/Quat_pmoc.hpp>
#include <customCode/osg/Vec3f_pmoc.hpp>
using namespace pmoc;
 bool  osg::QReflect_HeightField:: zeroRotation()const{
//params checking
return _model->zeroRotation();

}
 float  osg::QReflect_HeightField:: getHeight( unsigned int  p0 , unsigned int  p1)const{
//params checking
return _model->getHeight(p0 ,p1);

}
 float  osg::QReflect_HeightField:: getSkirtHeight()const{
//params checking
return _model->getSkirtHeight();

}
 float  osg::QReflect_HeightField:: getXInterval()const{
//params checking
return _model->getXInterval();

}
 float  osg::QReflect_HeightField:: getYInterval()const{
//params checking
return _model->getYInterval();

}
 float&  osg::QReflect_HeightField:: getHeight( unsigned int  p0 , unsigned int  p1){
//params checking
return _model->getHeight(p0 ,p1);

}
 unsigned int  osg::QReflect_HeightField:: getBorderWidth()const{
//params checking
return _model->getBorderWidth();

}
 unsigned int  osg::QReflect_HeightField:: getNumColumns()const{
//params checking
return _model->getNumColumns();

}
 unsigned int  osg::QReflect_HeightField:: getNumRows()const{
//params checking
return _model->getNumRows();

}
 void osg::QReflect_HeightField::allocate( unsigned int  p0 , unsigned int  p1){
//params checking
 _model->allocate(p0 ,p1);

}
 void osg::QReflect_HeightField::setBorderWidth( unsigned int  p0){
//params checking
 _model->setBorderWidth(p0);
emit BorderWidthChanged();

}
 void osg::QReflect_HeightField::setHeight( unsigned int  p0 , unsigned int  p1 , float  p2){
//params checking
 _model->setHeight(p0 ,p1 ,p2);

}
 void osg::QReflect_HeightField::setOrigin(osg::QReflect_Vec3f  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_HeightField::setOrigin : parameter n.0 is NULL\n"<<endl;return;}
 _model->setOrigin(*p0->_model);

}
 void osg::QReflect_HeightField::setRotation(osg::QReflect_Quat  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_HeightField::setRotation : parameter n.0 is NULL\n"<<endl;return;}
 _model->setRotation(*p0->_model);

}
 void osg::QReflect_HeightField::setSkirtHeight( float  p0){
//params checking
 _model->setSkirtHeight(p0);
emit SkirtHeightChanged();

}
 void osg::QReflect_HeightField::setXInterval( float  p0){
//params checking
 _model->setXInterval(p0);
emit XIntervalChanged();

}
 void osg::QReflect_HeightField::setYInterval( float  p0){
//params checking
 _model->setYInterval(p0);
emit YIntervalChanged();

}

///DefaultConstructor////////////////
osg::QReflect_HeightField::QReflect_HeightField(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::HeightField*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_HeightField::~QReflect_HeightField( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_HeightField::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_HeightField::createInstance( ){
osg::ref_ptr<osg::HeightField> osg_HeightField_ptr	;
osg_HeightField_ptr = new osg::HeightField ()	;
Instance o(PMOCGETMETACLASS("osg::HeightField"),(void*)osg_HeightField_ptr.get()		,true);
_managedinstances.insert(osg_HeightField_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_HeightField::MetaQReflect_HeightField():MetaQQuickClass( "osg::HeightField"){
_typeid=&typeid(osg::HeightField );
           qRegisterMetaType<osg::QMLHeightField>();
           qRegisterMetaType<osg::QMLHeightField*>("pmoc.osg.QMLHeightField");
qmlRegisterType<osg::QReflect_HeightField>("pmoc.osg",1,0,"QReflect_HeightField");
           qmlRegisterType<osg::QMLHeightField>("pmoc.osg",1,0,"QMLHeightField");
};
const std::string osg::MetaQReflect_HeightField::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_HeightField::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_HeightField::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_HeightField::createQQModel(const Instance*i){ //return new MetaQReflect_HeightField_QModel(i);}
QMLHeightField *ret =new QMLHeightField(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::Shape *mother =dynamic_cast<osg::Shape*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::Shape");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::Shape model for osg::HeightFieldis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::Shape");
if(!cl){std::cerr<<"osg::Shape QQModel for osg::HeightFieldis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Shape_pmoc.cpp"
#endif
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/Shape_pmoc.hpp>
#include <customCode/osg/Shape_pmoc.hpp>
#include <customCode/osg/Plane_pmoc.hpp>
#include <customCode/osg/Shape_pmoc.hpp>
using namespace pmoc;

///DefaultConstructor////////////////
osg::QReflect_InfinitePlane::QReflect_InfinitePlane(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::InfinitePlane*>(i->ptr);
    _parentboxes[0]=0;
    _parentboxes[1]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_InfinitePlane::~QReflect_InfinitePlane( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
	if(_parentboxes[1])
delete _parentboxes[1];
}
///update this according _model new state
void osg::QReflect_InfinitePlane::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
	if(_parentboxes[1])
_parentboxes[1]->updateModel();
}
Instance osg::MetaQReflect_InfinitePlane::createInstance( ){
osg::ref_ptr<osg::InfinitePlane> osg_InfinitePlane_ptr	;
osg_InfinitePlane_ptr = new osg::InfinitePlane ()	;
Instance o(PMOCGETMETACLASS("osg::InfinitePlane"),(void*)osg_InfinitePlane_ptr.get()		,true);
_managedinstances.insert(osg_InfinitePlane_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_InfinitePlane::MetaQReflect_InfinitePlane():MetaQQuickClass( "osg::InfinitePlane"){
_typeid=&typeid(osg::InfinitePlane );
           qRegisterMetaType<osg::QMLInfinitePlane>();
           qRegisterMetaType<osg::QMLInfinitePlane*>("pmoc.osg.QMLInfinitePlane");
qmlRegisterType<osg::QReflect_InfinitePlane>("pmoc.osg",1,0,"QReflect_InfinitePlane");
           qmlRegisterType<osg::QMLInfinitePlane>("pmoc.osg",1,0,"QMLInfinitePlane");
};
const std::string osg::MetaQReflect_InfinitePlane::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_InfinitePlane::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_InfinitePlane::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_InfinitePlane::createQQModel(const Instance*i){ //return new MetaQReflect_InfinitePlane_QModel(i);}
QMLInfinitePlane *ret =new QMLInfinitePlane(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::Plane *mother =dynamic_cast<osg::Plane*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::Plane");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::Plane model for osg::InfinitePlaneis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::Plane");
if(!cl){std::cerr<<"osg::Plane QQModel for osg::InfinitePlaneis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
{
osg::Shape *mother =dynamic_cast<osg::Shape*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::Shape");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::Shape model for osg::InfinitePlaneis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::Shape");
if(!cl){std::cerr<<"osg::Shape QQModel for osg::InfinitePlaneis not found"<<std::endl;return ret;}
ret->_parentboxes[1]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Shape_pmoc.cpp"
#endif
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/Shape_pmoc.hpp>
#include <customCode/osg/Shape_pmoc.hpp>
#include <customCode/osg/Object_pmoc.hpp>
#include <customCode/osg/Object_pmoc.hpp>
using namespace pmoc;
 bool  osg::QReflect_Shape:: isSameKindAs(osg::QReflect_Object  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Shape::isSameKindAs : parameter n.0 is NULL\n"<<endl;return -1;}
return _model->isSameKindAs(p0->_model);

}
const  char*  osg::QReflect_Shape:: className()const{
//params checking
return _model->className();

}
const  char*  osg::QReflect_Shape:: libraryName()const{
//params checking
return _model->libraryName();

}

///DefaultConstructor////////////////
osg::QReflect_Shape::QReflect_Shape(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::Shape*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_Shape::~QReflect_Shape( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_Shape::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_Shape::createInstance( ){
std::cerr<<"osg::Shape is not instanciable"<<std::endl;return Instance();


}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_Shape::MetaQReflect_Shape():MetaQQuickClass( "osg::Shape"){
_typeid=&typeid(osg::Shape );
           qRegisterMetaType<osg::QMLShape>();
           qRegisterMetaType<osg::QMLShape*>("pmoc.osg.QMLShape");
qmlRegisterType<osg::QReflect_Shape>("pmoc.osg",1,0,"QReflect_Shape");
           qmlRegisterType<osg::QMLShape>("pmoc.osg",1,0,"QMLShape");
};
const std::string osg::MetaQReflect_Shape::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_Shape::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_Shape::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_Shape::createQQModel(const Instance*i){ //return new MetaQReflect_Shape_QModel(i);}
QMLShape *ret =new QMLShape(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::Object *mother =dynamic_cast<osg::Object*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::Object");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::Object model for osg::Shapeis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::Object");
if(!cl){std::cerr<<"osg::Object QQModel for osg::Shapeis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Shape_pmoc.cpp"
#endif
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/Shape_pmoc.hpp>
#include <customCode/osg/Shape_pmoc.hpp>
#include <customCode/osg/Shape_pmoc.hpp>
using namespace pmoc;
 void osg::QReflect_ShapeVisitor::apply(osg::QReflect_Box  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_ShapeVisitor::apply : parameter n.0 is NULL\n"<<endl;return;}
 _model->apply(*p0->_model);

}
 void osg::QReflect_ShapeVisitor::apply(osg::QReflect_Capsule  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_ShapeVisitor::apply : parameter n.0 is NULL\n"<<endl;return;}
 _model->apply(*p0->_model);

}
 void osg::QReflect_ShapeVisitor::apply(osg::QReflect_CompositeShape  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_ShapeVisitor::apply : parameter n.0 is NULL\n"<<endl;return;}
 _model->apply(*p0->_model);

}
 void osg::QReflect_ShapeVisitor::apply(osg::QReflect_Cone  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_ShapeVisitor::apply : parameter n.0 is NULL\n"<<endl;return;}
 _model->apply(*p0->_model);

}
 void osg::QReflect_ShapeVisitor::apply(osg::QReflect_ConvexHull  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_ShapeVisitor::apply : parameter n.0 is NULL\n"<<endl;return;}
 _model->apply(*p0->_model);

}
 void osg::QReflect_ShapeVisitor::apply(osg::QReflect_Cylinder  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_ShapeVisitor::apply : parameter n.0 is NULL\n"<<endl;return;}
 _model->apply(*p0->_model);

}
 void osg::QReflect_ShapeVisitor::apply(osg::QReflect_HeightField  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_ShapeVisitor::apply : parameter n.0 is NULL\n"<<endl;return;}
 _model->apply(*p0->_model);

}
 void osg::QReflect_ShapeVisitor::apply(osg::QReflect_InfinitePlane  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_ShapeVisitor::apply : parameter n.0 is NULL\n"<<endl;return;}
 _model->apply(*p0->_model);

}
 void osg::QReflect_ShapeVisitor::apply(osg::QReflect_Shape  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_ShapeVisitor::apply : parameter n.0 is NULL\n"<<endl;return;}
 _model->apply(*p0->_model);

}
 void osg::QReflect_ShapeVisitor::apply(osg::QReflect_Sphere  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_ShapeVisitor::apply : parameter n.0 is NULL\n"<<endl;return;}
 _model->apply(*p0->_model);

}
 void osg::QReflect_ShapeVisitor::apply(osg::QReflect_TriangleMesh  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_ShapeVisitor::apply : parameter n.0 is NULL\n"<<endl;return;}
 _model->apply(*p0->_model);

}

///DefaultConstructor////////////////
osg::QReflect_ShapeVisitor::QReflect_ShapeVisitor(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::ShapeVisitor*>(i->ptr);
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_ShapeVisitor::~QReflect_ShapeVisitor( ){
 }
///update this according _model new state
void osg::QReflect_ShapeVisitor::updateModel(){
}
Instance osg::MetaQReflect_ShapeVisitor::createInstance( ){
osg::ShapeVisitor* osg_ShapeVisitor_ptr	;
osg_ShapeVisitor_ptr= new osg::ShapeVisitor()	;
Instance o(PMOCGETMETACLASS("osg::ShapeVisitor"),(void*)osg_ShapeVisitor_ptr	,true);
_managedinstances.insert(osg_ShapeVisitor_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_ShapeVisitor::MetaQReflect_ShapeVisitor():MetaQQuickClass( "osg::ShapeVisitor"){
_typeid=&typeid(osg::ShapeVisitor );
           qRegisterMetaType<osg::QMLShapeVisitor>();
           qRegisterMetaType<osg::QMLShapeVisitor*>("pmoc.osg.QMLShapeVisitor");
qmlRegisterType<osg::QReflect_ShapeVisitor>("pmoc.osg",1,0,"QReflect_ShapeVisitor");
           qmlRegisterType<osg::QMLShapeVisitor>("pmoc.osg",1,0,"QMLShapeVisitor");
};
const std::string osg::MetaQReflect_ShapeVisitor::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_ShapeVisitor::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_ShapeVisitor::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_ShapeVisitor::createQQModel(const Instance*i){ //return new MetaQReflect_ShapeVisitor_QModel(i);}
QMLShapeVisitor *ret =new QMLShapeVisitor(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Shape_pmoc.cpp"
#endif
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/Shape_pmoc.hpp>
#include <customCode/osg/Shape_pmoc.hpp>
#include <customCode/osg/Shape_pmoc.hpp>
#include <customCode/osg/Vec3f_pmoc.hpp>
using namespace pmoc;
 bool  osg::QReflect_Sphere:: valid()const{
//params checking
return _model->valid();

}
 float  osg::QReflect_Sphere:: getRadius()const{
//params checking
return _model->getRadius();

}
 void osg::QReflect_Sphere::set(osg::QReflect_Vec3f  *p0 , float  p1){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Sphere::set : parameter n.0 is NULL\n"<<endl;return;}
 _model->set(*p0->_model ,p1);

}
 void osg::QReflect_Sphere::setCenter(osg::QReflect_Vec3f  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Sphere::setCenter : parameter n.0 is NULL\n"<<endl;return;}
 _model->setCenter(*p0->_model);

}
 void osg::QReflect_Sphere::setRadius( float  p0){
//params checking
 _model->setRadius(p0);
emit RadiusChanged();

}

///DefaultConstructor////////////////
osg::QReflect_Sphere::QReflect_Sphere(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::Sphere*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_Sphere::~QReflect_Sphere( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_Sphere::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_Sphere::createInstance( ){
osg::ref_ptr<osg::Sphere> osg_Sphere_ptr	;
osg_Sphere_ptr = new osg::Sphere ()	;
Instance o(PMOCGETMETACLASS("osg::Sphere"),(void*)osg_Sphere_ptr.get()		,true);
_managedinstances.insert(osg_Sphere_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_Sphere::MetaQReflect_Sphere():MetaQQuickClass( "osg::Sphere"){
_typeid=&typeid(osg::Sphere );
           qRegisterMetaType<osg::QMLSphere>();
           qRegisterMetaType<osg::QMLSphere*>("pmoc.osg.QMLSphere");
qmlRegisterType<osg::QReflect_Sphere>("pmoc.osg",1,0,"QReflect_Sphere");
           qmlRegisterType<osg::QMLSphere>("pmoc.osg",1,0,"QMLSphere");
};
const std::string osg::MetaQReflect_Sphere::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_Sphere::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_Sphere::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_Sphere::createQQModel(const Instance*i){ //return new MetaQReflect_Sphere_QModel(i);}
QMLSphere *ret =new QMLSphere(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::Shape *mother =dynamic_cast<osg::Shape*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::Shape");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::Shape model for osg::Sphereis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::Shape");
if(!cl){std::cerr<<"osg::Shape QQModel for osg::Sphereis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Shape_pmoc.cpp"
#endif
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/Shape_pmoc.hpp>
#include <customCode/osg/Shape_pmoc.hpp>
#include <customCode/osg/Shape_pmoc.hpp>
#include <customCode/osg/Array_pmoc.hpp>
using namespace pmoc;
 void osg::QReflect_TriangleMesh::setIndices(osg::QReflect_IndexArray  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_TriangleMesh::setIndices : parameter n.0 is NULL\n"<<endl;return;}
 _model->setIndices(p0->_model);
emit IndicesChanged();

}
osg::QReflect_IndexArray*osg::QReflect_TriangleMesh::getIndices()const{
//params checking
PMOCSAFEADDOBJECT(*_model->getIndices(),inst);
return inst.isValid()?((osg::QReflect_IndexArray * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_IndexArray*osg::QReflect_TriangleMesh::getIndices(){
//params checking
PMOCSAFEADDOBJECT(*_model->getIndices(),inst);
return inst.isValid()?((osg::QReflect_IndexArray * )inst.model->createQQModel(&inst)):NULL;
}

///DefaultConstructor////////////////
osg::QReflect_TriangleMesh::QReflect_TriangleMesh(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::TriangleMesh*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_TriangleMesh::~QReflect_TriangleMesh( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_TriangleMesh::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_TriangleMesh::createInstance( ){
osg::ref_ptr<osg::TriangleMesh> osg_TriangleMesh_ptr	;
osg_TriangleMesh_ptr = new osg::TriangleMesh ()	;
Instance o(PMOCGETMETACLASS("osg::TriangleMesh"),(void*)osg_TriangleMesh_ptr.get()		,true);
_managedinstances.insert(osg_TriangleMesh_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_TriangleMesh::MetaQReflect_TriangleMesh():MetaQQuickClass( "osg::TriangleMesh"){
_typeid=&typeid(osg::TriangleMesh );
           qRegisterMetaType<osg::QMLTriangleMesh>();
           qRegisterMetaType<osg::QMLTriangleMesh*>("pmoc.osg.QMLTriangleMesh");
qmlRegisterType<osg::QReflect_TriangleMesh>("pmoc.osg",1,0,"QReflect_TriangleMesh");
           qmlRegisterType<osg::QMLTriangleMesh>("pmoc.osg",1,0,"QMLTriangleMesh");
};
const std::string osg::MetaQReflect_TriangleMesh::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_TriangleMesh::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_TriangleMesh::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_TriangleMesh::createQQModel(const Instance*i){ //return new MetaQReflect_TriangleMesh_QModel(i);}
QMLTriangleMesh *ret =new QMLTriangleMesh(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::Shape *mother =dynamic_cast<osg::Shape*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::Shape");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::Shape model for osg::TriangleMeshis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::Shape");
if(!cl){std::cerr<<"osg::Shape QQModel for osg::TriangleMeshis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Shape_pmoc.cpp"
#endif





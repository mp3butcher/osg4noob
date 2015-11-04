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
 bool  osg::QReflect_Box::valid()const{
return _model->valid();

}
 bool  osg::QReflect_Box::zeroRotation()const{
return _model->zeroRotation();

}
 void osg::QReflect_Box::set(osg::QReflect_Vec3f *p0 ,osg::QReflect_Vec3f *p1){
 _model->set(*p0->_model ,*p1->_model);

}
 void osg::QReflect_Box::setCenter(osg::QReflect_Vec3f *p0){
 _model->setCenter(*p0->_model);

}
 void osg::QReflect_Box::setHalfLengths(osg::QReflect_Vec3f *p0){
 _model->setHalfLengths(*p0->_model);

}
 void osg::QReflect_Box::setRotation(osg::QReflect_Quat *p0){
 _model->setRotation(*p0->_model);

}

///DefaultConstructor////////////////
osg::QReflect_Box::QReflect_Box(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
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
_typeid=&typeid(osg::Box );           qRegisterMetaType<QMLBox>();
qmlRegisterType<QReflect_Box>("pmoc.osg",1,0,"QReflect_Box");
           qmlRegisterType<QMLBox>("pmoc.osg",1,0,"QMLBox");
};
const std::string osg::MetaQReflect_Box::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_Box::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_Box::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_Box::createQQModel(Instance*i){ //return new MetaQReflect_Box_QModel(i);}
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
 bool  osg::QReflect_Capsule::valid()const{
return _model->valid();

}
 bool  osg::QReflect_Capsule::zeroRotation()const{
return _model->zeroRotation();

}
 void osg::QReflect_Capsule::set(osg::QReflect_Vec3f *p0 , float p1 , float p2){
 _model->set(*p0->_model ,p1 ,p2);

}
 void osg::QReflect_Capsule::setCenter(osg::QReflect_Vec3f *p0){
 _model->setCenter(*p0->_model);

}
 void osg::QReflect_Capsule::setRotation(osg::QReflect_Quat *p0){
 _model->setRotation(*p0->_model);

}
const float osg::QReflect_Capsule::getHeight()const{return _model->getHeight();}
const float osg::QReflect_Capsule::getRadius()const{return _model->getRadius();}
void  osg::QReflect_Capsule::setHeight(const float &par){_model->setHeight(par);emit HeightChanged(par);}
void  osg::QReflect_Capsule::setRadius(const float &par){_model->setRadius(par);emit RadiusChanged(par);}

///DefaultConstructor////////////////
osg::QReflect_Capsule::QReflect_Capsule(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
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
_typeid=&typeid(osg::Capsule );           qRegisterMetaType<QMLCapsule>();
qmlRegisterType<QReflect_Capsule>("pmoc.osg",1,0,"QReflect_Capsule");
           qmlRegisterType<QMLCapsule>("pmoc.osg",1,0,"QMLCapsule");
};
const std::string osg::MetaQReflect_Capsule::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_Capsule::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_Capsule::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_Capsule::createQQModel(Instance*i){ //return new MetaQReflect_Capsule_QModel(i);}
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
#include <osg/Shape>
#include <osg/Shape_pmoc.hpp>
using namespace pmoc;
 unsigned int  osg::QReflect_CompositeShape::findChildNo(osg::QReflect_Shape *p0)const{
return _model->findChildNo(p0->_model);

}
 unsigned int  osg::QReflect_CompositeShape::getNumChildren()const{
return _model->getNumChildren();

}
 void osg::QReflect_CompositeShape::addChild(osg::QReflect_Shape *p0){
 _model->addChild(p0->_model);

}
 void osg::QReflect_CompositeShape::removeChild( unsigned int p0){
 _model->removeChild(p0);

}
osg::QReflect_Shape * osg::QReflect_CompositeShape::getShape()const{
PMOCSAFEADDOBJECT(*_model->getShape(),inst);
return inst.isValid()?((osg::QReflect_Shape * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Shape*osg::QReflect_CompositeShape::getChild( unsigned int p0)const{
PMOCSAFEADDOBJECT(*_model->getChild(p0),inst);
return inst.isValid()?((osg::QReflect_Shape * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Shape*osg::QReflect_CompositeShape::getChild( unsigned int p0){
PMOCSAFEADDOBJECT(*_model->getChild(p0),inst);
return inst.isValid()?((osg::QReflect_Shape * )inst.model->createQQModel(&inst)):NULL;
}
void osg::QReflect_CompositeShape::pmoc_reverse_setShape( osg::QReflect_Shape *par){_model->setShape(NULL);
emit ShapeChanged(NULL);
}
void osg::QReflect_CompositeShape::setShape( osg::QReflect_Shape *par){_model->setShape(par->_model);
emit ShapeChanged(par);
}

///DefaultConstructor////////////////
osg::QReflect_CompositeShape::QReflect_CompositeShape(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
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
_typeid=&typeid(osg::CompositeShape );           qRegisterMetaType<QMLCompositeShape>();
qmlRegisterType<QReflect_CompositeShape>("pmoc.osg",1,0,"QReflect_CompositeShape");
           qmlRegisterType<QMLCompositeShape>("pmoc.osg",1,0,"QMLCompositeShape");
       PMOCACTION("getShape","setShape","unsetShape");
};
const std::string osg::MetaQReflect_CompositeShape::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_CompositeShape::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_CompositeShape::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_CompositeShape::createQQModel(Instance*i){ //return new MetaQReflect_CompositeShape_QModel(i);}
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
 bool  osg::QReflect_Cone::valid()const{
return _model->valid();

}
 bool  osg::QReflect_Cone::zeroRotation()const{
return _model->zeroRotation();

}
 float  osg::QReflect_Cone::getBaseOffset()const{
return _model->getBaseOffset();

}
 float  osg::QReflect_Cone::getBaseOffsetFactor()const{
return _model->getBaseOffsetFactor();

}
 void osg::QReflect_Cone::set(osg::QReflect_Vec3f *p0 , float p1 , float p2){
 _model->set(*p0->_model ,p1 ,p2);

}
 void osg::QReflect_Cone::setCenter(osg::QReflect_Vec3f *p0){
 _model->setCenter(*p0->_model);

}
 void osg::QReflect_Cone::setRotation(osg::QReflect_Quat *p0){
 _model->setRotation(*p0->_model);

}
const float osg::QReflect_Cone::getHeight()const{return _model->getHeight();}
const float osg::QReflect_Cone::getRadius()const{return _model->getRadius();}
void  osg::QReflect_Cone::setHeight(const float &par){_model->setHeight(par);emit HeightChanged(par);}
void  osg::QReflect_Cone::setRadius(const float &par){_model->setRadius(par);emit RadiusChanged(par);}

///DefaultConstructor////////////////
osg::QReflect_Cone::QReflect_Cone(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
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
_typeid=&typeid(osg::Cone );           qRegisterMetaType<QMLCone>();
qmlRegisterType<QReflect_Cone>("pmoc.osg",1,0,"QReflect_Cone");
           qmlRegisterType<QMLCone>("pmoc.osg",1,0,"QMLCone");
};
const std::string osg::MetaQReflect_Cone::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_Cone::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_Cone::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_Cone::createQQModel(Instance*i){ //return new MetaQReflect_Cone_QModel(i);}
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
 void osg::QReflect_ConstShapeVisitor::apply(osg::QReflect_Box *p0){
 _model->apply(*p0->_model);

}
 void osg::QReflect_ConstShapeVisitor::apply(osg::QReflect_Capsule *p0){
 _model->apply(*p0->_model);

}
 void osg::QReflect_ConstShapeVisitor::apply(osg::QReflect_CompositeShape *p0){
 _model->apply(*p0->_model);

}
 void osg::QReflect_ConstShapeVisitor::apply(osg::QReflect_Cone *p0){
 _model->apply(*p0->_model);

}
 void osg::QReflect_ConstShapeVisitor::apply(osg::QReflect_ConvexHull *p0){
 _model->apply(*p0->_model);

}
 void osg::QReflect_ConstShapeVisitor::apply(osg::QReflect_Cylinder *p0){
 _model->apply(*p0->_model);

}
 void osg::QReflect_ConstShapeVisitor::apply(osg::QReflect_HeightField *p0){
 _model->apply(*p0->_model);

}
 void osg::QReflect_ConstShapeVisitor::apply(osg::QReflect_InfinitePlane *p0){
 _model->apply(*p0->_model);

}
 void osg::QReflect_ConstShapeVisitor::apply(osg::QReflect_Shape *p0){
 _model->apply(*p0->_model);

}
 void osg::QReflect_ConstShapeVisitor::apply(osg::QReflect_Sphere *p0){
 _model->apply(*p0->_model);

}
 void osg::QReflect_ConstShapeVisitor::apply(osg::QReflect_TriangleMesh *p0){
 _model->apply(*p0->_model);

}

///DefaultConstructor////////////////
osg::QReflect_ConstShapeVisitor::QReflect_ConstShapeVisitor(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
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
_typeid=&typeid(osg::ConstShapeVisitor );           qRegisterMetaType<QMLConstShapeVisitor>();
qmlRegisterType<QReflect_ConstShapeVisitor>("pmoc.osg",1,0,"QReflect_ConstShapeVisitor");
           qmlRegisterType<QMLConstShapeVisitor>("pmoc.osg",1,0,"QMLConstShapeVisitor");
};
const std::string osg::MetaQReflect_ConstShapeVisitor::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_ConstShapeVisitor::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_ConstShapeVisitor::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_ConstShapeVisitor::createQQModel(Instance*i){ //return new MetaQReflect_ConstShapeVisitor_QModel(i);}
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
osg::QReflect_ConvexHull::QReflect_ConvexHull(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
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
_typeid=&typeid(osg::ConvexHull );           qRegisterMetaType<QMLConvexHull>();
qmlRegisterType<QReflect_ConvexHull>("pmoc.osg",1,0,"QReflect_ConvexHull");
           qmlRegisterType<QMLConvexHull>("pmoc.osg",1,0,"QMLConvexHull");
};
const std::string osg::MetaQReflect_ConvexHull::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_ConvexHull::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_ConvexHull::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_ConvexHull::createQQModel(Instance*i){ //return new MetaQReflect_ConvexHull_QModel(i);}
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
 bool  osg::QReflect_Cylinder::valid()const{
return _model->valid();

}
 bool  osg::QReflect_Cylinder::zeroRotation()const{
return _model->zeroRotation();

}
 void osg::QReflect_Cylinder::set(osg::QReflect_Vec3f *p0 , float p1 , float p2){
 _model->set(*p0->_model ,p1 ,p2);

}
 void osg::QReflect_Cylinder::setCenter(osg::QReflect_Vec3f *p0){
 _model->setCenter(*p0->_model);

}
 void osg::QReflect_Cylinder::setRotation(osg::QReflect_Quat *p0){
 _model->setRotation(*p0->_model);

}
const float osg::QReflect_Cylinder::getHeight()const{return _model->getHeight();}
const float osg::QReflect_Cylinder::getRadius()const{return _model->getRadius();}
void  osg::QReflect_Cylinder::setHeight(const float &par){_model->setHeight(par);emit HeightChanged(par);}
void  osg::QReflect_Cylinder::setRadius(const float &par){_model->setRadius(par);emit RadiusChanged(par);}

///DefaultConstructor////////////////
osg::QReflect_Cylinder::QReflect_Cylinder(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
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
_typeid=&typeid(osg::Cylinder );           qRegisterMetaType<QMLCylinder>();
qmlRegisterType<QReflect_Cylinder>("pmoc.osg",1,0,"QReflect_Cylinder");
           qmlRegisterType<QMLCylinder>("pmoc.osg",1,0,"QMLCylinder");
};
const std::string osg::MetaQReflect_Cylinder::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_Cylinder::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_Cylinder::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_Cylinder::createQQModel(Instance*i){ //return new MetaQReflect_Cylinder_QModel(i);}
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
 bool  osg::QReflect_HeightField::zeroRotation()const{
return _model->zeroRotation();

}
 float  osg::QReflect_HeightField::getHeight( unsigned int p0 , unsigned int p1)const{
return _model->getHeight(p0 ,p1);

}
 float&  osg::QReflect_HeightField::getHeight( unsigned int p0 , unsigned int p1){
return _model->getHeight(p0 ,p1);

}
 unsigned int  osg::QReflect_HeightField::getNumColumns()const{
return _model->getNumColumns();

}
 unsigned int  osg::QReflect_HeightField::getNumRows()const{
return _model->getNumRows();

}
 void osg::QReflect_HeightField::allocate( unsigned int p0 , unsigned int p1){
 _model->allocate(p0 ,p1);

}
 void osg::QReflect_HeightField::setHeight( unsigned int p0 , unsigned int p1 , float p2){
 _model->setHeight(p0 ,p1 ,p2);

}
 void osg::QReflect_HeightField::setOrigin(osg::QReflect_Vec3f *p0){
 _model->setOrigin(*p0->_model);

}
 void osg::QReflect_HeightField::setRotation(osg::QReflect_Quat *p0){
 _model->setRotation(*p0->_model);

}
const float osg::QReflect_HeightField::getSkirtHeight()const{return _model->getSkirtHeight();}
const float osg::QReflect_HeightField::getXInterval()const{return _model->getXInterval();}
const float osg::QReflect_HeightField::getYInterval()const{return _model->getYInterval();}
const unsigned int osg::QReflect_HeightField::getBorderWidth()const{return _model->getBorderWidth();}
void  osg::QReflect_HeightField::setBorderWidth(const unsigned int &par){_model->setBorderWidth(par);emit BorderWidthChanged(par);}
void  osg::QReflect_HeightField::setSkirtHeight(const float &par){_model->setSkirtHeight(par);emit SkirtHeightChanged(par);}
void  osg::QReflect_HeightField::setXInterval(const float &par){_model->setXInterval(par);emit XIntervalChanged(par);}
void  osg::QReflect_HeightField::setYInterval(const float &par){_model->setYInterval(par);emit YIntervalChanged(par);}

///DefaultConstructor////////////////
osg::QReflect_HeightField::QReflect_HeightField(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
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
_typeid=&typeid(osg::HeightField );           qRegisterMetaType<QMLHeightField>();
qmlRegisterType<QReflect_HeightField>("pmoc.osg",1,0,"QReflect_HeightField");
           qmlRegisterType<QMLHeightField>("pmoc.osg",1,0,"QMLHeightField");
};
const std::string osg::MetaQReflect_HeightField::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_HeightField::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_HeightField::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_HeightField::createQQModel(Instance*i){ //return new MetaQReflect_HeightField_QModel(i);}
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
osg::QReflect_InfinitePlane::QReflect_InfinitePlane(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
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
_typeid=&typeid(osg::InfinitePlane );           qRegisterMetaType<QMLInfinitePlane>();
qmlRegisterType<QReflect_InfinitePlane>("pmoc.osg",1,0,"QReflect_InfinitePlane");
           qmlRegisterType<QMLInfinitePlane>("pmoc.osg",1,0,"QMLInfinitePlane");
};
const std::string osg::MetaQReflect_InfinitePlane::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_InfinitePlane::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_InfinitePlane::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_InfinitePlane::createQQModel(Instance*i){ //return new MetaQReflect_InfinitePlane_QModel(i);}
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
 bool  osg::QReflect_Shape::isSameKindAs(osg::QReflect_Object *p0)const{
return _model->isSameKindAs(p0->_model);

}
const  char*  osg::QReflect_Shape::className()const{
return _model->className();

}
const  char*  osg::QReflect_Shape::libraryName()const{
return _model->libraryName();

}

///DefaultConstructor////////////////
osg::QReflect_Shape::QReflect_Shape(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
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
_typeid=&typeid(osg::Shape );           qRegisterMetaType<QMLShape>();
qmlRegisterType<QReflect_Shape>("pmoc.osg",1,0,"QReflect_Shape");
           qmlRegisterType<QMLShape>("pmoc.osg",1,0,"QMLShape");
};
const std::string osg::MetaQReflect_Shape::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_Shape::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_Shape::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_Shape::createQQModel(Instance*i){ //return new MetaQReflect_Shape_QModel(i);}
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
using namespace pmoc;

///DefaultConstructor////////////////
osg::QReflect_ShapeVisitor::QReflect_ShapeVisitor(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
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
_typeid=&typeid(osg::ShapeVisitor );           qRegisterMetaType<QMLShapeVisitor>();
qmlRegisterType<QReflect_ShapeVisitor>("pmoc.osg",1,0,"QReflect_ShapeVisitor");
           qmlRegisterType<QMLShapeVisitor>("pmoc.osg",1,0,"QMLShapeVisitor");
};
const std::string osg::MetaQReflect_ShapeVisitor::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_ShapeVisitor::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_ShapeVisitor::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_ShapeVisitor::createQQModel(Instance*i){ //return new MetaQReflect_ShapeVisitor_QModel(i);}
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
 bool  osg::QReflect_Sphere::valid()const{
return _model->valid();

}
 void osg::QReflect_Sphere::set(osg::QReflect_Vec3f *p0 , float p1){
 _model->set(*p0->_model ,p1);

}
 void osg::QReflect_Sphere::setCenter(osg::QReflect_Vec3f *p0){
 _model->setCenter(*p0->_model);

}
const float osg::QReflect_Sphere::getRadius()const{return _model->getRadius();}
void  osg::QReflect_Sphere::setRadius(const float &par){_model->setRadius(par);emit RadiusChanged(par);}

///DefaultConstructor////////////////
osg::QReflect_Sphere::QReflect_Sphere(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
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
_typeid=&typeid(osg::Sphere );           qRegisterMetaType<QMLSphere>();
qmlRegisterType<QReflect_Sphere>("pmoc.osg",1,0,"QReflect_Sphere");
           qmlRegisterType<QMLSphere>("pmoc.osg",1,0,"QMLSphere");
};
const std::string osg::MetaQReflect_Sphere::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_Sphere::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_Sphere::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_Sphere::createQQModel(Instance*i){ //return new MetaQReflect_Sphere_QModel(i);}
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
#include <osg/Array>
#include <osg/Array_pmoc.hpp>
using namespace pmoc;
osg::QReflect_IndexArray * osg::QReflect_TriangleMesh::getIndices()const{
PMOCSAFEADDOBJECT(*_model->getIndices(),inst);
return inst.isValid()?((osg::QReflect_IndexArray * )inst.model->createQQModel(&inst)):NULL;
}
void osg::QReflect_TriangleMesh::pmoc_reverse_setIndices( osg::QReflect_IndexArray *par){_model->setIndices(NULL);
emit IndicesChanged(NULL);
}
void osg::QReflect_TriangleMesh::setIndices( osg::QReflect_IndexArray *par){_model->setIndices(par->_model);
emit IndicesChanged(par);
}

///DefaultConstructor////////////////
osg::QReflect_TriangleMesh::QReflect_TriangleMesh(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
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
_typeid=&typeid(osg::TriangleMesh );           qRegisterMetaType<QMLTriangleMesh>();
qmlRegisterType<QReflect_TriangleMesh>("pmoc.osg",1,0,"QReflect_TriangleMesh");
           qmlRegisterType<QMLTriangleMesh>("pmoc.osg",1,0,"QMLTriangleMesh");
       PMOCACTION("getIndices","setIndices","unsetIndices");
};
const std::string osg::MetaQReflect_TriangleMesh::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_TriangleMesh::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_TriangleMesh::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_TriangleMesh::createQQModel(Instance*i){ //return new MetaQReflect_TriangleMesh_QModel(i);}
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



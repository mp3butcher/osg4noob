#include <osg/Drawable>
//includes

#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/Drawable_pmoc.hpp>
#include <customCode/osg/Drawable_pmoc.hpp>
#include <customCode/osg/Array_pmoc.hpp>
#include <customCode/osg/Array_pmoc.hpp>
using namespace pmoc;
 void osg::QReflect_AttributeFunctorArrayVisitor::applyArray( unsigned int  p0 ,osg::QReflect_Array  *p1){
//params checking
if(! p1) {std::cerr<<"PMOC: osg::QReflect_AttributeFunctorArrayVisitor::applyArray : parameter n.1 is NULL\n"<<endl;return;}
 _model->applyArray(p0 ,p1->_model);

}

///DefaultConstructor////////////////
osg::QReflect_AttributeFunctorArrayVisitor::QReflect_AttributeFunctorArrayVisitor(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::AttributeFunctorArrayVisitor*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_AttributeFunctorArrayVisitor::~QReflect_AttributeFunctorArrayVisitor( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_AttributeFunctorArrayVisitor::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_AttributeFunctorArrayVisitor::createInstance( ){
std::cerr<<"osg::AttributeFunctorArrayVisitor is not instanciable"<<std::endl;return Instance();


}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_AttributeFunctorArrayVisitor::MetaQReflect_AttributeFunctorArrayVisitor():MetaQQuickClass( "osg::AttributeFunctorArrayVisitor"){
_typeid=&typeid(osg::AttributeFunctorArrayVisitor );
           qRegisterMetaType<osg::QMLAttributeFunctorArrayVisitor>();
           qRegisterMetaType<osg::QMLAttributeFunctorArrayVisitor*>("pmoc.osg.QMLAttributeFunctorArrayVisitor");
qmlRegisterType<osg::QReflect_AttributeFunctorArrayVisitor>("pmoc.osg",1,0,"QReflect_AttributeFunctorArrayVisitor");
           qmlRegisterType<osg::QMLAttributeFunctorArrayVisitor>("pmoc.osg",1,0,"QMLAttributeFunctorArrayVisitor");
};
const std::string osg::MetaQReflect_AttributeFunctorArrayVisitor::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_AttributeFunctorArrayVisitor::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_AttributeFunctorArrayVisitor::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_AttributeFunctorArrayVisitor::createQQModel(const Instance*i){ //return new MetaQReflect_AttributeFunctorArrayVisitor_QModel(i);}
QMLAttributeFunctorArrayVisitor *ret =new QMLAttributeFunctorArrayVisitor(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::ArrayVisitor *mother =dynamic_cast<osg::ArrayVisitor*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::ArrayVisitor");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::ArrayVisitor model for osg::AttributeFunctorArrayVisitoris invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::ArrayVisitor");
if(!cl){std::cerr<<"osg::ArrayVisitor QQModel for osg::AttributeFunctorArrayVisitoris not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Drawable_pmoc.cpp"
#endif
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/Drawable_pmoc.hpp>
#include <customCode/osg/Drawable_pmoc.hpp>
#include <customCode/osg/Array_pmoc.hpp>
#include <customCode/osg/Array_pmoc.hpp>
using namespace pmoc;
 void osg::QReflect_ConstAttributeFunctorArrayVisitor::applyArray( unsigned int  p0 ,osg::QReflect_Array  *p1){
//params checking
if(! p1) {std::cerr<<"PMOC: osg::QReflect_ConstAttributeFunctorArrayVisitor::applyArray : parameter n.1 is NULL\n"<<endl;return;}
 _model->applyArray(p0 ,p1->_model);

}

///DefaultConstructor////////////////
osg::QReflect_ConstAttributeFunctorArrayVisitor::QReflect_ConstAttributeFunctorArrayVisitor(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::ConstAttributeFunctorArrayVisitor*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_ConstAttributeFunctorArrayVisitor::~QReflect_ConstAttributeFunctorArrayVisitor( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_ConstAttributeFunctorArrayVisitor::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_ConstAttributeFunctorArrayVisitor::createInstance( ){
std::cerr<<"osg::ConstAttributeFunctorArrayVisitor is not instanciable"<<std::endl;return Instance();


}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_ConstAttributeFunctorArrayVisitor::MetaQReflect_ConstAttributeFunctorArrayVisitor():MetaQQuickClass( "osg::ConstAttributeFunctorArrayVisitor"){
_typeid=&typeid(osg::ConstAttributeFunctorArrayVisitor );
           qRegisterMetaType<osg::QMLConstAttributeFunctorArrayVisitor>();
           qRegisterMetaType<osg::QMLConstAttributeFunctorArrayVisitor*>("pmoc.osg.QMLConstAttributeFunctorArrayVisitor");
qmlRegisterType<osg::QReflect_ConstAttributeFunctorArrayVisitor>("pmoc.osg",1,0,"QReflect_ConstAttributeFunctorArrayVisitor");
           qmlRegisterType<osg::QMLConstAttributeFunctorArrayVisitor>("pmoc.osg",1,0,"QMLConstAttributeFunctorArrayVisitor");
};
const std::string osg::MetaQReflect_ConstAttributeFunctorArrayVisitor::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_ConstAttributeFunctorArrayVisitor::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_ConstAttributeFunctorArrayVisitor::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_ConstAttributeFunctorArrayVisitor::createQQModel(const Instance*i){ //return new MetaQReflect_ConstAttributeFunctorArrayVisitor_QModel(i);}
QMLConstAttributeFunctorArrayVisitor *ret =new QMLConstAttributeFunctorArrayVisitor(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::ConstArrayVisitor *mother =dynamic_cast<osg::ConstArrayVisitor*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::ConstArrayVisitor");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::ConstArrayVisitor model for osg::ConstAttributeFunctorArrayVisitoris invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::ConstArrayVisitor");
if(!cl){std::cerr<<"osg::ConstArrayVisitor QQModel for osg::ConstAttributeFunctorArrayVisitoris not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Drawable_pmoc.cpp"
#endif
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/Drawable_pmoc.hpp>
#include <customCode/osg/Drawable_pmoc.hpp>
#include <customCode/osg/Node_pmoc.hpp>
#include <customCode/osg/Drawable_pmoc.hpp>
#include <customCode/osg/PrimitiveSet_pmoc.hpp>
#include <customCode/osg/RenderInfo_pmoc.hpp>
#include <customCode/osg/Shape_pmoc.hpp>
#include <customCode/osg/State_pmoc.hpp>
using namespace pmoc;
 GLuint  osg::QReflect_Drawable:: generateDisplayList( unsigned int  p0 , unsigned int  p1){
//params checking
return _model->generateDisplayList(p0 ,p1);

}
 GLuint&  osg::QReflect_Drawable:: getDisplayList( unsigned int  p0)const{
//params checking
return _model->getDisplayList(p0);

}
 bool  osg::QReflect_Drawable:: getSupportsDisplayList()const{
//params checking
return _model->getSupportsDisplayList();

}
 bool  osg::QReflect_Drawable:: getUseDisplayList()const{
//params checking
return _model->getUseDisplayList();

}
 bool  osg::QReflect_Drawable:: getUseVertexBufferObjects()const{
//params checking
return _model->getUseVertexBufferObjects();

}
 bool  osg::QReflect_Drawable:: supports(osg::QReflect_PrimitiveFunctor  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Drawable::supports : parameter n.0 is NULL\n"<<endl;return -1;}
return _model->supports(*p0->_model);

}
 bool  osg::QReflect_Drawable:: supports(osg::QReflect_PrimitiveIndexFunctor  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Drawable::supports : parameter n.0 is NULL\n"<<endl;return -1;}
return _model->supports(*p0->_model);

}
 unsigned int  osg::QReflect_Drawable:: getGLObjectSizeHint()const{
//params checking
return _model->getGLObjectSizeHint();

}
 unsigned int  osg::QReflect_Drawable:: getMinimumNumberOfDisplayListsToRetainInCache(){
//params checking
return _model->getMinimumNumberOfDisplayListsToRetainInCache();

}
 void osg::QReflect_Drawable::accept(osg::QReflect_PrimitiveFunctor  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Drawable::accept : parameter n.0 is NULL\n"<<endl;return;}
 _model->accept(*p0->_model);

}
 void osg::QReflect_Drawable::accept(osg::QReflect_PrimitiveIndexFunctor  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Drawable::accept : parameter n.0 is NULL\n"<<endl;return;}
 _model->accept(*p0->_model);

}
 void osg::QReflect_Drawable::compileGLObjects(osg::QReflect_RenderInfo  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Drawable::compileGLObjects : parameter n.0 is NULL\n"<<endl;return;}
 _model->compileGLObjects(*p0->_model);

}
 void osg::QReflect_Drawable::computeDataVariance(){
//params checking
 _model->computeDataVariance();

}
 void osg::QReflect_Drawable::deleteDisplayList( unsigned int  p0 , GLuint  p1 , unsigned int  p2){
//params checking
 _model->deleteDisplayList(p0 ,p1 ,p2);

}
 void osg::QReflect_Drawable::dirtyDisplayList(){
//params checking
 _model->dirtyDisplayList();

}
 void osg::QReflect_Drawable::discardAllDeletedDisplayLists( unsigned int  p0){
//params checking
 _model->discardAllDeletedDisplayLists(p0);

}
 void osg::QReflect_Drawable::draw(osg::QReflect_RenderInfo  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Drawable::draw : parameter n.0 is NULL\n"<<endl;return;}
 _model->draw(*p0->_model);

}
 void osg::QReflect_Drawable::drawImplementation(osg::QReflect_RenderInfo  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Drawable::drawImplementation : parameter n.0 is NULL\n"<<endl;return;}
 _model->drawImplementation(*p0->_model);

}
 void osg::QReflect_Drawable::flushAllDeletedDisplayLists( unsigned int  p0){
//params checking
 _model->flushAllDeletedDisplayLists(p0);

}
 void osg::QReflect_Drawable::flushDeletedDisplayLists( unsigned int  p0 , double  &p1){
//params checking
 _model->flushDeletedDisplayLists(p0 ,p1);

}
 void osg::QReflect_Drawable::releaseGLObjects(osg::QReflect_State  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Drawable::releaseGLObjects : parameter n.0 is NULL\n"<<endl;return;}
 _model->releaseGLObjects(p0->_model);

}
 void osg::QReflect_Drawable::resizeGLObjectBuffers( unsigned int  p0){
//params checking
 _model->resizeGLObjectBuffers(p0);

}
 void osg::QReflect_Drawable::setMinimumNumberOfDisplayListsToRetainInCache( unsigned int  p0){
//params checking
 _model->setMinimumNumberOfDisplayListsToRetainInCache(p0);
emit MinimumNumberOfDisplayListsToRetainInCacheChanged();

}
 void osg::QReflect_Drawable::setShape(osg::QReflect_Shape  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Drawable::setShape : parameter n.0 is NULL\n"<<endl;return;}
 _model->setShape(p0->_model);
emit ShapeChanged();

}
 void osg::QReflect_Drawable::setSupportsDisplayList( bool  p0){
//params checking
 _model->setSupportsDisplayList(p0);
emit SupportsDisplayListChanged();

}
 void osg::QReflect_Drawable::setThreadSafeRefUnref( bool  p0){
//params checking
 _model->setThreadSafeRefUnref(p0);

}
 void osg::QReflect_Drawable::setUseDisplayList( bool  p0){
//params checking
 _model->setUseDisplayList(p0);
emit UseDisplayListChanged();

}
 void osg::QReflect_Drawable::setUseVertexBufferObjects( bool  p0){
//params checking
 _model->setUseVertexBufferObjects(p0);
emit UseVertexBufferObjectsChanged();

}
osg::QReflect_Drawable*osg::QReflect_Drawable::asDrawable()const{
//params checking
PMOCSAFEADDOBJECT(*_model->asDrawable(),inst);
return inst.isValid()?((osg::QReflect_Drawable * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Drawable*osg::QReflect_Drawable::asDrawable(){
//params checking
PMOCSAFEADDOBJECT(*_model->asDrawable(),inst);
return inst.isValid()?((osg::QReflect_Drawable * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Shape*osg::QReflect_Drawable::getShape()const{
//params checking
PMOCSAFEADDOBJECT(*_model->getShape(),inst);
return inst.isValid()?((osg::QReflect_Shape * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Shape*osg::QReflect_Drawable::getShape(){
//params checking
PMOCSAFEADDOBJECT(*_model->getShape(),inst);
return inst.isValid()?((osg::QReflect_Shape * )inst.model->createQQModel(&inst)):NULL;
}

///DefaultConstructor////////////////
osg::QReflect_Drawable::QReflect_Drawable(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::Drawable*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_Drawable::~QReflect_Drawable( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_Drawable::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_Drawable::createInstance( ){
osg::ref_ptr<osg::Drawable> osg_Drawable_ptr	;
osg_Drawable_ptr = new osg::Drawable ()	;
Instance o(PMOCGETMETACLASS("osg::Drawable"),(void*)osg_Drawable_ptr.get()		,true);
_managedinstances.insert(osg_Drawable_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_Drawable::MetaQReflect_Drawable():MetaQQuickClass( "osg::Drawable"){
_typeid=&typeid(osg::Drawable );
           qRegisterMetaType<osg::QMLDrawable>();
           qRegisterMetaType<osg::QMLDrawable*>("pmoc.osg.QMLDrawable");
qmlRegisterType<osg::QReflect_Drawable>("pmoc.osg",1,0,"QReflect_Drawable");
           qmlRegisterType<osg::QMLDrawable>("pmoc.osg",1,0,"QMLDrawable");
};
const std::string osg::MetaQReflect_Drawable::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_Drawable::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_Drawable::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_Drawable::createQQModel(const Instance*i){ //return new MetaQReflect_Drawable_QModel(i);}
QMLDrawable *ret =new QMLDrawable(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::Node *mother =dynamic_cast<osg::Node*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::Node");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::Node model for osg::Drawableis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::Node");
if(!cl){std::cerr<<"osg::Node QQModel for osg::Drawableis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Drawable_pmoc.cpp"
#endif





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
 void osg::QReflect_AttributeFunctorArrayVisitor::applyArray( unsigned int p0 ,osg::QReflect_Array *p1){
 _model->applyArray(p0 ,p1->_model);

}

///DefaultConstructor////////////////
osg::QReflect_AttributeFunctorArrayVisitor::QReflect_AttributeFunctorArrayVisitor(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
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
_typeid=&typeid(osg::AttributeFunctorArrayVisitor );           qRegisterMetaType<QMLAttributeFunctorArrayVisitor>();
qmlRegisterType<QReflect_AttributeFunctorArrayVisitor>("pmoc.osg",1,0,"QReflect_AttributeFunctorArrayVisitor");
           qmlRegisterType<QMLAttributeFunctorArrayVisitor>("pmoc.osg",1,0,"QMLAttributeFunctorArrayVisitor");
};
const std::string osg::MetaQReflect_AttributeFunctorArrayVisitor::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_AttributeFunctorArrayVisitor::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_AttributeFunctorArrayVisitor::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_AttributeFunctorArrayVisitor::createQQModel(Instance*i){ //return new MetaQReflect_AttributeFunctorArrayVisitor_QModel(i);}
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
 void osg::QReflect_ConstAttributeFunctorArrayVisitor::applyArray( unsigned int p0 ,osg::QReflect_Array *p1){
 _model->applyArray(p0 ,p1->_model);

}

///DefaultConstructor////////////////
osg::QReflect_ConstAttributeFunctorArrayVisitor::QReflect_ConstAttributeFunctorArrayVisitor(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
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
_typeid=&typeid(osg::ConstAttributeFunctorArrayVisitor );           qRegisterMetaType<QMLConstAttributeFunctorArrayVisitor>();
qmlRegisterType<QReflect_ConstAttributeFunctorArrayVisitor>("pmoc.osg",1,0,"QReflect_ConstAttributeFunctorArrayVisitor");
           qmlRegisterType<QMLConstAttributeFunctorArrayVisitor>("pmoc.osg",1,0,"QMLConstAttributeFunctorArrayVisitor");
};
const std::string osg::MetaQReflect_ConstAttributeFunctorArrayVisitor::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_ConstAttributeFunctorArrayVisitor::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_ConstAttributeFunctorArrayVisitor::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_ConstAttributeFunctorArrayVisitor::createQQModel(Instance*i){ //return new MetaQReflect_ConstAttributeFunctorArrayVisitor_QModel(i);}
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
#include <customCode/osg/PrimitiveSet_pmoc.hpp>
#include <customCode/osg/RenderInfo_pmoc.hpp>
#include <customCode/osg/Shape_pmoc.hpp>
#include <customCode/osg/State_pmoc.hpp>
#include <osg/Shape>
#include <osg/Shape_pmoc.hpp>
using namespace pmoc;
 bool  osg::QReflect_Drawable::supports(osg::QReflect_PrimitiveFunctor *p0)const{
return _model->supports(*p0->_model);

}
 bool  osg::QReflect_Drawable::supports(osg::QReflect_PrimitiveIndexFunctor *p0)const{
return _model->supports(*p0->_model);

}
 unsigned int  osg::QReflect_Drawable::getGLObjectSizeHint()const{
return _model->getGLObjectSizeHint();

}
 void osg::QReflect_Drawable::accept(osg::QReflect_PrimitiveFunctor *p0)const{
 _model->accept(*p0->_model);

}
 void osg::QReflect_Drawable::accept(osg::QReflect_PrimitiveIndexFunctor *p0)const{
 _model->accept(*p0->_model);

}
 void osg::QReflect_Drawable::compileGLObjects(osg::QReflect_RenderInfo *p0)const{
 _model->compileGLObjects(*p0->_model);

}
 void osg::QReflect_Drawable::computeDataVariance(){
 _model->computeDataVariance();

}
 void osg::QReflect_Drawable::dirtyDisplayList(){
 _model->dirtyDisplayList();

}
 void osg::QReflect_Drawable::draw(osg::QReflect_RenderInfo *p0)const{
 _model->draw(*p0->_model);

}
 void osg::QReflect_Drawable::drawImplementation(osg::QReflect_RenderInfo *p0)const{
 _model->drawImplementation(*p0->_model);

}
 void osg::QReflect_Drawable::releaseGLObjects(osg::QReflect_State *p0)const{
 _model->releaseGLObjects(p0->_model);

}
 void osg::QReflect_Drawable::resizeGLObjectBuffers( unsigned int p0){
 _model->resizeGLObjectBuffers(p0);

}
 void osg::QReflect_Drawable::setThreadSafeRefUnref( bool p0){
 _model->setThreadSafeRefUnref(p0);

}
const bool osg::QReflect_Drawable::getSupportsDisplayList()const{return _model->getSupportsDisplayList();}
const bool osg::QReflect_Drawable::getUseDisplayList()const{return _model->getUseDisplayList();}
const bool osg::QReflect_Drawable::getUseVertexBufferObjects()const{return _model->getUseVertexBufferObjects();}
const unsigned int osg::QReflect_Drawable::getMinimumNumberOfDisplayListsToRetainInCache()const{return _model->getMinimumNumberOfDisplayListsToRetainInCache();}
osg::QReflect_Drawable*osg::QReflect_Drawable::asDrawable()const{
PMOCSAFEADDOBJECT(*_model->asDrawable(),inst);
return inst.isValid()?((osg::QReflect_Drawable * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Drawable*osg::QReflect_Drawable::asDrawable(){
PMOCSAFEADDOBJECT(*_model->asDrawable(),inst);
return inst.isValid()?((osg::QReflect_Drawable * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Shape * osg::QReflect_Drawable::getShape()const{
PMOCSAFEADDOBJECT(*_model->getShape(),inst);
return inst.isValid()?((osg::QReflect_Shape * )inst.model->createQQModel(&inst)):NULL;
}
void  osg::QReflect_Drawable::setMinimumNumberOfDisplayListsToRetainInCache(const unsigned int &par){_model->setMinimumNumberOfDisplayListsToRetainInCache(par);emit MinimumNumberOfDisplayListsToRetainInCacheChanged(par);}
void  osg::QReflect_Drawable::setSupportsDisplayList(const bool &par){_model->setSupportsDisplayList(par);emit SupportsDisplayListChanged(par);}
void  osg::QReflect_Drawable::setUseDisplayList(const bool &par){_model->setUseDisplayList(par);emit UseDisplayListChanged(par);}
void  osg::QReflect_Drawable::setUseVertexBufferObjects(const bool &par){_model->setUseVertexBufferObjects(par);emit UseVertexBufferObjectsChanged(par);}
void osg::QReflect_Drawable::pmoc_reverse_setShape( osg::QReflect_Shape *par){_model->setShape(NULL);
emit ShapeChanged(NULL);
}
void osg::QReflect_Drawable::setShape( osg::QReflect_Shape *par){_model->setShape(par->_model);
emit ShapeChanged(par);
}

///DefaultConstructor////////////////
osg::QReflect_Drawable::QReflect_Drawable(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
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
_typeid=&typeid(osg::Drawable );           qRegisterMetaType<QMLDrawable>();
qmlRegisterType<QReflect_Drawable>("pmoc.osg",1,0,"QReflect_Drawable");
           qmlRegisterType<QMLDrawable>("pmoc.osg",1,0,"QMLDrawable");
       PMOCACTION("getShape","setShape","unsetShape");
};
const std::string osg::MetaQReflect_Drawable::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_Drawable::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_Drawable::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_Drawable::createQQModel(Instance*i){ //return new MetaQReflect_Drawable_QModel(i);}
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





#include <osg/StateSet>
//includes

#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/StateSet_pmoc.hpp>
#include <customCode/osg/StateSet_pmoc.hpp>
#include <customCode/osg/Object_pmoc.hpp>
#include <customCode/osg/CopyOp_pmoc.hpp>
#include <customCode/osg/NodeVisitor_pmoc.hpp>
#include <customCode/osg/Node_pmoc.hpp>
#include <customCode/osg/Object_pmoc.hpp>
#include <customCode/osg/StateAttribute_pmoc.hpp>
#include <customCode/osg/StateSet_pmoc.hpp>
#include <customCode/osg/State_pmoc.hpp>
#include <customCode/osg/Uniform_pmoc.hpp>
using namespace pmoc;
 bool  osg::QReflect_StateSet:: checkValidityOfAssociatedModes(osg::QReflect_State  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_StateSet::checkValidityOfAssociatedModes : parameter n.0 is NULL\n"<<endl;return -1;}
return _model->checkValidityOfAssociatedModes(*p0->_model);

}
 bool  osg::QReflect_StateSet:: getNestRenderBins()const{
//params checking
return _model->getNestRenderBins();

}
 bool  osg::QReflect_StateSet:: isSameKindAs(osg::QReflect_Object  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_StateSet::isSameKindAs : parameter n.0 is NULL\n"<<endl;return -1;}
return _model->isSameKindAs(p0->_model);

}
 bool  osg::QReflect_StateSet:: operator!=(osg::QReflect_StateSet  &p0)const{
//params checking
return _model->operator!=(*p0._model);

}
 bool  osg::QReflect_StateSet:: operator<(osg::QReflect_StateSet  &p0)const{
//params checking
return _model->operator<(*p0._model);

}
 bool  osg::QReflect_StateSet:: operator==(osg::QReflect_StateSet  &p0)const{
//params checking
return _model->operator==(*p0._model);

}
 bool  osg::QReflect_StateSet:: requiresEventTraversal()const{
//params checking
return _model->requiresEventTraversal();

}
 bool  osg::QReflect_StateSet:: requiresUpdateTraversal()const{
//params checking
return _model->requiresUpdateTraversal();

}
 bool  osg::QReflect_StateSet:: useRenderBinDetails()const{
//params checking
return _model->useRenderBinDetails();

}
 int  osg::QReflect_StateSet:: compare(osg::QReflect_StateSet  *p0 , bool  p1)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_StateSet::compare : parameter n.0 is NULL\n"<<endl;return -1;}
return _model->compare(*p0->_model ,p1);

}
 int  osg::QReflect_StateSet:: getBinNumber()const{
//params checking
return _model->getBinNumber();

}
 int  osg::QReflect_StateSet:: getRenderingHint()const{
//params checking
return _model->getRenderingHint();

}
 unsigned int  osg::QReflect_StateSet:: getMode( GLenum  p0)const{
//params checking
return _model->getMode(p0);

}
 unsigned int  osg::QReflect_StateSet:: getNumChildrenRequiringEventTraversal()const{
//params checking
return _model->getNumChildrenRequiringEventTraversal();

}
 unsigned int  osg::QReflect_StateSet:: getNumChildrenRequiringUpdateTraversal()const{
//params checking
return _model->getNumChildrenRequiringUpdateTraversal();

}
 unsigned int  osg::QReflect_StateSet:: getNumParents()const{
//params checking
return _model->getNumParents();

}
 unsigned int  osg::QReflect_StateSet:: getNumTextureAttributeLists()const{
//params checking
return _model->getNumTextureAttributeLists();

}
 unsigned int  osg::QReflect_StateSet:: getNumTextureModeLists()const{
//params checking
return _model->getNumTextureModeLists();

}
 unsigned int  osg::QReflect_StateSet:: getTextureMode( unsigned int  p0 , GLenum  p1)const{
//params checking
return _model->getTextureMode(p0 ,p1);

}
 void osg::QReflect_StateSet::addUniform(osg::QReflect_Uniform  *p0 , unsigned int  p1){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_StateSet::addUniform : parameter n.0 is NULL\n"<<endl;return;}
 _model->addUniform(p0->_model ,p1);

}
 void osg::QReflect_StateSet::clear(){
//params checking
 _model->clear();

}
 void osg::QReflect_StateSet::compileGLObjects(osg::QReflect_State  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_StateSet::compileGLObjects : parameter n.0 is NULL\n"<<endl;return;}
 _model->compileGLObjects(*p0->_model);

}
 void osg::QReflect_StateSet::computeDataVariance(){
//params checking
 _model->computeDataVariance();

}
 void osg::QReflect_StateSet::merge(osg::QReflect_StateSet  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_StateSet::merge : parameter n.0 is NULL\n"<<endl;return;}
 _model->merge(*p0->_model);

}
 void osg::QReflect_StateSet::releaseGLObjects(osg::QReflect_State  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_StateSet::releaseGLObjects : parameter n.0 is NULL\n"<<endl;return;}
 _model->releaseGLObjects(p0->_model);

}
 void osg::QReflect_StateSet::removeAssociatedModes(osg::QReflect_StateAttribute  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_StateSet::removeAssociatedModes : parameter n.0 is NULL\n"<<endl;return;}
 _model->removeAssociatedModes(p0->_model);

}
 void osg::QReflect_StateSet::removeAssociatedTextureModes( unsigned int  p0 ,osg::QReflect_StateAttribute  *p1){
//params checking
if(! p1) {std::cerr<<"PMOC: osg::QReflect_StateSet::removeAssociatedTextureModes : parameter n.1 is NULL\n"<<endl;return;}
 _model->removeAssociatedTextureModes(p0 ,p1->_model);

}
 void osg::QReflect_StateSet::removeAttribute(osg::QReflect_StateAttribute  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_StateSet::removeAttribute : parameter n.0 is NULL\n"<<endl;return;}
 _model->removeAttribute(p0->_model);

}
 void osg::QReflect_StateSet::removeAttribute(osg::QReflect_StateAttribute::Type  p0 , unsigned int  p1){
//params checking
 _model->removeAttribute(static_cast<osg::StateAttribute::Type>(p0) ,p1);

}
 void osg::QReflect_StateSet::removeDefine(const  QString  &p0){
//params checking
 _model->removeDefine(std::string(p0.toStdString()));

}
 void osg::QReflect_StateSet::removeMode( GLenum  p0){
//params checking
 _model->removeMode(p0);

}
 void osg::QReflect_StateSet::removeTextureAttribute( unsigned int  p0 ,osg::QReflect_StateAttribute  *p1){
//params checking
if(! p1) {std::cerr<<"PMOC: osg::QReflect_StateSet::removeTextureAttribute : parameter n.1 is NULL\n"<<endl;return;}
 _model->removeTextureAttribute(p0 ,p1->_model);

}
 void osg::QReflect_StateSet::removeTextureAttribute( unsigned int  p0 ,osg::QReflect_StateAttribute::Type  p1){
//params checking
 _model->removeTextureAttribute(p0 ,static_cast<osg::StateAttribute::Type>(p1));

}
 void osg::QReflect_StateSet::removeTextureMode( unsigned int  p0 , GLenum  p1){
//params checking
 _model->removeTextureMode(p0 ,p1);

}
 void osg::QReflect_StateSet::removeUniform(const  QString  &p0){
//params checking
 _model->removeUniform(std::string(p0.toStdString()));

}
 void osg::QReflect_StateSet::removeUniform(osg::QReflect_Uniform  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_StateSet::removeUniform : parameter n.0 is NULL\n"<<endl;return;}
 _model->removeUniform(p0->_model);

}
 void osg::QReflect_StateSet::resizeGLObjectBuffers( unsigned int  p0){
//params checking
 _model->resizeGLObjectBuffers(p0);

}
 void osg::QReflect_StateSet::runEventCallbacks(osg::QReflect_NodeVisitor  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_StateSet::runEventCallbacks : parameter n.0 is NULL\n"<<endl;return;}
 _model->runEventCallbacks(p0->_model);

}
 void osg::QReflect_StateSet::runUpdateCallbacks(osg::QReflect_NodeVisitor  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_StateSet::runUpdateCallbacks : parameter n.0 is NULL\n"<<endl;return;}
 _model->runUpdateCallbacks(p0->_model);

}
 void osg::QReflect_StateSet::setAssociatedModes(osg::QReflect_StateAttribute  *p0 , unsigned int  p1){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_StateSet::setAssociatedModes : parameter n.0 is NULL\n"<<endl;return;}
 _model->setAssociatedModes(p0->_model ,p1);

}
 void osg::QReflect_StateSet::setAssociatedTextureModes( unsigned int  p0 ,osg::QReflect_StateAttribute  *p1 , unsigned int  p2){
//params checking
if(! p1) {std::cerr<<"PMOC: osg::QReflect_StateSet::setAssociatedTextureModes : parameter n.1 is NULL\n"<<endl;return;}
 _model->setAssociatedTextureModes(p0 ,p1->_model ,p2);

}
 void osg::QReflect_StateSet::setAttribute(osg::QReflect_StateAttribute  *p0 , unsigned int  p1){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_StateSet::setAttribute : parameter n.0 is NULL\n"<<endl;return;}
 _model->setAttribute(p0->_model ,p1);

}
 void osg::QReflect_StateSet::setAttributeAndModes(osg::QReflect_StateAttribute  *p0 , unsigned int  p1){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_StateSet::setAttributeAndModes : parameter n.0 is NULL\n"<<endl;return;}
 _model->setAttributeAndModes(p0->_model ,p1);

}
 void osg::QReflect_StateSet::setBinName(const  QString  &p0){
//params checking
 _model->setBinName(std::string(p0.toStdString()));
emit BinNameChanged();

}
 void osg::QReflect_StateSet::setBinNumber( int  p0){
//params checking
 _model->setBinNumber(p0);
emit BinNumberChanged();

}
 void osg::QReflect_StateSet::setDefine(const  QString  &p0 , unsigned int  p1){
//params checking
 _model->setDefine(std::string(p0.toStdString()) ,p1);

}
 void osg::QReflect_StateSet::setDefine(const  QString  &p0 ,const  QString  &p1 , unsigned int  p2){
//params checking
 _model->setDefine(std::string(p0.toStdString()) ,std::string(p1.toStdString()) ,p2);

}
 void osg::QReflect_StateSet::setGlobalDefaults(){
//params checking
 _model->setGlobalDefaults();

}
 void osg::QReflect_StateSet::setMode( GLenum  p0 , unsigned int  p1){
//params checking
 _model->setMode(p0 ,p1);

}
 void osg::QReflect_StateSet::setNestRenderBins( bool  p0){
//params checking
 _model->setNestRenderBins(p0);
emit NestRenderBinsChanged();

}
 void osg::QReflect_StateSet::setRenderBinDetails( int  p0 ,const  QString  &p1 ,osg::QReflect_StateSet::RenderBinMode  p2){
//params checking
 _model->setRenderBinDetails(p0 ,std::string(p1.toStdString()) ,static_cast<osg::StateSet::RenderBinMode>(p2));

}
 void osg::QReflect_StateSet::setRenderBinMode(osg::QReflect_StateSet::RenderBinMode  p0){
//params checking
 _model->setRenderBinMode(static_cast<osg::StateSet::RenderBinMode>(p0));
emit RenderBinModeChanged();

}
 void osg::QReflect_StateSet::setRenderBinToInherit(){
//params checking
 _model->setRenderBinToInherit();

}
 void osg::QReflect_StateSet::setRenderingHint( int  p0){
//params checking
 _model->setRenderingHint(p0);
emit RenderingHintChanged();

}
 void osg::QReflect_StateSet::setTextureAttribute( unsigned int  p0 ,osg::QReflect_StateAttribute  *p1 , unsigned int  p2){
//params checking
if(! p1) {std::cerr<<"PMOC: osg::QReflect_StateSet::setTextureAttribute : parameter n.1 is NULL\n"<<endl;return;}
 _model->setTextureAttribute(p0 ,p1->_model ,p2);

}
 void osg::QReflect_StateSet::setTextureAttributeAndModes( unsigned int  p0 ,osg::QReflect_StateAttribute  *p1 , unsigned int  p2){
//params checking
if(! p1) {std::cerr<<"PMOC: osg::QReflect_StateSet::setTextureAttributeAndModes : parameter n.1 is NULL\n"<<endl;return;}
 _model->setTextureAttributeAndModes(p0 ,p1->_model ,p2);

}
 void osg::QReflect_StateSet::setTextureMode( unsigned int  p0 , GLenum  p1 , unsigned int  p2){
//params checking
 _model->setTextureMode(p0 ,p1 ,p2);

}
 void osg::QReflect_StateSet::setThreadSafeRefUnref( bool  p0){
//params checking
 _model->setThreadSafeRefUnref(p0);

}
QString  osg::QReflect_StateSet::getBinName()const{
//params checking
QString ret(_model->getBinName().c_str());return ret;

}
const  char*  osg::QReflect_StateSet:: className()const{
//params checking
return _model->className();

}
const  char*  osg::QReflect_StateSet:: libraryName()const{
//params checking
return _model->libraryName();

}
osg::QReflect_Node*osg::QReflect_StateSet::getParent( unsigned int  p0)const{
//params checking
PMOCSAFEADDOBJECT(*_model->getParent(p0),inst);
return inst.isValid()?((osg::QReflect_Node * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Node*osg::QReflect_StateSet::getParent( unsigned int  p0){
//params checking
PMOCSAFEADDOBJECT(*_model->getParent(p0),inst);
return inst.isValid()?((osg::QReflect_Node * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Object*osg::QReflect_StateSet::clone(osg::QReflect_CopyOp  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_StateSet::clone : parameter n.0 is NULL\n"<<endl;;}
PMOCSAFEADDOBJECT(*_model->clone(*p0->_model),inst);
return inst.isValid()?((osg::QReflect_Object * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Object*osg::QReflect_StateSet::cloneType()const{
//params checking
PMOCSAFEADDOBJECT(*_model->cloneType(),inst);
return inst.isValid()?((osg::QReflect_Object * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_StateAttribute*osg::QReflect_StateSet::getAttribute(osg::QReflect_StateAttribute::Type  p0 , unsigned int  p1)const{
//params checking
PMOCSAFEADDOBJECT(*_model->getAttribute(static_cast<osg::StateAttribute::Type>(p0) ,p1),inst);
return inst.isValid()?((osg::QReflect_StateAttribute * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_StateAttribute*osg::QReflect_StateSet::getAttribute(osg::QReflect_StateAttribute::Type  p0 , unsigned int  p1){
//params checking
PMOCSAFEADDOBJECT(*_model->getAttribute(static_cast<osg::StateAttribute::Type>(p0) ,p1),inst);
return inst.isValid()?((osg::QReflect_StateAttribute * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_StateAttribute*osg::QReflect_StateSet::getTextureAttribute( unsigned int  p0 ,osg::QReflect_StateAttribute::Type  p1)const{
//params checking
PMOCSAFEADDOBJECT(*_model->getTextureAttribute(p0 ,static_cast<osg::StateAttribute::Type>(p1)),inst);
return inst.isValid()?((osg::QReflect_StateAttribute * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_StateAttribute*osg::QReflect_StateSet::getTextureAttribute( unsigned int  p0 ,osg::QReflect_StateAttribute::Type  p1){
//params checking
PMOCSAFEADDOBJECT(*_model->getTextureAttribute(p0 ,static_cast<osg::StateAttribute::Type>(p1)),inst);
return inst.isValid()?((osg::QReflect_StateAttribute * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_StateSet::RenderBinMode  osg::QReflect_StateSet::getRenderBinMode()const{
//params checking
osg::QReflect_StateSet::RenderBinMode ret=static_cast<osg::QReflect_StateSet::RenderBinMode>( _model->getRenderBinMode());return  ret;

}
osg::QReflect_Uniform*osg::QReflect_StateSet::getOrCreateUniform(const  QString  &p0 ,osg::QReflect_Uniform::Type  p1 , unsigned int  p2){
//params checking
PMOCSAFEADDOBJECT(*_model->getOrCreateUniform(std::string(p0.toStdString()) ,static_cast<osg::Uniform::Type>(p1) ,p2),inst);
return inst.isValid()?((osg::QReflect_Uniform * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Uniform*osg::QReflect_StateSet::getUniform(const  QString  &p0)const{
//params checking
PMOCSAFEADDOBJECT(*_model->getUniform(std::string(p0.toStdString())),inst);
return inst.isValid()?((osg::QReflect_Uniform * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Uniform*osg::QReflect_StateSet::getUniform(const  QString  &p0){
//params checking
PMOCSAFEADDOBJECT(*_model->getUniform(std::string(p0.toStdString())),inst);
return inst.isValid()?((osg::QReflect_Uniform * )inst.model->createQQModel(&inst)):NULL;
}

///DefaultConstructor////////////////
osg::QReflect_StateSet::QReflect_StateSet(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::StateSet*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_StateSet::~QReflect_StateSet( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_StateSet::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_StateSet::createInstance( ){
osg::ref_ptr<osg::StateSet> osg_StateSet_ptr	;
osg_StateSet_ptr = new osg::StateSet ()	;
Instance o(PMOCGETMETACLASS("osg::StateSet"),(void*)osg_StateSet_ptr.get()		,true);
_managedinstances.insert(osg_StateSet_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_StateSet::MetaQReflect_StateSet():MetaQQuickClass( "osg::StateSet"){
_typeid=&typeid(osg::StateSet );
           qRegisterMetaType<osg::QMLStateSet>();
           qRegisterMetaType<osg::QMLStateSet*>("pmoc.osg.QMLStateSet");
qmlRegisterType<osg::QReflect_StateSet>("pmoc.osg",1,0,"QReflect_StateSet");
           qmlRegisterType<osg::QMLStateSet>("pmoc.osg",1,0,"QMLStateSet");
};
const std::string osg::MetaQReflect_StateSet::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_StateSet::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_StateSet::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_StateSet::createQQModel(const Instance*i){ //return new MetaQReflect_StateSet_QModel(i);}
QMLStateSet *ret =new QMLStateSet(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::Object *mother =dynamic_cast<osg::Object*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::Object");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::Object model for osg::StateSetis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::Object");
if(!cl){std::cerr<<"osg::Object QQModel for osg::StateSetis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_StateSet_pmoc.cpp"
#endif





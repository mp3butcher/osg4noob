#include <osg/StateSet>
//includes
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/StateSet_pmoc.hpp>
#include <customCode/osg/StateSet_pmoc.hpp>
#include <customCode/osg/Object_pmoc.hpp>
#include <customCode/osg/CopyOp_pmoc.hpp>
#include <customCode/osg/Object_pmoc.hpp>
#include <customCode/osg/StateAttribute_pmoc.hpp>
#include <customCode/osg/StateSet_pmoc.hpp>
#include <customCode/osg/Uniform_pmoc.hpp>
using namespace pmoc;
 bool  osg::QReflect_StateSet::isSameKindAs(osg::QReflect_Object *p0)const{
return _model->isSameKindAs(p0->_model);

}
 bool  osg::QReflect_StateSet::requiresEventTraversal()const{
return _model->requiresEventTraversal();

}
 bool  osg::QReflect_StateSet::requiresUpdateTraversal()const{
return _model->requiresUpdateTraversal();

}
 bool  osg::QReflect_StateSet::useRenderBinDetails()const{
return _model->useRenderBinDetails();

}
 int  osg::QReflect_StateSet::compare(osg::QReflect_StateSet *p0 , bool p1)const{
return _model->compare(*p0->_model ,p1);

}
 unsigned int  osg::QReflect_StateSet::getMode( GLenum p0)const{
return _model->getMode(p0);

}
 unsigned int  osg::QReflect_StateSet::getNumChildrenRequiringEventTraversal()const{
return _model->getNumChildrenRequiringEventTraversal();

}
 unsigned int  osg::QReflect_StateSet::getNumChildrenRequiringUpdateTraversal()const{
return _model->getNumChildrenRequiringUpdateTraversal();

}
 unsigned int  osg::QReflect_StateSet::getNumParents()const{
return _model->getNumParents();

}
 unsigned int  osg::QReflect_StateSet::getNumTextureAttributeLists()const{
return _model->getNumTextureAttributeLists();

}
 unsigned int  osg::QReflect_StateSet::getNumTextureModeLists()const{
return _model->getNumTextureModeLists();

}
 unsigned int  osg::QReflect_StateSet::getTextureMode( unsigned int p0 , GLenum p1)const{
return _model->getTextureMode(p0 ,p1);

}
 void osg::QReflect_StateSet::addUniform(osg::QReflect_Uniform *p0 , unsigned int p1){
 _model->addUniform(p0->_model ,p1);

}
 void osg::QReflect_StateSet::clear(){
 _model->clear();

}
 void osg::QReflect_StateSet::computeDataVariance(){
 _model->computeDataVariance();

}
 void osg::QReflect_StateSet::merge(osg::QReflect_StateSet *p0){
 _model->merge(*p0->_model);

}
 void osg::QReflect_StateSet::removeAssociatedModes(osg::QReflect_StateAttribute *p0){
 _model->removeAssociatedModes(p0->_model);

}
 void osg::QReflect_StateSet::removeAssociatedTextureModes( unsigned int p0 ,osg::QReflect_StateAttribute *p1){
 _model->removeAssociatedTextureModes(p0 ,p1->_model);

}
 void osg::QReflect_StateSet::removeAttribute(osg::QReflect_StateAttribute *p0){
 _model->removeAttribute(p0->_model);

}
 void osg::QReflect_StateSet::removeAttribute(osg::QReflect_StateAttribute::Type p0 , unsigned int p1){
 _model->removeAttribute(static_cast<osg::StateAttribute::Type>(p0) ,p1);

}
 void osg::QReflect_StateSet::removeDefine(const  QString &p0){
 _model->removeDefine(std::string(p0.toStdString()));

}
 void osg::QReflect_StateSet::removeMode( GLenum p0){
 _model->removeMode(p0);

}
 void osg::QReflect_StateSet::removeTextureAttribute( unsigned int p0 ,osg::QReflect_StateAttribute *p1){
 _model->removeTextureAttribute(p0 ,p1->_model);

}
 void osg::QReflect_StateSet::removeTextureAttribute( unsigned int p0 ,osg::QReflect_StateAttribute::Type p1){
 _model->removeTextureAttribute(p0 ,static_cast<osg::StateAttribute::Type>(p1));

}
 void osg::QReflect_StateSet::removeTextureMode( unsigned int p0 , GLenum p1){
 _model->removeTextureMode(p0 ,p1);

}
 void osg::QReflect_StateSet::removeUniform(const  QString &p0){
 _model->removeUniform(std::string(p0.toStdString()));

}
 void osg::QReflect_StateSet::removeUniform(osg::QReflect_Uniform *p0){
 _model->removeUniform(p0->_model);

}
 void osg::QReflect_StateSet::resizeGLObjectBuffers( unsigned int p0){
 _model->resizeGLObjectBuffers(p0);

}
 void osg::QReflect_StateSet::setAssociatedModes(osg::QReflect_StateAttribute *p0 , unsigned int p1){
 _model->setAssociatedModes(p0->_model ,p1);

}
 void osg::QReflect_StateSet::setAssociatedTextureModes( unsigned int p0 ,osg::QReflect_StateAttribute *p1 , unsigned int p2){
 _model->setAssociatedTextureModes(p0 ,p1->_model ,p2);

}
 void osg::QReflect_StateSet::setAttribute(osg::QReflect_StateAttribute *p0 , unsigned int p1){
 _model->setAttribute(p0->_model ,p1);

}
 void osg::QReflect_StateSet::setAttributeAndModes(osg::QReflect_StateAttribute *p0 , unsigned int p1){
 _model->setAttributeAndModes(p0->_model ,p1);

}
 void osg::QReflect_StateSet::setDefine(const  QString &p0 , unsigned int p1){
 _model->setDefine(std::string(p0.toStdString()) ,p1);

}
 void osg::QReflect_StateSet::setDefine(const  QString &p0 ,const  QString &p1 , unsigned int p2){
 _model->setDefine(std::string(p0.toStdString()) ,std::string(p1.toStdString()) ,p2);

}
 void osg::QReflect_StateSet::setGlobalDefaults(){
 _model->setGlobalDefaults();

}
 void osg::QReflect_StateSet::setMode( GLenum p0 , unsigned int p1){
 _model->setMode(p0 ,p1);

}
 void osg::QReflect_StateSet::setRenderBinDetails( int p0 ,const  QString &p1 ,osg::QReflect_StateSet::RenderBinMode p2){
 _model->setRenderBinDetails(p0 ,std::string(p1.toStdString()) ,static_cast<osg::StateSet::RenderBinMode>(p2));

}
 void osg::QReflect_StateSet::setRenderBinMode(osg::QReflect_StateSet::RenderBinMode p0){
 _model->setRenderBinMode(static_cast<osg::StateSet::RenderBinMode>(p0));

}
 void osg::QReflect_StateSet::setRenderBinToInherit(){
 _model->setRenderBinToInherit();

}
 void osg::QReflect_StateSet::setTextureAttribute( unsigned int p0 ,osg::QReflect_StateAttribute *p1 , unsigned int p2){
 _model->setTextureAttribute(p0 ,p1->_model ,p2);

}
 void osg::QReflect_StateSet::setTextureAttributeAndModes( unsigned int p0 ,osg::QReflect_StateAttribute *p1 , unsigned int p2){
 _model->setTextureAttributeAndModes(p0 ,p1->_model ,p2);

}
 void osg::QReflect_StateSet::setTextureMode( unsigned int p0 , GLenum p1 , unsigned int p2){
 _model->setTextureMode(p0 ,p1 ,p2);

}
 void osg::QReflect_StateSet::setThreadSafeRefUnref( bool p0){
 _model->setThreadSafeRefUnref(p0);

}
const  char*  osg::QReflect_StateSet::className()const{
return _model->className();

}
const  char*  osg::QReflect_StateSet::libraryName()const{
return _model->libraryName();

}
const QString osg::QReflect_StateSet::getBinName()const{return QString(_model->getBinName().c_str());}
const bool osg::QReflect_StateSet::getNestRenderBins()const{return _model->getNestRenderBins();}
const int osg::QReflect_StateSet::getBinNumber()const{return _model->getBinNumber();}
const int osg::QReflect_StateSet::getRenderingHint()const{return _model->getRenderingHint();}
osg::QReflect_Object*osg::QReflect_StateSet::clone(osg::QReflect_CopyOp *p0)const{
PMOCSAFEADDOBJECT(*_model->clone(*p0->_model),inst);
return inst.isValid()?((osg::QReflect_Object * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Object*osg::QReflect_StateSet::cloneType()const{
PMOCSAFEADDOBJECT(*_model->cloneType(),inst);
return inst.isValid()?((osg::QReflect_Object * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_StateAttribute*osg::QReflect_StateSet::getAttribute(osg::QReflect_StateAttribute::Type p0 , unsigned int p1)const{
PMOCSAFEADDOBJECT(*_model->getAttribute(static_cast<osg::StateAttribute::Type>(p0) ,p1),inst);
return inst.isValid()?((osg::QReflect_StateAttribute * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_StateAttribute*osg::QReflect_StateSet::getAttribute(osg::QReflect_StateAttribute::Type p0 , unsigned int p1){
PMOCSAFEADDOBJECT(*_model->getAttribute(static_cast<osg::StateAttribute::Type>(p0) ,p1),inst);
return inst.isValid()?((osg::QReflect_StateAttribute * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_StateAttribute*osg::QReflect_StateSet::getTextureAttribute( unsigned int p0 ,osg::QReflect_StateAttribute::Type p1)const{
PMOCSAFEADDOBJECT(*_model->getTextureAttribute(p0 ,static_cast<osg::StateAttribute::Type>(p1)),inst);
return inst.isValid()?((osg::QReflect_StateAttribute * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_StateAttribute*osg::QReflect_StateSet::getTextureAttribute( unsigned int p0 ,osg::QReflect_StateAttribute::Type p1){
PMOCSAFEADDOBJECT(*_model->getTextureAttribute(p0 ,static_cast<osg::StateAttribute::Type>(p1)),inst);
return inst.isValid()?((osg::QReflect_StateAttribute * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_StateSet::RenderBinMode  osg::QReflect_StateSet::getRenderBinMode()const{
osg::QReflect_StateSet::RenderBinMode ret=static_cast<osg::QReflect_StateSet::RenderBinMode>( _model->getRenderBinMode());return  ret;

}
osg::QReflect_Uniform*osg::QReflect_StateSet::getOrCreateUniform(const  QString &p0 ,osg::QReflect_Uniform::Type p1 , unsigned int p2){
PMOCSAFEADDOBJECT(*_model->getOrCreateUniform(std::string(p0.toStdString()) ,static_cast<osg::Uniform::Type>(p1) ,p2),inst);
return inst.isValid()?((osg::QReflect_Uniform * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Uniform*osg::QReflect_StateSet::getUniform(const  QString &p0)const{
PMOCSAFEADDOBJECT(*_model->getUniform(std::string(p0.toStdString())),inst);
return inst.isValid()?((osg::QReflect_Uniform * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Uniform*osg::QReflect_StateSet::getUniform(const  QString &p0){
PMOCSAFEADDOBJECT(*_model->getUniform(std::string(p0.toStdString())),inst);
return inst.isValid()?((osg::QReflect_Uniform * )inst.model->createQQModel(&inst)):NULL;
}
void  osg::QReflect_StateSet::setBinNumber(const int &par){_model->setBinNumber(par);emit BinNumberChanged(par);}
void  osg::QReflect_StateSet::setNestRenderBins(const bool &par){_model->setNestRenderBins(par);emit NestRenderBinsChanged(par);}
void  osg::QReflect_StateSet::setRenderingHint(const int &par){_model->setRenderingHint(par);emit RenderingHintChanged(par);}
void osg::QReflect_StateSet::setBinName(const QString &par){_model->setBinName(par.toStdString());emit BinNameChanged(par);}

///DefaultConstructor////////////////
osg::QReflect_StateSet::QReflect_StateSet(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
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
_typeid=&typeid(osg::StateSet );           qRegisterMetaType<QMLStateSet>();
qmlRegisterType<QReflect_StateSet>("pmoc.osg",1,0,"QReflect_StateSet");
           qmlRegisterType<QMLStateSet>("pmoc.osg",1,0,"QMLStateSet");
};
const std::string osg::MetaQReflect_StateSet::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_StateSet::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_StateSet::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_StateSet::createQQModel(Instance*i){ //return new MetaQReflect_StateSet_QModel(i);}
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



#include <osg/Geometry>
//includes
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/Geometry_pmoc.hpp>
#include <customCode/osg/Geometry_pmoc.hpp>
#include <customCode/osg/Geometry_pmoc.hpp>
#include <customCode/osg/Array_pmoc.hpp>
#include <osg/Array>
#include <osg/Array_pmoc.hpp>
using namespace pmoc;
 GLboolean  deprecated_osg::QReflect_Geometry::getVertexAttribNormalize( unsigned int p0)const{
return _model->getVertexAttribNormalize(p0);

}
 void deprecated_osg::QReflect_Geometry::setColorBinding(deprecated_osg::QReflect_Geometry::AttributeBinding p0){
 _model->setColorBinding(static_cast<deprecated_osg::Geometry::AttributeBinding>(p0));

}
 void deprecated_osg::QReflect_Geometry::setFogCoordBinding(deprecated_osg::QReflect_Geometry::AttributeBinding p0){
 _model->setFogCoordBinding(static_cast<deprecated_osg::Geometry::AttributeBinding>(p0));

}
 void deprecated_osg::QReflect_Geometry::setNormalBinding(deprecated_osg::QReflect_Geometry::AttributeBinding p0){
 _model->setNormalBinding(static_cast<deprecated_osg::Geometry::AttributeBinding>(p0));

}
 void deprecated_osg::QReflect_Geometry::setSecondaryColorBinding(deprecated_osg::QReflect_Geometry::AttributeBinding p0){
 _model->setSecondaryColorBinding(static_cast<deprecated_osg::Geometry::AttributeBinding>(p0));

}
 void deprecated_osg::QReflect_Geometry::setTexCoordIndices( unsigned int p0 ,osg::QReflect_IndexArray *p1){
 _model->setTexCoordIndices(p0 ,p1->_model);

}
 void deprecated_osg::QReflect_Geometry::setVertexAttribBinding( unsigned int p0 ,deprecated_osg::QReflect_Geometry::AttributeBinding p1){
 _model->setVertexAttribBinding(p0 ,static_cast<deprecated_osg::Geometry::AttributeBinding>(p1));

}
 void deprecated_osg::QReflect_Geometry::setVertexAttribIndices( unsigned int p0 ,osg::QReflect_IndexArray *p1){
 _model->setVertexAttribIndices(p0 ,p1->_model);

}
 void deprecated_osg::QReflect_Geometry::setVertexAttribNormalize( unsigned int p0 , GLboolean p1){
 _model->setVertexAttribNormalize(p0 ,p1);

}
deprecated_osg::QReflect_Geometry::AttributeBinding  deprecated_osg::QReflect_Geometry::getColorBinding()const{
deprecated_osg::QReflect_Geometry::AttributeBinding ret=static_cast<deprecated_osg::QReflect_Geometry::AttributeBinding>( _model->getColorBinding());return  ret;

}
deprecated_osg::QReflect_Geometry::AttributeBinding  deprecated_osg::QReflect_Geometry::getFogCoordBinding()const{
deprecated_osg::QReflect_Geometry::AttributeBinding ret=static_cast<deprecated_osg::QReflect_Geometry::AttributeBinding>( _model->getFogCoordBinding());return  ret;

}
deprecated_osg::QReflect_Geometry::AttributeBinding  deprecated_osg::QReflect_Geometry::getNormalBinding()const{
deprecated_osg::QReflect_Geometry::AttributeBinding ret=static_cast<deprecated_osg::QReflect_Geometry::AttributeBinding>( _model->getNormalBinding());return  ret;

}
deprecated_osg::QReflect_Geometry::AttributeBinding  deprecated_osg::QReflect_Geometry::getSecondaryColorBinding()const{
deprecated_osg::QReflect_Geometry::AttributeBinding ret=static_cast<deprecated_osg::QReflect_Geometry::AttributeBinding>( _model->getSecondaryColorBinding());return  ret;

}
deprecated_osg::QReflect_Geometry::AttributeBinding  deprecated_osg::QReflect_Geometry::getVertexAttribBinding( unsigned int p0)const{
deprecated_osg::QReflect_Geometry::AttributeBinding ret=static_cast<deprecated_osg::QReflect_Geometry::AttributeBinding>( _model->getVertexAttribBinding(p0));return  ret;

}
osg::QReflect_IndexArray * deprecated_osg::QReflect_Geometry::getColorIndices()const{
PMOCSAFEADDOBJECT(*_model->getColorIndices(),inst);
return inst.isValid()?((osg::QReflect_IndexArray * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_IndexArray * deprecated_osg::QReflect_Geometry::getFogCoordIndices()const{
PMOCSAFEADDOBJECT(*_model->getFogCoordIndices(),inst);
return inst.isValid()?((osg::QReflect_IndexArray * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_IndexArray * deprecated_osg::QReflect_Geometry::getNormalIndices()const{
PMOCSAFEADDOBJECT(*_model->getNormalIndices(),inst);
return inst.isValid()?((osg::QReflect_IndexArray * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_IndexArray * deprecated_osg::QReflect_Geometry::getSecondaryColorIndices()const{
PMOCSAFEADDOBJECT(*_model->getSecondaryColorIndices(),inst);
return inst.isValid()?((osg::QReflect_IndexArray * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_IndexArray * deprecated_osg::QReflect_Geometry::getVertexIndices()const{
PMOCSAFEADDOBJECT(*_model->getVertexIndices(),inst);
return inst.isValid()?((osg::QReflect_IndexArray * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_IndexArray*deprecated_osg::QReflect_Geometry::getTexCoordIndices( unsigned int p0)const{
PMOCSAFEADDOBJECT(*_model->getTexCoordIndices(p0),inst);
return inst.isValid()?((osg::QReflect_IndexArray * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_IndexArray*deprecated_osg::QReflect_Geometry::getVertexAttribIndices( unsigned int p0)const{
PMOCSAFEADDOBJECT(*_model->getVertexAttribIndices(p0),inst);
return inst.isValid()?((osg::QReflect_IndexArray * )inst.model->createQQModel(&inst)):NULL;
}
void deprecated_osg::QReflect_Geometry::pmoc_reverse_setColorIndices( osg::QReflect_IndexArray *par){_model->setColorIndices(NULL);
emit ColorIndicesChanged(NULL);
}
void deprecated_osg::QReflect_Geometry::pmoc_reverse_setFogCoordIndices( osg::QReflect_IndexArray *par){_model->setFogCoordIndices(NULL);
emit FogCoordIndicesChanged(NULL);
}
void deprecated_osg::QReflect_Geometry::pmoc_reverse_setNormalIndices( osg::QReflect_IndexArray *par){_model->setNormalIndices(NULL);
emit NormalIndicesChanged(NULL);
}
void deprecated_osg::QReflect_Geometry::pmoc_reverse_setSecondaryColorIndices( osg::QReflect_IndexArray *par){_model->setSecondaryColorIndices(NULL);
emit SecondaryColorIndicesChanged(NULL);
}
void deprecated_osg::QReflect_Geometry::pmoc_reverse_setVertexIndices( osg::QReflect_IndexArray *par){_model->setVertexIndices(NULL);
emit VertexIndicesChanged(NULL);
}
void deprecated_osg::QReflect_Geometry::setColorIndices( osg::QReflect_IndexArray *par){_model->setColorIndices(par->_model);
emit ColorIndicesChanged(par);
}
void deprecated_osg::QReflect_Geometry::setFogCoordIndices( osg::QReflect_IndexArray *par){_model->setFogCoordIndices(par->_model);
emit FogCoordIndicesChanged(par);
}
void deprecated_osg::QReflect_Geometry::setNormalIndices( osg::QReflect_IndexArray *par){_model->setNormalIndices(par->_model);
emit NormalIndicesChanged(par);
}
void deprecated_osg::QReflect_Geometry::setSecondaryColorIndices( osg::QReflect_IndexArray *par){_model->setSecondaryColorIndices(par->_model);
emit SecondaryColorIndicesChanged(par);
}
void deprecated_osg::QReflect_Geometry::setVertexIndices( osg::QReflect_IndexArray *par){_model->setVertexIndices(par->_model);
emit VertexIndicesChanged(par);
}

///DefaultConstructor////////////////
deprecated_osg::QReflect_Geometry::QReflect_Geometry(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<deprecated_osg::Geometry*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
deprecated_osg::QReflect_Geometry::~QReflect_Geometry( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void deprecated_osg::QReflect_Geometry::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance deprecated_osg::MetaQReflect_Geometry::createInstance( ){
osg::ref_ptr<deprecated_osg::Geometry> deprecated_osg_Geometry_ptr	;
deprecated_osg_Geometry_ptr = new deprecated_osg::Geometry ()	;
Instance o(PMOCGETMETACLASS("deprecated_osg::Geometry"),(void*)deprecated_osg_Geometry_ptr.get()		,true);
_managedinstances.insert(deprecated_osg_Geometry_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
deprecated_osg::MetaQReflect_Geometry::MetaQReflect_Geometry():MetaQQuickClass( "deprecated_osg::Geometry"){
_typeid=&typeid(deprecated_osg::Geometry );           qRegisterMetaType<QMLGeometry>();
qmlRegisterType<QReflect_Geometry>("pmoc.deprecated_osg",1,0,"QReflect_Geometry");
           qmlRegisterType<QMLGeometry>("pmoc.deprecated_osg",1,0,"QMLGeometry");
       PMOCACTION("getColorIndices","setColorIndices","unsetColorIndices");
       PMOCACTION("getFogCoordIndices","setFogCoordIndices","unsetFogCoordIndices");
       PMOCACTION("getNormalIndices","setNormalIndices","unsetNormalIndices");
       PMOCACTION("getSecondaryColorIndices","setSecondaryColorIndices","unsetSecondaryColorIndices");
       PMOCACTION("getVertexIndices","setVertexIndices","unsetVertexIndices");
};
const std::string deprecated_osg::MetaQReflect_Geometry::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string deprecated_osg::MetaQReflect_Geometry::PREcompoQML()const{return std::string("");}
const std::string deprecated_osg::MetaQReflect_Geometry::POSTcompoQML()const{return std::string("");}
QQModel* deprecated_osg::MetaQReflect_Geometry::createQQModel(Instance*i){ //return new MetaQReflect_Geometry_QModel(i);}
QMLGeometry *ret =new QMLGeometry(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::Geometry *mother =dynamic_cast<osg::Geometry*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::Geometry");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::Geometry model for deprecated_osg::Geometryis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::Geometry");
if(!cl){std::cerr<<"osg::Geometry QQModel for deprecated_osg::Geometryis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Geometry_pmoc.cpp"
#endif

#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/Geometry_pmoc.hpp>
#include <customCode/osg/Geometry_pmoc.hpp>
#include <customCode/osg/Drawable_pmoc.hpp>
#include <customCode/osg/Array_pmoc.hpp>
#include <customCode/osg/PrimitiveSet_pmoc.hpp>
#include <customCode/osg/RenderInfo_pmoc.hpp>
#include <customCode/osg/State_pmoc.hpp>
#include <osg/Array>
#include <osg/Array_pmoc.hpp>
using namespace pmoc;
 GLboolean  osg::QReflect_Geometry::getVertexAttribNormalize( unsigned int p0)const{
return _model->getVertexAttribNormalize(p0);

}
 bool  osg::QReflect_Geometry::addPrimitiveSet(osg::QReflect_PrimitiveSet *p0){
return _model->addPrimitiveSet(p0->_model);

}
 bool  osg::QReflect_Geometry::checkForDeprecatedData(){
return _model->checkForDeprecatedData();

}
 bool  osg::QReflect_Geometry::containsDeprecatedData()const{
return _model->containsDeprecatedData();

}
 bool  osg::QReflect_Geometry::containsSharedArrays()const{
return _model->containsSharedArrays();

}
 bool  osg::QReflect_Geometry::empty()const{
return _model->empty();

}
 bool  osg::QReflect_Geometry::insertPrimitiveSet( unsigned int p0 ,osg::QReflect_PrimitiveSet *p1){
return _model->insertPrimitiveSet(p0 ,p1->_model);

}
 bool  osg::QReflect_Geometry::removePrimitiveSet( unsigned int p0 , unsigned int p1){
return _model->removePrimitiveSet(p0 ,p1);

}
 bool  osg::QReflect_Geometry::setPrimitiveSet( unsigned int p0 ,osg::QReflect_PrimitiveSet *p1){
return _model->setPrimitiveSet(p0 ,p1->_model);

}
 bool  osg::QReflect_Geometry::supports(osg::QReflect_PrimitiveFunctor *p0)const{
return _model->supports(*p0->_model);

}
 bool  osg::QReflect_Geometry::supports(osg::QReflect_PrimitiveIndexFunctor *p0)const{
return _model->supports(*p0->_model);

}
 unsigned int  osg::QReflect_Geometry::getGLObjectSizeHint()const{
return _model->getGLObjectSizeHint();

}
 unsigned int  osg::QReflect_Geometry::getNumPrimitiveSets()const{
return _model->getNumPrimitiveSets();

}
 unsigned int  osg::QReflect_Geometry::getNumTexCoordArrays()const{
return _model->getNumTexCoordArrays();

}
 unsigned int  osg::QReflect_Geometry::getNumVertexAttribArrays()const{
return _model->getNumVertexAttribArrays();

}
 unsigned int  osg::QReflect_Geometry::getPrimitiveSetIndex(osg::QReflect_PrimitiveSet *p0)const{
return _model->getPrimitiveSetIndex(p0->_model);

}
 void osg::QReflect_Geometry::accept(osg::QReflect_PrimitiveFunctor *p0)const{
 _model->accept(*p0->_model);

}
 void osg::QReflect_Geometry::accept(osg::QReflect_PrimitiveIndexFunctor *p0)const{
 _model->accept(*p0->_model);

}
 void osg::QReflect_Geometry::compileGLObjects(osg::QReflect_RenderInfo *p0)const{
 _model->compileGLObjects(*p0->_model);

}
 void osg::QReflect_Geometry::dirtyDisplayList(){
 _model->dirtyDisplayList();

}
 void osg::QReflect_Geometry::drawImplementation(osg::QReflect_RenderInfo *p0)const{
 _model->drawImplementation(*p0->_model);

}
 void osg::QReflect_Geometry::drawPrimitivesImplementation(osg::QReflect_RenderInfo *p0)const{
 _model->drawPrimitivesImplementation(*p0->_model);

}
 void osg::QReflect_Geometry::drawVertexArraysImplementation(osg::QReflect_RenderInfo *p0)const{
 _model->drawVertexArraysImplementation(*p0->_model);

}
 void osg::QReflect_Geometry::duplicateSharedArrays(){
 _model->duplicateSharedArrays();

}
 void osg::QReflect_Geometry::fixDeprecatedData(){
 _model->fixDeprecatedData();

}
 void osg::QReflect_Geometry::releaseGLObjects(osg::QReflect_State *p0)const{
 _model->releaseGLObjects(p0->_model);

}
 void osg::QReflect_Geometry::resizeGLObjectBuffers( unsigned int p0){
 _model->resizeGLObjectBuffers(p0);

}
 void osg::QReflect_Geometry::setColorBinding(osg::QReflect_Geometry::AttributeBinding p0){
 _model->setColorBinding(static_cast<osg::Geometry::AttributeBinding>(p0));

}
 void osg::QReflect_Geometry::setFogCoordBinding(osg::QReflect_Geometry::AttributeBinding p0){
 _model->setFogCoordBinding(static_cast<osg::Geometry::AttributeBinding>(p0));

}
 void osg::QReflect_Geometry::setNormalBinding(osg::QReflect_Geometry::AttributeBinding p0){
 _model->setNormalBinding(static_cast<osg::Geometry::AttributeBinding>(p0));

}
 void osg::QReflect_Geometry::setSecondaryColorBinding(osg::QReflect_Geometry::AttributeBinding p0){
 _model->setSecondaryColorBinding(static_cast<osg::Geometry::AttributeBinding>(p0));

}
 void osg::QReflect_Geometry::setTexCoordArray( unsigned int p0 ,osg::QReflect_Array *p1){
 _model->setTexCoordArray(p0 ,p1->_model);

}
 void osg::QReflect_Geometry::setUseVertexBufferObjects( bool p0){
 _model->setUseVertexBufferObjects(p0);

}
 void osg::QReflect_Geometry::setVertexAttribArray( unsigned int p0 ,osg::QReflect_Array *p1){
 _model->setVertexAttribArray(p0 ,p1->_model);

}
 void osg::QReflect_Geometry::setVertexAttribBinding( unsigned int p0 ,osg::QReflect_Geometry::AttributeBinding p1){
 _model->setVertexAttribBinding(p0 ,static_cast<osg::Geometry::AttributeBinding>(p1));

}
 void osg::QReflect_Geometry::setVertexAttribNormalize( unsigned int p0 , GLboolean p1){
 _model->setVertexAttribNormalize(p0 ,p1);

}
osg::QReflect_Array * osg::QReflect_Geometry::getColorArray()const{
PMOCSAFEADDOBJECT(*_model->getColorArray(),inst);
return inst.isValid()?((osg::QReflect_Array * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Array * osg::QReflect_Geometry::getFogCoordArray()const{
PMOCSAFEADDOBJECT(*_model->getFogCoordArray(),inst);
return inst.isValid()?((osg::QReflect_Array * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Array * osg::QReflect_Geometry::getNormalArray()const{
PMOCSAFEADDOBJECT(*_model->getNormalArray(),inst);
return inst.isValid()?((osg::QReflect_Array * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Array * osg::QReflect_Geometry::getSecondaryColorArray()const{
PMOCSAFEADDOBJECT(*_model->getSecondaryColorArray(),inst);
return inst.isValid()?((osg::QReflect_Array * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Array * osg::QReflect_Geometry::getVertexArray()const{
PMOCSAFEADDOBJECT(*_model->getVertexArray(),inst);
return inst.isValid()?((osg::QReflect_Array * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Array*osg::QReflect_Geometry::getTexCoordArray( unsigned int p0)const{
PMOCSAFEADDOBJECT(*_model->getTexCoordArray(p0),inst);
return inst.isValid()?((osg::QReflect_Array * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Array*osg::QReflect_Geometry::getTexCoordArray( unsigned int p0){
PMOCSAFEADDOBJECT(*_model->getTexCoordArray(p0),inst);
return inst.isValid()?((osg::QReflect_Array * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Array*osg::QReflect_Geometry::getVertexAttribArray( unsigned int p0)const{
PMOCSAFEADDOBJECT(*_model->getVertexAttribArray(p0),inst);
return inst.isValid()?((osg::QReflect_Array * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Array*osg::QReflect_Geometry::getVertexAttribArray( unsigned int p0){
PMOCSAFEADDOBJECT(*_model->getVertexAttribArray(p0),inst);
return inst.isValid()?((osg::QReflect_Array * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_ElementBufferObject*osg::QReflect_Geometry::getOrCreateElementBufferObject(){
PMOCSAFEADDOBJECT(*_model->getOrCreateElementBufferObject(),inst);
return inst.isValid()?((osg::QReflect_ElementBufferObject * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Geometry*osg::QReflect_Geometry::asGeometry()const{
PMOCSAFEADDOBJECT(*_model->asGeometry(),inst);
return inst.isValid()?((osg::QReflect_Geometry * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Geometry*osg::QReflect_Geometry::asGeometry(){
PMOCSAFEADDOBJECT(*_model->asGeometry(),inst);
return inst.isValid()?((osg::QReflect_Geometry * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Geometry::AttributeBinding  osg::QReflect_Geometry::getColorBinding()const{
osg::QReflect_Geometry::AttributeBinding ret=static_cast<osg::QReflect_Geometry::AttributeBinding>( _model->getColorBinding());return  ret;

}
osg::QReflect_Geometry::AttributeBinding  osg::QReflect_Geometry::getFogCoordBinding()const{
osg::QReflect_Geometry::AttributeBinding ret=static_cast<osg::QReflect_Geometry::AttributeBinding>( _model->getFogCoordBinding());return  ret;

}
osg::QReflect_Geometry::AttributeBinding  osg::QReflect_Geometry::getNormalBinding()const{
osg::QReflect_Geometry::AttributeBinding ret=static_cast<osg::QReflect_Geometry::AttributeBinding>( _model->getNormalBinding());return  ret;

}
osg::QReflect_Geometry::AttributeBinding  osg::QReflect_Geometry::getSecondaryColorBinding()const{
osg::QReflect_Geometry::AttributeBinding ret=static_cast<osg::QReflect_Geometry::AttributeBinding>( _model->getSecondaryColorBinding());return  ret;

}
osg::QReflect_Geometry::AttributeBinding  osg::QReflect_Geometry::getVertexAttribBinding( unsigned int p0)const{
osg::QReflect_Geometry::AttributeBinding ret=static_cast<osg::QReflect_Geometry::AttributeBinding>( _model->getVertexAttribBinding(p0));return  ret;

}
osg::QReflect_PrimitiveSet*osg::QReflect_Geometry::getPrimitiveSet( unsigned int p0)const{
PMOCSAFEADDOBJECT(*_model->getPrimitiveSet(p0),inst);
return inst.isValid()?((osg::QReflect_PrimitiveSet * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_PrimitiveSet*osg::QReflect_Geometry::getPrimitiveSet( unsigned int p0){
PMOCSAFEADDOBJECT(*_model->getPrimitiveSet(p0),inst);
return inst.isValid()?((osg::QReflect_PrimitiveSet * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_VertexBufferObject*osg::QReflect_Geometry::getOrCreateVertexBufferObject(){
PMOCSAFEADDOBJECT(*_model->getOrCreateVertexBufferObject(),inst);
return inst.isValid()?((osg::QReflect_VertexBufferObject * )inst.model->createQQModel(&inst)):NULL;
}
void osg::QReflect_Geometry::pmoc_reverse_setColorArray( osg::QReflect_Array *par){_model->setColorArray(NULL);
emit ColorArrayChanged(NULL);
}
void osg::QReflect_Geometry::pmoc_reverse_setFogCoordArray( osg::QReflect_Array *par){_model->setFogCoordArray(NULL);
emit FogCoordArrayChanged(NULL);
}
void osg::QReflect_Geometry::pmoc_reverse_setNormalArray( osg::QReflect_Array *par){_model->setNormalArray(NULL);
emit NormalArrayChanged(NULL);
}
void osg::QReflect_Geometry::pmoc_reverse_setSecondaryColorArray( osg::QReflect_Array *par){_model->setSecondaryColorArray(NULL);
emit SecondaryColorArrayChanged(NULL);
}
void osg::QReflect_Geometry::pmoc_reverse_setVertexArray( osg::QReflect_Array *par){_model->setVertexArray(NULL);
emit VertexArrayChanged(NULL);
}
void osg::QReflect_Geometry::setColorArray( osg::QReflect_Array *par){_model->setColorArray(par->_model);
emit ColorArrayChanged(par);
}
void osg::QReflect_Geometry::setFogCoordArray( osg::QReflect_Array *par){_model->setFogCoordArray(par->_model);
emit FogCoordArrayChanged(par);
}
void osg::QReflect_Geometry::setNormalArray( osg::QReflect_Array *par){_model->setNormalArray(par->_model);
emit NormalArrayChanged(par);
}
void osg::QReflect_Geometry::setSecondaryColorArray( osg::QReflect_Array *par){_model->setSecondaryColorArray(par->_model);
emit SecondaryColorArrayChanged(par);
}
void osg::QReflect_Geometry::setVertexArray( osg::QReflect_Array *par){_model->setVertexArray(par->_model);
emit VertexArrayChanged(par);
}

///DefaultConstructor////////////////
osg::QReflect_Geometry::QReflect_Geometry(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::Geometry*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_Geometry::~QReflect_Geometry( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_Geometry::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_Geometry::createInstance( ){
osg::ref_ptr<osg::Geometry> osg_Geometry_ptr	;
osg_Geometry_ptr = new osg::Geometry ()	;
Instance o(PMOCGETMETACLASS("osg::Geometry"),(void*)osg_Geometry_ptr.get()		,true);
_managedinstances.insert(osg_Geometry_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_Geometry::MetaQReflect_Geometry():MetaQQuickClass( "osg::Geometry"){
_typeid=&typeid(osg::Geometry );           qRegisterMetaType<QMLGeometry>();
qmlRegisterType<QReflect_Geometry>("pmoc.osg",1,0,"QReflect_Geometry");
           qmlRegisterType<QMLGeometry>("pmoc.osg",1,0,"QMLGeometry");
       PMOCACTION("getColorArray","setColorArray","unsetColorArray");
       PMOCACTION("getFogCoordArray","setFogCoordArray","unsetFogCoordArray");
       PMOCACTION("getNormalArray","setNormalArray","unsetNormalArray");
       PMOCACTION("getSecondaryColorArray","setSecondaryColorArray","unsetSecondaryColorArray");
       PMOCACTION("getVertexArray","setVertexArray","unsetVertexArray");
};
const std::string osg::MetaQReflect_Geometry::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_Geometry::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_Geometry::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_Geometry::createQQModel(Instance*i){ //return new MetaQReflect_Geometry_QModel(i);}
QMLGeometry *ret =new QMLGeometry(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::Drawable *mother =dynamic_cast<osg::Drawable*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::Drawable");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::Drawable model for osg::Geometryis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::Drawable");
if(!cl){std::cerr<<"osg::Drawable QQModel for osg::Geometryis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Geometry_pmoc.cpp"
#endif





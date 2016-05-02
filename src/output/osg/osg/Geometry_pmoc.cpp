#include <osg/Geometry>
//includes
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/Geometry_pmoc.hpp>
#include <customCode/osg/Geometry_pmoc.hpp>
#include <customCode/osg/Geometry_pmoc.hpp>
#include <customCode/osg/Array_pmoc.hpp>
using namespace pmoc;
 GLboolean  deprecated_osg::QReflect_Geometry:: getVertexAttribNormalize( unsigned int  p0)const{
//params checking
return _model->getVertexAttribNormalize(p0);

}
 void deprecated_osg::QReflect_Geometry::setColorBinding(deprecated_osg::QReflect_Geometry::AttributeBinding  p0){
//params checking
 _model->setColorBinding(static_cast<deprecated_osg::Geometry::AttributeBinding>(p0));
emit ColorBindingChanged();

}
 void deprecated_osg::QReflect_Geometry::setColorIndices(osg::QReflect_IndexArray  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: deprecated_osg::QReflect_Geometry::setColorIndices : parameter n.0 is NULL\n"<<endl;return;}
 _model->setColorIndices(p0->_model);
emit ColorIndicesChanged();

}
 void deprecated_osg::QReflect_Geometry::setFogCoordBinding(deprecated_osg::QReflect_Geometry::AttributeBinding  p0){
//params checking
 _model->setFogCoordBinding(static_cast<deprecated_osg::Geometry::AttributeBinding>(p0));
emit FogCoordBindingChanged();

}
 void deprecated_osg::QReflect_Geometry::setFogCoordIndices(osg::QReflect_IndexArray  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: deprecated_osg::QReflect_Geometry::setFogCoordIndices : parameter n.0 is NULL\n"<<endl;return;}
 _model->setFogCoordIndices(p0->_model);
emit FogCoordIndicesChanged();

}
 void deprecated_osg::QReflect_Geometry::setNormalBinding(deprecated_osg::QReflect_Geometry::AttributeBinding  p0){
//params checking
 _model->setNormalBinding(static_cast<deprecated_osg::Geometry::AttributeBinding>(p0));
emit NormalBindingChanged();

}
 void deprecated_osg::QReflect_Geometry::setNormalIndices(osg::QReflect_IndexArray  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: deprecated_osg::QReflect_Geometry::setNormalIndices : parameter n.0 is NULL\n"<<endl;return;}
 _model->setNormalIndices(p0->_model);
emit NormalIndicesChanged();

}
 void deprecated_osg::QReflect_Geometry::setSecondaryColorBinding(deprecated_osg::QReflect_Geometry::AttributeBinding  p0){
//params checking
 _model->setSecondaryColorBinding(static_cast<deprecated_osg::Geometry::AttributeBinding>(p0));
emit SecondaryColorBindingChanged();

}
 void deprecated_osg::QReflect_Geometry::setSecondaryColorIndices(osg::QReflect_IndexArray  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: deprecated_osg::QReflect_Geometry::setSecondaryColorIndices : parameter n.0 is NULL\n"<<endl;return;}
 _model->setSecondaryColorIndices(p0->_model);
emit SecondaryColorIndicesChanged();

}
 void deprecated_osg::QReflect_Geometry::setTexCoordIndices( unsigned int  p0 ,osg::QReflect_IndexArray  *p1){
//params checking
if(! p1) {std::cerr<<"PMOC: deprecated_osg::QReflect_Geometry::setTexCoordIndices : parameter n.1 is NULL\n"<<endl;return;}
 _model->setTexCoordIndices(p0 ,p1->_model);

}
 void deprecated_osg::QReflect_Geometry::setVertexAttribBinding( unsigned int  p0 ,deprecated_osg::QReflect_Geometry::AttributeBinding  p1){
//params checking
 _model->setVertexAttribBinding(p0 ,static_cast<deprecated_osg::Geometry::AttributeBinding>(p1));

}
 void deprecated_osg::QReflect_Geometry::setVertexAttribIndices( unsigned int  p0 ,osg::QReflect_IndexArray  *p1){
//params checking
if(! p1) {std::cerr<<"PMOC: deprecated_osg::QReflect_Geometry::setVertexAttribIndices : parameter n.1 is NULL\n"<<endl;return;}
 _model->setVertexAttribIndices(p0 ,p1->_model);

}
 void deprecated_osg::QReflect_Geometry::setVertexAttribNormalize( unsigned int  p0 , GLboolean  p1){
//params checking
 _model->setVertexAttribNormalize(p0 ,p1);

}
 void deprecated_osg::QReflect_Geometry::setVertexIndices(osg::QReflect_IndexArray  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: deprecated_osg::QReflect_Geometry::setVertexIndices : parameter n.0 is NULL\n"<<endl;return;}
 _model->setVertexIndices(p0->_model);
emit VertexIndicesChanged();

}
deprecated_osg::QReflect_Geometry::AttributeBinding  deprecated_osg::QReflect_Geometry::getColorBinding()const{
//params checking
deprecated_osg::QReflect_Geometry::AttributeBinding ret=static_cast<deprecated_osg::QReflect_Geometry::AttributeBinding>( _model->getColorBinding());return  ret;

}
deprecated_osg::QReflect_Geometry::AttributeBinding  deprecated_osg::QReflect_Geometry::getFogCoordBinding()const{
//params checking
deprecated_osg::QReflect_Geometry::AttributeBinding ret=static_cast<deprecated_osg::QReflect_Geometry::AttributeBinding>( _model->getFogCoordBinding());return  ret;

}
deprecated_osg::QReflect_Geometry::AttributeBinding  deprecated_osg::QReflect_Geometry::getNormalBinding()const{
//params checking
deprecated_osg::QReflect_Geometry::AttributeBinding ret=static_cast<deprecated_osg::QReflect_Geometry::AttributeBinding>( _model->getNormalBinding());return  ret;

}
deprecated_osg::QReflect_Geometry::AttributeBinding  deprecated_osg::QReflect_Geometry::getSecondaryColorBinding()const{
//params checking
deprecated_osg::QReflect_Geometry::AttributeBinding ret=static_cast<deprecated_osg::QReflect_Geometry::AttributeBinding>( _model->getSecondaryColorBinding());return  ret;

}
deprecated_osg::QReflect_Geometry::AttributeBinding  deprecated_osg::QReflect_Geometry::getVertexAttribBinding( unsigned int  p0)const{
//params checking
deprecated_osg::QReflect_Geometry::AttributeBinding ret=static_cast<deprecated_osg::QReflect_Geometry::AttributeBinding>( _model->getVertexAttribBinding(p0));return  ret;

}
osg::QReflect_IndexArray*deprecated_osg::QReflect_Geometry::getColorIndices()const{
//params checking
PMOCSAFEADDOBJECT(*_model->getColorIndices(),inst);
return inst.isValid()?((osg::QReflect_IndexArray * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_IndexArray*deprecated_osg::QReflect_Geometry::getFogCoordIndices()const{
//params checking
PMOCSAFEADDOBJECT(*_model->getFogCoordIndices(),inst);
return inst.isValid()?((osg::QReflect_IndexArray * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_IndexArray*deprecated_osg::QReflect_Geometry::getNormalIndices()const{
//params checking
PMOCSAFEADDOBJECT(*_model->getNormalIndices(),inst);
return inst.isValid()?((osg::QReflect_IndexArray * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_IndexArray*deprecated_osg::QReflect_Geometry::getSecondaryColorIndices()const{
//params checking
PMOCSAFEADDOBJECT(*_model->getSecondaryColorIndices(),inst);
return inst.isValid()?((osg::QReflect_IndexArray * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_IndexArray*deprecated_osg::QReflect_Geometry::getTexCoordIndices( unsigned int  p0)const{
//params checking
PMOCSAFEADDOBJECT(*_model->getTexCoordIndices(p0),inst);
return inst.isValid()?((osg::QReflect_IndexArray * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_IndexArray*deprecated_osg::QReflect_Geometry::getVertexAttribIndices( unsigned int  p0)const{
//params checking
PMOCSAFEADDOBJECT(*_model->getVertexAttribIndices(p0),inst);
return inst.isValid()?((osg::QReflect_IndexArray * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_IndexArray*deprecated_osg::QReflect_Geometry::getVertexIndices()const{
//params checking
PMOCSAFEADDOBJECT(*_model->getVertexIndices(),inst);
return inst.isValid()?((osg::QReflect_IndexArray * )inst.model->createQQModel(&inst)):NULL;
}

///DefaultConstructor////////////////
deprecated_osg::QReflect_Geometry::QReflect_Geometry(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
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
_typeid=&typeid(deprecated_osg::Geometry );
           qRegisterMetaType<deprecated_osg::QMLGeometry>();
           qRegisterMetaType<deprecated_osg::QMLGeometry*>("pmoc.deprecated_osg.QMLGeometry");
qmlRegisterType<deprecated_osg::QReflect_Geometry>("pmoc.deprecated_osg",1,0,"QReflect_Geometry");
           qmlRegisterType<deprecated_osg::QMLGeometry>("pmoc.deprecated_osg",1,0,"QMLGeometry");
};
const std::string deprecated_osg::MetaQReflect_Geometry::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string deprecated_osg::MetaQReflect_Geometry::PREcompoQML()const{return std::string("");}
const std::string deprecated_osg::MetaQReflect_Geometry::POSTcompoQML()const{return std::string("");}
QQModel* deprecated_osg::MetaQReflect_Geometry::createQQModel(const Instance*i){ //return new MetaQReflect_Geometry_QModel(i);}
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
#include <customCode/osg/BufferObject_pmoc.hpp>
#include <customCode/osg/Geometry_pmoc.hpp>
#include <customCode/osg/PrimitiveSet_pmoc.hpp>
#include <customCode/osg/RenderInfo_pmoc.hpp>
#include <customCode/osg/State_pmoc.hpp>
using namespace pmoc;
 GLboolean  osg::QReflect_Geometry:: getVertexAttribNormalize( unsigned int  p0)const{
//params checking
return _model->getVertexAttribNormalize(p0);

}
 bool  osg::QReflect_Geometry:: addPrimitiveSet(osg::QReflect_PrimitiveSet  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Geometry::addPrimitiveSet : parameter n.0 is NULL\n"<<endl;return -1;}
return _model->addPrimitiveSet(p0->_model);

}
 bool  osg::QReflect_Geometry:: checkForDeprecatedData(){
//params checking
return _model->checkForDeprecatedData();

}
 bool  osg::QReflect_Geometry:: containsDeprecatedData()const{
//params checking
return _model->containsDeprecatedData();

}
 bool  osg::QReflect_Geometry:: containsSharedArrays()const{
//params checking
return _model->containsSharedArrays();

}
 bool  osg::QReflect_Geometry:: empty()const{
//params checking
return _model->empty();

}
 bool  osg::QReflect_Geometry:: insertPrimitiveSet( unsigned int  p0 ,osg::QReflect_PrimitiveSet  *p1){
//params checking
if(! p1) {std::cerr<<"PMOC: osg::QReflect_Geometry::insertPrimitiveSet : parameter n.1 is NULL\n"<<endl;return -1;}
return _model->insertPrimitiveSet(p0 ,p1->_model);

}
 bool  osg::QReflect_Geometry:: removePrimitiveSet( unsigned int  p0 , unsigned int  p1){
//params checking
return _model->removePrimitiveSet(p0 ,p1);

}
 bool  osg::QReflect_Geometry:: setPrimitiveSet( unsigned int  p0 ,osg::QReflect_PrimitiveSet  *p1){
//params checking
if(! p1) {std::cerr<<"PMOC: osg::QReflect_Geometry::setPrimitiveSet : parameter n.1 is NULL\n"<<endl;return -1;}
return _model->setPrimitiveSet(p0 ,p1->_model);

}
 bool  osg::QReflect_Geometry:: supports(osg::QReflect_PrimitiveFunctor  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Geometry::supports : parameter n.0 is NULL\n"<<endl;return -1;}
return _model->supports(*p0->_model);

}
 bool  osg::QReflect_Geometry:: supports(osg::QReflect_PrimitiveIndexFunctor  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Geometry::supports : parameter n.0 is NULL\n"<<endl;return -1;}
return _model->supports(*p0->_model);

}
 unsigned int  osg::QReflect_Geometry:: getGLObjectSizeHint()const{
//params checking
return _model->getGLObjectSizeHint();

}
 unsigned int  osg::QReflect_Geometry:: getNumPrimitiveSets()const{
//params checking
return _model->getNumPrimitiveSets();

}
 unsigned int  osg::QReflect_Geometry:: getNumTexCoordArrays()const{
//params checking
return _model->getNumTexCoordArrays();

}
 unsigned int  osg::QReflect_Geometry:: getNumVertexAttribArrays()const{
//params checking
return _model->getNumVertexAttribArrays();

}
 unsigned int  osg::QReflect_Geometry:: getPrimitiveSetIndex(osg::QReflect_PrimitiveSet  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Geometry::getPrimitiveSetIndex : parameter n.0 is NULL\n"<<endl;return -1;}
return _model->getPrimitiveSetIndex(p0->_model);

}
 void osg::QReflect_Geometry::accept(osg::QReflect_PrimitiveFunctor  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Geometry::accept : parameter n.0 is NULL\n"<<endl;return;}
 _model->accept(*p0->_model);

}
 void osg::QReflect_Geometry::accept(osg::QReflect_PrimitiveIndexFunctor  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Geometry::accept : parameter n.0 is NULL\n"<<endl;return;}
 _model->accept(*p0->_model);

}
 void osg::QReflect_Geometry::compileGLObjects(osg::QReflect_RenderInfo  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Geometry::compileGLObjects : parameter n.0 is NULL\n"<<endl;return;}
 _model->compileGLObjects(*p0->_model);

}
 void osg::QReflect_Geometry::dirtyDisplayList(){
//params checking
 _model->dirtyDisplayList();

}
 void osg::QReflect_Geometry::drawImplementation(osg::QReflect_RenderInfo  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Geometry::drawImplementation : parameter n.0 is NULL\n"<<endl;return;}
 _model->drawImplementation(*p0->_model);

}
 void osg::QReflect_Geometry::drawPrimitivesImplementation(osg::QReflect_RenderInfo  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Geometry::drawPrimitivesImplementation : parameter n.0 is NULL\n"<<endl;return;}
 _model->drawPrimitivesImplementation(*p0->_model);

}
 void osg::QReflect_Geometry::drawVertexArraysImplementation(osg::QReflect_RenderInfo  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Geometry::drawVertexArraysImplementation : parameter n.0 is NULL\n"<<endl;return;}
 _model->drawVertexArraysImplementation(*p0->_model);

}
 void osg::QReflect_Geometry::duplicateSharedArrays(){
//params checking
 _model->duplicateSharedArrays();

}
 void osg::QReflect_Geometry::fixDeprecatedData(){
//params checking
 _model->fixDeprecatedData();

}
 void osg::QReflect_Geometry::releaseGLObjects(osg::QReflect_State  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Geometry::releaseGLObjects : parameter n.0 is NULL\n"<<endl;return;}
 _model->releaseGLObjects(p0->_model);

}
 void osg::QReflect_Geometry::resizeGLObjectBuffers( unsigned int  p0){
//params checking
 _model->resizeGLObjectBuffers(p0);

}
 void osg::QReflect_Geometry::setColorArray(osg::QReflect_Array  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Geometry::setColorArray : parameter n.0 is NULL\n"<<endl;return;}
 _model->setColorArray(p0->_model);
emit ColorArrayChanged();

}
 void osg::QReflect_Geometry::setColorBinding(osg::QReflect_Geometry::AttributeBinding  p0){
//params checking
 _model->setColorBinding(static_cast<osg::Geometry::AttributeBinding>(p0));
emit ColorBindingChanged();

}
 void osg::QReflect_Geometry::setFogCoordArray(osg::QReflect_Array  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Geometry::setFogCoordArray : parameter n.0 is NULL\n"<<endl;return;}
 _model->setFogCoordArray(p0->_model);
emit FogCoordArrayChanged();

}
 void osg::QReflect_Geometry::setFogCoordBinding(osg::QReflect_Geometry::AttributeBinding  p0){
//params checking
 _model->setFogCoordBinding(static_cast<osg::Geometry::AttributeBinding>(p0));
emit FogCoordBindingChanged();

}
 void osg::QReflect_Geometry::setNormalArray(osg::QReflect_Array  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Geometry::setNormalArray : parameter n.0 is NULL\n"<<endl;return;}
 _model->setNormalArray(p0->_model);
emit NormalArrayChanged();

}
 void osg::QReflect_Geometry::setNormalBinding(osg::QReflect_Geometry::AttributeBinding  p0){
//params checking
 _model->setNormalBinding(static_cast<osg::Geometry::AttributeBinding>(p0));
emit NormalBindingChanged();

}
 void osg::QReflect_Geometry::setSecondaryColorArray(osg::QReflect_Array  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Geometry::setSecondaryColorArray : parameter n.0 is NULL\n"<<endl;return;}
 _model->setSecondaryColorArray(p0->_model);
emit SecondaryColorArrayChanged();

}
 void osg::QReflect_Geometry::setSecondaryColorBinding(osg::QReflect_Geometry::AttributeBinding  p0){
//params checking
 _model->setSecondaryColorBinding(static_cast<osg::Geometry::AttributeBinding>(p0));
emit SecondaryColorBindingChanged();

}
 void osg::QReflect_Geometry::setTexCoordArray( unsigned int  p0 ,osg::QReflect_Array  *p1){
//params checking
if(! p1) {std::cerr<<"PMOC: osg::QReflect_Geometry::setTexCoordArray : parameter n.1 is NULL\n"<<endl;return;}
 _model->setTexCoordArray(p0 ,p1->_model);

}
 void osg::QReflect_Geometry::setUseVertexBufferObjects( bool  p0){
//params checking
 _model->setUseVertexBufferObjects(p0);

}
 void osg::QReflect_Geometry::setVertexArray(osg::QReflect_Array  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Geometry::setVertexArray : parameter n.0 is NULL\n"<<endl;return;}
 _model->setVertexArray(p0->_model);
emit VertexArrayChanged();

}
 void osg::QReflect_Geometry::setVertexAttribArray( unsigned int  p0 ,osg::QReflect_Array  *p1){
//params checking
if(! p1) {std::cerr<<"PMOC: osg::QReflect_Geometry::setVertexAttribArray : parameter n.1 is NULL\n"<<endl;return;}
 _model->setVertexAttribArray(p0 ,p1->_model);

}
 void osg::QReflect_Geometry::setVertexAttribBinding( unsigned int  p0 ,osg::QReflect_Geometry::AttributeBinding  p1){
//params checking
 _model->setVertexAttribBinding(p0 ,static_cast<osg::Geometry::AttributeBinding>(p1));

}
 void osg::QReflect_Geometry::setVertexAttribNormalize( unsigned int  p0 , GLboolean  p1){
//params checking
 _model->setVertexAttribNormalize(p0 ,p1);

}
osg::QReflect_Array*osg::QReflect_Geometry::getColorArray()const{
//params checking
PMOCSAFEADDOBJECT(*_model->getColorArray(),inst);
return inst.isValid()?((osg::QReflect_Array * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Array*osg::QReflect_Geometry::getColorArray(){
//params checking
PMOCSAFEADDOBJECT(*_model->getColorArray(),inst);
return inst.isValid()?((osg::QReflect_Array * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Array*osg::QReflect_Geometry::getFogCoordArray()const{
//params checking
PMOCSAFEADDOBJECT(*_model->getFogCoordArray(),inst);
return inst.isValid()?((osg::QReflect_Array * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Array*osg::QReflect_Geometry::getFogCoordArray(){
//params checking
PMOCSAFEADDOBJECT(*_model->getFogCoordArray(),inst);
return inst.isValid()?((osg::QReflect_Array * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Array*osg::QReflect_Geometry::getNormalArray()const{
//params checking
PMOCSAFEADDOBJECT(*_model->getNormalArray(),inst);
return inst.isValid()?((osg::QReflect_Array * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Array*osg::QReflect_Geometry::getNormalArray(){
//params checking
PMOCSAFEADDOBJECT(*_model->getNormalArray(),inst);
return inst.isValid()?((osg::QReflect_Array * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Array*osg::QReflect_Geometry::getSecondaryColorArray()const{
//params checking
PMOCSAFEADDOBJECT(*_model->getSecondaryColorArray(),inst);
return inst.isValid()?((osg::QReflect_Array * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Array*osg::QReflect_Geometry::getSecondaryColorArray(){
//params checking
PMOCSAFEADDOBJECT(*_model->getSecondaryColorArray(),inst);
return inst.isValid()?((osg::QReflect_Array * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Array*osg::QReflect_Geometry::getTexCoordArray( unsigned int  p0)const{
//params checking
PMOCSAFEADDOBJECT(*_model->getTexCoordArray(p0),inst);
return inst.isValid()?((osg::QReflect_Array * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Array*osg::QReflect_Geometry::getTexCoordArray( unsigned int  p0){
//params checking
PMOCSAFEADDOBJECT(*_model->getTexCoordArray(p0),inst);
return inst.isValid()?((osg::QReflect_Array * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Array*osg::QReflect_Geometry::getVertexArray()const{
//params checking
PMOCSAFEADDOBJECT(*_model->getVertexArray(),inst);
return inst.isValid()?((osg::QReflect_Array * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Array*osg::QReflect_Geometry::getVertexArray(){
//params checking
PMOCSAFEADDOBJECT(*_model->getVertexArray(),inst);
return inst.isValid()?((osg::QReflect_Array * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Array*osg::QReflect_Geometry::getVertexAttribArray( unsigned int  p0)const{
//params checking
PMOCSAFEADDOBJECT(*_model->getVertexAttribArray(p0),inst);
return inst.isValid()?((osg::QReflect_Array * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Array*osg::QReflect_Geometry::getVertexAttribArray( unsigned int  p0){
//params checking
PMOCSAFEADDOBJECT(*_model->getVertexAttribArray(p0),inst);
return inst.isValid()?((osg::QReflect_Array * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_ElementBufferObject*osg::QReflect_Geometry::getOrCreateElementBufferObject(){
//params checking
PMOCSAFEADDOBJECT(*_model->getOrCreateElementBufferObject(),inst);
return inst.isValid()?((osg::QReflect_ElementBufferObject * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Geometry*osg::QReflect_Geometry::asGeometry()const{
//params checking
PMOCSAFEADDOBJECT(*_model->asGeometry(),inst);
return inst.isValid()?((osg::QReflect_Geometry * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Geometry*osg::QReflect_Geometry::asGeometry(){
//params checking
PMOCSAFEADDOBJECT(*_model->asGeometry(),inst);
return inst.isValid()?((osg::QReflect_Geometry * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Geometry::AttributeBinding  osg::QReflect_Geometry::getColorBinding()const{
//params checking
osg::QReflect_Geometry::AttributeBinding ret=static_cast<osg::QReflect_Geometry::AttributeBinding>( _model->getColorBinding());return  ret;

}
osg::QReflect_Geometry::AttributeBinding  osg::QReflect_Geometry::getFogCoordBinding()const{
//params checking
osg::QReflect_Geometry::AttributeBinding ret=static_cast<osg::QReflect_Geometry::AttributeBinding>( _model->getFogCoordBinding());return  ret;

}
osg::QReflect_Geometry::AttributeBinding  osg::QReflect_Geometry::getNormalBinding()const{
//params checking
osg::QReflect_Geometry::AttributeBinding ret=static_cast<osg::QReflect_Geometry::AttributeBinding>( _model->getNormalBinding());return  ret;

}
osg::QReflect_Geometry::AttributeBinding  osg::QReflect_Geometry::getSecondaryColorBinding()const{
//params checking
osg::QReflect_Geometry::AttributeBinding ret=static_cast<osg::QReflect_Geometry::AttributeBinding>( _model->getSecondaryColorBinding());return  ret;

}
osg::QReflect_Geometry::AttributeBinding  osg::QReflect_Geometry::getVertexAttribBinding( unsigned int  p0)const{
//params checking
osg::QReflect_Geometry::AttributeBinding ret=static_cast<osg::QReflect_Geometry::AttributeBinding>( _model->getVertexAttribBinding(p0));return  ret;

}
osg::QReflect_PrimitiveSet*osg::QReflect_Geometry::getPrimitiveSet( unsigned int  p0)const{
//params checking
PMOCSAFEADDOBJECT(*_model->getPrimitiveSet(p0),inst);
return inst.isValid()?((osg::QReflect_PrimitiveSet * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_PrimitiveSet*osg::QReflect_Geometry::getPrimitiveSet( unsigned int  p0){
//params checking
PMOCSAFEADDOBJECT(*_model->getPrimitiveSet(p0),inst);
return inst.isValid()?((osg::QReflect_PrimitiveSet * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_VertexBufferObject*osg::QReflect_Geometry::getOrCreateVertexBufferObject(){
//params checking
PMOCSAFEADDOBJECT(*_model->getOrCreateVertexBufferObject(),inst);
return inst.isValid()?((osg::QReflect_VertexBufferObject * )inst.model->createQQModel(&inst)):NULL;
}

///DefaultConstructor////////////////
osg::QReflect_Geometry::QReflect_Geometry(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
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
_typeid=&typeid(osg::Geometry );
           qRegisterMetaType<osg::QMLGeometry>();
           qRegisterMetaType<osg::QMLGeometry*>("pmoc.osg.QMLGeometry");
qmlRegisterType<osg::QReflect_Geometry>("pmoc.osg",1,0,"QReflect_Geometry");
           qmlRegisterType<osg::QMLGeometry>("pmoc.osg",1,0,"QMLGeometry");
};
const std::string osg::MetaQReflect_Geometry::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_Geometry::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_Geometry::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_Geometry::createQQModel(const Instance*i){ //return new MetaQReflect_Geometry_QModel(i);}
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





#include <osg/ShapeDrawable>
//includes

#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/ShapeDrawable_pmoc.hpp>
#include <customCode/osg/ShapeDrawable_pmoc.hpp>
#include <customCode/osg/Drawable_pmoc.hpp>
#include <customCode/osg/CopyOp_pmoc.hpp>
#include <customCode/osg/Object_pmoc.hpp>
#include <customCode/osg/PrimitiveSet_pmoc.hpp>
#include <customCode/osg/RenderInfo_pmoc.hpp>
#include <customCode/osg/ShapeDrawable_pmoc.hpp>
#include <customCode/osg/Vec4f_pmoc.hpp>
using namespace pmoc;
 bool  osg::QReflect_ShapeDrawable:: isSameKindAs(osg::QReflect_Object  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_ShapeDrawable::isSameKindAs : parameter n.0 is NULL\n"<<endl;return -1;}
return _model->isSameKindAs(p0->_model);

}
 bool  osg::QReflect_ShapeDrawable:: supports(osg::QReflect_PrimitiveFunctor  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_ShapeDrawable::supports : parameter n.0 is NULL\n"<<endl;return -1;}
return _model->supports(*p0->_model);

}
 void osg::QReflect_ShapeDrawable::accept(osg::QReflect_PrimitiveFunctor  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_ShapeDrawable::accept : parameter n.0 is NULL\n"<<endl;return;}
 _model->accept(*p0->_model);

}
 void osg::QReflect_ShapeDrawable::drawImplementation(osg::QReflect_RenderInfo  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_ShapeDrawable::drawImplementation : parameter n.0 is NULL\n"<<endl;return;}
 _model->drawImplementation(*p0->_model);

}
 void osg::QReflect_ShapeDrawable::setColor(osg::QReflect_Vec4f  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_ShapeDrawable::setColor : parameter n.0 is NULL\n"<<endl;return;}
 _model->setColor(*p0->_model);

}
 void osg::QReflect_ShapeDrawable::setTessellationHints(osg::QReflect_TessellationHints  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_ShapeDrawable::setTessellationHints : parameter n.0 is NULL\n"<<endl;return;}
 _model->setTessellationHints(p0->_model);
emit TessellationHintsChanged();

}
const  char*  osg::QReflect_ShapeDrawable:: className()const{
//params checking
return _model->className();

}
const  char*  osg::QReflect_ShapeDrawable:: libraryName()const{
//params checking
return _model->libraryName();

}
osg::QReflect_Object*osg::QReflect_ShapeDrawable::clone(osg::QReflect_CopyOp  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_ShapeDrawable::clone : parameter n.0 is NULL\n"<<endl;;}
PMOCSAFEADDOBJECT(*_model->clone(*p0->_model),inst);
return inst.isValid()?((osg::QReflect_Object * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Object*osg::QReflect_ShapeDrawable::cloneType()const{
//params checking
PMOCSAFEADDOBJECT(*_model->cloneType(),inst);
return inst.isValid()?((osg::QReflect_Object * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_TessellationHints*osg::QReflect_ShapeDrawable::getTessellationHints()const{
//params checking
PMOCSAFEADDOBJECT(*_model->getTessellationHints(),inst);
return inst.isValid()?((osg::QReflect_TessellationHints * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_TessellationHints*osg::QReflect_ShapeDrawable::getTessellationHints(){
//params checking
PMOCSAFEADDOBJECT(*_model->getTessellationHints(),inst);
return inst.isValid()?((osg::QReflect_TessellationHints * )inst.model->createQQModel(&inst)):NULL;
}

///DefaultConstructor////////////////
osg::QReflect_ShapeDrawable::QReflect_ShapeDrawable(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::ShapeDrawable*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_ShapeDrawable::~QReflect_ShapeDrawable( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_ShapeDrawable::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_ShapeDrawable::createInstance( ){
osg::ref_ptr<osg::ShapeDrawable> osg_ShapeDrawable_ptr	;
osg_ShapeDrawable_ptr = new osg::ShapeDrawable ()	;
Instance o(PMOCGETMETACLASS("osg::ShapeDrawable"),(void*)osg_ShapeDrawable_ptr.get()		,true);
_managedinstances.insert(osg_ShapeDrawable_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_ShapeDrawable::MetaQReflect_ShapeDrawable():MetaQQuickClass( "osg::ShapeDrawable"){
_typeid=&typeid(osg::ShapeDrawable );
           qRegisterMetaType<osg::QMLShapeDrawable>();
           qRegisterMetaType<osg::QMLShapeDrawable*>("pmoc.osg.QMLShapeDrawable");
qmlRegisterType<osg::QReflect_ShapeDrawable>("pmoc.osg",1,0,"QReflect_ShapeDrawable");
           qmlRegisterType<osg::QMLShapeDrawable>("pmoc.osg",1,0,"QMLShapeDrawable");
};
const std::string osg::MetaQReflect_ShapeDrawable::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_ShapeDrawable::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_ShapeDrawable::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_ShapeDrawable::createQQModel(const Instance*i){ //return new MetaQReflect_ShapeDrawable_QModel(i);}
QMLShapeDrawable *ret =new QMLShapeDrawable(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::Drawable *mother =dynamic_cast<osg::Drawable*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::Drawable");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::Drawable model for osg::ShapeDrawableis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::Drawable");
if(!cl){std::cerr<<"osg::Drawable QQModel for osg::ShapeDrawableis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_ShapeDrawable_pmoc.cpp"
#endif
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/ShapeDrawable_pmoc.hpp>
#include <customCode/osg/ShapeDrawable_pmoc.hpp>
#include <customCode/osg/Object_pmoc.hpp>
using namespace pmoc;
 bool  osg::QReflect_TessellationHints:: getCreateBackFace()const{
//params checking
return _model->getCreateBackFace();

}
 bool  osg::QReflect_TessellationHints:: getCreateBody()const{
//params checking
return _model->getCreateBody();

}
 bool  osg::QReflect_TessellationHints:: getCreateBottom()const{
//params checking
return _model->getCreateBottom();

}
 bool  osg::QReflect_TessellationHints:: getCreateFrontFace()const{
//params checking
return _model->getCreateFrontFace();

}
 bool  osg::QReflect_TessellationHints:: getCreateNormals()const{
//params checking
return _model->getCreateNormals();

}
 bool  osg::QReflect_TessellationHints:: getCreateTextureCoords()const{
//params checking
return _model->getCreateTextureCoords();

}
 bool  osg::QReflect_TessellationHints:: getCreateTop()const{
//params checking
return _model->getCreateTop();

}
 float  osg::QReflect_TessellationHints:: getDetailRatio()const{
//params checking
return _model->getDetailRatio();

}
 unsigned int  osg::QReflect_TessellationHints:: getTargetNumFaces()const{
//params checking
return _model->getTargetNumFaces();

}
 void osg::QReflect_TessellationHints::setCreateBackFace( bool  p0){
//params checking
 _model->setCreateBackFace(p0);
emit CreateBackFaceChanged();

}
 void osg::QReflect_TessellationHints::setCreateBody( bool  p0){
//params checking
 _model->setCreateBody(p0);
emit CreateBodyChanged();

}
 void osg::QReflect_TessellationHints::setCreateBottom( bool  p0){
//params checking
 _model->setCreateBottom(p0);
emit CreateBottomChanged();

}
 void osg::QReflect_TessellationHints::setCreateFrontFace( bool  p0){
//params checking
 _model->setCreateFrontFace(p0);
emit CreateFrontFaceChanged();

}
 void osg::QReflect_TessellationHints::setCreateNormals( bool  p0){
//params checking
 _model->setCreateNormals(p0);
emit CreateNormalsChanged();

}
 void osg::QReflect_TessellationHints::setCreateTextureCoords( bool  p0){
//params checking
 _model->setCreateTextureCoords(p0);
emit CreateTextureCoordsChanged();

}
 void osg::QReflect_TessellationHints::setCreateTop( bool  p0){
//params checking
 _model->setCreateTop(p0);
emit CreateTopChanged();

}
 void osg::QReflect_TessellationHints::setDetailRatio( float  p0){
//params checking
 _model->setDetailRatio(p0);
emit DetailRatioChanged();

}
 void osg::QReflect_TessellationHints::setTargetNumFaces( unsigned int  p0){
//params checking
 _model->setTargetNumFaces(p0);
emit TargetNumFacesChanged();

}
 void osg::QReflect_TessellationHints::setTessellationMode(osg::QReflect_TessellationHints::TessellationMode  p0){
//params checking
 _model->setTessellationMode(static_cast<osg::TessellationHints::TessellationMode>(p0));
emit TessellationModeChanged();

}
osg::QReflect_TessellationHints::TessellationMode  osg::QReflect_TessellationHints::getTessellationMode()const{
//params checking
osg::QReflect_TessellationHints::TessellationMode ret=static_cast<osg::QReflect_TessellationHints::TessellationMode>( _model->getTessellationMode());return  ret;

}

///DefaultConstructor////////////////
osg::QReflect_TessellationHints::QReflect_TessellationHints(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::TessellationHints*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_TessellationHints::~QReflect_TessellationHints( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_TessellationHints::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_TessellationHints::createInstance( ){
osg::ref_ptr<osg::TessellationHints> osg_TessellationHints_ptr	;
osg_TessellationHints_ptr = new osg::TessellationHints ()	;
Instance o(PMOCGETMETACLASS("osg::TessellationHints"),(void*)osg_TessellationHints_ptr.get()		,true);
_managedinstances.insert(osg_TessellationHints_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_TessellationHints::MetaQReflect_TessellationHints():MetaQQuickClass( "osg::TessellationHints"){
_typeid=&typeid(osg::TessellationHints );
           qRegisterMetaType<osg::QMLTessellationHints>();
           qRegisterMetaType<osg::QMLTessellationHints*>("pmoc.osg.QMLTessellationHints");
qmlRegisterType<osg::QReflect_TessellationHints>("pmoc.osg",1,0,"QReflect_TessellationHints");
           qmlRegisterType<osg::QMLTessellationHints>("pmoc.osg",1,0,"QMLTessellationHints");
};
const std::string osg::MetaQReflect_TessellationHints::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_TessellationHints::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_TessellationHints::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_TessellationHints::createQQModel(const Instance*i){ //return new MetaQReflect_TessellationHints_QModel(i);}
QMLTessellationHints *ret =new QMLTessellationHints(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::Object *mother =dynamic_cast<osg::Object*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::Object");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::Object model for osg::TessellationHintsis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::Object");
if(!cl){std::cerr<<"osg::Object QQModel for osg::TessellationHintsis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_ShapeDrawable_pmoc.cpp"
#endif





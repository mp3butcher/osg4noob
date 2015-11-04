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
#include <customCode/osg/ShapeDrawable_pmoc.hpp>
#include <customCode/osg/Vec4f_pmoc.hpp>
#include <osg/ShapeDrawable>
#include <osg/ShapeDrawable_pmoc.hpp>
using namespace pmoc;
 bool  osg::QReflect_ShapeDrawable::isSameKindAs(osg::QReflect_Object *p0)const{
return _model->isSameKindAs(p0->_model);

}
 bool  osg::QReflect_ShapeDrawable::supports(osg::QReflect_PrimitiveFunctor *p0)const{
return _model->supports(*p0->_model);

}
 void osg::QReflect_ShapeDrawable::setColor(osg::QReflect_Vec4f *p0){
 _model->setColor(*p0->_model);

}
const  char*  osg::QReflect_ShapeDrawable::className()const{
return _model->className();

}
const  char*  osg::QReflect_ShapeDrawable::libraryName()const{
return _model->libraryName();

}
osg::QReflect_Object*osg::QReflect_ShapeDrawable::clone(osg::QReflect_CopyOp *p0)const{
PMOCSAFEADDOBJECT(*_model->clone(*p0->_model),inst);
return inst.isValid()?((osg::QReflect_Object * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Object*osg::QReflect_ShapeDrawable::cloneType()const{
PMOCSAFEADDOBJECT(*_model->cloneType(),inst);
return inst.isValid()?((osg::QReflect_Object * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_TessellationHints * osg::QReflect_ShapeDrawable::getTessellationHints()const{
PMOCSAFEADDOBJECT(*_model->getTessellationHints(),inst);
return inst.isValid()?((osg::QReflect_TessellationHints * )inst.model->createQQModel(&inst)):NULL;
}
void osg::QReflect_ShapeDrawable::pmoc_reverse_setTessellationHints( osg::QReflect_TessellationHints *par){_model->setTessellationHints(NULL);
emit TessellationHintsChanged(NULL);
}
void osg::QReflect_ShapeDrawable::setTessellationHints( osg::QReflect_TessellationHints *par){_model->setTessellationHints(par->_model);
emit TessellationHintsChanged(par);
}

///DefaultConstructor////////////////
osg::QReflect_ShapeDrawable::QReflect_ShapeDrawable(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
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
_typeid=&typeid(osg::ShapeDrawable );           qRegisterMetaType<QMLShapeDrawable>();
qmlRegisterType<QReflect_ShapeDrawable>("pmoc.osg",1,0,"QReflect_ShapeDrawable");
           qmlRegisterType<QMLShapeDrawable>("pmoc.osg",1,0,"QMLShapeDrawable");
       PMOCACTION("getTessellationHints","setTessellationHints","unsetTessellationHints");
};
const std::string osg::MetaQReflect_ShapeDrawable::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_ShapeDrawable::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_ShapeDrawable::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_ShapeDrawable::createQQModel(Instance*i){ //return new MetaQReflect_ShapeDrawable_QModel(i);}
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
 void osg::QReflect_TessellationHints::setTessellationMode(osg::QReflect_TessellationHints::TessellationMode p0){
 _model->setTessellationMode(static_cast<osg::TessellationHints::TessellationMode>(p0));

}
const bool osg::QReflect_TessellationHints::getCreateBackFace()const{return _model->getCreateBackFace();}
const bool osg::QReflect_TessellationHints::getCreateBody()const{return _model->getCreateBody();}
const bool osg::QReflect_TessellationHints::getCreateBottom()const{return _model->getCreateBottom();}
const bool osg::QReflect_TessellationHints::getCreateFrontFace()const{return _model->getCreateFrontFace();}
const bool osg::QReflect_TessellationHints::getCreateNormals()const{return _model->getCreateNormals();}
const bool osg::QReflect_TessellationHints::getCreateTextureCoords()const{return _model->getCreateTextureCoords();}
const bool osg::QReflect_TessellationHints::getCreateTop()const{return _model->getCreateTop();}
const float osg::QReflect_TessellationHints::getDetailRatio()const{return _model->getDetailRatio();}
const unsigned int osg::QReflect_TessellationHints::getTargetNumFaces()const{return _model->getTargetNumFaces();}
osg::QReflect_TessellationHints::TessellationMode  osg::QReflect_TessellationHints::getTessellationMode()const{
osg::QReflect_TessellationHints::TessellationMode ret=static_cast<osg::QReflect_TessellationHints::TessellationMode>( _model->getTessellationMode());return  ret;

}
void  osg::QReflect_TessellationHints::setCreateBackFace(const bool &par){_model->setCreateBackFace(par);emit CreateBackFaceChanged(par);}
void  osg::QReflect_TessellationHints::setCreateBody(const bool &par){_model->setCreateBody(par);emit CreateBodyChanged(par);}
void  osg::QReflect_TessellationHints::setCreateBottom(const bool &par){_model->setCreateBottom(par);emit CreateBottomChanged(par);}
void  osg::QReflect_TessellationHints::setCreateFrontFace(const bool &par){_model->setCreateFrontFace(par);emit CreateFrontFaceChanged(par);}
void  osg::QReflect_TessellationHints::setCreateNormals(const bool &par){_model->setCreateNormals(par);emit CreateNormalsChanged(par);}
void  osg::QReflect_TessellationHints::setCreateTextureCoords(const bool &par){_model->setCreateTextureCoords(par);emit CreateTextureCoordsChanged(par);}
void  osg::QReflect_TessellationHints::setCreateTop(const bool &par){_model->setCreateTop(par);emit CreateTopChanged(par);}
void  osg::QReflect_TessellationHints::setDetailRatio(const float &par){_model->setDetailRatio(par);emit DetailRatioChanged(par);}
void  osg::QReflect_TessellationHints::setTargetNumFaces(const unsigned int &par){_model->setTargetNumFaces(par);emit TargetNumFacesChanged(par);}

///DefaultConstructor////////////////
osg::QReflect_TessellationHints::QReflect_TessellationHints(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
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
_typeid=&typeid(osg::TessellationHints );           qRegisterMetaType<QMLTessellationHints>();
qmlRegisterType<QReflect_TessellationHints>("pmoc.osg",1,0,"QReflect_TessellationHints");
           qmlRegisterType<QMLTessellationHints>("pmoc.osg",1,0,"QMLTessellationHints");
};
const std::string osg::MetaQReflect_TessellationHints::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_TessellationHints::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_TessellationHints::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_TessellationHints::createQQModel(Instance*i){ //return new MetaQReflect_TessellationHints_QModel(i);}
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





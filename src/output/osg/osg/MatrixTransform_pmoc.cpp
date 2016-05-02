#include <osg/MatrixTransform>
//includes

#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/MatrixTransform_pmoc.hpp>
#include <customCode/osg/MatrixTransform_pmoc.hpp>
#include <customCode/osg/Transform_pmoc.hpp>
#include <customCode/osg/MatrixTransform_pmoc.hpp>
#include <customCode/osg/Matrixd_pmoc.hpp>
#include <customCode/osg/NodeVisitor_pmoc.hpp>
using namespace pmoc;
 bool  osg::QReflect_MatrixTransform:: computeLocalToWorldMatrix(osg::QReflect_Matrixd  *p0 ,osg::QReflect_NodeVisitor  *p1)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_MatrixTransform::computeLocalToWorldMatrix : parameter n.0 is NULL\n"<<endl;return -1;}
if(! p1) {std::cerr<<"PMOC: osg::QReflect_MatrixTransform::computeLocalToWorldMatrix : parameter n.1 is NULL\n"<<endl;return -1;}
return _model->computeLocalToWorldMatrix(*p0->_model ,p1->_model);

}
 bool  osg::QReflect_MatrixTransform:: computeWorldToLocalMatrix(osg::QReflect_Matrixd  *p0 ,osg::QReflect_NodeVisitor  *p1)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_MatrixTransform::computeWorldToLocalMatrix : parameter n.0 is NULL\n"<<endl;return -1;}
if(! p1) {std::cerr<<"PMOC: osg::QReflect_MatrixTransform::computeWorldToLocalMatrix : parameter n.1 is NULL\n"<<endl;return -1;}
return _model->computeWorldToLocalMatrix(*p0->_model ,p1->_model);

}
 void osg::QReflect_MatrixTransform::postMult(osg::QReflect_Matrixd  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_MatrixTransform::postMult : parameter n.0 is NULL\n"<<endl;return;}
 _model->postMult(*p0->_model);

}
 void osg::QReflect_MatrixTransform::preMult(osg::QReflect_Matrixd  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_MatrixTransform::preMult : parameter n.0 is NULL\n"<<endl;return;}
 _model->preMult(*p0->_model);

}
 void osg::QReflect_MatrixTransform::setMatrix(osg::QReflect_Matrixd  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_MatrixTransform::setMatrix : parameter n.0 is NULL\n"<<endl;return;}
 _model->setMatrix(*p0->_model);

}
osg::QReflect_MatrixTransform*osg::QReflect_MatrixTransform::asMatrixTransform()const{
//params checking
PMOCSAFEADDOBJECT(*_model->asMatrixTransform(),inst);
return inst.isValid()?((osg::QReflect_MatrixTransform * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_MatrixTransform*osg::QReflect_MatrixTransform::asMatrixTransform(){
//params checking
PMOCSAFEADDOBJECT(*_model->asMatrixTransform(),inst);
return inst.isValid()?((osg::QReflect_MatrixTransform * )inst.model->createQQModel(&inst)):NULL;
}

///DefaultConstructor////////////////
osg::QReflect_MatrixTransform::QReflect_MatrixTransform(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::MatrixTransform*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_MatrixTransform::~QReflect_MatrixTransform( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_MatrixTransform::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_MatrixTransform::createInstance( ){
osg::ref_ptr<osg::MatrixTransform> osg_MatrixTransform_ptr	;
osg_MatrixTransform_ptr = new osg::MatrixTransform ()	;
Instance o(PMOCGETMETACLASS("osg::MatrixTransform"),(void*)osg_MatrixTransform_ptr.get()		,true);
_managedinstances.insert(osg_MatrixTransform_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_MatrixTransform::MetaQReflect_MatrixTransform():MetaQQuickClass( "osg::MatrixTransform"){
_typeid=&typeid(osg::MatrixTransform );
           qRegisterMetaType<osg::QMLMatrixTransform>();
           qRegisterMetaType<osg::QMLMatrixTransform*>("pmoc.osg.QMLMatrixTransform");
qmlRegisterType<osg::QReflect_MatrixTransform>("pmoc.osg",1,0,"QReflect_MatrixTransform");
           qmlRegisterType<osg::QMLMatrixTransform>("pmoc.osg",1,0,"QMLMatrixTransform");
};
const std::string osg::MetaQReflect_MatrixTransform::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_MatrixTransform::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_MatrixTransform::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_MatrixTransform::createQQModel(const Instance*i){ //return new MetaQReflect_MatrixTransform_QModel(i);}
QMLMatrixTransform *ret =new QMLMatrixTransform(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::Transform *mother =dynamic_cast<osg::Transform*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::Transform");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::Transform model for osg::MatrixTransformis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::Transform");
if(!cl){std::cerr<<"osg::Transform QQModel for osg::MatrixTransformis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_MatrixTransform_pmoc.cpp"
#endif





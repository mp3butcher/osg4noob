#include <osg/Stats>
//includes

#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/Stats_pmoc.hpp>
#include <customCode/osg/Stats_pmoc.hpp>
#include <customCode/osg/Referenced_pmoc.hpp>
using namespace pmoc;
 bool  osg::QReflect_Stats:: collectStats(const  QString  &p0)const{
//params checking
return _model->collectStats(std::string(p0.toStdString()));

}
 bool  osg::QReflect_Stats:: getAttribute( unsigned int  p0 ,const  QString  &p1 , double  &p2)const{
//params checking
return _model->getAttribute(p0 ,std::string(p1.toStdString()) ,p2);

}
 bool  osg::QReflect_Stats:: getAveragedAttribute( unsigned int  p0 , unsigned int  p1 ,const  QString  &p2 , double  &p3 , bool  p4)const{
//params checking
return _model->getAveragedAttribute(p0 ,p1 ,std::string(p2.toStdString()) ,p3 ,p4);

}
 bool  osg::QReflect_Stats:: getAveragedAttribute(const  QString  &p0 , double  &p1 , bool  p2)const{
//params checking
return _model->getAveragedAttribute(std::string(p0.toStdString()) ,p1 ,p2);

}
 bool  osg::QReflect_Stats:: setAttribute( unsigned int  p0 ,const  QString  &p1 , double  p2){
//params checking
return _model->setAttribute(p0 ,std::string(p1.toStdString()) ,p2);

}
 unsigned int  osg::QReflect_Stats:: getEarliestFrameNumber()const{
//params checking
return _model->getEarliestFrameNumber();

}
 unsigned int  osg::QReflect_Stats:: getLatestFrameNumber()const{
//params checking
return _model->getLatestFrameNumber();

}
 void osg::QReflect_Stats::allocate( unsigned int  p0){
//params checking
 _model->allocate(p0);

}
 void osg::QReflect_Stats::collectStats(const  QString  &p0 , bool  p1){
//params checking
 _model->collectStats(std::string(p0.toStdString()) ,p1);

}
 void osg::QReflect_Stats::setName(const  QString  &p0){
//params checking
 _model->setName(std::string(p0.toStdString()));
emit NameChanged();

}
QString  osg::QReflect_Stats::getName()const{
//params checking
QString ret(_model->getName().c_str());return ret;

}

///DefaultConstructor////////////////
osg::QReflect_Stats::QReflect_Stats(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::Stats*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_Stats::~QReflect_Stats( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_Stats::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_Stats::createInstance( ){
std::cerr<<"osg::Stats is not instanciable"<<std::endl;return Instance();


}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_Stats::MetaQReflect_Stats():MetaQQuickClass( "osg::Stats"){
_typeid=&typeid(osg::Stats );
           qRegisterMetaType<osg::QMLStats>();
           qRegisterMetaType<osg::QMLStats*>("pmoc.osg.QMLStats");
qmlRegisterType<osg::QReflect_Stats>("pmoc.osg",1,0,"QReflect_Stats");
           qmlRegisterType<osg::QMLStats>("pmoc.osg",1,0,"QMLStats");
};
const std::string osg::MetaQReflect_Stats::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_Stats::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_Stats::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_Stats::createQQModel(const Instance*i){ //return new MetaQReflect_Stats_QModel(i);}
QMLStats *ret =new QMLStats(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::Referenced *mother =dynamic_cast<osg::Referenced*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::Referenced");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::Referenced model for osg::Statsis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::Referenced");
if(!cl){std::cerr<<"osg::Referenced QQModel for osg::Statsis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Stats_pmoc.cpp"
#endif





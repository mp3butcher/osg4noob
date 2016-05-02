#include <osg/ArgumentParser>
//includes

#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/ArgumentParser_pmoc.hpp>
#include <customCode/osg/ArgumentParser_pmoc.hpp>
#include <customCode/osg/ApplicationUsage_pmoc.hpp>
using namespace pmoc;
 bool  osg::QReflect_ArgumentParser:: containsOptions()const{
//params checking
return _model->containsOptions();

}
 bool  osg::QReflect_ArgumentParser:: errors(osg::QReflect_ArgumentParser::ErrorSeverity  p0)const{
//params checking
return _model->errors(static_cast<osg::ArgumentParser::ErrorSeverity>(p0));

}
 bool  osg::QReflect_ArgumentParser:: isBool(const  char  *p0){
//params checking
return _model->isBool(p0);

}
 bool  osg::QReflect_ArgumentParser:: isNumber( int  p0)const{
//params checking
return _model->isNumber(p0);

}
 bool  osg::QReflect_ArgumentParser:: isNumber(const  char  *p0){
//params checking
return _model->isNumber(p0);

}
 bool  osg::QReflect_ArgumentParser:: isOption( int  p0)const{
//params checking
return _model->isOption(p0);

}
 bool  osg::QReflect_ArgumentParser:: isOption(const  char  *p0){
//params checking
return _model->isOption(p0);

}
 bool  osg::QReflect_ArgumentParser:: isString( int  p0)const{
//params checking
return _model->isString(p0);

}
 bool  osg::QReflect_ArgumentParser:: isString(const  char  *p0){
//params checking
return _model->isString(p0);

}
 bool  osg::QReflect_ArgumentParser:: match( int  p0 ,const  QString  &p1)const{
//params checking
return _model->match(p0 ,std::string(p1.toStdString()));

}
 bool  osg::QReflect_ArgumentParser:: read( int  p0 ,const  QString  &p1){
//params checking
return _model->read(p0 ,std::string(p1.toStdString()));

}
 bool  osg::QReflect_ArgumentParser:: read(const  QString  &p0){
//params checking
return _model->read(std::string(p0.toStdString()));

}
 char*  osg::QReflect_ArgumentParser:: operator[]( int  p0){
//params checking
return _model->operator[](p0);

}
 char**  osg::QReflect_ArgumentParser:: argv(){
//params checking
return _model->argv();

}
 int  osg::QReflect_ArgumentParser:: find(const  QString  &p0)const{
//params checking
return _model->find(std::string(p0.toStdString()));

}
 int&  osg::QReflect_ArgumentParser:: argc(){
//params checking
return _model->argc();

}
 void osg::QReflect_ArgumentParser::remove( int  p0 , int  p1){
//params checking
 _model->remove(p0 ,p1);

}
 void osg::QReflect_ArgumentParser::reportError(const  QString  &p0 ,osg::QReflect_ArgumentParser::ErrorSeverity  p1){
//params checking
 _model->reportError(std::string(p0.toStdString()) ,static_cast<osg::ArgumentParser::ErrorSeverity>(p1));

}
 void osg::QReflect_ArgumentParser::reportRemainingOptionsAsUnrecognized(osg::QReflect_ArgumentParser::ErrorSeverity  p0){
//params checking
 _model->reportRemainingOptionsAsUnrecognized(static_cast<osg::ArgumentParser::ErrorSeverity>(p0));

}
 void osg::QReflect_ArgumentParser::setApplicationUsage(osg::QReflect_ApplicationUsage  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_ArgumentParser::setApplicationUsage : parameter n.0 is NULL\n"<<endl;return;}
 _model->setApplicationUsage(p0->_model);
emit ApplicationUsageChanged();

}
QString  osg::QReflect_ArgumentParser::getApplicationName()const{
//params checking
QString ret(_model->getApplicationName().c_str());return ret;

}
const  char*  osg::QReflect_ArgumentParser:: operator[]( int  p0)const{
//params checking
return _model->operator[](p0);

}
osg::QReflect_ApplicationUsage*osg::QReflect_ArgumentParser::getApplicationUsage()const{
//params checking
PMOCSAFEADDOBJECT(*_model->getApplicationUsage(),inst);
return inst.isValid()?((osg::QReflect_ApplicationUsage * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_ApplicationUsage*osg::QReflect_ArgumentParser::getApplicationUsage(){
//params checking
PMOCSAFEADDOBJECT(*_model->getApplicationUsage(),inst);
return inst.isValid()?((osg::QReflect_ApplicationUsage * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_ApplicationUsage::Type  osg::QReflect_ArgumentParser::readHelpType(){
//params checking
osg::QReflect_ApplicationUsage::Type ret=static_cast<osg::QReflect_ApplicationUsage::Type>( _model->readHelpType());return  ret;

}

///DefaultConstructor////////////////
osg::QReflect_ArgumentParser::QReflect_ArgumentParser(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::ArgumentParser*>(i->ptr);
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_ArgumentParser::~QReflect_ArgumentParser( ){
 }
///update this according _model new state
void osg::QReflect_ArgumentParser::updateModel(){
}
Instance osg::MetaQReflect_ArgumentParser::createInstance( ){
std::cerr<<"osg::ArgumentParser is not instanciable"<<std::endl;return Instance();


}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_ArgumentParser::MetaQReflect_ArgumentParser():MetaQQuickClass( "osg::ArgumentParser"){
_typeid=&typeid(osg::ArgumentParser );
           qRegisterMetaType<osg::QMLArgumentParser>();
           qRegisterMetaType<osg::QMLArgumentParser*>("pmoc.osg.QMLArgumentParser");
qmlRegisterType<osg::QReflect_ArgumentParser>("pmoc.osg",1,0,"QReflect_ArgumentParser");
           qmlRegisterType<osg::QMLArgumentParser>("pmoc.osg",1,0,"QMLArgumentParser");
};
const std::string osg::MetaQReflect_ArgumentParser::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_ArgumentParser::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_ArgumentParser::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_ArgumentParser::createQQModel(const Instance*i){ //return new MetaQReflect_ArgumentParser_QModel(i);}
QMLArgumentParser *ret =new QMLArgumentParser(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_ArgumentParser_pmoc.cpp"
#endif





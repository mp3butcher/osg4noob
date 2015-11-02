#include <osg/Program>
//includes
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/Program_pmoc.hpp>
#include <customCode/osg/Program_pmoc.hpp>
#include <sstream>
using namespace pmoc;
using namespace std;
using namespace osg;
osg::QMLProgram::QMLProgram(pmoc::Instance *i,QObject* parent):QReflect_Program(i,parent)
{
//custom initializations


    qmlRegisterType<pmoc::StateAttribListModel>("StateAttribListModel",1,0,"StateAttribListModel");

}
QQuickItem* osg::QMLProgram::connect2View(QQuickItem*i)
{
    this->_view=QReflect_Program::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
    ///CustomiZE here
    updateModel();

    connect(_view,SIGNAL(shaderSelect(int)),this,SLOT(popShader(int)));

    return this->_view;
}
void  osg::QMLProgram::updateModel()
{
    QReflect_Program::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
    ///CustomiZE here
    _shaderlist.resetListViewModel();
    for (int i=0 ; i <_model->getNumShaders(); i++)
    {

        osg::Shader*sh=_model->getShader(i);




        PMOCSAFEADDOBJECT( *sh,inst);
        QString classname=QString(inst.model->id().c_str());
        _shaderlist.addStateAttrib( StateAttribObject(classname ,sh->getTypename()));

    }
    emit this->shaderlistChanged(&_shaderlist);


        _qvertexAttribLocations.resetListViewModel();
      for( Program::AttribBindingList::const_iterator it= _model->getAttribBindingList().begin();it!=_model->getAttribBindingList().end();it++){
      stringstream  ss;
      ss<< (*it).second;

  _qvertexAttribLocations.addStateAttrib( StateAttribObject(QString(ss.str().c_str()) ,QString((*it).first.c_str())));
      }

    emit vertexAttribLocationsChanged(&_qvertexAttribLocations);


}

 void osg::QMLProgram::addVertexAttribLocation(int i,QString s){

     _model->addBindAttribLocation(s.toStdString() ,i);updateModel();
     }
 void osg::QMLProgram::removeVertexAttribLocation( QString s){

     _model->removeBindAttribLocation(s.toStdString() );updateModel();

     }
void osg::QMLProgram::popShader(int ix)
{
    osg::Shader*sh=_model->getShader(ix);

    ///HACK OSG: in case of UNDEFINED type Shader recently added
    //remove all shader and readd them
    vector<osg::ref_ptr<osg::Shader> > temp;
    for (int i=0 ; i <_model->getNumShaders(); i++)
        temp.push_back(_model->getShader(i));

    while(_model->getShader(0))_model->removeShader(_model->getShader(0));
    for(vector< osg::ref_ptr<osg::Shader> >::iterator it=temp.begin(); it!=temp.end(); it++)
        _model->addShader(*it);

    ///

        PMOCSAFEADDOBJECT( *sh,ins);
    QQUICKCOMPONENTWITHNAME(ins,_view,"Shader");


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Program_pmoc.cpp"
#endif



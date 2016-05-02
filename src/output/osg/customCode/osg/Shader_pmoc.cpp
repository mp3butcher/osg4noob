#include <osg/Shader>
//includes

#include <osgDB/FileUtils>
#include <osgDB/ReadFile>

#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/Shader_pmoc.hpp>
using namespace pmoc;

using namespace std;

using namespace osg;

void osg::QMLShader::setSourceFromFile(QUrl sss)
{
    QString s=sss.toLocalFile();//replace("file://","");
    /*cout<<"wiriting filemen"<<endl;
    cout<<osgDB::getCurrentWorkingDirectory()<<endl;
    cout<<osgDB::getPathRelative(osgDB::getCurrentWorkingDirectory()+"/",s.toStdString())<<endl;
    */
    QString curpath=QString(osgDB::getCurrentWorkingDirectory().c_str()).replace("\\","/")+"/";///replace \ in osg path
    s=s.replace(curpath,QString(""));
    cout<<"selected image file"<< s.toStdString()<<endl;

    osg::ref_ptr<osg::Shader>im=osgDB::readShaderFile(s.toStdString());



    if (im.get())
    {
        if (im->getType()!=_model->getType())
            cerr<<"Shader "<<(unsigned long int)im.get()<<" "<<s.toStdString()<<" is not the correct shader type"<<endl;

        else
        {

            _model->setShaderSource(im->getShaderSource());
            popQscintilla();
        }
    }
}

#define CASESHADERTYPE(CCC) case Shader::CCC : re
int osg::QMLShader::getshaderType()const
{
    switch(_model->getType())
    {
    case Shader::VERTEX :
        return 1;
    case Shader::GEOMETRY :
        return 2;
    case Shader::FRAGMENT :
        return 3;
    case Shader::COMPUTE :
        return 4;
    case Shader::TESSEVALUATION :
        return 5;
    case Shader::TESSCONTROL :
        return 6;
    default:
        return 0;


    }


}
void osg::QMLShader::setshaderType(int i)
{

    switch(i)
    {
    case 1:
        if(_model->getType()!=Shader::VERTEX)
        {
            _model->setType(Shader::VERTEX);
            emit shaderTypeChanged(i);
        }
        break;
    case 2:
        if(_model->getType()!=Shader::GEOMETRY)
        {
            _model->setType(Shader::GEOMETRY);
            emit shaderTypeChanged(i);
        }
        break;
    case 3:
        if(_model->getType()!=Shader::FRAGMENT)
        {
            _model->setType(Shader::FRAGMENT);
            emit shaderTypeChanged(i);
        }
        break;
    case 4:
        if(_model->getType()!=Shader::COMPUTE)
        {
            _model->setType(Shader::COMPUTE);
            emit shaderTypeChanged(i);
        }
        break;
    case 5:
        if(_model->getType()!=Shader::TESSEVALUATION)
        {
            _model->setType(Shader::TESSEVALUATION);
            emit shaderTypeChanged(i);
        }
        break;
    case 6:
        if(_model->getType()!=Shader::TESSCONTROL)
        {
            _model->setType(Shader::TESSCONTROL);
            emit shaderTypeChanged(i);
        }
        break;




    }
}

osg::QMLShader::QMLShader(const pmoc::Instance *i,QObject* parent):QReflect_Shader(i,parent)
{
//custom initializations
    shaderTypeList.append("UNDEFINED");
    shaderTypeList.append("VERTEX_SHADER");
    shaderTypeList.append("GEOMETRY_SHADER");
    shaderTypeList.append("FRAGMENT_SHADER");
    shaderTypeList.append("COMPUTE_SHADER");
    shaderTypeList.append("TESSELATION_EVALUATION_SHADER");
    shaderTypeList.append("TESSELATION_CONTROL_SHADER");
    qsci=new QsciScintilla;
    lex=new QsciLexerCPP ;
    qsci->setLexer(lex);
    qsci->setMinimumHeight(250);
    qsci->setMinimumWidth(450);

    qsci->hide();
    //popQscintilla();
}

osg::QMLShader::~QMLShader()
{
    delete qsci;
    delete lex;
}

QQuickItem* osg::QMLShader::connect2View(QQuickItem*i)
{
    this->_view=QReflect_Shader::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
    ///CustomiZE here

updateModel();
    connect(qsci,SIGNAL(cursorPositionChanged(int , int )),this,SLOT(saveChange()));

    if(_model->getType()!=Shader::UNDEFINED)
    popQscintilla();
    else connect (this,SIGNAL(Changed(int)),this,SLOT(popQscintilla()));


    return this->_view;
}
void  osg::QMLShader::updateModel()
{
    QReflect_Shader::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
    ///CustomiZE here
//emit shaderTypeChanged(getshaderType());

}

void osg::QMLShader::popQscintilla()
{


    qsci->setWindowTitle (_model->getTypename());
    qsci->setText(_model->getShaderSource().c_str());
    qsci->show();
}
void osg::QMLShader::saveChange()
{
    if(qsci->text().toStdString()!=_model->getShaderSource())
        _model->setShaderSource(qsci->text().toStdString());
    if(_model->getShaderBinary())cerr<<_model->getShaderBinary()->getData()<<endl;
    //  _model->dirtyShader();
}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Shader_pmoc.cpp"
#endif
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/Shader_pmoc.hpp>
using namespace pmoc;
osg::QMLShaderBinary::QMLShaderBinary(const pmoc::Instance *i,QObject* parent):QReflect_ShaderBinary(i,parent)
{
//custom initializations
}
QQuickItem* osg::QMLShaderBinary::connect2View(QQuickItem*i)
{
    this->_view=QReflect_ShaderBinary::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
    ///CustomiZE here



    return this->_view;
}
void  osg::QMLShaderBinary::updateModel()
{
    QReflect_ShaderBinary::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
    ///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Shader_pmoc.cpp"
#endif
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/Shader_pmoc.hpp>
using namespace pmoc;
osg::QMLShaderComponent::QMLShaderComponent(const pmoc::Instance *i,QObject* parent):QReflect_ShaderComponent(i,parent)
{
//custom initializations
}
QQuickItem* osg::QMLShaderComponent::connect2View(QQuickItem*i)
{
    this->_view=QReflect_ShaderComponent::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
    ///CustomiZE here



    return this->_view;
}
void  osg::QMLShaderComponent::updateModel()
{
    QReflect_ShaderComponent::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
    ///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Shader_pmoc.cpp"
#endif



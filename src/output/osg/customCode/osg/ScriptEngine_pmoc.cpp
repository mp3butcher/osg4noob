#include <osg/ScriptEngine>
//includes
#include <QQuickItem>
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/ScriptEngine_pmoc.hpp>
using namespace pmoc;
osg::QMLScript::QMLScript(const pmoc::Instance *i,QObject* parent):QReflect_Script(i,parent)
{
    qsci=new QsciScintilla();
    lex=new QsciLexerCPP ();
//custom initializations
}
osg::QMLScript::~QMLScript()
{
    delete qsci;
    delete lex;
}

QQuickItem* osg::QMLScript::connect2View(QQuickItem*i)
{
    this->_view=QReflect_Script::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
    ///CustomiZE here

//_model->setLanguage("lua");


    return this->_view;
}

void  osg::QMLScript::updateModel()
{
    QReflect_Script::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
    ///CustomiZE here
    _model->dirty();

}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_ScriptEngine_pmoc.cpp"
#endif
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/ScriptEngine_pmoc.hpp>
using namespace pmoc;
osg::QMLScriptEngine::QMLScriptEngine(const pmoc::Instance *i,QObject* parent):QReflect_ScriptEngine(i,parent)
{
//custom initializations

}
QQuickItem* osg::QMLScriptEngine::connect2View(QQuickItem*i)
{
    this->_view=QReflect_ScriptEngine::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
    ///CustomiZE here

    return this->_view;
}
void  osg::QMLScriptEngine::updateModel()
{
    QReflect_ScriptEngine::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
    ///CustomiZE here



}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_ScriptEngine_pmoc.cpp"
#endif
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/ScriptEngine_pmoc.hpp>
using namespace pmoc;
osg::QMLScriptNodeCallback::QMLScriptNodeCallback(const pmoc::Instance *i,QObject* parent):QReflect_ScriptNodeCallback(i,parent)
{
//custom initializations
qsci=new QsciScintilla();
    lex=new QsciLexerCPP ();
//custom initializations
}
osg::QMLScriptNodeCallback::~QMLScriptNodeCallback()
{
    delete qsci;
    delete lex;
}

QQuickItem* osg::QMLScriptNodeCallback::connect2View(QQuickItem*i)
{
    this->_view=QReflect_ScriptNodeCallback::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
    ///CustomiZE here

    qsci->setLexer(lex);
    connect(qsci,SIGNAL(linesChanged()),this,SLOT(saveChanges()));

    connect(this,SIGNAL(LanguageChanged()),this,SLOT(updateModel()));
if(_model->getScript()){
      qsci->setText(QString(_model->getScript()->getScript().c_str()));

qsci->setWindowTitle (QString(_model->getScript()->getLanguage().c_str())+" script");
    // qsci->setText(_model->getScript().c_str());

popQscintilla();
}
    return this->_view;
}

void osg::QMLScriptNodeCallback::saveChanges()
{
    _model->setScript(	new osg::Script("lua",qsci->text().toStdString()));
}
void osg::QMLScriptNodeCallback::popQscintilla()
{


qsci->show();
}
void  osg::QMLScriptNodeCallback::updateModel()
{
    QReflect_ScriptNodeCallback::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
    ///CustomiZE here
    ///recreate script in order to be taken order be accounted
    if(_model->getScript())
    {
        osg::ref_ptr<osg::Script> temp=_model->getScript();
        _model->setScript(new osg::Script(temp->getLanguage(),temp->getScript()));
    }
    PMOCSAFEADDOBJECT( * _model->getScript(),ins);
    QQUICKCOMPONENTWITHNAME(ins,_view,"getScript");

}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_ScriptEngine_pmoc.cpp"
#endif




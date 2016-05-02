#ifndef osg_ScriptEngine_customHPP
#define  osg_ScriptEngine_customHPP 1

//includes

#include <osg/ScriptEngine_pmoc.hpp>
#include <QObject>
#include <osg/Object_pmoc.hpp>
#include <osg/ScriptEngine>

#include <osg/ScriptEngine_pmoc.hpp>
namespace osg
{
class  QMLScriptEngine: public QReflect_ScriptEngine
{
    Q_OBJECT
public:
    QMLScriptEngine(const pmoc::Instance *i=0,QObject* parent=0);
    virtual QQuickItem * connect2View(QQuickItem*);
public slots:
    virtual void  updateModel();

};

class   MetaQMLScriptEngine :public MetaQReflect_ScriptEngine{};
}
Q_DECLARE_METATYPE(osg::QMLScriptEngine)
#include <osg/ScriptEngine_pmoc.hpp>
#include <QObject>
#include <osg/Object_pmoc.hpp>
#include <osg/ScriptEngine>

#include <osg/ScriptEngine_pmoc.hpp>


#include <Qsci/qsciscintilla.h>
#include <Qsci/qscilexercpp.h>

namespace osg
{
class  QMLScript: public QReflect_Script
{
    Q_OBJECT
Q_PROPERTY(QString Language  READ Language WRITE Language NOTIFY LanguageChanged)
    public:
   void Language(QString s){
    if(s.toStdString()!=_model->getLanguage()){
    _model->setLanguage(s.toStdString());
    emit LanguageChanged(s);
    }
    }

    QString Language()const{return QString(_model->getLanguage().c_str());}

      signals:
    void LanguageChanged(QString);

public:
    QMLScript(const pmoc::Instance *i=0,QObject* parent=0);
      ~QMLScript();
    virtual QQuickItem * connect2View(QQuickItem*);
      QsciScintilla *qsci;
    QsciLexerCPP *lex;
public slots:
    virtual void  updateModel();


};

class   MetaQMLScript :public MetaQReflect_Script{};
}
Q_DECLARE_METATYPE(osg::QMLScript)
#include <osg/ScriptEngine_pmoc.hpp>
#include <QObject>
namespace osg
{
class QReflect_Script;
} ;
#include <osg/Callback_pmoc.hpp>
#include <osg/ScriptEngine>
#include <osg/ScriptEngine>

#include <osg/ScriptEngine_pmoc.hpp>
#include <osg/ScriptEngine_pmoc.hpp>
namespace osg
{
class  QMLScriptNodeCallback: public QReflect_ScriptNodeCallback
{
    Q_OBJECT
public:   QsciScintilla *qsci;
    QsciLexerCPP *lex;
    QMLScriptNodeCallback(const pmoc::Instance *i=0,QObject* parent=0);
    ~QMLScriptNodeCallback( );
    virtual QQuickItem * connect2View(QQuickItem*);
public slots:
    virtual void  updateModel();
 void popQscintilla();
    void saveChanges();

};
class   MetaQMLScriptNodeCallback :public MetaQReflect_ScriptNodeCallback{};
}
Q_DECLARE_METATYPE(osg::QMLScriptNodeCallback)

#endif //osg_ScriptEngine_customHPP


#ifndef osg_ScriptEngine_pmocHPP
#define  osg_ScriptEngine_pmocHPP 1


#include <osg/ScriptEngine_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_Script;
			} ;
#include <osg/ScriptEngine>
#include <osg/ScriptEngine>

#include <osg/ref_ptr>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_ScriptEngine: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
ScriptEngine * _model;
QReflect_ScriptEngine(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_ScriptEngine( );
//ScriptEngine
Q_INVOKABLE  bool  run(osg::QReflect_Script *script);
Q_INVOKABLE QString  getLanguage()const;
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_ScriptEngine: public pmoc::MetaQQuickClass{
protected:
   public:
MetaQReflect_ScriptEngine();
 virtual pmoc::Instance createInstance();
public:
    virtual pmoc::QQModel* createQQModel(const pmoc::Instance*i);
       virtual const std::string Imports() const;
    ///if not null return statement to describe yourself by hand
    //enough abstract 4 me but override it if you want virtual const std::string fullComponent()const;
    ///these strings will be used to composite it hierarchically in case no qml is found at runtime
    ///DONT work yet..
    virtual  const std::string PREcompoQML()const;
    virtual const std::string POSTcompoQML()const;
};
  
} 
#include <osg/ScriptEngine_pmoc.hpp>
#include <QObject>
#include <osg/ScriptEngine>
#include <osg/ScriptEngine>

#include <osg/ref_ptr>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_Script: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
Script * _model;
QReflect_Script(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_Script( );
//Script
Q_INVOKABLE  unsigned int  getModifiedCount()const;
Q_INVOKABLE QString  getLanguage()const;
Q_INVOKABLE QString  getScript()const;
Q_INVOKABLE void  dirty();
Q_INVOKABLE void  setLanguage(const  QString &language);
Q_INVOKABLE void  setScript(const  QString &str);
Q_PROPERTY(QString  Language  READ getLanguage WRITE setLanguage NOTIFY LanguageChanged)
Q_PROPERTY(QString  Script  READ getScript WRITE setScript NOTIFY ScriptChanged)
signals: void LanguageChanged();
public:
signals: void ScriptChanged();
public:
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_Script: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osg::Script> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_Script();
 virtual pmoc::Instance createInstance();
public:
    virtual pmoc::QQModel* createQQModel(const pmoc::Instance*i);
       virtual const std::string Imports() const;
    ///if not null return statement to describe yourself by hand
    //enough abstract 4 me but override it if you want virtual const std::string fullComponent()const;
    ///these strings will be used to composite it hierarchically in case no qml is found at runtime
    ///DONT work yet..
    virtual  const std::string PREcompoQML()const;
    virtual const std::string POSTcompoQML()const;
};
  
} 
#include <osg/ScriptEngine_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_Node;
			} ;
namespace osg{ 
class QReflect_NodeVisitor;
			} ;
namespace osg{ 
class QReflect_Script;
			} ;
#include <osg/ScriptEngine>
#include <osg/ScriptEngine>

#include <osg/ref_ptr>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_ScriptNodeCallback: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
ScriptNodeCallback * _model;
QReflect_ScriptNodeCallback(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_ScriptNodeCallback( );
//ScriptNodeCallback
//virtual  bool  run( osg::Object * , osg::Parameters & , osg::Parameters &);
// osg::ScriptEngine * getScriptEngine( osg::NodePath &);
Q_INVOKABLE QString  getEntryPoint()const;
Q_INVOKABLE osg::QReflect_Script*  getScript();
Q_INVOKABLE osg::QReflect_Script*  getScript()const;
Q_INVOKABLE void  operator()(osg::QReflect_Node *node ,osg::QReflect_NodeVisitor *nv);
Q_INVOKABLE void  setEntryPoint(const  QString &str);
Q_INVOKABLE void  setScript(osg::QReflect_Script *script);
Q_PROPERTY(QString  EntryPoint  READ getEntryPoint WRITE setEntryPoint NOTIFY EntryPointChanged)
Q_PROPERTY(osg::QReflect_Script * Script  READ getScript WRITE setScript NOTIFY ScriptChanged)
signals: void EntryPointChanged();
public:
signals: void ScriptChanged();
public:
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_ScriptNodeCallback: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osg::ScriptNodeCallback> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_ScriptNodeCallback();
 virtual pmoc::Instance createInstance();
public:
    virtual pmoc::QQModel* createQQModel(const pmoc::Instance*i);
       virtual const std::string Imports() const;
    ///if not null return statement to describe yourself by hand
    //enough abstract 4 me but override it if you want virtual const std::string fullComponent()const;
    ///these strings will be used to composite it hierarchically in case no qml is found at runtime
    ///DONT work yet..
    virtual  const std::string PREcompoQML()const;
    virtual const std::string POSTcompoQML()const;
};
  
} 


#endif //osg_ScriptEngine_pmocHPP


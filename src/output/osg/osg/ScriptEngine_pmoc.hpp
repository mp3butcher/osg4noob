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
QReflect_ScriptEngine(pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_ScriptEngine( );
//ScriptEngine
Q_INVOKABLE  bool  run(osg::QReflect_Script *);
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
    virtual pmoc::QQModel* createQQModel(pmoc::Instance*i);
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
QReflect_Script(pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_Script( );
//Script
Q_INVOKABLE  unsigned int  getModifiedCount()const;
Q_INVOKABLE const QString  getLanguage()const;
Q_INVOKABLE const QString  getScript()const;
Q_INVOKABLE void  dirty();
Q_INVOKABLE void setLanguage(const QString &);
Q_INVOKABLE void setScript(const QString &);
Q_PROPERTY(QString Language  READ getLanguage WRITE setLanguage NOTIFY LanguageChanged)
Q_PROPERTY(QString Script  READ getScript WRITE setScript NOTIFY ScriptChanged)
signals: void LanguageChanged(const QString&);
public:
signals: void ScriptChanged(const QString&);
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
    virtual pmoc::QQModel* createQQModel(pmoc::Instance*i);
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
QReflect_ScriptNodeCallback(pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_ScriptNodeCallback( );
//ScriptNodeCallback
// osg::ScriptEngine * getScriptEngine( osg::NodePath &);
//virtual  void  operator()( osg::Node * , osg::NodeVisitor *);
Q_INVOKABLE  osg::QReflect_Script * getScript()const;
Q_INVOKABLE void pmoc_reverse_setScript( osg::QReflect_Script *par=0);
Q_INVOKABLE void setScript( osg::QReflect_Script *par);
signals: void ScriptChanged(const osg::QReflect_Script*);
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
    virtual pmoc::QQModel* createQQModel(pmoc::Instance*i);
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


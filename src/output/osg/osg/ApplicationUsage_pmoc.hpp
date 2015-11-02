#ifndef osg_ApplicationUsage_pmocHPP
#define  osg_ApplicationUsage_pmocHPP 1
#include <osg/ApplicationUsage_pmoc.hpp>
#include <QObject>
#include <osg/ApplicationUsage>

#include <MetaQQuickClass.h>
namespace osg{
class QReflect_ApplicationUsageProxy: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 0;}

/// inheritance simulated via composition
ApplicationUsageProxy * _model;
QReflect_ApplicationUsageProxy(pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_ApplicationUsageProxy( );
//ApplicationUsageProxy
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_ApplicationUsageProxy: public pmoc::MetaQQuickClass{
protected:
   public:
MetaQReflect_ApplicationUsageProxy();
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
#include <osg/ApplicationUsage_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_ApplicationUsage;
			} ;
#include <osg/ApplicationUsage>
#include <osg/ApplicationUsage>

#include <osg/ref_ptr>
#include<osg/ApplicationUsage_pmoc.hpp>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_ApplicationUsage: public pmoc::QQModel
{
Q_OBJECT
public:
 enum Type{
NO_HELP =ApplicationUsage::NO_HELP,
COMMAND_LINE_OPTION =ApplicationUsage::COMMAND_LINE_OPTION,
ENVIRONMENTAL_VARIABLE =ApplicationUsage::ENVIRONMENTAL_VARIABLE,
KEYBOARD_MOUSE_BINDING =ApplicationUsage::KEYBOARD_MOUSE_BINDING,
HELP_ALL =ApplicationUsage::HELP_ALL};
  Q_ENUMS(Type)
private:
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
ApplicationUsage * _model;
QReflect_ApplicationUsage(pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_ApplicationUsage( );
//ApplicationUsage
// void  getFormattedString( std::string & ,const  UsageMap & , unsigned int  , bool  ,const  UsageMap &);
// void  setCommandLineOptions(const  UsageMap &);
// void  setCommandLineOptionsDefaults(const  UsageMap &);
// void  setEnvironmentalVariables(const  UsageMap &);
// void  setEnvironmentalVariablesDefaults(const  UsageMap &);
// void  setKeyboardMouseBindings(const  UsageMap &);
// void  write( std::ostream & , unsigned int  , unsigned int  , bool );
// void  write( std::ostream & ,const  UsageMap & , unsigned int  , bool  ,const  UsageMap &);
// void  writeEnvironmentSettings( std::ostream &);
//const  UsageMap & getCommandLineOptions();
//const  UsageMap & getCommandLineOptionsDefaults();
//const  UsageMap & getEnvironmentalVariables();
//const  UsageMap & getEnvironmentalVariablesDefaults();
//const  UsageMap & getKeyboardMouseBindings();
Q_INVOKABLE const QString  getApplicationName()const;
Q_INVOKABLE const QString  getCommandLineUsage()const;
Q_INVOKABLE const QString  getDescription()const;
Q_INVOKABLE osg::QReflect_ApplicationUsage*  instance();
Q_INVOKABLE void  addCommandLineOption(const  QString & ,const  QString & ,const  QString &);
Q_INVOKABLE void  addEnvironmentalVariable(const  QString & ,const  QString & ,const  QString &);
Q_INVOKABLE void  addKeyboardMouseBinding( int  ,const  QString &);
Q_INVOKABLE void  addKeyboardMouseBinding(const  QString & , int  ,const  QString &);
Q_INVOKABLE void  addKeyboardMouseBinding(const  QString & ,const  QString &);
Q_INVOKABLE void  addUsageExplanation(osg::QReflect_ApplicationUsage::Type  ,const  QString & ,const  QString &);
Q_INVOKABLE void setApplicationName(const QString &);
Q_INVOKABLE void setCommandLineUsage(const QString &);
Q_INVOKABLE void setDescription(const QString &);
Q_PROPERTY(QString ApplicationName  READ getApplicationName WRITE setApplicationName NOTIFY ApplicationNameChanged)
Q_PROPERTY(QString CommandLineUsage  READ getCommandLineUsage WRITE setCommandLineUsage NOTIFY CommandLineUsageChanged)
Q_PROPERTY(QString Description  READ getDescription WRITE setDescription NOTIFY DescriptionChanged)
signals: void ApplicationNameChanged(const QString&);
public:
signals: void CommandLineUsageChanged(const QString&);
public:
signals: void DescriptionChanged(const QString&);
public:
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_ApplicationUsage: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osg::ApplicationUsage> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_ApplicationUsage();
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

#endif //osg_ApplicationUsage_pmocHPP


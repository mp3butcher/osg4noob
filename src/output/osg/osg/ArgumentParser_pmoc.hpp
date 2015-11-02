#ifndef osg_ArgumentParser_pmocHPP
#define  osg_ArgumentParser_pmocHPP 1
#include <osg/ArgumentParser_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_ApplicationUsage;
			} ;
#include <osg/ArgumentParser>

#include<osg/ApplicationUsage_pmoc.hpp>
#include<osg/ArgumentParser_pmoc.hpp>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_ArgumentParser: public pmoc::QQModel
{
Q_OBJECT
public:
 enum ErrorSeverity{
BENIGN =ArgumentParser::BENIGN,
CRITICAL =ArgumentParser::CRITICAL};
  Q_ENUMS(ErrorSeverity)
private:
public:
virtual unsigned int getNumParentBox(){return 0;}

/// inheritance simulated via composition
ArgumentParser * _model;
QReflect_ArgumentParser(pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_ArgumentParser( );
//ArgumentParser
// ErrorMessageMap & getErrorMessageMap();
// bool  read(const  std::string & , Parameter );
// bool  read( int  ,const  std::string & , Parameter );
// bool  read(const  std::string & , Parameter  , Parameter );
// bool  read( int  ,const  std::string & , Parameter  , Parameter );
// bool  read(const  std::string & , Parameter  , Parameter  , Parameter );
// bool  read( int  ,const  std::string & , Parameter  , Parameter  , Parameter );
// bool  read(const  std::string & , Parameter  , Parameter  , Parameter  , Parameter );
// bool  read( int  ,const  std::string & , Parameter  , Parameter  , Parameter  , Parameter );
// bool  read(const  std::string & , Parameter  , Parameter  , Parameter  , Parameter  , Parameter );
// bool  read( int  ,const  std::string & , Parameter  , Parameter  , Parameter  , Parameter  , Parameter );
// bool  read(const  std::string & , Parameter  , Parameter  , Parameter  , Parameter  , Parameter  , Parameter );
// bool  read( int  ,const  std::string & , Parameter  , Parameter  , Parameter  , Parameter  , Parameter  , Parameter );
// bool  read(const  std::string & , Parameter  , Parameter  , Parameter  , Parameter  , Parameter  , Parameter  , Parameter );
// bool  read( int  ,const  std::string & , Parameter  , Parameter  , Parameter  , Parameter  , Parameter  , Parameter  , Parameter );
// bool  read(const  std::string & , Parameter  , Parameter  , Parameter  , Parameter  , Parameter  , Parameter  , Parameter  , Parameter );
// bool  read( int  ,const  std::string & , Parameter  , Parameter  , Parameter  , Parameter  , Parameter  , Parameter  , Parameter  , Parameter );
// char * operator[]( int );
// void  writeErrorMessages( std::ostream & , ErrorSeverity );
//const  ErrorMessageMap & getErrorMessageMap();
//const  char * operator[]( int );
Q_INVOKABLE  bool  containsOptions()const;
Q_INVOKABLE  bool  errors(osg::QReflect_ArgumentParser::ErrorSeverity )const;
Q_INVOKABLE  bool  isBool(const  char *);
Q_INVOKABLE  bool  isNumber( int )const;
Q_INVOKABLE  bool  isNumber(const  char *);
Q_INVOKABLE  bool  isOption( int )const;
Q_INVOKABLE  bool  isOption(const  char *);
Q_INVOKABLE  bool  isString( int )const;
Q_INVOKABLE  bool  isString(const  char *);
Q_INVOKABLE  bool  match( int  ,const  QString &)const;
Q_INVOKABLE  bool  read( int  ,const  QString &);
Q_INVOKABLE  bool  read(const  QString &);
Q_INVOKABLE  char**  argv();
Q_INVOKABLE  int  find(const  QString &)const;
Q_INVOKABLE  int&  argc();
Q_INVOKABLE  osg::QReflect_ApplicationUsage * getApplicationUsage()const;
Q_INVOKABLE QString  getApplicationName()const;
Q_INVOKABLE osg::QReflect_ApplicationUsage::Type  readHelpType();
Q_INVOKABLE void  remove( int  , int );
Q_INVOKABLE void  reportError(const  QString & ,osg::QReflect_ArgumentParser::ErrorSeverity );
Q_INVOKABLE void  reportRemainingOptionsAsUnrecognized(osg::QReflect_ArgumentParser::ErrorSeverity );
Q_INVOKABLE void pmoc_reverse_setApplicationUsage( osg::QReflect_ApplicationUsage *par=0);
Q_INVOKABLE void setApplicationUsage( osg::QReflect_ApplicationUsage *par);
signals: void ApplicationUsageChanged(const osg::QReflect_ApplicationUsage*);
public:
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_ArgumentParser: public pmoc::MetaQQuickClass{
protected:
   public:
MetaQReflect_ArgumentParser();
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

#endif //osg_ArgumentParser_pmocHPP


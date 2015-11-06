#ifndef osg_Stats_pmocHPP
#define  osg_Stats_pmocHPP 1
#include <osg/Stats_pmoc.hpp>
#include <QObject>
#include <osg/Stats>
#include <osg/Stats>

#include <osg/ref_ptr>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_Stats: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
Stats * _model;
QReflect_Stats(pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_Stats( );
//Stats
// AttributeMap & getAttributeMap( unsigned int );
// void  report( std::ostream & ,const  char *);
// void  report( std::ostream & , unsigned int  ,const  char *);
//const  AttributeMap & getAttributeMap( unsigned int );
Q_INVOKABLE  bool  collectStats(const  QString &)const;
Q_INVOKABLE  bool  getAttribute( unsigned int  ,const  QString & , double &)const;
Q_INVOKABLE  bool  getAveragedAttribute( unsigned int  , unsigned int  ,const  QString & , double & , bool )const;
Q_INVOKABLE  bool  getAveragedAttribute(const  QString & , double & , bool )const;
Q_INVOKABLE  bool  setAttribute( unsigned int  ,const  QString & , double );
Q_INVOKABLE  unsigned int  getEarliestFrameNumber()const;
Q_INVOKABLE  unsigned int  getLatestFrameNumber()const;
Q_INVOKABLE const QString  getName()const;
Q_INVOKABLE void  allocate( unsigned int );
Q_INVOKABLE void  collectStats(const  QString & , bool );
Q_INVOKABLE void setName(const QString &);
Q_PROPERTY(QString Name  READ getName WRITE setName NOTIFY NameChanged)
signals: void NameChanged(const QString&);
public:
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_Stats: public pmoc::MetaQQuickClass{
protected:
   public:
MetaQReflect_Stats();
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

#endif //osg_Stats_pmocHPP


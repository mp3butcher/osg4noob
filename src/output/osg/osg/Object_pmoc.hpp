#ifndef osg_Object_pmocHPP
#define  osg_Object_pmocHPP 1
#include <osg/Object_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_Object;
			} ;
namespace osg{ 
class QReflect_Referenced;
			} ;
#include <osg/Object>
#include <osg/Object>

#include <osg/ref_ptr>
#include<osg/Object_pmoc.hpp>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_Object: public pmoc::QQModel
{
Q_OBJECT
public:
 enum DataVariance{
DYNAMIC =Object::DYNAMIC,
STATIC =Object::STATIC,
UNSPECIFIED =Object::UNSPECIFIED};
  Q_ENUMS(DataVariance)
private:
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
Object * _model;
QReflect_Object(pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_Object( );
//Object
//virtual  Node * asNode();
//virtual  NodeVisitor * asNodeVisitor();
//virtual  StateAttribute * asStateAttribute();
//virtual  Uniform * asUniform();
// bool  getUserValue(const  std::string & , T &);
// osg::UserDataContainer * getOrCreateUserDataContainer();
// osg::UserDataContainer * getUserDataContainer();
//virtual  void  releaseGLObjects( osg::State *);
// void  setUserDataContainer( osg::UserDataContainer *);
// void  setUserValue(const  std::string & ,const  T &);
//virtual const  Node * asNode();
//virtual const  NodeVisitor * asNodeVisitor();
//virtual const  StateAttribute * asStateAttribute();
//virtual const  Uniform * asUniform();
//const  osg::UserDataContainer * getUserDataContainer();
Q_INVOKABLE  bool  isSameKindAs(osg::QReflect_Object *)const;
Q_INVOKABLE QString  getCompoundClassName()const;
Q_INVOKABLE const QString  getName()const;
Q_INVOKABLE osg::QReflect_Object::DataVariance  getDataVariance()const;
Q_INVOKABLE void  computeDataVariance();
Q_INVOKABLE void  resizeGLObjectBuffers( unsigned int );
Q_INVOKABLE void  setDataVariance(osg::QReflect_Object::DataVariance );
Q_INVOKABLE void  setName(const  char *);
Q_INVOKABLE void  setThreadSafeRefUnref( bool );
Q_INVOKABLE void setName(const QString &);
Q_PROPERTY(QString Name  READ getName WRITE setName NOTIFY NameChanged)
virtual Q_INVOKABLE  osg::QReflect_Referenced * getUserData()const;
virtual Q_INVOKABLE void pmoc_reverse_setUserData( osg::QReflect_Referenced *par=0);
virtual Q_INVOKABLE void setUserData( osg::QReflect_Referenced *par);
signals: void NameChanged(const QString&);
public:
signals: void UserDataChanged(const osg::QReflect_Referenced*);
public:
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_Object: public pmoc::MetaQQuickClass{
protected:
   public:
MetaQReflect_Object();
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
#include <osg/Object_pmoc.hpp>
#include <QObject>
#include <osg/Object>
#include <osg/Object>

#include <osg/ref_ptr>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_DummyObject: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
DummyObject * _model;
QReflect_DummyObject(pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_DummyObject( );
//DummyObject
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_DummyObject: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osg::DummyObject> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_DummyObject();
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

#endif //osg_Object_pmocHPP


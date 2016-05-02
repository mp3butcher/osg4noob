#ifndef osg_Object_pmocHPP
#define  osg_Object_pmocHPP 1


#include <osg/Object_pmoc.hpp>
#include <QObject>
namespace osg{
class QReflect_Object;
			} ;
namespace osg{
class QReflect_StateAttribute;
			} ;
namespace osg{
class QReflect_Uniform;
			} ;
namespace osg{
class QReflect_Node;
			} ;
namespace osg{
class QReflect_Referenced;
			} ;
namespace osg{
class QReflect_State;
			} ;
namespace osg{
class QReflect_UserDataContainer;
			} ;
namespace osg{
class QReflect_NodeVisitor;
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
QReflect_Object(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_Object( );
//Object
// bool  getUserValue(const  std::string & , T &);
// void  setUserValue(const  std::string & ,const  T &);
Q_INVOKABLE  bool  isSameKindAs(osg::QReflect_Object *)const;
Q_INVOKABLE QString  getCompoundClassName()const;
Q_INVOKABLE QString  getName()const;
Q_INVOKABLE osg::QReflect_Node*  asNode();
Q_INVOKABLE osg::QReflect_Node*  asNode()const;
Q_INVOKABLE osg::QReflect_NodeVisitor*  asNodeVisitor();
Q_INVOKABLE osg::QReflect_NodeVisitor*  asNodeVisitor()const;
Q_INVOKABLE osg::QReflect_Object::DataVariance  getDataVariance()const;
Q_INVOKABLE osg::QReflect_Referenced*  getUserData();
Q_INVOKABLE osg::QReflect_Referenced*  getUserData()const;
Q_INVOKABLE osg::QReflect_StateAttribute*  asStateAttribute();
Q_INVOKABLE osg::QReflect_StateAttribute*  asStateAttribute()const;
Q_INVOKABLE osg::QReflect_Uniform*  asUniform();
Q_INVOKABLE osg::QReflect_Uniform*  asUniform()const;
Q_INVOKABLE osg::QReflect_UserDataContainer*  getOrCreateUserDataContainer();
Q_INVOKABLE osg::QReflect_UserDataContainer*  getUserDataContainer();
Q_INVOKABLE osg::QReflect_UserDataContainer*  getUserDataContainer()const;
Q_INVOKABLE void  computeDataVariance();
Q_INVOKABLE void  releaseGLObjects(osg::QReflect_State *)const;
Q_INVOKABLE void  resizeGLObjectBuffers( unsigned int );
Q_INVOKABLE void  setDataVariance(osg::QReflect_Object::DataVariance dv);
Q_INVOKABLE void  setName(const  QString &name);
Q_INVOKABLE void  setName(const  char *name);
Q_INVOKABLE void  setThreadSafeRefUnref( bool threadSafe);
Q_INVOKABLE void  setUserData(osg::QReflect_Referenced *obj);
Q_INVOKABLE void  setUserDataContainer(osg::QReflect_UserDataContainer *udc);
Q_PROPERTY(QString  Name  READ getName WRITE setName NOTIFY NameChanged)
Q_PROPERTY(osg::QReflect_Object::DataVariance  DataVariance  READ getDataVariance WRITE setDataVariance NOTIFY DataVarianceChanged)
Q_PROPERTY(osg::QReflect_Referenced * UserData  READ getUserData WRITE setUserData NOTIFY UserDataChanged)
Q_PROPERTY(osg::QReflect_UserDataContainer * UserDataContainer  READ getUserDataContainer WRITE setUserDataContainer NOTIFY UserDataContainerChanged)
signals: void DataVarianceChanged(osg::QReflect_Object::DataVariance);
public:
signals: void NameChanged();
public:
signals: void UserDataChanged();
public:
signals: void UserDataContainerChanged();
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
QReflect_DummyObject(const pmoc::Instance *i=0,QObject* parent=0);
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


#endif //osg_Object_pmocHPP


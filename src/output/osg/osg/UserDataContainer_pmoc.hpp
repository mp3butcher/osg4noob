#ifndef osg_UserDataContainer_pmocHPP
#define  osg_UserDataContainer_pmocHPP 1


#include <osg/UserDataContainer_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_Object;
			} ;
#include <osg/UserDataContainer>
#include <osg/UserDataContainer>

#include <osg/ref_ptr>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_UserDataContainer: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
UserDataContainer * _model;
QReflect_UserDataContainer(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_UserDataContainer( );
//UserDataContainer
Q_INVOKABLE  bool  isSameKindAs(osg::QReflect_Object *obj)const;
Q_INVOKABLE const  char*  className()const;
Q_INVOKABLE const  char*  libraryName()const;
Q_INVOKABLE osg::QReflect_Object*  getUserObject(const  QString &name , unsigned int startPos);
Q_INVOKABLE osg::QReflect_Object*  getUserObject(const  QString &name , unsigned int startPos)const;
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_UserDataContainer: public pmoc::MetaQQuickClass{
protected:
   public:
MetaQReflect_UserDataContainer();
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
#include <osg/UserDataContainer_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_Object;
			} ;
namespace osg{ 
class QReflect_Referenced;
			} ;
#include <osg/UserDataContainer>
#include <osg/UserDataContainer>

#include <osg/ref_ptr>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_DefaultUserDataContainer: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
DefaultUserDataContainer * _model;
QReflect_DefaultUserDataContainer(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_DefaultUserDataContainer( );
//DefaultUserDataContainer
//virtual  DescriptionList & getDescriptions();
//virtual  void  setDescriptions(const  DescriptionList &);
//virtual const  DescriptionList & getDescriptions();
Q_INVOKABLE  unsigned int  addUserObject(osg::QReflect_Object *obj);
Q_INVOKABLE  unsigned int  getNumDescriptions()const;
Q_INVOKABLE  unsigned int  getNumUserObjects()const;
Q_INVOKABLE  unsigned int  getUserObjectIndex(const  QString &name , unsigned int startPos)const;
Q_INVOKABLE  unsigned int  getUserObjectIndex(osg::QReflect_Object *obj , unsigned int startPos)const;
Q_INVOKABLE osg::QReflect_Object*  getUserObject( unsigned int i);
Q_INVOKABLE osg::QReflect_Object*  getUserObject( unsigned int i)const;
Q_INVOKABLE osg::QReflect_Referenced*  getUserData();
Q_INVOKABLE osg::QReflect_Referenced*  getUserData()const;
Q_INVOKABLE void  addDescription(const  QString &desc);
Q_INVOKABLE void  removeUserObject( unsigned int i);
Q_INVOKABLE void  setThreadSafeRefUnref( bool threadSafe);
Q_INVOKABLE void  setUserData(osg::QReflect_Referenced *obj);
Q_INVOKABLE void  setUserObject( unsigned int i ,osg::QReflect_Object *obj);
Q_PROPERTY(osg::QReflect_Referenced * UserData  READ getUserData WRITE setUserData NOTIFY UserDataChanged)
signals: void UserDataChanged();
public:
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_DefaultUserDataContainer: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osg::DefaultUserDataContainer> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_DefaultUserDataContainer();
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


#endif //osg_UserDataContainer_pmocHPP


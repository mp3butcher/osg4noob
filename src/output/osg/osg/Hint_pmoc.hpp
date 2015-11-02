#ifndef osg_Hint_pmocHPP
#define  osg_Hint_pmocHPP 1
#include <osg/Hint_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_Object;
			} ;
namespace osg{ 
class QReflect_StateAttribute;
			} ;
namespace osg{ 
class QReflect_CopyOp;
			} ;
#include <osg/Hint>
#include <osg/Hint>

#include <osg/ref_ptr>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_Hint: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
Hint * _model;
QReflect_Hint(pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_Hint( );
//Hint
// GLenum  getMode();
// GLenum  getTarget();
//virtual  Type  getType();
//virtual  void  apply( State &);
// void  setMode( GLenum );
// void  setTarget( GLenum );
Q_INVOKABLE  bool  isSameKindAs(osg::QReflect_Object *)const;
Q_INVOKABLE  int  compare(osg::QReflect_StateAttribute *)const;
Q_INVOKABLE  unsigned int  getMember()const;
Q_INVOKABLE const  char*  className()const;
Q_INVOKABLE const  char*  libraryName()const;
Q_INVOKABLE osg::QReflect_Object*  clone(osg::QReflect_CopyOp *)const;
Q_INVOKABLE osg::QReflect_Object*  cloneType()const;
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_Hint: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osg::Hint> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_Hint();
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

#endif //osg_Hint_pmocHPP


#ifndef osg_Callback_pmocHPP
#define  osg_Callback_pmocHPP 1


#include <osg/Callback_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_Object;
			} ;
namespace osg{ 
class QReflect_Callback;
			} ;
#include <osg/Callback>
#include <osg/Callback>

#include <osg/ref_ptr>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_Callback: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
Callback * _model;
QReflect_Callback(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_Callback( );
//Callback
Q_INVOKABLE  bool  run(osg::QReflect_Object *object ,osg::QReflect_Object *data);
Q_INVOKABLE  bool  traverse(osg::QReflect_Object *object ,osg::QReflect_Object *data);
Q_INVOKABLE osg::QReflect_Callback*  getNestedCallback();
Q_INVOKABLE osg::QReflect_Callback*  getNestedCallback()const;
Q_INVOKABLE void  addNestedCallback(osg::QReflect_Callback *nc);
Q_INVOKABLE void  removeNestedCallback(osg::QReflect_Callback *nc);
Q_INVOKABLE void  setNestedCallback(osg::QReflect_Callback *cb);
Q_PROPERTY(osg::QReflect_Callback * NestedCallback  READ getNestedCallback WRITE setNestedCallback NOTIFY NestedCallbackChanged)
signals: void NestedCallbackChanged();
public:
signals: void NestedCallbackCollectionChanged();
public:
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_Callback: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osg::Callback> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_Callback();
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
#include <osg/Callback_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_Object;
			} ;
namespace osg{ 
class QReflect_Node;
			} ;
namespace osg{ 
class QReflect_NodeVisitor;
			} ;
#include <osg/Callback>
#include <osg/Callback>

#include <osg/ref_ptr>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_NodeCallback: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
NodeCallback * _model;
QReflect_NodeCallback(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_NodeCallback( );
//NodeCallback
Q_INVOKABLE  bool  run(osg::QReflect_Object *object ,osg::QReflect_Object *data);
Q_INVOKABLE void  operator()(osg::QReflect_Node *node ,osg::QReflect_NodeVisitor *nv);
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_NodeCallback: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osg::NodeCallback> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_NodeCallback();
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
#include <osg/Callback_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_Object;
			} ;
namespace osg{ 
class QReflect_CallbackObject;
			} ;
#include <osg/Callback>
#include <osg/Callback>

#include <osg/ref_ptr>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_CallbackObject: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
CallbackObject * _model;
QReflect_CallbackObject(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_CallbackObject( );
//CallbackObject
//virtual  bool  run( osg::Object * , osg::Parameters & , osg::Parameters &);
Q_INVOKABLE  bool  run(osg::QReflect_Object *object ,osg::QReflect_Object *data);
Q_INVOKABLE  bool  run(osg::QReflect_Object *object)const;
Q_INVOKABLE osg::QReflect_CallbackObject*  asCallbackObject();
Q_INVOKABLE osg::QReflect_CallbackObject*  asCallbackObject()const;
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_CallbackObject: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osg::CallbackObject> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_CallbackObject();
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
#include <osg/Callback_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_Object;
			} ;
namespace osg{ 
class QReflect_Uniform;
			} ;
namespace osg{ 
class QReflect_NodeVisitor;
			} ;
#include <osg/Callback>
#include <osg/Callback>

#include <osg/ref_ptr>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_UniformCallback: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
UniformCallback * _model;
QReflect_UniformCallback(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_UniformCallback( );
//UniformCallback
Q_INVOKABLE  bool  run(osg::QReflect_Object *object ,osg::QReflect_Object *data);
Q_INVOKABLE void  operator()(osg::QReflect_Uniform * ,osg::QReflect_NodeVisitor *);
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_UniformCallback: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osg::UniformCallback> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_UniformCallback();
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
#include <osg/Callback_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_Object;
			} ;
namespace osg{ 
class QReflect_StateAttribute;
			} ;
namespace osg{ 
class QReflect_NodeVisitor;
			} ;
#include <osg/Callback>
#include <osg/Callback>

#include <osg/ref_ptr>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_StateAttributeCallback: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
StateAttributeCallback * _model;
QReflect_StateAttributeCallback(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_StateAttributeCallback( );
//StateAttributeCallback
Q_INVOKABLE  bool  run(osg::QReflect_Object *object ,osg::QReflect_Object *data);
Q_INVOKABLE void  operator()(osg::QReflect_StateAttribute * ,osg::QReflect_NodeVisitor *);
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_StateAttributeCallback: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osg::StateAttributeCallback> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_StateAttributeCallback();
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


#endif //osg_Callback_pmocHPP


#ifndef osg_BufferIndexBinding_pmocHPP
#define  osg_BufferIndexBinding_pmocHPP 1


#include <osg/BufferIndexBinding_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_State;
			} ;
namespace osg{ 
class QReflect_BufferObject;
			} ;
#include <osg/BufferIndexBinding>
#include <osg/BufferIndexBinding>

#include <osg/ref_ptr>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_BufferIndexBinding: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
BufferIndexBinding * _model;
QReflect_BufferIndexBinding(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_BufferIndexBinding( );
//BufferIndexBinding
//virtual  unsigned   getMember();
Q_INVOKABLE  GLenum  getTarget()const;
Q_INVOKABLE  GLuint  getIndex()const;
Q_INVOKABLE  int  getOffset()const;
Q_INVOKABLE  int  getSize()const;
Q_INVOKABLE osg::QReflect_BufferObject*  getBufferObject()const;
Q_INVOKABLE void  apply(osg::QReflect_State *state)const;
Q_INVOKABLE void  setBufferObject(osg::QReflect_BufferObject *bo);
Q_INVOKABLE void  setOffset( int offset);
Q_INVOKABLE void  setSize( int size);
Q_PROPERTY(int  Offset  READ getOffset WRITE setOffset NOTIFY OffsetChanged)
Q_PROPERTY(int  Size  READ getSize WRITE setSize NOTIFY SizeChanged)
Q_PROPERTY(osg::QReflect_BufferObject * BufferObject  READ getBufferObject WRITE setBufferObject NOTIFY BufferObjectChanged)
signals: void BufferObjectChanged();
public:
signals: void OffsetChanged();
public:
signals: void SizeChanged();
public:
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_BufferIndexBinding: public pmoc::MetaQQuickClass{
protected:
   public:
MetaQReflect_BufferIndexBinding();
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
#include <osg/BufferIndexBinding_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_StateAttribute;
			} ;
#include <osg/BufferIndexBinding>
#include <osg/BufferIndexBinding>

#include <osg/ref_ptr>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_UniformBufferBinding: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
UniformBufferBinding * _model;
QReflect_UniformBufferBinding(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_UniformBufferBinding( );
//UniformBufferBinding
Q_INVOKABLE  int  compare(osg::QReflect_StateAttribute *bb)const;
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_UniformBufferBinding: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osg::UniformBufferBinding> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_UniformBufferBinding();
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
#include <osg/BufferIndexBinding_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_StateAttribute;
			} ;
#include <osg/BufferIndexBinding>
#include <osg/BufferIndexBinding>

#include <osg/ref_ptr>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_TransformFeedbackBufferBinding: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
TransformFeedbackBufferBinding * _model;
QReflect_TransformFeedbackBufferBinding(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_TransformFeedbackBufferBinding( );
//TransformFeedbackBufferBinding
Q_INVOKABLE  int  compare(osg::QReflect_StateAttribute *bb)const;
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_TransformFeedbackBufferBinding: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osg::TransformFeedbackBufferBinding> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_TransformFeedbackBufferBinding();
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
#include <osg/BufferIndexBinding_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_StateAttribute;
			} ;
#include <osg/BufferIndexBinding>
#include <osg/BufferIndexBinding>

#include <osg/ref_ptr>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_ShaderStorageBufferBinding: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
ShaderStorageBufferBinding * _model;
QReflect_ShaderStorageBufferBinding(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_ShaderStorageBufferBinding( );
//ShaderStorageBufferBinding
Q_INVOKABLE  int  compare(osg::QReflect_StateAttribute *bb)const;
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_ShaderStorageBufferBinding: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osg::ShaderStorageBufferBinding> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_ShaderStorageBufferBinding();
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
#include <osg/BufferIndexBinding_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_StateAttribute;
			} ;
#include <osg/BufferIndexBinding>
#include <osg/BufferIndexBinding>

#include <osg/ref_ptr>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_AtomicCounterBufferBinding: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
AtomicCounterBufferBinding * _model;
QReflect_AtomicCounterBufferBinding(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_AtomicCounterBufferBinding( );
//AtomicCounterBufferBinding
// void  readData( osg::State & , osg::UIntArray &);
Q_INVOKABLE  int  compare(osg::QReflect_StateAttribute *bb)const;
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_AtomicCounterBufferBinding: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osg::AtomicCounterBufferBinding> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_AtomicCounterBufferBinding();
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


#endif //osg_BufferIndexBinding_pmocHPP


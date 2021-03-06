#ifndef osg_ArrayDispatchers_pmocHPP
#define  osg_ArrayDispatchers_pmocHPP 1


#include <osg/ArrayDispatchers_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_Array;
			} ;
namespace osg{ 
class QReflect_State;
			} ;
namespace osg{ 
class QReflect_AttributeDispatch;
			} ;
#include <osg/ArrayDispatchers>
#include <osg/ArrayDispatchers>

#include <osg/ref_ptr>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_ArrayDispatchers: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
ArrayDispatchers * _model;
QReflect_ArrayDispatchers(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_ArrayDispatchers( );
//ArrayDispatchers
Q_INVOKABLE  bool  active( unsigned int binding)const;
Q_INVOKABLE  bool  getUseVertexAttribAlias()const;
Q_INVOKABLE osg::QReflect_AttributeDispatch*  colorDispatcher(osg::QReflect_Array *array);
Q_INVOKABLE osg::QReflect_AttributeDispatch*  fogCoordDispatcher(osg::QReflect_Array *array);
Q_INVOKABLE osg::QReflect_AttributeDispatch*  normalDispatcher(osg::QReflect_Array *array);
Q_INVOKABLE osg::QReflect_AttributeDispatch*  secondaryColorDispatcher(osg::QReflect_Array *array);
Q_INVOKABLE osg::QReflect_AttributeDispatch*  texCoordDispatcher( unsigned int unit ,osg::QReflect_Array *array);
Q_INVOKABLE osg::QReflect_AttributeDispatch*  vertexAttribDispatcher( unsigned int unit ,osg::QReflect_Array *array);
Q_INVOKABLE osg::QReflect_AttributeDispatch*  vertexDispatcher(osg::QReflect_Array *array);
Q_INVOKABLE void  activate( unsigned int binding ,osg::QReflect_AttributeDispatch *at);
Q_INVOKABLE void  activateColorArray(osg::QReflect_Array *array);
Q_INVOKABLE void  activateFogCoordArray(osg::QReflect_Array *array);
Q_INVOKABLE void  activateNormalArray(osg::QReflect_Array *array);
Q_INVOKABLE void  activateSecondaryColorArray(osg::QReflect_Array *array);
Q_INVOKABLE void  activateTexCoordArray( unsigned int unit ,osg::QReflect_Array *array);
Q_INVOKABLE void  activateVertexArray(osg::QReflect_Array *array);
Q_INVOKABLE void  activateVertexAttribArray( unsigned int unit ,osg::QReflect_Array *array);
Q_INVOKABLE void  dispatch( unsigned int binding , unsigned int index);
Q_INVOKABLE void  reset();
Q_INVOKABLE void  setState(osg::QReflect_State *state);
Q_INVOKABLE void  setUseVertexAttribAlias( bool flag);
Q_PROPERTY(bool  UseVertexAttribAlias  READ getUseVertexAttribAlias WRITE setUseVertexAttribAlias NOTIFY UseVertexAttribAliasChanged)
signals: void UseVertexAttribAliasChanged();
public:
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_ArrayDispatchers: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osg::ArrayDispatchers> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_ArrayDispatchers();
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
#include <osg/ArrayDispatchers_pmoc.hpp>
#include <QObject>
#include <osg/ArrayDispatchers>
#include <osg/ArrayDispatchers>

#include <osg/ref_ptr>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_AttributeDispatch: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
struct AttributeDispatch * _model;
QReflect_AttributeDispatch(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_AttributeDispatch( );
//AttributeDispatch
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_AttributeDispatch: public pmoc::MetaQQuickClass{
protected:
   public:
MetaQReflect_AttributeDispatch();
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


#endif //osg_ArrayDispatchers_pmocHPP


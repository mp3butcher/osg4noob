#ifndef osg_Stencil_pmocHPP
#define  osg_Stencil_pmocHPP 1
#include <osg/Stencil_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_StateAttribute;
			} ;
#include <osg/Stencil>
#include <osg/Stencil>

#include <osg/ref_ptr>
#include<osg/Stencil_pmoc.hpp>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_Stencil: public pmoc::QQModel
{
Q_OBJECT
public:
 enum Function{
NEVER =Stencil::NEVER,
LESS =Stencil::LESS,
EQUAL =Stencil::EQUAL,
LEQUAL =Stencil::LEQUAL,
GREATER =Stencil::GREATER,
NOTEQUAL =Stencil::NOTEQUAL,
GEQUAL =Stencil::GEQUAL,
ALWAYS =Stencil::ALWAYS};
  Q_ENUMS(Function)
private:
public:
 enum Operation{
KEEP =Stencil::KEEP,
ZERO =Stencil::ZERO,
REPLACE =Stencil::REPLACE,
INCR =Stencil::INCR,
DECR =Stencil::DECR,
INVERT =Stencil::INVERT,
INCR_WRAP =Stencil::INCR_WRAP,
DECR_WRAP =Stencil::DECR_WRAP};
  Q_ENUMS(Operation)
private:
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
Stencil * _model;
QReflect_Stencil(pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_Stencil( );
//Stencil
//virtual  bool  getModeUsage( StateAttribute::ModeUsage &);
//virtual  void  apply( State &);
Q_INVOKABLE  int  compare(osg::QReflect_StateAttribute *)const;
Q_INVOKABLE const int  getFunctionRef()const;
Q_INVOKABLE const unsigned int  getFunctionMask()const;
Q_INVOKABLE const unsigned int  getWriteMask()const;
Q_INVOKABLE osg::QReflect_Stencil::Function  getFunction()const;
Q_INVOKABLE osg::QReflect_Stencil::Operation  getStencilFailOperation()const;
Q_INVOKABLE osg::QReflect_Stencil::Operation  getStencilPassAndDepthFailOperation()const;
Q_INVOKABLE osg::QReflect_Stencil::Operation  getStencilPassAndDepthPassOperation()const;
Q_INVOKABLE void  setFunction(osg::QReflect_Stencil::Function  , int  , unsigned int );
Q_INVOKABLE void  setFunction(osg::QReflect_Stencil::Function );
Q_INVOKABLE void  setOperation(osg::QReflect_Stencil::Operation  ,osg::QReflect_Stencil::Operation  ,osg::QReflect_Stencil::Operation );
Q_INVOKABLE void  setStencilFailOperation(osg::QReflect_Stencil::Operation );
Q_INVOKABLE void  setStencilPassAndDepthFailOperation(osg::QReflect_Stencil::Operation );
Q_INVOKABLE void  setStencilPassAndDepthPassOperation(osg::QReflect_Stencil::Operation );
Q_INVOKABLE void setFunctionMask(const unsigned int &);
Q_INVOKABLE void setFunctionRef(const int &);
Q_INVOKABLE void setWriteMask(const unsigned int &);
Q_PROPERTY(int FunctionRef  READ getFunctionRef WRITE setFunctionRef NOTIFY FunctionRefChanged)
Q_PROPERTY(unsigned int FunctionMask  READ getFunctionMask WRITE setFunctionMask NOTIFY FunctionMaskChanged)
Q_PROPERTY(unsigned int WriteMask  READ getWriteMask WRITE setWriteMask NOTIFY WriteMaskChanged)
signals: void FunctionMaskChanged(const unsigned int&);
public:
signals: void FunctionRefChanged(const int&);
public:
signals: void WriteMaskChanged(const unsigned int&);
public:
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_Stencil: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osg::Stencil> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_Stencil();
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

#endif //osg_Stencil_pmocHPP


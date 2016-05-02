#ifndef osg_StencilTwoSided_pmocHPP
#define  osg_StencilTwoSided_pmocHPP 1


#include <osg/StencilTwoSided_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_StateAttribute;
			} ;
namespace osg{ 
class QReflect_State;
			} ;
#include <osg/StencilTwoSided>
#include <osg/StencilTwoSided>

#include <osg/ref_ptr>
#include<osg/StencilTwoSided_pmoc.hpp>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_StencilTwoSided: public pmoc::QQModel
{
Q_OBJECT
public:
 enum Face{
FRONT =StencilTwoSided::FRONT,
BACK =StencilTwoSided::BACK};
  Q_ENUMS(Face)
private:
public:
 enum Function{
NEVER =StencilTwoSided::NEVER,
LESS =StencilTwoSided::LESS,
EQUAL =StencilTwoSided::EQUAL,
LEQUAL =StencilTwoSided::LEQUAL,
GREATER =StencilTwoSided::GREATER,
NOTEQUAL =StencilTwoSided::NOTEQUAL,
GEQUAL =StencilTwoSided::GEQUAL,
ALWAYS =StencilTwoSided::ALWAYS};
  Q_ENUMS(Function)
private:
public:
 enum Operation{
KEEP =StencilTwoSided::KEEP,
ZERO =StencilTwoSided::ZERO,
REPLACE =StencilTwoSided::REPLACE,
INCR =StencilTwoSided::INCR,
DECR =StencilTwoSided::DECR,
INVERT =StencilTwoSided::INVERT,
INCR_WRAP =StencilTwoSided::INCR_WRAP,
DECR_WRAP =StencilTwoSided::DECR_WRAP};
  Q_ENUMS(Operation)
private:
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
StencilTwoSided * _model;
QReflect_StencilTwoSided(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_StencilTwoSided( );
//StencilTwoSided
//virtual  bool  getModeUsage( StateAttribute::ModeUsage &);
Q_INVOKABLE  int  compare(osg::QReflect_StateAttribute *sa)const;
Q_INVOKABLE  int  getFunctionRef(osg::QReflect_StencilTwoSided::Face face)const;
Q_INVOKABLE  unsigned int  getFunctionMask(osg::QReflect_StencilTwoSided::Face face)const;
Q_INVOKABLE  unsigned int  getWriteMask(osg::QReflect_StencilTwoSided::Face face)const;
Q_INVOKABLE osg::QReflect_StencilTwoSided::Function  getFunction(osg::QReflect_StencilTwoSided::Face face)const;
Q_INVOKABLE osg::QReflect_StencilTwoSided::Operation  getStencilFailOperation(osg::QReflect_StencilTwoSided::Face face)const;
Q_INVOKABLE osg::QReflect_StencilTwoSided::Operation  getStencilPassAndDepthFailOperation(osg::QReflect_StencilTwoSided::Face face)const;
Q_INVOKABLE osg::QReflect_StencilTwoSided::Operation  getStencilPassAndDepthPassOperation(osg::QReflect_StencilTwoSided::Face face)const;
Q_INVOKABLE void  apply(osg::QReflect_State *state)const;
Q_INVOKABLE void  setFunction(osg::QReflect_StencilTwoSided::Face face ,osg::QReflect_StencilTwoSided::Function func , int ref , unsigned int mask);
Q_INVOKABLE void  setFunction(osg::QReflect_StencilTwoSided::Face face ,osg::QReflect_StencilTwoSided::Function func);
Q_INVOKABLE void  setFunctionMask(osg::QReflect_StencilTwoSided::Face face , unsigned int mask);
Q_INVOKABLE void  setFunctionRef(osg::QReflect_StencilTwoSided::Face face , int ref);
Q_INVOKABLE void  setOperation(osg::QReflect_StencilTwoSided::Face face ,osg::QReflect_StencilTwoSided::Operation sfail ,osg::QReflect_StencilTwoSided::Operation zfail ,osg::QReflect_StencilTwoSided::Operation zpass);
Q_INVOKABLE void  setStencilFailOperation(osg::QReflect_StencilTwoSided::Face face ,osg::QReflect_StencilTwoSided::Operation sfail);
Q_INVOKABLE void  setStencilPassAndDepthFailOperation(osg::QReflect_StencilTwoSided::Face face ,osg::QReflect_StencilTwoSided::Operation zfail);
Q_INVOKABLE void  setStencilPassAndDepthPassOperation(osg::QReflect_StencilTwoSided::Face face ,osg::QReflect_StencilTwoSided::Operation zpass);
Q_INVOKABLE void  setWriteMask(osg::QReflect_StencilTwoSided::Face face , unsigned int mask);
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_StencilTwoSided: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osg::StencilTwoSided> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_StencilTwoSided();
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


#endif //osg_StencilTwoSided_pmocHPP


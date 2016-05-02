#ifndef osg_AlphaFunc_pmocHPP
#define  osg_AlphaFunc_pmocHPP 1


#include <osg/AlphaFunc_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_StateAttribute;
			} ;
namespace osg{ 
class QReflect_State;
			} ;
#include <osg/AlphaFunc>
#include <osg/AlphaFunc>

#include <osg/ref_ptr>
#include<osg/AlphaFunc_pmoc.hpp>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_AlphaFunc: public pmoc::QQModel
{
Q_OBJECT
public:
 enum ComparisonFunction{
NEVER =AlphaFunc::NEVER,
LESS =AlphaFunc::LESS,
EQUAL =AlphaFunc::EQUAL,
LEQUAL =AlphaFunc::LEQUAL,
GREATER =AlphaFunc::GREATER,
NOTEQUAL =AlphaFunc::NOTEQUAL,
GEQUAL =AlphaFunc::GEQUAL,
ALWAYS =AlphaFunc::ALWAYS};
  Q_ENUMS(ComparisonFunction)
private:
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
AlphaFunc * _model;
QReflect_AlphaFunc(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_AlphaFunc( );
//AlphaFunc
//virtual  bool  getModeUsage( StateAttribute::ModeUsage &);
Q_INVOKABLE  float  getReferenceValue()const;
Q_INVOKABLE  int  compare(osg::QReflect_StateAttribute *sa)const;
Q_INVOKABLE osg::QReflect_AlphaFunc::ComparisonFunction  getFunction()const;
Q_INVOKABLE void  apply(osg::QReflect_State *state)const;
Q_INVOKABLE void  setFunction(osg::QReflect_AlphaFunc::ComparisonFunction func , float ref);
Q_INVOKABLE void  setFunction(osg::QReflect_AlphaFunc::ComparisonFunction func);
Q_INVOKABLE void  setReferenceValue( float value);
Q_PROPERTY(float  ReferenceValue  READ getReferenceValue WRITE setReferenceValue NOTIFY ReferenceValueChanged)
Q_PROPERTY(osg::QReflect_AlphaFunc::ComparisonFunction  Function  READ getFunction WRITE setFunction NOTIFY FunctionChanged)
signals: void FunctionChanged();
public:
signals: void ReferenceValueChanged();
public:
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_AlphaFunc: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osg::AlphaFunc> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_AlphaFunc();
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


#endif //osg_AlphaFunc_pmocHPP


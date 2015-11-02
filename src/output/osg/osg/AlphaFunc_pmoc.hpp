#ifndef osg_AlphaFunc_pmocHPP
#define  osg_AlphaFunc_pmocHPP 1
#include <osg/AlphaFunc_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_StateAttribute;
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
QReflect_AlphaFunc(pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_AlphaFunc( );
//AlphaFunc
//virtual  bool  getModeUsage( StateAttribute::ModeUsage &);
//virtual  void  apply( State &);
Q_INVOKABLE  int  compare(osg::QReflect_StateAttribute *)const;
Q_INVOKABLE const float  getReferenceValue()const;
Q_INVOKABLE osg::QReflect_AlphaFunc::ComparisonFunction  getFunction()const;
Q_INVOKABLE void  setFunction(osg::QReflect_AlphaFunc::ComparisonFunction  , float );
Q_INVOKABLE void  setFunction(osg::QReflect_AlphaFunc::ComparisonFunction );
Q_INVOKABLE void setReferenceValue(const float &);
Q_PROPERTY(float ReferenceValue  READ getReferenceValue WRITE setReferenceValue NOTIFY ReferenceValueChanged)
signals: void ReferenceValueChanged(const float&);
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

#endif //osg_AlphaFunc_pmocHPP


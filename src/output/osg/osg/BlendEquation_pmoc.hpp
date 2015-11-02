#ifndef osg_BlendEquation_pmocHPP
#define  osg_BlendEquation_pmocHPP 1
#include <osg/BlendEquation_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_StateAttribute;
			} ;
#include <osg/BlendEquation>
#include <osg/BlendEquation>

#include <osg/ref_ptr>
#include<osg/BlendEquation_pmoc.hpp>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_BlendEquation: public pmoc::QQModel
{
Q_OBJECT
public:
 enum Equation{
RGBA_MIN =BlendEquation::RGBA_MIN,
RGBA_MAX =BlendEquation::RGBA_MAX,
ALPHA_MIN =BlendEquation::ALPHA_MIN,
ALPHA_MAX =BlendEquation::ALPHA_MAX,
LOGIC_OP =BlendEquation::LOGIC_OP,
FUNC_ADD =BlendEquation::FUNC_ADD,
FUNC_SUBTRACT =BlendEquation::FUNC_SUBTRACT,
FUNC_REVERSE_SUBTRACT =BlendEquation::FUNC_REVERSE_SUBTRACT};
  Q_ENUMS(Equation)
private:
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
BlendEquation * _model;
QReflect_BlendEquation(pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_BlendEquation( );
//BlendEquation
//virtual  bool  getModeUsage( StateAttribute::ModeUsage &);
//virtual  void  apply( State &);
Q_INVOKABLE  int  compare(osg::QReflect_StateAttribute *)const;
Q_INVOKABLE osg::QReflect_BlendEquation::Equation  getEquation()const;
Q_INVOKABLE osg::QReflect_BlendEquation::Equation  getEquationAlpha()const;
Q_INVOKABLE osg::QReflect_BlendEquation::Equation  getEquationRGB()const;
Q_INVOKABLE void  setEquation(osg::QReflect_BlendEquation::Equation );
Q_INVOKABLE void  setEquationAlpha(osg::QReflect_BlendEquation::Equation );
Q_INVOKABLE void  setEquationRGB(osg::QReflect_BlendEquation::Equation );
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_BlendEquation: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osg::BlendEquation> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_BlendEquation();
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

#endif //osg_BlendEquation_pmocHPP


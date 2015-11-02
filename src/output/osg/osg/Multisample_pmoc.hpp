#ifndef osg_Multisample_pmocHPP
#define  osg_Multisample_pmocHPP 1
#include <osg/Multisample_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_StateAttribute;
			} ;
#include <osg/Multisample>
#include <osg/Multisample>

#include <osg/ref_ptr>
#include<osg/Multisample_pmoc.hpp>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_Multisample: public pmoc::QQModel
{
Q_OBJECT
public:
 enum Mode{
FASTEST =Multisample::FASTEST,
NICEST =Multisample::NICEST,
DONT_CARE =Multisample::DONT_CARE};
  Q_ENUMS(Mode)
private:
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
Multisample * _model;
QReflect_Multisample(pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_Multisample( );
//Multisample
//virtual  void  apply( State &);
Q_INVOKABLE  int  compare(osg::QReflect_StateAttribute *)const;
Q_INVOKABLE const bool  getInvert()const;
Q_INVOKABLE const float  getCoverage()const;
Q_INVOKABLE osg::QReflect_Multisample::Mode  getHint()const;
Q_INVOKABLE void  setHint(osg::QReflect_Multisample::Mode );
Q_INVOKABLE void  setSampleCoverage( float  , bool );
Q_INVOKABLE void setCoverage(const float &);
Q_INVOKABLE void setInvert(const bool &);
Q_PROPERTY(bool Invert  READ getInvert WRITE setInvert NOTIFY InvertChanged)
Q_PROPERTY(float Coverage  READ getCoverage WRITE setCoverage NOTIFY CoverageChanged)
signals: void CoverageChanged(const float&);
public:
signals: void InvertChanged(const bool&);
public:
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_Multisample: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osg::Multisample> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_Multisample();
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

#endif //osg_Multisample_pmocHPP


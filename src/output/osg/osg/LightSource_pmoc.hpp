#ifndef osg_LightSource_pmocHPP
#define  osg_LightSource_pmocHPP 1

#include <osg/LightSource_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_Light;
			} ;
#include <osg/LightSource>
#include <osg/LightSource>

#include <osg/ref_ptr>
#include<osg/LightSource_pmoc.hpp>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_LightSource: public pmoc::QQModel
{
Q_OBJECT
public:
 enum ReferenceFrame{
RELATIVE_RF =LightSource::RELATIVE_RF,
ABSOLUTE_RF =LightSource::ABSOLUTE_RF};
  Q_ENUMS(ReferenceFrame)
private:
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
LightSource * _model;
QReflect_LightSource(pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_LightSource( );
//LightSource
//virtual  BoundingSphere  computeBound();
// void  setStateSetModes( StateSet & , StateAttribute::GLModeValue );
Q_INVOKABLE  osg::QReflect_Light * getLight()const;
Q_INVOKABLE osg::QReflect_LightSource::ReferenceFrame  getReferenceFrame()const;
Q_INVOKABLE void  setLocalStateSetModes( unsigned int );
Q_INVOKABLE void  setReferenceFrame(osg::QReflect_LightSource::ReferenceFrame );
Q_INVOKABLE void  setThreadSafeRefUnref( bool );
Q_INVOKABLE void pmoc_reverse_setLight( osg::QReflect_Light *par=0);
Q_INVOKABLE void setLight( osg::QReflect_Light *par);
signals: void LightChanged(const osg::QReflect_Light*);
public:
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_LightSource: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osg::LightSource> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_LightSource();
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

#endif //osg_LightSource_pmocHPP


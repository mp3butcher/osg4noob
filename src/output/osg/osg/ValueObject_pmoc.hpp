#ifndef osg_ValueObject_pmocHPP
#define  osg_ValueObject_pmocHPP 1
#include <osg/Vec3f_pmoc.hpp>
#include <QObject>
#include <osg/Vec2f_pmoc.hpp>
#include <QObject>
#include <osg/Vec2d_pmoc.hpp>
#include <QObject>
#include <osg/Vec3d_pmoc.hpp>
#include <QObject>
#include <osg/ValueObject_pmoc.hpp>
#include <QObject>
#include <osg/ValueObject>
#include <osg/ValueObject>

#include <osg/ref_ptr>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_ValueObject: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
ValueObject * _model;
QReflect_ValueObject(pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_ValueObject( );
//ValueObject
//virtual  bool  get( GetValueVisitor &);
//virtual  bool  set( SetValueVisitor &);
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_ValueObject: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osg::ValueObject> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_ValueObject();
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

#endif //osg_ValueObject_pmocHPP


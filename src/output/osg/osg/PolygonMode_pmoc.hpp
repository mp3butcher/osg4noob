#ifndef osg_PolygonMode_pmocHPP
#define  osg_PolygonMode_pmocHPP 1


#include <osg/PolygonMode_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_StateAttribute;
			} ;
namespace osg{ 
class QReflect_State;
			} ;
#include <osg/PolygonMode>
#include <osg/PolygonMode>

#include <osg/ref_ptr>
#include<osg/PolygonMode_pmoc.hpp>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_PolygonMode: public pmoc::QQModel
{
Q_OBJECT
public:
 enum Face{
FRONT_AND_BACK =PolygonMode::FRONT_AND_BACK,
FRONT =PolygonMode::FRONT,
BACK =PolygonMode::BACK};
  Q_ENUMS(Face)
private:
public:
 enum Mode{
POINT =PolygonMode::POINT,
LINE =PolygonMode::LINE,
FILL =PolygonMode::FILL};
  Q_ENUMS(Mode)
private:
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
PolygonMode * _model;
QReflect_PolygonMode(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_PolygonMode( );
//PolygonMode
Q_INVOKABLE  bool  getFrontAndBack()const;
Q_INVOKABLE  int  compare(osg::QReflect_StateAttribute *sa)const;
Q_INVOKABLE osg::QReflect_PolygonMode::Mode  getMode(osg::QReflect_PolygonMode::Face face)const;
Q_INVOKABLE void  apply(osg::QReflect_State *state)const;
Q_INVOKABLE void  setMode(osg::QReflect_PolygonMode::Face face ,osg::QReflect_PolygonMode::Mode mode);
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_PolygonMode: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osg::PolygonMode> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_PolygonMode();
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


#endif //osg_PolygonMode_pmocHPP


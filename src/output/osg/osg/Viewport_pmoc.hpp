#ifndef osg_Viewport_pmocHPP
#define  osg_Viewport_pmocHPP 1
#include <osg/Viewport_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_StateAttribute;
			} ;
#include <osg/Viewport>
#include <osg/Viewport>

#include <osg/ref_ptr>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_Viewport: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
Viewport * _model;
QReflect_Viewport(pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_Viewport( );
//Viewport
// Viewport & operator=(const  Viewport &);
//virtual  void  apply( State &);
//const  osg::Matrix  computeWindowMatrix();
Q_INVOKABLE  bool  valid()const;
Q_INVOKABLE  double  aspectRatio()const;
Q_INVOKABLE  double  height()const;
Q_INVOKABLE  double  width()const;
Q_INVOKABLE  double  x()const;
Q_INVOKABLE  double  y()const;
Q_INVOKABLE  double&  height();
Q_INVOKABLE  double&  width();
Q_INVOKABLE  double&  x();
Q_INVOKABLE  double&  y();
Q_INVOKABLE  int  compare(osg::QReflect_StateAttribute *)const;
Q_INVOKABLE void  setViewport( double  , double  , double  , double );
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_Viewport: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osg::Viewport> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_Viewport();
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

#endif //osg_Viewport_pmocHPP

